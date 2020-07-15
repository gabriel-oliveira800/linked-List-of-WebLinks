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

void add_start(WebLinks** list_link, char* link, char* keyword)
{
    WebLinks* new_list = (WebLinks*) malloc(sizeof(WebLinks));
    Web* data = (Web*) malloc(sizeof(Web));

    if(new_list != NULL && data != NULL)
    {

        data->link =link;
        data->keyword = keyword;

        new_list->data = data;

        new_list->prox = *list_link;
        *list_link = new_list;
    }
}

void add_middle(WebLinks** list_links, char* link, char* keyword)
{
}

void add_end(WebLinks** list_links, char* link, char* keyword)
{
    WebLinks* aux = *list_links;
    WebLinks* final_item;

    while(aux != NULL)
    {
        final_item = aux;
        aux = aux->prox;
    }
    printf("%s\n", final_item->data->link);
}

void toString(WebLinks* list_links)
{
    if(list_null(list_links) == 0) return 0;

    WebLinks* aux = list_links;

    while(aux != NULL)
    {
        printf("Site: %s keyword: (%s)\n", aux->data->link, aux->data->keyword);
        aux = aux->prox;
    }
}
int list_null(WebLinks* list_links)
{
    if(list_links == NULL) return 1;
    else return 0;
}
void close(WebLinks* list_links)
{
    WebLinks* aux = list_links;
    while(aux != NULL)
    {
        WebLinks* clear_list = aux->prox;

        free(aux);
        aux  = clear_list;
    }
}
