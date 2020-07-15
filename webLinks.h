#ifndef WEBLINKS_H_INCLUDED
#define WEBLINKS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct web Web;
typedef struct webLinks WebLinks;

WebLinks* init();

void add_start(WebLinks** list_link, char* link, char* keyword);
void add_middle(WebLinks** list_link, char* link, char* keyword);
void add_end(WebLinks** list_link, char* link, char* keyword);

void toString(WebLinks* list_link);
#endif // WEBLINKS_H_INCLUDED
