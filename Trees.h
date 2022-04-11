//
// Created by rados on 04/04/2022.
//

#ifndef UNTITLED_TREES_H
#define UNTITLED_TREES_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define space(spaces) for(size_t spaces_c = 0; spaces_c < spaces; spaces_c++) printf(" ");
typedef struct color {
    int r;
    int b;
    int g;
} color_t;

typedef struct dot _dot_t;

typedef struct dot {
    char *name;
    color_t color;
    int b_size;
    _dot_t *branch;
} _dot_t;

_dot_t *_dot_t_int();
_dot_t *_dot_t_int(){
    _dot_t *dot = malloc(sizeof(_dot_t));

    dot->name=NULL;
    dot->color.r=0;
    dot->color.g=0;
    dot->color.b=0;
    dot->b_size=0;
    dot->branch=NULL;
    return dot;
}

void _dot_t_name(_dot_t *dot, char  *name);
void _dot_t_name(_dot_t *dot, char  *name){
    size_t len= strlen(name);
    //dot->name;
    char *_name= realloc(dot->name,len * sizeof(char));
    strcpy(_name,name);
    dot->name = _name;
    return;
}

void _dot_t_append_dot_t(_dot_t *dot, _dot_t *item);
void _dot_t_append_dot_t(_dot_t *dot, _dot_t *item){
    _dot_t *branch = realloc(dot->branch,++dot->b_size * sizeof(_dot_t));
    branch[dot->b_size-1] = item;
    dot->branch = branch;
    return;
}

void _dot_t_print(_dot_t *dot, size_t recurs);
void _dot_t_print(_dot_t *dot, size_t recurs){
    if(dot->name!=NULL){
        space(recurs*2)printf("DOT:%s\n",dot->name);
    }
    else{
        space(recurs*2)printf("DOT:%p\n",dot);
    }
    return;
}

void _dot_t_dtor(_dot_t *tree);
void _dot_t_dtor(_dot_t *tree){
    free(tree);
}


#endif //UNTITLED_TREES_H
