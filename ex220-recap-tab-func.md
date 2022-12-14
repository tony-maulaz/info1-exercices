```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void print_blue(const char* str){
    printf("\033[1;34m%s\033[0m", str);
    printf("\n");
}

void print_red(const char* str){
    printf("\033[1;31m%s\033[0m", str);
    printf("\n");
}

// Ecrire une fonction qui compte le nombre de multiple de la variable val présent dans le tableau.
int cpt_multiple(int val, int tab[], size_t size){
    return 0;
}

// Ecrire une fonction qui modifie les valeurs dans le tableau pour avoir les valeurs absolues.
void abs_tab(int tab[], size_t size){
}

// Ecrire une fonction qui retourne la plut petite valeur positive du tableau 0 exclu ainsi que sa position dans le tableau.
// Si il n'y a pas de valeur positive, retourner false, sinon retourner true.
bool min_pos(int tab[], size_t size, int* min, size_t* pos){
    return false;
}

// Ecrire une fonction qui affiche le tableau passé en paramètre.
void print_tab(int tab[], size_t size){
}

// Ecrire une fonction qui affiche une suite de nombre par incérment de 1
// il est possible d'aller dans les deux sens
// spéarer les nombres par une virgule sauf pour le dernier
// 1,2,3,4...
// 10,9,8,7...
void print_suite(int start, int end){
}

// Ecrire une fonction qui retourne la somme des entiers de 1 à n (n supérieur à 0 et n inclus)
int somme(int n){
}

// Ecrire une fonction qui compte le nombre d'élement supérieur à la moyenne du tableau
// et qui retourne cette moyenne dans la variable mean
int cpt_sup_moy(int tab[], size_t size, double* mean){
}


int main(void){

    int tab[] = {4, 8, 15, 16, 23, 42};

    // . Complèter l'expression afin de calucler la taille du tableau tab
    const size_t size = sizeof(tab) / sizeof(tab[0]);

    print_blue("\nExercice 1");

    const int res1 = cpt_multiple(4, tab, size);
    if(res1 == 3)
        printf("res : %d  => cpt_multiple OK\n", res1);
    else
        printf("res : %d  => cpt_multiple KO\n", res1);

    print_blue("\nExercice 2");
    int tab2[] = {-4, 8, -15, 16, -23, 42};
    abs_tab(tab2, size);
    int tab2_expected[] = {4, 8, 15, 16, 23, 42};
    if(memcmp(tab2, tab2_expected, size) == 0)
        printf("abs_tab OK\n");
    else
        printf("abs_tab KO\n");


    print_blue("\nExercice 3");
    int tab3[] = {-4, 8, -15, 16, -23, 42};
    int min;
    size_t pos;
    if(min_pos(tab3, size, &min, &pos) == true && min == 8 && pos == 1)
        printf("min_pos OK\n");
    else
        printf("min_pos KO\n");

    print_blue("\nExercice print_tab");
    print_tab(tab2, size);

    print_blue("\nExercice print_suite");
    print_suite(1, 10);
    print_suite(5, 1);

    print_blue("\nExercice somme");
    const int res2 = somme(10);
    if(res2 == 55)
        printf("somme OK\n");
    else
        printf("somme KO\n");

    print_blue("\nExercice cpt_sup_moy");
    double mean;
    const int res3 = cpt_sup_moy(tab3, size, &mean);
    if(res3 == 3 && mean >= 3.99 && mean <= 4.01)
        printf("cpt_sup_moy OK\n");
    else
        printf("cpt_sup_moy KO\n");
}
```

## Solution
le réultat dans le terminal sera :

```console
Exercice 1
res : 3  => cpt_multiple OK

Exercice 2
abs_tab OK

Exercice 3
min_pos OK

Exercice print_tab
4 8 15 16 23 42 

Exercice print_suite
1,2,3,4,5,6,7,8,9,10
5,4,3,2,1

Exercice somme
somme OK

Exercice cpt_sup_moy
cpt_sup_moy OK
```
