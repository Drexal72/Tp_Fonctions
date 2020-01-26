#ifndef PHPLIB_H
#define PHPLIB_H

char * lcfirst(char* str);

void remove_space(char chaine[], char copie[]);

void upper(char * chaine);

void lower(char * chaine);

int* nbDeMot(char* chaine, int* compte);

char repeat(char*chaine, int*multiplier);

char ajoutSautLigne(char* chaine);

char removeEndSpaces(char* chaine, char* chaineVide);

char RemoveBeginingSpaces(char* chaine, char* chaineVide);

char* strrot13(char* chaine);

char* strtr(char* chaine, char*aChanger, char* remplacement);



#endif // PHPLIB_H
