//
//  List.c
//  DataStructure
//
//  Created by xiaoslin on 1/15/15.
//  Copyright (c) 2015 xiaoslin. All rights reserved.
//

/*****************************************************************************
 *                                                                            *
 *  -------------------------------- list.c --------------------------------  *
 *                                                                            *
 *****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "List.h"

/*****************************************************************************
 *                                                                            *
 *  ------------------------------- list_init ------------------------------  *
 *                                                                            *
 *****************************************************************************/
void list_init(List *list, void (*destory)(void *data)){
    
    
    
    
    list->size=0;
    list->destory=destory;
    list->head=NULL;
    list->tail=NULL;
    return;
    
    
}

void list_destory(List *list){
    
}

int list_ins_next(List *list, ListElmt *element, const void *data){
    
    ListElmt *new_element;
    if((new_element=malloc(sizeof(ListElmt)))==NULL){
        return -1;
    }
    
    new_element->data=(void *)data;
    
    if(element==NULL){
        
        if (list_size(list)==0) {
            list->tail=new_element;
            
        }
        
        new_element->next=list->head;
        list->head=new_element;
        
    }else{
        if (element->next==NULL) {
            list->tail=new_element;
        }
        
        new_element->next=element->next;
        element->next=new_element;
        
    }
    
    list->size++;
    return 0;
    
    
    
}
