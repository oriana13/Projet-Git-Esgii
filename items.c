//
// Created by crichard23 on 15/10/2021.
//

#include "Include/items.h"

t_armes *initWoodenSword(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_1__) + 1);

    armes->idArmes = 1;
    armes->durabilite = 10;
    armes->label = "WoodenSword";
    armes->damage = 1;

    return armes;
}

t_outils *initWoodenPickaxe(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_2__ ) + 1);

    outils->idOutils = 2;
    outils->durabilite = 10;
    outils->label = "WoodenPickaxe";

    return outils;
}

t_outils *initWoodenBillhook(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_7__) + 1);

    outils->idOutils = 7;
    outils->durabilite = 10;
    outils->label = "WoodenBillhook";

    return outils;
}

t_outils *initWoodenAxe(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_6__) + 1);

    outils->idOutils = 6;
    outils->durabilite = 10;
    outils->label = "WoodenAxe";

    return outils;
}

t_ressources *initTree(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));

    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_5__)+1);

    ressources->idRessources = 5;
    ressources->label = "tree";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_ressources *initStone(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));

    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_6__)+1);

    ressources->idRessources = 4;
    ressources->label = "Stone";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_ressources *initgrass(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));

    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_3__)+1);

    ressources->idRessources = 3;
    ressources->label = "Grass";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_armes *initStoneSword(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_8__) + 1);

    armes->idArmes = 8;
    armes->durabilite = 10;
    armes->label = "StoneSword";
    armes->damage = 2;

    return armes;
}

t_armes *initStoneSpear(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_9__) + 1);

    armes->idArmes = 9;
    armes->durabilite = 8;
    armes->label = "StoneSpear";
    armes->damage = 3;

    return armes;
}

t_armes *initStonehammer(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_10__) + 1);

    armes->idArmes = 10;
    armes->durabilite = 5;
    armes->label = "StoneHammer";
    armes->damage = 4;

    return armes;
}

t_defenses *initStoneBreastplate(){
    t_defenses *defenses;

    defenses = malloc(sizeof(t_defenses));

    defenses->label = malloc(sizeof (char) * strlen(__OBJECT_ID_11__) + 1);

    defenses->idDefense = 11;
    defenses->resistance = 10;
    defenses->label = "StoneBreastplate";

    return defenses;
}


t_outils *initStonePickaxe(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_12__) + 1);

    outils->idOutils = 12;
    outils->durabilite = 10;
    outils->label = "Pickaxe";

    return outils;
}

t_outils *initStoneBillhook(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_13__) + 1);

    outils->idOutils = 13;
    outils->durabilite = 10;
    outils->label = "StoneBillhook";

    return outils;
}

t_outils *initStoneAxe(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_14__) + 1);

    outils->idOutils = 14;
    outils->durabilite = 10;
    outils->label = "StoneAxe";

    return outils;
}

t_potions *initLifePotion1(){
    t_potions *potions;

    potions = malloc(sizeof(t_potions));

    potions->label = malloc(sizeof(char) * strlen(__OBJECT_ID_15__) + 1);

    potions->idPotions = 15;
    potions->restaurations = 30;
    potions->label = "LifePotion1";

    return potions;
}

t_ressources *initBeech(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));

    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_16__)+1);

    ressources->idRessources = 16;
    ressources->label = "Beech";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_ressources *initIron(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));

    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_17__)+1);

    ressources->idRessources = 17;
    ressources->label = "Iron";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_ressources *initLavander(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));

    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_18__)+1);

    ressources->idRessources = 18;
    ressources->label = "Lavander";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_armes *initIronSword(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_19__) + 1);

    armes->idArmes = 19;
    armes->durabilite = 10;
    armes->label = "ironSword";
    armes->damage = 5;

    return armes;
}

t_armes *initIronSpear(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_20__) + 1);

    armes->idArmes = 20;
    armes->durabilite = 8;
    armes->label = "ironSpear";
    armes->damage = 7;

    return armes;
}

t_armes *initIronHammer(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_21__) + 1);

    armes->idArmes = 21;
    armes->durabilite = 5;
    armes->label = "IronHammer";
    armes->damage = 10;

    return armes;
}

t_defenses *initIronBreastplate(){
    t_defenses *defenses;

    defenses = malloc(sizeof(t_defenses));

    defenses->label = malloc(sizeof (char) * strlen(__OBJECT_ID_22__) + 1);

    defenses->idDefense = 22;
    defenses->resistance = 20;
    defenses->label = "IronBreastplate";

    return defenses;
}

t_outils *initIronPickaxe(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_23__) + 1);

    outils->idOutils = 23;
    outils->durabilite = 10;
    outils->label = "ironPickaxe";

    return outils;
}

t_outils *initIronBillhook(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_24__) + 1);

    outils->idOutils = 24;
    outils->durabilite = 10;
    outils->label = "IronBillhook";

    return outils;
}

t_outils *initIronAxe(){
    t_outils *outils;

    outils = malloc(sizeof(t_outils));

    outils->label = malloc(sizeof(char) * strlen(__OBJECT_ID_25__) + 1);

    outils->idOutils = 25;
    outils->durabilite = 10;
    outils->label = "IronAxe";

    return outils;
}

t_potions *initLifePotion2(){
    t_potions *potions;

    potions = malloc(sizeof(t_potions));

    potions->label = malloc(sizeof(char) * strlen(__OBJECT_ID_26__) + 1);

    potions->idPotions = 26;
    potions->restaurations = 80;
    potions->label = "LifePotion2";

    return potions;
}

t_ressources *initOak(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));

    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_27__)+1);

    ressources->idRessources = 27;
    ressources->label = "Oak";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_ressources *initDiamond(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));
    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_28__)+1);

    ressources->idRessources = 28;
    ressources->label = "Diamond";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_ressources *initHemp(int quantity){

    t_ressources *ressources;

    ressources = malloc(sizeof (t_ressources));

    ressources->label = malloc(sizeof (char)* strlen(__OBJECT_ID_29__)+1);

    ressources->idRessources = 29;
    ressources->label = "Hemp";
    ressources->quantity = quantity;
    ressources->max = 20;

    return ressources;
}

t_armes *initDiamondSword(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_30__) + 1);

    armes->idArmes = 30;
    armes->durabilite = 10;
    armes->label = "DiamondSword";
    armes->damage = 10;

    return armes;
}

t_armes *initDiamondSpear(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_31__) + 1);

    armes->idArmes = 31;
    armes->durabilite = 8;
    armes->label = "DiamondSpear";
    armes->damage = 15;

    return armes;
}

t_armes *initDiamondhammer(){
    t_armes *armes;

    armes = malloc(sizeof(t_armes));

    armes->label = malloc(sizeof(char) * strlen(__OBJECT_ID_32__) + 1);

    armes->idArmes = 32;
    armes->durabilite = 5;
    armes->label = "DiamondHammer";
    armes->damage = 20;

    return armes;
}

t_defenses *initDiamondBreastplate(){
    t_defenses *defenses;

    defenses = malloc(sizeof(t_defenses));

    defenses->label = malloc(sizeof (char) * strlen(__OBJECT_ID_33__) + 1);

    defenses->idDefense = 33;
    defenses->resistance = 40;
    defenses->label = "DiamondBreastplate";

    return defenses;
}

t_potions *initLifePotion3(){
    t_potions *potions;

    potions = malloc(sizeof(t_potions));

    potions->label = malloc(sizeof(char) * strlen(__OBJECT_ID_34__) + 1);

    potions->idPotions = 34;
    potions->restaurations = 200;
    potions->label = "LifePotion3";

    return potions;
}

t_armes *createWeaponItemByID(int idItem){
    t_armes *armes;

    if(idItem == __OBJECT_CODE_1__){
        armes = initWoodenSword();
    } else if(idItem == __OBJECT_CODE_8__){
        armes = initStoneSword();
    } else if(idItem == __OBJECT_CODE_9__){
        armes = initStoneSpear();
    }else if(idItem == __OBJECT_CODE_10__){
        armes = initStonehammer();
    } else if(idItem == __OBJECT_CODE_19__){
        armes = initIronSword();
    } else if(idItem == __OBJECT_CODE_20__){
        armes = initIronSpear();
    }else if(idItem == __OBJECT_CODE_21__){
        armes = initIronHammer();
    } else if(idItem == __OBJECT_CODE_30__){
        armes = initDiamondSword();
    } else if(idItem == __OBJECT_CODE_31__){
        armes = initDiamondSpear();
    }else if(idItem == __OBJECT_CODE_32__){
        armes = initDiamondhammer();
    }

    return armes;
}

t_potions *createPotionItemByID(int idItem){
    t_potions *potions;

    if(idItem == __OBJECT_CODE_15__){
        potions = initLifePotion1();
    } else if(idItem == __OBJECT_CODE_26__){
        potions = initLifePotion2();
    } else if(idItem == __OBJECT_CODE_34__){
        potions = initLifePotion3();
    }
    return potions;
}

t_defenses *createArmureItemByID(int idItem){
    t_defenses *armure;

    if(idItem == __OBJECT_CODE_11__){
        armure = initStoneBreastplate();
    } else if(idItem == __OBJECT_CODE_22__){
        armure = initIronBreastplate();
    } else if(idItem == __OBJECT_CODE_33__){
        armure = initDiamondBreastplate();
    }
    return armure;
}

t_outils *createOutilsItemByID(int idItem){
    t_outils *outils;

    if(idItem == __OBJECT_CODE_2__){
        outils = initWoodenPickaxe();
    } else if(idItem == __OBJECT_CODE_7__){
        outils = initWoodenBillhook();
    } else if(idItem == __OBJECT_CODE_6__){
        outils = initWoodenAxe();
    } else if(idItem == __OBJECT_CODE_12__){
        outils = initStonePickaxe();
    } else if(idItem == __OBJECT_CODE_13__){
        outils = initStoneBillhook();
    } else if(idItem == __OBJECT_CODE_14__){
        outils = initStoneAxe();
    } else if(idItem == __OBJECT_CODE_23__){
        outils = initIronPickaxe();
    } else if(idItem == __OBJECT_CODE_24__){
        outils = initIronBillhook();
    } else if(idItem == __OBJECT_CODE_25__){
        outils = initIronAxe();
    }

    return outils;
}


t_ressources *createRessourcesItemByID(int idItem, int quantity){
    t_ressources *ressources;

    if(idItem == __OBJECT_CODE_5__){
        ressources = initTree(quantity);
    } else if(idItem == __OBJECT_CODE_6__){
        ressources = initStone(quantity);
    } else if(idItem == __OBJECT_CODE_3__){
        ressources = initgrass(quantity);
    } else if(idItem == __OBJECT_CODE_16__){
        ressources = initBeech(quantity);
    } else if(idItem == __OBJECT_CODE_17__){
        ressources = initIron(quantity);
    } else if(idItem == __OBJECT_CODE_18__){
        ressources = initLavander(quantity);
    } else if(idItem == __OBJECT_CODE_27__){
        ressources = initOak(quantity);
    } else if(idItem == __OBJECT_CODE_28__){
        ressources = initDiamond(quantity);
    } else if(idItem == __OBJECT_CODE_29__){
        ressources = initHemp(quantity);
    }

    return ressources;
}