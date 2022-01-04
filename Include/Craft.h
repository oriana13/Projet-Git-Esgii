//
// Created by crichard23 on 23/10/2021.
//

#ifndef _CRAFT_H_
#define _CRAFT_H_

#include <stdlib.h>

typedef struct craft craft;

struct craft{
    int idItem;
    int quantity;
    struct craft *nxt;
};

typedef craft *list;


#endif //_CRAFT_H_
