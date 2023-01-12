# Exercice - Les nombres aléatoires

## Objectif
Réaliser un programme qui génère un nombre aléatoire en utilisant la fonction `rand()` de la bibliothèque `stdlib.h`.

### Point 1
Comprendre et expliquer le code ci-dessous :

1. Comment est définie la valeur maximale de `val` ?
1. Pourquoi le résultat est-il différent entre les deux tests ?

```c
    printf("\nTest #1 : \n");

    for(int i=0; i<5; i++){
        srand( 10 );
        int val = rand();
        printf("%d : %d\n", i, val);
    }
    
    printf("\nTest #2 : \n");
    
    srand(10);
    for(int i=0; i<5; i++){
        int val = rand();
        printf("%d : %d\n", i, val);
    }

    unsigned int val = (unsigned int)time(NULL);
```

### Point 2
Créer une fonction qui génère un nombre aléatoire entier entre 0 et n (n est passé en paramètre).

### Point 3
Tester la qualité du générateur de nombre aléatoire.

Pour commencer, afin de tester la fonction de génération de nombre, ajouter une option dans le programme qui permet de générer une liste de 10 nombres aléatoires entre 0 et n (n est passé en paramètre).

> Il n'y a pas d'espace entre l'option et la valeur.

Exemple d'appel du programme :
```console
./random -t12 
4
0
10
2
5
12
8
9
9
1
```

Créer un programme qui génère des notes aléatoires entre 0 et 6 et affiche un histogramme des notes en pourcentage.

Le programme sera exécuté de cette manière : `./random 1000` où 1000 est le nombre de notes à générer.

L'affichage sera ainsi (une étoile représente 1%):

```bash
$ ./random 1000
0 : 0.0%
1 : 0.0%    
2 : 0.0%
3 : ************************************************** 50.0%
4 : 0.0%
5 : 0.0%
6 : ************************************************** 50.0%
```

### Cahier des charges
- L'affichage est fixe et ne doit pas être modifié.
- Le nombre de notes générées est passé en argument.
- La note minimale est 0.
- La note maximale doit être facilement configurable.
- Il n'est pas nécessaire de gérer les erreurs d'arguments.