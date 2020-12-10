#ifndef dui_h
#define dui_h

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "dui.h"

typedef int datatype;


typedef struct node {
    datatype data;
    struct node *next;
}node;


typedef struct  Link{
	node *front, *rear;
       	int size;
}Link;


typedef struct Node {
	datatype data;
	struct Node *left, *right;
}Node,De;

void initLink(Link *);
int empty(Link *);
void push(Link *, datatype);
void pop(Link *);
datatype front(Link *);
datatype back(Link *);

De *createDe();
int dempty(De *);
datatype Front(De *);
datatype Back(De *);
void push_Front(De *,datatype);
void push_Back(De *,datatype);
void pop_Front(De *);
void pop_Back(De *);
void clear(De *);
void length(De *);
void zyl(De *);

#endif
