//
// Created by crichard23 on 15/10/2021.
//

#ifndef _ITEMS_H_
#define _ITEMS_H_

    #include <stdlib.h>
    #include <string.h>

    #define __OBJECT_CODE_1__ 1
    #define __OBJECT_CODE_2__ 2
    #define __OBJECT_CODE_3__ 3
    #define __OBJECT_CODE_4__ 4
    #define __OBJECT_CODE_5__ 5
    #define __OBJECT_CODE_6__ 6
    #define __OBJECT_CODE_7__ 7
    #define __OBJECT_CODE_8__ 8
    #define __OBJECT_CODE_9__ 9
    #define __OBJECT_CODE_10__ 10
    #define __OBJECT_CODE_11__ 11
    #define __OBJECT_CODE_12__ 12
    #define __OBJECT_CODE_13__ 13
    #define __OBJECT_CODE_14__ 14
    #define __OBJECT_CODE_15__ 15
    #define __OBJECT_CODE_16__ 16
    #define __OBJECT_CODE_17__ 17
    #define __OBJECT_CODE_18__ 18
    #define __OBJECT_CODE_19__  19
    #define __OBJECT_CODE_20__  20
    #define __OBJECT_CODE_21__  21
    #define __OBJECT_CODE_22__  22
    #define __OBJECT_CODE_23__  23
    #define __OBJECT_CODE_24__  24
    #define __OBJECT_CODE_25__  25
    #define __OBJECT_CODE_26__  26
    #define __OBJECT_CODE_27__  27
    #define __OBJECT_CODE_28__  28
    #define __OBJECT_CODE_29__  29
    #define __OBJECT_CODE_30__  30
    #define __OBJECT_CODE_31__  31
    #define __OBJECT_CODE_32__  32
    #define __OBJECT_CODE_33__  33
    #define __OBJECT_CODE_34__  34

    #define __OBJECT_ID_1__ "Wooden Sword"
    #define __OBJECT_ID_2__ "Wooden Pickaxe"
    #define __OBJECT_ID_3__ "Grass"
    #define __OBJECT_ID_4__ "Wooden Axe"
    #define __OBJECT_ID_5__ "Tree"
    #define __OBJECT_ID_6__ "Stone"
    #define __OBJECT_ID_7__ "Wooden Billhook"
    #define __OBJECT_ID_8__ "Stone Sword"
    #define __OBJECT_ID_9__ "Stone Spear"
    #define __OBJECT_ID_10__ "Stone Hammer"
    #define __OBJECT_ID_11__ "Stone Breastplate"
    #define __OBJECT_ID_12__ "Stone Pickaxe"
    #define __OBJECT_ID_13__ "Stone Billhook"
    #define __OBJECT_ID_14__ "Stone Axe"
    #define __OBJECT_ID_15__ "Life Potion 1"
    #define __OBJECT_ID_16__ "Beech"
    #define __OBJECT_ID_17__ "Iron"
    #define __OBJECT_ID_18__ "Lavender"
    #define __OBJECT_ID_19__ "Iron Sword"
    #define __OBJECT_ID_20__ "Iron Spear"
    #define __OBJECT_ID_21__ "Iron Hammer"
    #define __OBJECT_ID_22__ "Iron Breastplate"
    #define __OBJECT_ID_23__ "Iron Pickaxe"
    #define __OBJECT_ID_24__ "Iron Billhook"
    #define __OBJECT_ID_25__ "iron Axe"
    #define __OBJECT_ID_26__ "Life Potion 2"
    #define __OBJECT_ID_27__ "Oak"
    #define __OBJECT_ID_28__ "Diamond"
    #define __OBJECT_ID_29__ "Hemp"
    #define __OBJECT_ID_30__ "Diamond Sword"
    #define __OBJECT_ID_31__ "Diamond Spear"
    #define __OBJECT_ID_32__ "Diamond Hammer"
    #define __OBJECT_ID_33__ "Diamond Breastplate"
    #define __OBJECT_ID_34__ "Diamond Spear"

    struct s_ressources{
        int quantity;
        int idRessources;
        char *label;
        int max;
    };
    struct s_armes{
        int idArmes;
        char *label;
        int durabilite;
        int damage;
    };
    struct s_potions{
        int idPotions;
        char *label;
        int restaurations;
    };
    struct s_defense{
        int idDefense;
        char *label;
        int durabilite;
        int resistance;
    };
    struct s_outils{
        int idOutils;
        char *label;
        int durabilite;
    };

    typedef struct s_ressources t_ressources;
    typedef struct s_armes t_armes;
    typedef struct s_potions t_potions;
    typedef struct s_defense t_defenses;
    typedef struct s_outils t_outils;


    t_armes *initWoodenSword();
    t_outils *initWoodenPickaxe();
    t_outils *initWoodenBillhook();
    t_outils *initWoodenAxe();
    t_armes *initStoneSword();
    t_armes *initStoneSpear();
    t_armes *initStonehammer();
    t_defenses *initStoneBreastplate();
    t_outils *initStonePickaxe();
    t_outils *initStoneBillhook();
    t_outils *initStoneAxe();
    t_potions *initLifePotion1();
    t_armes *initIronSword();
    t_armes *initIronSpear();
    t_armes *initIronHammer();
    t_defenses *initIronBreastplate();
    t_outils *initIronPickaxe();
    t_outils *initIronBillhook();
    t_outils *initIronAxe();
    t_potions *initLifePotion2();
    t_armes *initDiamondSword();
    t_armes *initDiamondSpear();
    t_armes *initDiamondhammer();
    t_defenses *initDiamondBreastplate();
    t_potions *initLifePotion3();
    t_ressources *initTree(int quantity);
    t_ressources *initStone(int quantity);
    t_ressources *initgrass(int quantity);
    t_ressources *initBeech(int quantity);
    t_ressources *initIron(int quantity);
    t_ressources *initLavander(int quantity);
    t_ressources *initOak(int quantity);
    t_ressources *initDiamond(int quantity);
    t_ressources *initHemp(int quantity);

    t_armes *createWeaponItemByID(int idItem);
    t_potions *createPotionItemByID(int idItem);
    t_defenses *createArmureItemByID(int idItem);
    t_outils *createOutilsItemByID(int idItem);
    t_ressources *createRessourcesItemByID(int idItem, int quantity);


#endif //_ITEMS_H_
