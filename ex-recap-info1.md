## Recherche caractère

Compléter le code ci-dessous afin de compter le nombre de caractère dans une chaîne, le code doit être insensible à la casse.

Vous pouvez utiliser les libraires `string.h` et `ctype.h`

```c
#include <string.h>
#include <ctype.h>

int main(void)
{
    const char text[] = "Le texte à analyser. Avec des MAJUSCULE !";
    const char find_char = 'a';

    int count = 0;
    // ajouter le code ici ...

    printf("Il y a %d caractères", count);
}
```

## Saisie multiple

Ecrire un programme qui permet de calculer la somme des nombres saisis.

- Le nombre de valeur à saisir est défini par un `#define`
- On demande à l'utilisateur de saisir une valeur entière.
  - Lors de la saisie, on indique à l'utilisateur le numéro de la saisie qu'il est
    en train d'effectuer (saisie 3/5).
- Tant que la valeur est positive on calcul la somme
- A la fin du programme on affiche la plus petite valeur saisie, la plus grande et la somme.

## Recherche de motif

- On demande à l'utilisateur de saisir une chaine de caractère (peut contenir des espaces).
- On demande à l'utilisateur de saisir un motif (mot ou suite de lettre).
- On considère que le motif et la chaîne de caractère contiennent que des valeurs qui sont
  dans la table ASCII.
- Il faut compter le nombre de fois que le motif apparaît dans la chaine.

```console
Chaîne : Bonjour tout le monde
Motif : on
2
```

## Texte matrice
Complèter le programme suivant pour stocker le texte dans une matrice.

Si la matrice est trop petite, il faut retourner 1.

Un espace est ajouté entre chaque caractères lors de l'affichage, il n'est pas stocké dans la matrice.

L'affichage du programme :
```console
$ ./mat
B o n j o u r   l e
s   a m i s ,   v o
i c i   l e   t e x
t e   a   s a u v e
r   d a n s   l a  
m a t r i c e . 
```

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_L 20
#define SIZE_C 10

int main(void)
{
    char text[] = {"Bonjour les amis, voici le texte a sauver dans la matrice."};
    
    char mat[SIZE_L][SIZE_C] = { 0 };

    // ...

    for (int l = 0; l < SIZE_L; l++)
    {
        for (int c = 0; c < SIZE_C; c++)
        {
            if(mat[l][c] != '\0'){
                printf("%c%c", mat[l][c], c < (SIZE_C-1) ? ' ' : '\n');
            }
        }
    }
    printf("Il y a %d fois le caractères \'%c\'", count, find_char);
}
```

## Crible d'Ératosthène

Implémenter le crible en C

[lien](https://fr.wikipedia.org/wiki/Crible_d%27%C3%89ratosth%C3%A8ne)

## Dessin 

- Définir un tableau de 2 dimensions avec des `#define`
- Faire un programme qui dessine un `rond` de diamètre `R` dans ce tableau.
- Le diamètre est choisi avec un `define` ou `const`, il n'y a pas de saisie.
- Pour le dessin, vous devez regarder chaque points pour savoir si il faut l'afficher ou non.
  Pour le savoir, on doit mettre une tolérance sur le rayon et voir quels sont les points qui sont comrpis dans celle-ci.
- On utilise le caractère `* ` pour faire le dessin.
- Pour que l'affichage soit plus correcte, il faut afficher `'*'` et un `' '`
- Ensuite faire la même chose pour dessiner un carré autour du rond.
- Les formes sont dessinées au centre du tableau.
- Afficher le nombre d'étoile pour dessiner le rond et le carré.

```console
        * * * * * * * * * * * * * * * * *         
        *       *               *       *         
        *     *                   *     *         
        *   *                       *   *         
        * *                           * *         
        *                               *         
        *                               *         
        *                               *         
        *                               *         
        *                               *         
        *                               *         
        *                               *         
        * *                           * *         
        *   *                       *   *         
        *     *                   *     *         
        *       *               *       *         
        * * * * * * * * * * * * * * * * * 
        
Il y a 80 symboles.
```

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SIZE 25

int main(void)
{
    const char draw = '*';
    char mat[SIZE][SIZE] = {0};
    const int center = SIZE / 2;

    // circle
    const int rayon = 8;
    const double tol = 1.05;
    const double rayon_min = pow(rayon / tol, 2);
    const double rayon_max = pow(rayon * tol, 2);

    // code pour dessiner le cercle
    
    //square

    int cpt_star = 0;
    // calcul symbole ?

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            printf("%c ", mat[i][j] != '\0' ? mat[i][j] : ' ' );           
        }
        printf("\n");
    }

    printf("\n\nIl y a %d symboles.", cpt_star);
}
```

# Solutions

## Recherche caractère
```c
#include <string.h>
#include <ctype.h>

int main(void)
{
    const char text[] = "Le texte à analyser. Avec des MAJUSCULE !";
    const char find_char = 'a';

    int count = 0;
    for(int pos=0; text[pos] != '\0'; pos++){
        if( tolower(pos[text]) == tolower(find_char) ){
            count++;
        }
    }

    printf("Il y a %d fois le caractères \'%c\'", count, find_char);
}
```

## Texte matrice
```c
    if( strlen(text)+1 >= (SIZE_C * SIZE_L) ){
        return 1;
    }

    int col = 0;
    int ligne = 0;
    for(int pos=0; text[pos] != '\0'; pos++){
        mat[ligne][col] = text[pos];
        if( ++col >= SIZE_C ){
            col = 0;
            ligne++;
        }
    }
```

## Crible d'Ératosthène

```c
#include <stdio.h>
#include <math.h>

#define SIZE 1000
int main() {
    int array[SIZE];

    // Initialiser le tableau
    for (int i = 0; i < SIZE; i++)
        array[i] = i + 1;

    // Crible d'Ératosthène
    const int max = sqrt(SIZE);
    for (int nbr = 2; nbr < max; nbr++){
        if( array[nbr-1] < 0 )
            continue;
        for (int i = nbr*2; i <= SIZE; i+=nbr)
            array[i-1] = -1; // Discard number
    }
                
    // Affiche mon tableau
    int count = 0;
    for (int i = 0; i < SIZE; i++)
        if (array[i] != -1) // Ignore discarded
            printf("%5d%c", array[i], ++count % 10 == 0 ? '\n' : ' ');
    printf("\n");
}
```

## Dessin

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SIZE 25

int main(void)
{
    const char draw = '*';
    char mat[SIZE][SIZE] = {0};
    const int center = SIZE / 2;

    // circle
    const int rayon = 8;
    const double tol = 1.05;
    const double rayon_min = pow(rayon / tol, 2);
    const double rayon_max = pow(rayon * tol, 2);

    for( int x = 0; x < SIZE; x++){
        for( int y = 0; y < SIZE; y++ ){
            const double r2 = pow(x - center,2) + pow(y - center,2);
            if( r2 <= rayon_max && r2 >= rayon_min ){
                mat[x][y] = draw;
            }
        }
    }
    
    //square
    for( int x = center - rayon; x <= center + rayon; x++){
        mat[x][center - rayon] = draw;
        mat[x][center + rayon] = draw;
        mat[center - rayon][x] = draw;
        mat[center + rayon][x] = draw;
    }

    int cpt_star = 0;
    for( int x = 0; x < SIZE; x++){
        for( int y = 0; y < SIZE; y++ ){
            if( mat[x][y] == draw )
                cpt_star++;
        }
    }

    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            printf("%c ", mat[i][j] != '\0' ? mat[i][j] : ' ' );           
        }
        printf("\n");
    }

    printf("\n\nIl y a %d symboles.", cpt_star);
}

```
