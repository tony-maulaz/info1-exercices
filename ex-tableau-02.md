# Tableau avancé

## Ex 0

Dans le programme suivant, le but est d'utiliser la fonction `swap` pour intervertir les valeurs du 
tableau `meas`

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

Remplacer les `...` pour faire l'appelle à la fonction et l'affichage des valeurs

## Ex 1

Est-ce que l'opération ci-dessous est valide ?

```c
char c[] = {1,2,3};
char c1[] = c;
```

## Ex 2

Écrire une fonction qui copie un tableau 

La fonction ci-dessous doit copier les valeurs de `c` dans `c1`

```c
void copy(...){
  ...
}

int c[] = {1,2,3,4,5};
int c1[5];

copy(...);
```

## Ex 3

Quel est le danger de la fonction développée à l'ex 2 ?


## Ex 4

char c[] = "Bonjour";

- 4.1 : Quelle est le type et la valeur de c[0] :
- 4.2 : Quelle est le type et la valeur de c[7] :
- 4.3 : Quelle est le type et la valeur de c[8] :

## Ex 5

Quel est le danger avec le programme suivant :

```c
double tab[] = {1.2, 2.3};
tab[2] = 0.0;
```

## Ex 6

Dans la fonction `copy` de l'exercice 2 :

- 6.1 : Pourquoi le premier `const` est important dans la fonction ci-dessous ?
- 6.2 : Pourquoi est-ce que l’on n’a pas besoin de mettre un `const` avec le dernier paramètre `int` ?

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

# Solutions


## Ex 0

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

## Ex 1

Non, on ne peut pas copier un tableau avec l'opérateur d'assignation.

## Ex 2

```c
void copy(const int c[], int c1[], size_t size){
    for(size_t i=0; i<size; i++){
        c1[i] = c[i];
    }
}

int main(int argc, char* argv[])
{
    int c[] = {1,2,3,4,5};
    int c1[5] = {0};
    copy(c, c1, 3);
}
```

## Ex 3

Si le paramètre `size` est plus grand que la taille du tableau.

## Ex 4

- 4.1 : char B
- 4.2 : char \0
- 4.3 : char undifined

## Ex 5

On accède à un indice du tableau qui est en dehors du tableau.

## Ex 7
```c
#include <stdio.h>

void mean(int tab[], size_t size, int* max, double* mean){
    double sum = 0.;
    *max = 0;
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
