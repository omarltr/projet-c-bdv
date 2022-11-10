#ifndef PROJET_H_INLUDED
#define PROJET_H_INLUDED
#includ<stdio.h>

typedef struct bdv{
int id ;
int cap;
int nbr_salle;
int id_responsable;
int id_agent;
int nbr_agent;
char  adress[100]


} ;

int ajouterbdv (char * filename, bdv p )
int modifier(char * filename, int id)

int supprimer (char * filename, int id)
void  chercher(char * filename, int id)

