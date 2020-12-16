# Tableau multi dimensions

Contrôler les réponses à chaque exercice

## Ex 1

Soit les variables suivantes 

```c
double meas0[] = {1.0, 2.0, 3.0};
double meas1[] = {1.1, 2.1, 3.1};
double meas2[] = {1.2, 2.2, 3.2};
double meas3[] = {1.3, 2.3, 3.3};
```

Le but est de remplacer les variables par un tableau.

Est-ce que l'initialisation suivante est correcte pour mettre les valeurs de la première ligne dans le tableau ?

Sinon trouver une façon de mettre les valeurs de `meas0` dans le tableau.

```c
    double meas[4][3];
    meas[0] = {1.0, 2.0, 3.0};
```

## Ex 2

Déclarer un tableau `meas` qui peut remplacer les 4 variables de l'exercice 1.

Les valeurs de l'ex 1 doivent être mise dans le tableau lors de la déclaration.

## Ex 3

Pour le tableau suivant, les valeurs sont `1 2`

```c
int a[] = {1,2};
```

Quelles sont les valeurs du tableau suivant :

```c
char tab[][2] = 
  {
    {'a', 'b'},
    {'z', 'u'},
    {'o', 'q'}
  };
```

## Ex 4

Quelles sont les valeurs du tableau suivant :

```c
char tab[5][2] = 
  {
    {'a', 'b'},
    {'z', 'u'},
    {'o', 'q'}
  };
```

## Ex 5

Considérant  le tableau suivant 

```c
double tab[2][3] = {
    {1.0, 1.1, 1.2},
    {2.0, 2.1, 2.2}
};
```
Quel est le type et la valeur de :

- 5.1 : tab[0][0] :
- 5.2 : tab[1][2] :
- 5.3 : tab[0][3] :
- 5.4 : tab[1] :

## Ex 6

Avec le tableau suivant 

```c
double point[3][2] = {
    {1.0, 1.1},
    {2.0, 2.1},
    {3.0, 3.1}
};
```

En Considérant que la première valeur pour un `point` est `x` et que la deuxième est `y`

```console
point[][0] => x
point[][1] => y
```

Ecrire une fonction qui permet de lire les valeurs de `x` et `y` d'un point et de les mettre
dans deux variables.

On va donc passer à cette fonction en paramètre le `tableau` et les deux variables `x` et `y`
dans lesquels on va stocker l'information.

Il faut compléter le code ci-dessous

```c
void read(...)
{
}

int main() 
{
    double tab[3][2] = {
        {1.0, 1.1},
        {2.0, 2.1},
        {3.0, 3.1}
    };

    double x, y;
    read(tab[0]...);

    printf("X : %lf\n", x);
    printf("Y : %lf\n", y);
}
```

## Ex 7

Dans cet exercice, il faudra développer un programme pas par pas.

Essayer de faire l'exercice  7 complet avant de regarder la solution

### Ex 7.1

On aimerait stocker une mesure qui est composée de deux valeurs.

Créer une variable `meas` qui peut contenir deux valeurs `double`

### Ex 7.2

Si vous avez bien réussi la première partie, vous devriez avoir un tableau 
avec une taille de `2` qui contient des `double`.

Votre programme devra maintenant demander à l'utilisateur de saisir les deux valeurs de la mesure
séparées par une `,`.

Si la saisie est correcte, les deux valeurs seront placées dans la variable `meas` de la partie 1.

### Ex 7.3

Modifier votre programme pour que l'utilisateur puisse saisir plusieurs mesures.

Le nombre de mesure doit être défini avec un `#define`

Lors de la saisie, il faut afficher dans le message le numéro de la mesure.

Une fois les saisies finies, il faut les afficher

```console
Mesure 0 : Entrer les 2 valeurs séparées par une , : 1.0,2.0
Mesure 1 : Entrer les 2 valeurs séparées par une , : 1.1,2.1
Mesure 2 : Entrer les 2 valeurs séparées par une , : 2.1,2.2

Meas 0 :  1.00 |  2.00
Meas 1 :  1.10 |  2.10
Meas 2 :  2.10 |  2.20
```

## Ex 8 - Matrice
Complèter le programme suivant pour qu'il retourne la matrice `mat` dans `dest`

Le programme suivant doit donc afficher

```console
$ ./mat
1 4 7 10
2 5 8 11
3 6 9 12
```

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE_L 4
#define SIZE_C 3

int main(void)
{
    int mat[SIZE_L][SIZE_C] =
    { {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
      {10, 11, 12} };

    int dest[SIZE_C][SIZE_L];

    // ...

    for (int l = 0; l < SIZE_C; l++)
    {
        for (int c = 0; c < SIZE_L; c++)
        {
            printf("%d%c", dest[l][c], c < (SIZE_L-1) ? ' ' : '\n');
        }
    }
}
```

# Solutions

## Ex 1

Non, il n'est pas possible d'utiliser les `{}` sauf lors de la déclaration d'un tableau.

Il faut utiliser la syntaxe suivante.

```c
    meas[0][0] = 1.0;
    meas[0][1] = 2.0;
    meas[0][2] = 3.0;
```

## Ex 2

```c
    double meas[4][3] = 
    {
        {1.0, 2.0, 3.0},
        {1.1, 2.1, 3.1},
        {1.2, 2.2, 3.2},
        {1.3, 2.3, 3.3}
    };
```

Attention ici le `4` n'est pas obligatoire


```c
    double meas[][3] = 
    {
        {1.0, 2.0, 3.0},
        {1.1, 2.1, 3.1},
        {1.2, 2.2, 3.2},
        {1.3, 2.3, 3.3}
    };
```

## Ex 3

```console
a b
z u
o q
```


## Ex 4

```console
a b
z u
o q
0 0
0 0
```


## Ex 5

```console
5.1 : double 1.0
5.2 : double 2.2
5.3 : double car le tableau est en double mais la valeur n'est pas définie car l'indice est en dehors du tableau
5.4 : double[3] Chaque ligne du tableau correspond à un tableau de `double` avec une taille de `3`
```

## Ex 6

```c
void read(const double tab[], double* x, double* y){
    *x = tab[0];
    *y = tab[1];
}

int main(int argc, char* argv[])
{
    double tab[3][2] = {
        {1.0, 1.1},
        {2.0, 2.1},
        {3.0, 3.1}
    };

    double x, y;
    read(tab[0], &x, &y);

    printf("X : %lf\n", x);
    printf("Y : %lf\n", y);

    return 0;
}
```

## Ex 7
```c
#define NBR_MEAS 3
int main(){
    double meas[NBR_MEAS][2];

    for(int i=0; i<NBR_MEAS; i++){
        int nbr;
        do{
            printf("Mesure %d : Entrer "
                "les 2 valeurs séparées par une , : ", i);
            nbr = scanf("%lf,%lf", &meas[i][0], &meas[i][1]);
            while(getchar() != '\n'){}
        }while(nbr != 2);
    }
    printf("\n");
    for(int i=0; i<NBR_MEAS; i++){
        printf("Meas %d : %5.2lf | %5.2lf\n", i, meas[i][0], meas[i][1]);
    }
}
```

## Ex 8
```c
    for (int l = 0; l < SIZE_L; l++)
    {
        for (int c = 0; c < SIZE_C; c++)
        {
            dest[c][l] = mat[l][c];
        }
    }
```
