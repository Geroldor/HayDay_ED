#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct retangulo{
    int x;
    int y;
    int w;
    int h;
    int area;
    int id;
    char corb[20];
    char corp[20];
}retangulo;

void retanguloSetid(int id, retangulo *retangulo){
    retangulo->id = id;
}

void retanguloSetx(int x, retangulo *retangulo){
    retangulo->x = x;
}

void retanguloSety(int y, retangulo *retangulo){
    retangulo->y = y;
}

void retanguloSetw(int w, retangulo *retangulo){
    retangulo->w = w;
}

void retanguloSeth(int h, retangulo *retangulo){
    retangulo->h = h;
}

void retanguloSetarea(int area, retangulo *retangulo){
    retangulo->area = area;
}

void retanguloSetcorb(char corb[], retangulo *retangulo){
    strcpy(retangulo->corb, corb);
}

void retanguloSetcorp(char corp[], retangulo *retangulo){
    strcpy(retangulo->corp, corp);
}

retangulo *createRetangulo(int id, int x, int y, int w, int h, char corb[], char corp[]){
    retangulo *retangulo;
    retanguloSetid(id, retangulo);
    retanguloSetx(x, retangulo);
    retanguloSety(y, retangulo);
    retanguloSetw(w, retangulo);
    retanguloSeth(h, retangulo);
    retanguloSetarea(w*h, retangulo);
    retanguloSetcorb(corb, retangulo);
    retanguloSetcorp(corp, retangulo);
    return retangulo;
}