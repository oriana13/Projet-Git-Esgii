//
// Created by crichard23 on 22/10/2021.
//

#include "Include/inventory.h"

int initInventory( t_dataInventory *dataInventory){

    int resultProcess;
    int **tab;

    resultProcess = 1;

    (*dataInventory).armes = initWoodenSword();
    (*dataInventory).armure = NULL;
    (*dataInventory).pickaxe = initWoodenPickaxe();
    (*dataInventory).billhook = initWoodenBillhook();
    (*dataInventory).axe = initWoodenAxe();

    (*dataInventory).inventory = malloc(sizeof (t_inventory **) * __MAX_INVENTORY__);

    for(int i=0; i<__MAX_INVENTORY__; i++){
        (*dataInventory).inventory[i] = malloc(sizeof (t_inventory));
        (*dataInventory).inventory[i]->armes = NULL;
        (*dataInventory).inventory[i]->defense = NULL;
        (*dataInventory).inventory[i]->ressources = NULL;
        (*dataInventory).inventory[i]->potions = NULL;
        (*dataInventory).inventory[i]->outils = NULL;
        (*dataInventory).inventory[i]->codeTypeItem = __CODE_NO_ITEM__;
    }

    return resultProcess;
}

void showInventory(t_dataInventory dataInventory)
{
    printf("\n[ INVENTAIRE ]\n");

    if (dataInventory.armes)
        printf("Arme equipee - %s\n", dataInventory.armes->label);
    else
        printf("Arme equipee - (vide)\n");

    if (dataInventory.armure)
        printf("Armure equipee - %s\n", dataInventory.armure->label);
    else
        printf("Armure equipee - (vide)\n");

    if (dataInventory.pickaxe)
        printf("Pioche equipee - %s\n", dataInventory.pickaxe->label);
    else
        printf("Pioche equipee - (vide)\n");

    if (dataInventory.axe)
        printf("Arme equipee - %s\n", dataInventory.axe->label);
    else
        printf("Hache equipee - (vide)\n");

    if (dataInventory.billhook)
        printf("Serpe equipee - %s\n", dataInventory.billhook->label);
    else
        printf("Serpe equipee - (vide)\n");

    printf("\n");
    for (int i = 0; i < __MAX_INVENTORY__; ++i)
    {
        if (dataInventory.inventory[i]->codeTypeItem == __CODE_NO_ITEM__)
            printf("%d - (vide)\n", i + 1);
        else if (dataInventory.inventory[i]->codeTypeItem == __CODE_WEAPON__)
            printf("%d - %s\n", i + 1, dataInventory.inventory[i]->armes->label);
        else if (dataInventory.inventory[i]->codeTypeItem == __ARMURE__)
            printf("%d - %s\n", i + 1, dataInventory.inventory[i]->defense->label);
        else if (dataInventory.inventory[i]->codeTypeItem == __OUTILS__)
            printf("%d - %s\n", i + 1, dataInventory.inventory[i]->outils->label);
        else if (dataInventory.inventory[i]->codeTypeItem == __POTIONS__)
            printf("%d - %s\n", i + 1, dataInventory.inventory[i]->potions->label);
        else if (dataInventory.inventory[i]->codeTypeItem == __RESSOURCES__)
            printf("%d - %s (x%d)\n", i + 1, dataInventory.inventory[i]->ressources->label, dataInventory.inventory[i]->ressources->quantity);
    }
}

//Return index d'une case d'inventaire dispo sinon return -1
int checkFreeSlot(t_inventory **inventory){
    int i;
    int resultProcess;

    resultProcess =  -1;
    i = 0;

    while(i < __MAX_INVENTORY__ && resultProcess < 0){

        if(inventory[i]->codeTypeItem == __CODE_NO_ITEM__){
            resultProcess = i;
        }
        i++;

    }

    return resultProcess;
}

int addItemInventory(t_inventory ***inventory, int idItem, int codeTypeItem, int quantity){

    int index;
    int returnProcess;

    index = checkFreeSlot(*inventory);
    returnProcess = 1;

    if(index >=0){

        if( codeTypeItem == __CODE_WEAPON__){
            (*inventory)[index]->codeTypeItem = __CODE_WEAPON__;

            (*inventory)[index]->armes = malloc(sizeof (t_armes));
            (*inventory)[index]->armes = createWeaponItemByID(idItem);

        } else if( codeTypeItem == __ARMURE__){
            (*inventory)[index]->codeTypeItem = __ARMURE__;

            (*inventory)[index]->defense = malloc(sizeof (t_defenses));
            (*inventory)[index]->defense = createArmureItemByID(idItem);

        } else if( codeTypeItem == __OUTILS__){
            (*inventory)[index]->codeTypeItem = __OUTILS__;

            (*inventory)[index]->outils = malloc(sizeof (t_outils));
            (*inventory)[index]->outils = createOutilsItemByID(idItem);
        } else if( codeTypeItem == __POTIONS__){
            (*inventory)[index]->codeTypeItem = __POTIONS__;

            (*inventory)[index]->potions = malloc(sizeof (t_potions));
            (*inventory)[index]->potions = createPotionItemByID(idItem);
        } else if(codeTypeItem == __RESSOURCES__){
            (*inventory)[index]->codeTypeItem = __RESSOURCES__;

            (*inventory)[index]->ressources = malloc(sizeof (t_ressources));
            (*inventory)[index]->ressources = createRessourcesItemByID(idItem, quantity);
        }else {
            returnProcess = 0;
            errorLog("Mauvais ID type item");
        }

    }else {

        printf("\n[ MESSAGE SYSTEM ]\n");
        printf("Il n'a plus de place dans l'inventaire.\n");

        returnProcess = 0;

    }

    return returnProcess;

}