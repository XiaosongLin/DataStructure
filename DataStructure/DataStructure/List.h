//
//  List.h
//  DataStructure
//
//  Created by xiaoslin on 1/15/15.
//  Copyright (c) 2015 xiaoslin. All rights reserved.
//


/*****************************************************************************
 *                                                                            *
 *  -------------------------------- list.h --------------------------------  *
 *                                                                            *
 *****************************************************************************/



#ifndef LIST_H
#define LIST_H

#include<stdlib.h>

/*****************************************************************************
 *                                                                            *
 *  Define a structure for linked list elements.                              *
 *                                                                            *
 *****************************************************************************/


typedef struct ListElmt_{
    void *data;
    struct ListElmt_ *next;
}ListElmt;

/*****************************************************************************
 *                                                                            *
 *  Define a structure for linked lists.                                      *
 *                                                                            *
 *****************************************************************************/

typedef struct List_{
    int size;
    int (*match)(const void *key1, const void *key2);
    void (*destory)(void *data);
    
    
    ListElmt *head;
    ListElmt *tail;
    
}List;

/*****************************************************************************
 *                                                                            *
 *  --------------------------- Public Interface ---------------------------  *
 *                                                                            *
 *****************************************************************************/

void list_init(List *list, void (*destory)(void *data));
void list_destroy(List *list);
int list_ins_next(List *list, ListElmt *element, const void *data);


#define list_size(list) ((list)->size)
#endif
