#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct web
{
    char* link;
    char* keyword;
};

typedef struct web Web;

struct webLinks
{
    Web* data;
    struct webLinks* prox;
};


typedef struct webLinks WebLinks;

WebLinks* init()
{
    return NULL;
}

void add_start(WebLinks** list_link, char* link, char* keyword){
    WebLinks* new_list = (WebLinks*) malloc(sizeof(WebLinks));
    Web* data = (Web*) malloc(sizeof(Web));

    if(new_list != NULL && data != NULL){

        data->link =link;
        data->keyword = keyword;

        new_list->data = data;

        new_list->prox = *list_link;
        *list_link = new_list;
    }
}

void toString(WebLinks* list_links){
    while(list_links != NULL){
        printf("Site: %s keyword: (%s)\n", list_links->data->link, list_links->data->keyword);
        list_links = list_links->prox;
    }
}

void close(WebLinks* list_links){
    while(list_links != NULL){
        free(list_links);
        list_links = list_links->prox;
    }
}
