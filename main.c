
#include "include/main.h"
#ifdef _WIN32
#include <windows.h>
#include <conio.h>
#endif
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

t_dataInventory dataInventory;







char** initMap(){
    char ** tab = malloc(sizeof(char*)*6);
    for(int i=0;i<6;i++){
        tab[i] = malloc(sizeof(char)*6);
    }
    tab[0][0] = -1;
    tab[0][1] = 3;
    tab[0][2] = 0;
    tab[0][3] = 1;
    tab[0][4] = -1;
    tab[0][5] = 15;
    tab[1][0] = -1;
    tab[1][1] = 0;
    tab[1][2] = 4;
    tab[1][3] = 0;
    tab[1][4] = -1;
    tab[1][5] = 0;
    tab[2][0] = -1;
    tab[2][1] = 2;
    tab[2][2] = 0;
    tab[2][3] = 3;
    tab[2][4] = 5;
    tab[2][5] = 0;
    tab[3][0] = -1;
    tab[3][1] = 0;
    tab[3][2] = 0;
    tab[3][3] = -1;
    tab[3][4] = 0;
    tab[3][5] = 19;
    tab[4][0] = -1;
    tab[4][1] = 5;
    tab[4][2] = 0;
    tab[4][3] = -1;
    tab[4][4] = 0;
    tab[4][5] = 0;
    tab[5][0] = -1;
    tab[5][1] = 0;
    tab[5][2] = 4;
    tab[5][3] = 5;
    tab[5][4] = -2;
    tab[5][5] = -1;

    return tab;
}


void freeMap(char** map){
    for(int i=0; i<6; i++){
        free(map[i]);
    }
    free(map);
}


void printMap(char** map){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
}


void moveDown(char** map){
    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++){
            if(map[i][j]== 1) {
                map[i][j] = 0;
                i++;

                if (map[i][j] == -1) {
                    map[i][j] = -1;
                    i--;
                    map[i][j] = 1;
                    printf("Vous ne pouvez pas avancer ! C'est un mur !\n");

                } else if (map[i][j] == 3) {
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous recolter cette plante ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a > 2 || a < 0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_3__, __RESSOURCES__, q);
                            printf("Plante ajoutée à votre inventaire !\n");
                            i++;
                            map[i][j] = 1;
                            break;
                        case 2:
                            i--;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Une plante vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                } else if(map[i][j] == 2){
                    printf("\n");
                    printf("PNJ ! Que voulez vous faire ? \n");
                    printf("1- Restauration des outils\n");
                    printf("2- Autre...\n");
                    scanf("%d", &i);
                    printf("\n");
                    map[i][j] = 1;

                }else if(map[i][j] == 4){
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous ramasser ce rocher ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a>2 || a<0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_6__, __RESSOURCES__, q);
                            printf("Rocher ajoutée à votre inventaire !\n");
                            map[i][j] = 1;
                            break;
                        case 2:
                            i--;
                            i--;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Un rocher vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else if(map[i][j] == 5) {
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous ramasser ce morceau de bois ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a > 2 || a < 0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_5__, __RESSOURCES__, q);
                            printf("Bois ajoutée à votre inventaire !\n");
                            i++;
                            i++;
                            i++;
                            map[i][j] = 1;
                            break;
                        case 2:
                            i++;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Un morceau de bois vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else {
                    map[i][j] = 1;
                }
            }
        }
    }
}


void moveUp(char** map){
    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++){
            if(map[i][j]== 1){
                map[i][j] = 0;
                i--;

                if(map[i][j] == -1){
                    map[i][j] = -1;
                    i++;
                    map[i][j] = 1;
                    printf("Vous ne pouvez pas avancer ! C'est un mur !\n");
                }else if(map[i][j] == 3){
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous recolter cette plante ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a>2 || a<0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_3__, __RESSOURCES__, q);
                            printf("Plante ajoutée à votre inventaire !\n");
                            i--;
                            map[i][j] = 1;

                            break;
                        case 2:
                            map[i][j] = 3;
                            i--;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Une plante vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else if(map[i][j] == 2){
                    printf("\n");
                    printf("PNJ ! Que voulez vous faire ? \n");
                    printf("1- Restauration des outils\n");
                    scanf("%d", &i);
                    printf("\n");
                    i++;
                    i++;
                    map[i][j] = 1;

                }else if(map[i][j] == 4){
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous ramasser ce rocher ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a>2 || a<0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_6__, __RESSOURCES__, q);
                            printf("Rocher ajoutée à votre inventaire !\n");
                            map[i][j] = 1;
                            break;
                        case 2:
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Un rocher vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else if(map[i][j] == 5){
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous ramasser ce morceau de bois ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a>2 || a<0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_5__, __RESSOURCES__, q);
                            printf("Bois ajoutée à votre inventaire !\n");
                            i++;
                            map[i][j] = 1;
                            break;
                        case 2:
                            j--;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Un morceau de bois vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else{
                    map[i][j] = 1;
                }
            }
        }
    }
}


void moveRight(char** map){
    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++){
            if(map[i][j]== 1){
                map[i][j] = 0;
                j++;

                if(map[i][j] == -1){
                    map[i][j] = -1;
                    j--;
                    map[i][j] = 1;
                    printf("Vous ne pouvez pas avancer ! C'est un mur !\n");
                }else if(map[i][j] == 3) {
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous recolter cette plante ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a > 2 || a < 0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_3__, __RESSOURCES__, q);
                            printf("Plante ajoutée à votre inventaire !\n");
                            i++;
                            map[i][j] = 1;
                            break;
                        case 2:
                            j--;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Une plante vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else if(map[i][j] == 2){
                        printf("\n");
                        printf("PNJ ! Que voulez vous faire ? \n");
                        printf("1- Restauration des outils\n");
                        scanf("%d", &i);
                        printf("\n");
                        map[i][j] = 2;
                        j--;
                        map[i][j] = 1;

                    }else if(map[i][j] == 4){
                        int a = 0;
                        do {
                            printf("\n");
                            printf("Voulez-vous ramasser ce rocher ? \n");
                            printf("1- Oui\n");
                            printf("2- Non\n");
                            scanf("%d", &i);
                            printf("\n");
                        } while (a>2 || a<0);
                        int q = 1;
                        switch (i) {

                            case 1:
                                addItemInventory(&dataInventory.inventory, __OBJECT_CODE_6__, __RESSOURCES__, q);
                                printf("Rocher ajoutée à votre inventaire !\n");
                                map[i][j] = 1;
                                break;
                            case 2:
                                j--;
                                i--;
                                map[i][j] = 1;
                                printf("Vous ne pouvez pas avancer ! Un rocher vous bloque le passage !\n");
                                break;
                                //q++;
                        }
                    }else if(map[i][j] == 5){
                        int a = 0;
                        do {
                            printf("\n");
                            printf("Voulez-vous ramasser ce morceau de bois ? \n");
                            printf("1- Oui\n");
                            printf("2- Non\n");
                            scanf("%d", &i);
                            printf("\n");
                        } while (a>2 || a<0);
                        int q = 1;
                        switch (i) {

                            case 1:
                                addItemInventory(&dataInventory.inventory, __OBJECT_CODE_5__, __RESSOURCES__, q);
                                printf("Bois ajoutée à votre inventaire !\n");
                                i++;
                                map[i][j] = 1;
                                break;
                            case 2:
                                j--;
                                map[i][j] = 1;
                                printf("Vous ne pouvez pas avancer ! Un morceau de bois vous bloque le passage !\n");
                                break;
                                //q++;
                        }
                }else{
                    map[i][j] = 1;
                }
            }
        }
    }
}


void moveLeft(char** map){
    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++){


            if(map[i][j]== 1){
                map[i][j] = 0;
                j--;

                if(map[i][j] == -1){
                    map[i][j] = -1;
                    j++;
                    map[i][j] = 1;
                    printf("Vous ne pouvez pas avancer ! C'est un mur !\n");

                }else if(map[i][j] == 3){
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous recolter cette plante ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a>2 || a<0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_3__, __RESSOURCES__, q);
                            printf("Plante ajoutée à votre inventaire !\n");
                            i--;
                            map[i][j] = 1;
                            break;
                        case 2:
                            j++;
                            i--;
                            i--;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Une plante vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else if(map[i][j] == 2){
                        printf("\n");
                        printf("PNJ ! Que voulez vous faire ? \n");
                        printf("1- Restauration des outils\n");
                        printf("2- Autre...\n");
                        scanf("%d", &i);
                        printf("\n");
                        map[i][j] = 2;
                        j++;
                        i++;
                        map[i][j] = 1;

                }else if(map[i][j] == 4){
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous ramasser ce rocher ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a>2 || a<0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_6__, __RESSOURCES__, q);
                            printf("Rocher ajoutée à votre inventaire !\n");
                            map[i][j] = 1;
                            break;
                        case 2:
                            j++;
                            i--;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Un rocher vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else if(map[i][j] == 5){
                    int a = 0;
                    do {
                        printf("\n");
                        printf("Voulez-vous ramasser ce morceau de bois ? \n");
                        printf("1- Oui\n");
                        printf("2- Non\n");
                        scanf("%d", &i);
                        printf("\n");
                    } while (a>2 || a<0);
                    int q = 1;
                    switch (i) {

                        case 1:
                            addItemInventory(&dataInventory.inventory, __OBJECT_CODE_5__, __RESSOURCES__, q);
                            printf("Bois ajoutée à votre inventaire !\n");
                            i++;
                            i++;
                            i++;
                            map[i][j] = 1;
                            break;
                        case 2:
                            j++;
                            i++;
                            i++;
                            map[i][j] = 1;
                            printf("Vous ne pouvez pas avancer ! Un morceau de bois vous bloque le passage !\n");
                            break;
                            //q++;
                    }
                }else{
                    map[i][j] = 1;
                }
            }
        }
    }
}


void menu(char** map){
    int i = 0;

    printf("Map du donjon :\n");
    printMap(map);

    printf("\n");
    printf("1- Pour monter");
    printf("\n");
    printf("2- Pour descendre");
    printf("\n");
    printf("3- Pour aller à gauche");
    printf("\n");
    printf("4- Pour aller à droite");
    printf("\n");
    printf("5- Pour ouvrir votre inventaire");
    printf("\n");
    scanf("%d", &i);

    while (i>5 || i<0){
        printf("Erreur\nVeuillez reessayer\n");
        menu(map);
    }

    switch (i) {
        case 1:
            moveUp(map);
            menu(map);
            break;
        case 2:
            moveDown(map);
            menu(map);
            break;
        case 3:
            moveLeft(map);
            menu(map);
            break;
        case 4:
            moveRight(map);
            menu(map);
            break;
        case 5:
            printf("%d \n", dataInventory.inventory[0]->codeTypeItem);
            //addItemInventory(&dataInventory.inventory, __OBJECT_CODE_5__, __RESSOURCES__, 5);
            showInventory(dataInventory);
            menu(map);
            break;
    }
}

int main() {

    printf("Bienvenue dans Malloc world!\n");

    if(!initInventory(&dataInventory)){
        return 0;
    }
    char** map;
    map = initMap();
    menu(map);
    freeMap(map);
    return 0;
}
