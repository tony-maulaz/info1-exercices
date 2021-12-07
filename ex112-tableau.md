# Ex 1

Donner une expression qui calcule le nombre d'éléments du tableau ?

```C
double tab[10];
size_t size = ...
```

# Ex 2
Dans le programme suivant, le but est d'utiliser la fonction `swap` pour intervertir les valeurs du 
tableau `meas`

Remplacez-les `...` pour faire l'appel à la fonction et l'affichage des valeurs

```c
void swap(int* val1, int* val2){
    const int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}

int main(){
    int meas[2] = {1,2};
    swap(...);
    printf("Ind 0 : %d\n", ...);
    printf("Ind 1 : %d\n", ...);
    return 0;
}
```

# Ex 3
Est-ce que l'opération ci-dessous est valide ?

```c
char c[] = {1,2,3};
char c1[] = c;
```

# Ex 4
Écrire une fonction qui copie un tableau 

La fonction ci-dessous doit copier les valeurs de `c` dans `c1`

Si la taille du tableau de destination est trop petite, le programme est fermé.

Si la taille du tableau source est plus petite que la destination, uniquement les valeurs du tableau source sont copiées.

```c
#include <stdio.h>

void copy(){
}

int main(int argc, char* argv[])
{
    int c[] = {1,2,3,4,5};
    int c1[3] = {0};

    size_t s1 = sizeof(c) / sizeof(c[0]);
    size_t s2 = sizeof(c1) / sizeof(c1[0]);

    copy();

    for(size_t i=0; i<s1; i++){
        printf("Tab C1[ %ld ] : %d\n", i, c1[i]);
    }
}
```

## Ex 5

Quel est le danger de la fonction développée à l'ex 4 ?

## Ex 6

Quel est le danger avec le programme suivant :

```c
double tab[] = {1.2, 2.3};
tab[2] = 0.0;
```

## Ex 7

Écrire une fonction qui calcule la valeur `moyenne` des éléments du tableau. 

Cette fonction doit aussi retourner la valeur `max` qui est dans le tableau.

Cette fonction n'a pas de valeur de retour, c'est uniquement des paramètres.

L'affichage du programme ci-dessous est :

```console
La moyenne : 3.50
La valeur max : 6
```

```c
#include <stdio.h>

void mean(...){
}


int main(void)
{
    int tab[] = {1,2,3,4,5,6};
    size_t size = 6;
    int max_tab;
    double mean_tab;
    mean(...);

    printf("La moyenne : %.2f\n", mean_tab);
    printf("La valeur max : %d\n", max_tab);
}
```

# Solution

## Ex 1

> Attention la solution 2 est moins bien, car si le type du tableau change, il y a un risque d'oublier de changer aussi dans le calcul de la taille.

```c
// 1) 
size_t size1 = sizeof(tab) / sizeof(tab[0]);

// 2) 
size_t size2 = sizeof(tab) / sizeof(double);
```

## Ex 2
```c
void swap(int* val1, int* val2){
    const int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}

int main(){
    int meas[2] = {1,2};
    swap(&meas[0], &meas[1]);
    printf("Ind 0 : %d\n", meas[0]);
    printf("Ind 1 : %d\n", meas[1]);
    return 0;
}
```

## Ex 3
Non, on ne peut pas copier un tableau avec l'opérateur d'assignation.

## Ex 4

```c
#include <stdio.h>

void copy(const int c[], int c1[], size_t size){
    for(size_t i=0; i<size; i++){
        c1[i] = c[i];
    }
}

int main(int argc, char* argv[])
{
    int c[] = {1,2,3,4,5};
    int c1[3] = {0};

    size_t s1 = sizeof(c) / sizeof(c[0]);
    size_t s2 = sizeof(c1) / sizeof(c1[0]);
    if( s2 < s1 )
        return 1;
    copy(c, c1, s1);

    for(size_t i=0; i<s1; i++){
        printf("Tab C1[ %ld ] : %d\n", i, c1[i]);
    }

    return 0;
}
```

## Ex 5

Si le paramètre `size` est plus grand que la taille du tableau.

## Ex 6
On accède à un indice du tableau qui est en dehors du tableau.

## Ex 7
```c
#include <stdio.h>
#include <limits.h>

void mean(int tab[], size_t size, int* max, double* mean){
    double sum = 0.;
    *max = INT_MIN;
    for(size_t i=0; i<size; i++){
        sum += tab[i];
        if( *max < tab[i] )
            *max = tab[i];
    }
    *mean = sum / size;
}


int main(void)
{
    int tab[] = {1,2,3,4,5,6};
    int max_tab;
    double mean_tab;
    mean(tab, 6, &max_tab, &mean_tab);

    printf("La moyenne : %.2f\n", mean_tab);
    printf("La valeur max : %d\n", max_tab);
}
```