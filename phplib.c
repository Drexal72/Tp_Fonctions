#include <stdio.h>

char * lcfirst(char* str){
    *str = *str + ('a' - 'A');
    return str;
}
/////////////////////////////////////////////////////////////////////////////////
void remove_space(char chaine[], char copie[])
{
    int x;
    int y = 0;
    int longChaine = strlen(chaine);

    for(x = 0; x < longChaine; x++)
    {
        if(chaine[x] != ' ' && chaine[x] != '\t')
        {
            copie[y] = chaine[x];
            y++;
        }
    }
    copie[y] = '\0';
}

/////////////////////////////////////////////////////////////////////////////////
char upper(char * chaine)
{
    for (int i = 0; chaine[i] != '\0'; i++)
    {
        if (chaine[i] >= 'a' && chaine[i] <= 'z')
        chaine[i] -= 'a' - 'A';
    }
}

/////////////////////////////////////////////////////////////////////////////////
char lower(char * chaine)
{
    for (int i = 0; chaine[i] != '\0'; i++)
    {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z')
        chaine[i] -= 'A' - 'a';
    }
}


/////////////////////////////////////////////////////////////////////////////////
int* nbDeMot(char* chaine, int* compte)
{
    int a = 1;

    for (int i = 0; i != strlen(chaine); i++)
        {
            if (chaine[i] == ' ' || chaine[i] == '\t' || chaine[i] == '\n' || chaine[i] == '\x0B')
                {
                    a++;
                }
        }
        *compte = a;
    return (compte);
}


/////////////////////////////////////////////////////////////////////////////////
char multipli_chaine(char* chaine, int*multiplier)
{
    char copie [100];
    int i = 0;

    strcpy(copie, chaine);

    for (i = 0; i < multiplier; i++)
    {
        strcat(chaine, copie);
    }

}

/////////////////////////////////////////////////////////////////////////////////
char ajoutSautLigne(char* chaine)
{
    strcat(chaine, "<br>\n");

    return(chaine);
}

/////////////////////////////////////////////////////////////////////////////////
char removeEndSpaces(char* chaine, char* chaineVide)
{
    int x = 0;
    int y = 0;
    int z = strlen(chaine) - 1;

    while (chaine[z] == ' ')
    {
        z--;
    }

    while (chaine[y] != chaine[z])
    {
        chaineVide[x] = chaine[y];
        x++;
        y++;
    }

    chaineVide[x] = chaine[z];
    chaineVide[x+1] = '\0';

    return (chaineVide);
}

/////////////////////////////////////////////////////////////////////////////////
char RemoveBeginingSpaces(char* chaine, char* chaineVide)
{
    int x = 0;
    int y = 0;

    while (chaine[y] == ' ')
    {
        y++;
    }

    while (chaine[y] != '\0')
    {
        chaineVide[x] = chaine[y];
        x++;
        y++;
    }

    chaineVide[x] = '\0';

    return (chaineVide);
}


/////////////////////////////////////////////////////////////////////////////////
char* strrot13(char* chaine)
{
    for(int i = 0 ; chaine[i] != '\0' ; i++)
    {
     chaine[i] = chaine[i] + 13;
    }
}

/////////////////////////////////////////////////////////////////////////////////
char* strtr(char* chaine, char*aChanger, char* remplacement)
{
    for(int a = 0 ; chaine[a] != '\0' ; a++)
    {
        if(chaine[a] == aChanger[a])
        {
            chaine[a] = remplacement[a];
        }
    }
    return (chaine);
}



