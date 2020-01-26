#include <stdio.h>

/*
http://php.net/manual/fr/function.explode.php
http://php.net/manual/fr/function.implode.php
http://php.net/manual/fr/function.lcfirst.php
http://php.net/manual/fr/function.ltrim.php
http://php.net/manual/fr/function.nl2br.php
http://php.net/manual/fr/function.number-format.php
http://php.net/manual/fr/function.rtrim.php
http://php.net/manual/fr/function.str-pad.php
http://php.net/manual/fr/function.str-repeat.php
http://php.net/manual/fr/function.str-rot13.php
http://php.net/manual/fr/function.str-shuffle.php
http://php.net/manual/fr/function.str-split.php
http://php.net/manual/fr/function.str-word-count.php
http://php.net/manual/fr/function.strcasecmp.php
http://php.net/manual/fr/function.stripos.php
http://php.net/manual/fr/function.strrchr.php
http://php.net/manual/fr/function.strrev.php
http://php.net/manual/fr/function.strripos.php
http://php.net/manual/fr/function.strrpos.php
http://php.net/manual/fr/function.strtok.php
http://php.net/manual/fr/function.strtolower.php
http://php.net/manual/fr/function.strtoupper.php
http://php.net/manual/fr/function.strtr.php
http://php.net/manual/fr/function.substr-count.php
http://php.net/manual/fr/function.substr-replace.php
http://php.net/manual/fr/function.substr.php
http://php.net/manual/fr/function.trim.php
http://php.net/manual/fr/function.ucfirst.php
http://php.net/manual/fr/function.ucwords.php
http://php.net/manual/fr/function.wordwrap.php

*/


#include <string.h>
#include "phplib.h"

int main(void)
{

    int nb_points = 0;

    char foo[] = "HelloWorld";
    lcfirst(foo);
    if(strcmp(foo, "helloWorld") == 0){
        printf("lcfirst ok \n");
        nb_points++;
    }
    else
        printf("lcfirst KO!\n");

////////////////////////////////////////////////////////////////////
{
    char chaine[] = "   Test enlever les espaces  ";
    char copie[22];

    remove_space(chaine, copie);
    if (strcmp(copie, "Testenleverlesespaces") == 0 ) {
        printf("trim ok \n");
        nb_points++;
    }
    else
        printf("ltrim KO \n");
}
////////////////////////////////////////////////////////////////////
{
    char chaine[] = "phrase minuscule";
    int i = 0;

    upper(chaine);
    if (strcmp(chaine, "PHRASE MINUSCULE") == 0 ){
        printf("strtoupper ok \n");
        nb_points++;
    }
    else
        printf("strtoupper KO \n");
}
////////////////////////////////////////////////////////////////////
{
    char chaine[] = "PHRASE MAJUSCULE";
    int i = 0;

    lower(chaine);
    if (strcmp(chaine, "phrase majuscule") == 0 ){
        printf("strtolower ok \n");
        nb_points++;
    }
    else
        printf("strtolower KO \n");
}
////////////////////////////////////////////////////////////////////
{
    char chaine[] = "hello world\nje suis\tmagnifique";
    int compte = 1;
    nbDeMot(chaine, &compte);
    if(compte == 5)
    {
        printf("str-word-count ok \n");
        nb_points++;
    }
    else
        printf("str-word-count KO \n");

}
////////////////////////////////////////////////////////////////////

{
    char chaine[] = "Test";

    ajoutSautLigne(chaine);
    if (strcmp(chaine, "Test<br>\n") == 0)
    {
        printf("nl2br ok \n");
        nb_points++;
    }
    else
        printf("nl2br KO \n");
}
////////////////////////////////////////////////////////////////////
{
    char chaine[] = "Test    ";
    char chaineVide[50];

    removeEndSpaces(chaine, chaineVide);
    if (strcmp(chaineVide, "Test") == 0)
    {
        printf("rtrim ok \n");
        nb_points++;
    }
    else
        printf("rtrim KO \n");
}
////////////////////////////////////////////////////////////////////
{
    char chaine[] = "    Test";
    char chaineVide[50];

    RemoveBeginingSpaces(chaine, chaineVide);
    if (strcmp(chaineVide, "Test") == 0)
    {
        printf("ltrim ok \n");
        nb_points++;
    }
    else
        printf("ltrim KO \n");
}
////////////////////////////////////////////////////////////////////
{
    char chaine[] = "Test";
    char aRemplacer[] = "Te";
    char remplacement[] = "Bo";
    strtr(chaine, aRemplacer, remplacement);

    if(strcmp(chaine, "Bost") == 0)
    {
        printf("strtr ok \n");
        nb_points++;
    }
    else
        printf("strtr KO \n");
}
////////////////////////////////////////////////////////////////////

{
    char chaine[] = "abcd";

    strrot13(chaine);
    if(strcmp(chaine, "nopq") == 0)
    {
        printf("rot13 ok \n");
        nb_points++;
    }
    else
        printf("rot13 KO \n");
}
////////////////////////////////////////////////////////////////////
{
    char chaine [] = "Test";
    int nbChaineCopie = 3;

    multipli_chaine(chaine, nbChaineCopie);
    if (strcmp(chaine, "TestTestTestTest") == 0){
        printf("str_repeat ok \n");
        nb_points++;
    }
    else
        printf("str_repeat KO \n");
}

////////////////////////////////////////////////////////////////////

    printf("Mon score est de : %d points", nb_points);
}




















