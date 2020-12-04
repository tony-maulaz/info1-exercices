# Exercices chaîne de caractères

## Ex 1

Déclarer une variable et l'initialiser avec la chaine de caractère `Comment allez-vous ?`

## Ex 2

Compléter la deuxième déclaration pour qu'elle soit identique à la première.

```c
int char1[] = "foo";
int char2[] = {...
```

## Ex 3

Dans un code, vous avez un tableau `val` qui contient des `char`.

Vous devez mettre des valeurs dans ce tableau (`val[0]=...`), afin que le programme ci-dessous,
puisse afficher `hello` en injectant votre tableau dans un `printf`

```c
char val[10];

val[0] = ...
   ...
   
printf("%s", val);
```

## Ex 4

Ecrire le prototype d'une fonction qui prend une chaîne de caractère en entrée.

Exemple de prototype :

```c
void my_func(double foo);
```

## Ex 5

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

## Ex 6

Quelle est l'affichage du programme suivant :

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

## Ex 7

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

## Ex 8
### Ex 8.1

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

    printf("%-8s : ", "Entrée 1 : ");
    fgets(text1, TAB_SIZE, stdin);

    printf("%-8s : ", "Entrée 2 : ");
    fgets(text2, TAB_SIZE, stdin);

    printf("\n\n");

    puts(text1);
    puts(text2);

    return RETURN_OK;
}
```

### Ex 8.2

Refaire la même chose avec l'entrée suivante

```console
12345
abc
```

### Ex 8.3

Idem que pour Ex 8.2 mais avec le code ci-dessous


```c
#define RETURN_OK 0
#define TAB_SIZE 5

int main(int argc, char* argv[])
{
    char text1[TAB_SIZE];
    char text2[TAB_SIZE];

    printf("%-8s : ", "Entrée 1 : ");
    fgets(text1, TAB_SIZE, stdin);

    if( text1[TAB_SIZE]-1 != '\n' ){
        while (getchar() != '\n'){}
    }

    printf("%-8s : ", "Entrée 2 : ");
    fgets(text2, TAB_SIZE, stdin);

    printf("\n\n");
    
    puts(text1);
    puts(text2);

    return RETURN_OK;
}
```
### Ex 8.4

Dans le code ci-dessus, pourquoi est-ce qu'il faut faire le contrôle suivant : `if( text1[TAB_SIZE]-1 != '\n' )`
et que l'on ne peut pas simplement vider le buffer comme avec un
`scanf` ?

```c
if( text1[TAB_SIZE]-1 != '\n' ){
    while (getchar() != '\n'){}
}
```

## Ex 9 Occurrence

Faire un programme qui demande à l'utilisateur de saisir une chaine de caractère qui peut contenir des espaces.

Compter le nombre d'occurrence pour chaque caractères de la table ASCII.

Les caractères qui ne sont pas dans la table ASCII ne sont pas pris en compte.

Afficher le nombre d'occurrence de chaque caractère, si il y est présent au moins une fois.

La chaîne peut contenir au maximun 80 caratères.

Le programme est simple, la solution fait ~20 lignes de code.

**Aide**

*Pensez à utiliser un tableau pour stocker les occurrences*

Par exemple si vous voulez compter les occurences des chiffres dans `011569899`

On aurait un tableau comme ceci

```c
tab[0] = 1 // occurrence 0
tab[1] = 2 // occurence 1
tab[2] = 0 // occurence 2
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

## Ex 10

### Ex 10.1

Ecrire un programme qui demande à l'utilisateur de saisir son nom et son prénom.

Attention il peut y avoir des espaces dans le nom ou dans le prénom et les majuscules sont autorisées.

Les deux données sont stockées dans des variables.

### Ex 10.2

Ecrire une fonction qui transforme une chaîne de caractère en majuscule.

**Vous ne devez pas utiliser la fonction `toupper`**. Vous devez écrire votre propre fonction.

### Ex 10.3

Faire une fonction qui prend une chaine de caractère en entrée. 

Cette fonction va afficher la chaîne et le nombre de lettre.

On doit aussi pouvoir passer un paramètre à cette fonction pour donner la 
longueur de la chaine à afficher (le format du printf).

```console
La chaîne : 9
```
### 10.4

Avec les précédant exercices, écrire un programme qui :

Affiche le nom de l'utilisateur en majuscule avec le nombre de lettre et le prénom sans modification.

La séparation pour le nombre de lettre doit être aligné.

**Tester avec des espaces dans le nom ou prénom**

```console
MAULAZ : 6
Tony   : 4
```

### Ex 11 - Motif

Complèter la fonction `find` pour que le programme suivant affiche la position du motif s'il est présent dans 
la chaîne de caractères.

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
    
    return EXIT_SUCCESS;
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

## Ex 3
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

## Ex 4

```c
void func(char text[]);
```

## Ex 5

Le programme va afficher `helllo` et ensuite continuer d'afficher le contenu de la mémoire jusqu'à
ce que la valeur à afficher soit un `\0`

## Ex 6

```console
sizeof 1 = 8
sizeof 2 = 10
strlen 1 = 7
strlen 2 = 7
strlen 3 = 0
strlen 4 = 1
```

## Ex 7

`func2` est une implémentation plus rapide. Dans `func1` la fonction `strlen`
fait une première fois le parcours de la chaîne pour calculer la longueur et ensuite
il y a une deuxième boucle.

## Ex 8.1

Il y a une ligne vide entre les deux lignes car le `\n` n'a pas été supprimé

```console
Entrée 1 :  : abc
Entrée 2 :  : 123


abc

123
```

## Ex 8.2

```console
Entrée 1 :  : 12345
Entrée 2 :  : 

1234
5
```

## Ex 8.3
```console
Entrée 1 :  : 12345
Entrée 2 :  : abc


1234
abc
```
## Ex 9
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

## Ex 10

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
