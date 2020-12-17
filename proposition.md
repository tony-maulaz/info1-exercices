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
