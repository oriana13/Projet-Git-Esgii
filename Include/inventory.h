//
// Created by crichard23 on 22/10/2021.
//

#ifndef _INVENTORY_H_
#define _INVENTORY_H_

#include <stdio.h>
#include "items.h"
#include "error.h"

#define __MAX_INVENTORY__ 10
#define __CODE_NO_ITEM__ 0
#define __CODE_WEAPON__ 1
#define __ARMURE__ 2
#define __OUTILS__ 3
#define __POTIONS__ 4
#define __RESSOURCES__ 5

    struct s_inventory{
        struct s_armes *armes;
        struct s_defense *defense;
        struct s_ressources *ressources;
        struct s_potions *potions;
        struct s_outils *outils;

        int codeTypeItem;
    };

    struct s_dataInventory{
        struct s_armes *armes;
        struct s_defense *armure;
        struct s_outils *pickaxe;
        struct s_outils *billhook;
        struct s_outils *axe;

        struct s_inventory **inventory;

    };

    typedef struct s_inventory t_inventory;
    typedef struct s_dataInventory t_dataInventory;

    int initInventory( t_dataInventory *dataInventory);
    void showInventory(t_dataInventory dataInventory);
    int addItemInventory(t_inventory ***inventory, int idItem, int codeTypeItem, int quantity);
    int checkFreeSlot(t_inventory **inventory);

#endif //_INVENTORY_H_
