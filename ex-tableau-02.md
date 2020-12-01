# Tableau avancé

## Ex 1

Est-ce que l'opération ci-dessous est valide ?

```c
char c[] = {1,2,3};
char c1[] = c;
```

## Ex 2

Ecrire une fonction qui copie un tableau 

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


# Solutions

## Ex 1

Non, on ne peut pas copier un tableau avec l'opérateur d'assignation.

## Ex 2

```c
void copy(const int c[], int c1[], int size){
    for(int i=0; i<size; i++){
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

