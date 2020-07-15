#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct web
{
    char* link;
    char* keyword;
};

struct webLinks
{
    web* data;
    struct webLinks* prox;
};

typedef struct web Web;
typedef struct webLinks WebLinks;

WebLinks* init()
{
    return NULL;
}

void add_start(WebLinks** list_link, char* link, char* keyword){
    WebLinks* new_list = (WebLinks*) malloc(sizeof(WebLinks));

    if(new_list != NULL){
        Web* data = (Web*) malloc(sizeof(Web));

        strcpy(data->link, link);
        strcpy(data->keyword, keyword);

        new_list->data = data;

        new_list->prox = *list_link;
        *list_link = new_list;

    }
}

void toString(WebLinks* list_links){
    while(list_links != NULL){
        printf("Site: %s keyword: (%s)", list_links->data->link, list_links->data->keyword);
        list_links = list_links->prox;
    }
}
