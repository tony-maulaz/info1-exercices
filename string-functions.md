# Les fonctions sur les chaînes de caractères

Pour les exercices ci-dessous, il faut utiliser le code suivant.

Vous devez utiliser les fonctions qui se trouvent dans `<string.h>`

```c
int main(int argc, char* argv[])
{
    char text1[] = "Bonjour les amis\n";
    char text2[] = "Comment allez-vous ?";
    char text3[100];
    char text4[25];
    char text5[5];
}
```


## Ex 1
Utiliser une fonction pour trouver le nombre de caractère de `text1`

## Ex 2
Utiliser une fonction qui copie `text1` dans `text4` et qui affiche ensuite `text4`

## Ex 3
Utiliser une fonction qui copie `text1` dans `text4` avec limitation du nombre de caractère.
La limite étant la taille de `text4`.

Si on affiche `text4` après la copie, quel est le résultat ?

## Ex 4
Utiliser une fonction qui copie `text1` dans `text5` avec limitation du nombre de caractère.
La limite étant la taille de `text5`.

Si on affiche `text5` après la copie, quel est le résultat ?

## Ex 5
Faire un bout de code qui concatène `text1` et `text2` dans `text3` et qui affiche le résultat.

Il faut contrôler que la chaîne de destination est assez grande.

## Ex 6
Dans le programme ci-dessous, quelle est la valeur de `NB_CHAR_MAX` pour que le programme fonctionne.

Il faut regarder le code pour savoir combien de caractère l'utilisateur peut saisir.

La taille du tableau pour stocker la chaîne est `#define SIZE 10`.

```c
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define SIZE 10

#define NB_CHAR_MAX ???

int main()
{
    char text[SIZE];

    printf("Bonjour, entrer votre texte (taille max : %d) : \n", NB_CHAR_MAX);
    fgets(text, SIZE, stdin);
    printf("Vous avez entrer : %s\n", text);
}

```

# Solutions

```c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    char text1[] = "Bonjour les amis\n";
    char text2[] = "Comment allez-vous ?";
    char text3[40];
    char text4[25];
    char text5[5];

    // Ex 1
    printf("Ex 1 : %ld\n\n", strlen(text1));

    // Ex 2
    strcpy(text4, text1);
    printf("Ex 2 : %s\n\n", text4);

    // Ex 3
    strncpy(text4, text1, sizeof(text4));
    printf("Ex 3 : %s\n\n", text4);

    // Ex 4
    strncpy(text5, text1, sizeof(text5));
    printf("Ex 4 : %s\n\n", text5);

    // Ex 5
    if( sizeof(text3) >= (strlen(text1) + strlen(text2) + 1) ){
        strcpy(text3, text1);
        strcat(text3, text2);
        printf("Ex 5 : %s\n\n", text3);
    }
    else
        printf("Ex 5 : La dest est trop petite");
}
```

## Ex 6
On peut saisir 8 caractères car il y a le `\n` et le `\0`
