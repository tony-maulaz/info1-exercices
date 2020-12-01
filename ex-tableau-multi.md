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

En Considérant que la première valeur de `point` est `x` et que la deuxième est `y`

```console
point[][0] => x
point[][1] => y
```

Ecrire une fonction qui permet de lire les valeurs de `x` et `y` dans un point.

On va donc passer à cette fonction en paramètre le `tableau`, `x` et `y`

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
