# Exercices chaîne de caractères

## Ex 1

Déclarer une variable `text` et l'initialiser avec la chaîne de caractères `Comment allez-vous ?`

## Ex 2

Compléter la deuxième déclaration pour initialiser le tableau avec des accolades.

```c
int char1[] = "foo";
int char2[] = {...
```

## Ex 3
Quel est l'affichage du programme suivant
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char text1[] = "Hello";
    printf("Text 1 : %s\n", text1);
    printf("Sizeof 1 : %ld\n", sizeof(text1));
    printf("Strlen 1 : %ld\n\n", strlen(text1));

    char text2[] = "Test 1 2 3";
    printf("Text 2 : %s\n", text2);
    printf("Sizeof 2 : %ld\n", sizeof(text2));
    printf("Strlen 2 : %ld\n\n", strlen(text2));

    char text3[] = {'1', '2', '3'};
    printf("Text 3 : %s\n", text3);
    printf("Sizeof 3 : %ld\n", sizeof(text3));
    printf("Strlen 3 : %ld\n\n", strlen(text3));

    char text4[] = {'1', '2', '3', '\0'};
    printf("Text 4 : %s\n", text4);
    printf("Sizeof 4 : %ld\n", sizeof(text4));
    printf("Strlen 4 : %ld\n\n", strlen(text4));
    
    char text5[8] = {'a', 'b', 'c', '\0'};
    printf("Text 5 : %s\n", text5);
    printf("Sizeof 5 : %ld\n", sizeof(text5));
    printf("Strlen 5 : %ld\n\n", strlen(text5));

    char text6[] = "Foo Bar";
    printf("Text 6 : %s\n", &text6[2]);
    printf("Sizeof 6 : %ld\n", sizeof(text6[2]));
    printf("Strlen 6 : %ld\n\n", strlen(&text6[2]));

    char text7[] = "Hello\n";
    printf("Text 7 : %s\n", &text7[2]);
    printf("Sizeof 7 : %ld\n", sizeof(text7[2]));
    printf("Strlen 7 : %ld\n\n", strlen(&text7[2]));

    return 0;
}
```

## Ex 4

Dans un code, vous avez un tableau `val` qui contient des `char`.

Vous devez mettre des valeurs dans ce tableau (`val[0]=...`), afin que le programme ci-dessous,
puisse afficher `hello` en injectant votre tableau dans un `printf`

```c
char val[10];

val[0] = ...
   ...
   
printf("%s", val);
```

## Ex 5

Écrire une fonction qui prend une chaîne de caractère en entrée.

Cette fonction affiche la chaîne passée en paramètre ainsi que le nombre de caractères.

Exemple de prototype :

```c
int main(){
    my_func("Bonjour");
}
```

Résultat
```console
Text : Bonjour
Nbr : 7
```

## Ex 6

Que va afficher le programme suivant

```c
void affichage(const char text[]){
    for (int i=0; text[i] != '\0'; i++ )
    {
        printf("%c", text[i]);
    }
}

int main(void)
{
    char text[] = {'H','e','l','l','o'};
    affichage(text);
    return 0;
}
```

## Ex 7

Quel est l'affichage du programme suivant :

```c
    const char txt1[] = "Bonjour";
    const char txt2[10] = "Bonjour";

    printf("sizeof 1 = %d\n", sizeof(txt1));
    printf("sizeof 2 = %d\n", sizeof(txt2));
    printf("strlen 1 = %d\n", strlen(txt1));
    printf("strlen 2 = %d\n", strlen(txt2));
    
    printf("strlen 3 = %d\n", strlen(""));
    printf("strlen 4 = %d\n", strlen(" "));
```

## Ex 8

Quelle est la différence entre les deux fonctions ci-dessous ?

Quelle est la meilleure implémentation ?

```c
void func1(char txt[]){
    const int l = strlen(txt);
    for(int i = 0; i<l; i++){
        printf("%c", txt[i]);
    }
    printf("\n");
}

void func2(char txt[]){
    for(int i = 0; txt[i] != '\0'; i++){
        printf("%c", txt[i]);
    }
    printf("\n");
}

int main(void)
{
    const char txt1[] = "Bonjour";
    func1(txt1);
    func2(txt1);
}
```

## Ex 9
### Ex 9.1

Quel est l'affichage du programme suivant avec cette entrée :

```console
123
abc
```

```c
#define RETURN_OK 0
#define TAB_SIZE 5

int main(int argc, char* argv[])
{
    char text1[TAB_SIZE];
    char text2[TAB_SIZE];

    printf("%-8s : ", "Entree 1 : ");
    fgets(text1, TAB_SIZE, stdin);

    printf("%-8s : ", "Entree 2 : ");
    fgets(text2, TAB_SIZE, stdin);

    printf("\n\n");

    puts(text1);
    puts(text2);

    return RETURN_OK;
}
```

### Ex 9.2

Refaire la même chose avec l'entrée suivante

```console
12345
abc
```

### Ex 9.3

Idem que pour Ex 9.2 mais avec le code ci-dessous


```c
#define RETURN_OK 0
#define TAB_SIZE 5

int main(int argc, char* argv[])
{
    char text1[TAB_SIZE];
    char text2[TAB_SIZE];

    printf("%-8s : ", "Entree 1 : ");
    fgets(text1, TAB_SIZE, stdin);

    if( text1[TAB_SIZE-1] != '\n' ){
        while (getchar() != '\n'){}
    }

    printf("%-8s : ", "Entree 2 : ");
    fgets(text2, TAB_SIZE, stdin);

    printf("\n\n");
    
    puts(text1);
    puts(text2);

    return RETURN_OK;
}
```
### Ex 9.4

Dans le code ci-dessus, pourquoi est-ce qu'il faut faire le contrôle suivant : `if( text1[TAB_SIZE-1] != '\n' )`
et que l'on ne peut pas vider le buffer comme pour un
`scanf` ?

```c
if( text1[TAB_SIZE-1] != '\n' ){
    while (getchar() != '\n'){}
}
```

## Ex 10 - Occurrences

Faire un programme qui demande à l'utilisateur de saisir une chaîne de caractères qui peut contenir des espaces.

Compter le nombre d'occurrences pour chaque caractère de la table ASCII.

Les caractères qui ne sont pas dans la table ASCII ne sont pas pris en compte.

Afficher le nombre d'occurrences de chaque caractère, s'il y est présent au moins une fois.

La chaîne peut contenir au maximum 80 caractères.

Le programme est simple, la solution fait ~20 lignes de code.

**Aide**

*Pensez à utiliser un tableau pour stocker les occurrences*

Par exemple, si vous voulez compter les occurrences des chiffres dans `011569899`

On aurait un tableau comme ceci

```c
tab[0] = 1 // occurrence 0
tab[1] = 2 // occurrence 1
tab[2] = 0 // occurrence 2
...
tab[9] = 3 // occurrence 9
```

**L'affichage du programme**

```console
Veuillez saisir un texte : Quelle belle journée !

  |  3
! |  1
Q |  1
b |  1
e |  5
j |  1
l |  4
n |  1
o |  1
r |  1
u |  2
```

## Ex 11

### Ex 11.1

Écrire un programme qui demande à l'utilisateur de saisir son nom et son prénom.

Attention il peut y avoir des espaces dans le nom ou dans le prénom et les majuscules sont autorisés.

Les deux données sont stockées dans des variables.

### Ex 11.2

Écrire une fonction qui transforme une chaîne de caractères en majuscule.

**Vous ne devez pas utiliser la fonction `toupper`**. Vous devez écrire votre propre fonction.

### Ex 11.3

Faire une fonction qui prend une chaîne de caractères en entrée. 

Cette fonction va afficher la chaîne et le nombre de lettres.

```console
La chaîne : 9
```
### 11.4

Avec les précédant exercices, écrire un programme qui :

Affiche le nom de l'utilisateur en majuscule avec le nombre de lettres et le prénom sans modification.

Vous pouvez essayer d'aligner les deux points de séparation.

**Tester avec des espaces dans le nom ou prénom**

```console
MAULAZ : 6
Tony   : 4
```

### Ex 12 - Motif

Compléter la fonction `find` pour que le programme suivant affiche la position du motif s'il est présent dans 
la chaîne de caractères.

La taille du motif n'est pas fixe. Donc par exemple dans l'exemple ci-dessous, on peut utiliser comme modif :
-  on
-  Bonjour
-  allez

La fonction doit aussi compter le nombre de fois que le motif est présent dans toute la chaîne.

La position correspond à l'index du premier caractère dans la chaîne.

Si le motif n'est pas présent, la fonction doit mettre `-1` dans la position.

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void find(){
}

int main(void)
{
    const char txt[] = "Bonjour tout le monde, comment allez-vous oon?";
    const char motif[] = "on"; 
    int pos;
    int count;

    find(txt, motif, &pos, &count);

    if( pos >= 0)
        printf("Le premier motif commence à la pos : %d "
            "et il est présent %d fois.", pos, count);
    else
        printf("Le motif n'est pas présent");
    
    return 0;
}
```














# Solutions

## Ex 1

```c
char text[] = "Comment allez-vous ?";
```

## Ex 2

```c
int char1[] = "foo";
int char2[] = {'f', 'o', 'o', '\0'};
```

## Ex 4
```c
char val[10];

val[0] = 'h';
val[1] = 'e';
val[2] = 'l';
val[3] = 'l';
val[4] = 'o';
val[5] = '\0';
   
printf("%s", val);
```

## Ex 5

```c
void func(char tab[]){
    printf("Text : %s\n", tab);
    printf("Nbr : %ld\n", strlen(tab));
}
```

## Ex 6

Le programme va afficher `hello` et ensuite continuer d'afficher le contenu de la mémoire jusqu'à
ce que la valeur à afficher soit un `\0`

## Ex 7

```console
sizeof 1 = 8
sizeof 2 = 10
strlen 1 = 7
strlen 2 = 7
strlen 3 = 0
strlen 4 = 1
```

## Ex 8

`func2` est une implémentation plus rapide. Dans `func1` la fonction `strlen`
fait une première fois le parcours de la chaîne pour calculer la longueur et ensuite
il y a une deuxième boucle.

## Ex 9.1

Il y a une ligne vide entre les deux lignes, car le `\n` n'a pas été supprimé

```console
Entrée 1 :  : abc
Entrée 2 :  : 123


abc

123
```

## Ex 9.2

```console
Entrée 1 :  : 12345
Entrée 2 :  : 

1234
5
```

## Ex 9.3
```console
Entrée 1 :  : 12345
Entrée 2 :  : abc


1234
abc
```

## Ex 10
```c
int main(int argc, char* argv[])
{
    char text[81];
    printf("Veuillez saisir un texte : ");
    fgets(text, 80, stdin);

    const int l = strlen(text);
    if( text[l-1] == '\n' )
        text[l-1] = '\0';

    int occurrence[NBR_CHAR] = {0};
    int pos = 0;
    while (text[pos] != '\0'){
        occurrence[(int)(text[pos++])]++;
    }

    printf("\n");
    for(int i=0; i<NBR_CHAR; i++){
        if( occurrence[i] > 0 ){
            printf("%c |%3d\n", i, occurrence[i]);
        }
    }

    return EXIT_SUCCESS;
}
```

## Ex 11

```c
void string_to_upper(char txt[])
{
    const int off = 'A' - 'a';
    for (int i = 0; txt[i] != '\0'; i++)
    {
        if (isalpha(txt[i]) && islower(txt[i]))
            txt[i] += off;
    }
}

void print(char txt[], const int size){
    printf("%*s : %ld\n", -size, txt, strlen(txt));
}

void saisie_text(const char message[], char text[], const int max_size){
    printf("%s", message);
    fgets(text, max_size, stdin);
    
    const int l = strlen(text);
    if( l > 0 && text[l-1] == '\n'){
        text[l-1] = '\0';
    }
}

#define MAX_CHAR 20
int main(int argc, char* argv[])
{
    char nom[MAX_CHAR];
    char prenom[MAX_CHAR];

    saisie_text("Veuillez saisir votre nom : ", nom, MAX_CHAR);   
    saisie_text("Veuillez saisir votre prénom : ", prenom, MAX_CHAR);

    const int max_size = strlen(nom) > strlen(prenom) ? strlen(nom) : strlen(prenom);
    string_to_upper(nom);
    print( nom, max_size );
    print( prenom, max_size );

    return 0;
}
```

## Ex 12 - Motif

La solution `find_simple` utilise deux boucles, mais est plus facile à faire et à comprendre

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void find(const char text[], const char motif[], int* pos, int* count)
{
    bool inside_motif = false;
    int pos_start;
    *pos = -1;
    *count = 0;

    for (int ind = 0; text[ind] != '\0'; ind++)
    {
        if (inside_motif)
        {
            const int pos_motif = ind - pos_start;  // pos inside motif
            if (motif[pos_motif] != text[ind])
            {  // motif not equal
                inside_motif = false;
            }
            else if (motif[pos_motif + 1] == '\0')  // end of motif
            {
                (*count)++;
                if (*pos == -1)  // set pos only the first time
                {
                    *pos = pos_start;
                }
                inside_motif = false;
            }
        }

        // detect start of motif
        if (text[ind] == motif[0] && !inside_motif)
        {
            pos_start = ind;
            inside_motif = true;
        }
    }
}

void find_simple(const char text[], const char motif[], int* pos, int* count)
{
    *pos = -1;
    *count = 0;

    for (int ind = 0; text[ind] != '\0'; ind++)
    {
        // detect start of motif
        if (text[ind] == motif[0])
        {
            // browse through the pattern
            for (int pos_motif = 0; motif[pos_motif] != '\0'; pos_motif++)
            {
                // motif not equal text
                if (motif[pos_motif] != text[ind + pos_motif]){
                    break;
                }

                if (motif[pos_motif + 1] == '\0') // last motif char
                {
                    (*count)++;
                    if (*pos == -1)  // set pos only the first time
                    {
                        *pos = ind;
                    }
                }
            }
        }
    }
}

int main(int argc, char* argv[])
{
    // const char txt[] = "onBojoonur tout le mononde, comment allez-vous on?";
    // const char motif[] = "on";
    int pos;
    int count;

    //find(argv[2], argv[1], &pos, &count);
    find_simple(argv[2], argv[1], &pos, &count);

    if (pos >= 0)
        printf(
            "Le premier motif commence à la pos : %d "
            "et il est présent %d fois.",
            pos, count);
    else
        printf("Le motif n'est pas présent");

    return EXIT_SUCCESS;
}
```
