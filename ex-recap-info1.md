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

## Dessin

- Définir un tableau de 2 dimensions avec des `#define`
- Faire un programme qui dessine un `rond` de diamètre `R` dans ce tableau.
- Le diamètre est choisi avec un `define` ou `const`, il n'y a pas de saisie.
- On utilise le caractère `*` pour faire le dessin.
- Pour un quart de cercle, on va placer un symbole par ligne dans la case.
  qui a le rayon le plus juste.
- Afficher le nombre d'étoile pour dessiner le rond.
- Ensuite faire la même chose pour dessiner un carré.
- La largeur du carré est donné par un `#define` qui représente le nombre de case.
- Les formes sont dessinées au centre du tableau.

## Crible d'Ératosthène

Implémenter le crible en C

[lien](https://fr.wikipedia.org/wiki/Crible_d%27%C3%89ratosth%C3%A8ne)

# Solutions

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
