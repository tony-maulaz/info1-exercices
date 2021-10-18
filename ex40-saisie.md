# 40 - Saisie avec `Scanf`

## Ex 1
Remplissez le tableau ci-dessous comme si vous exécutiez le code suivant avec les différentes saisies.

Considérez que vous relancer le code depuis le début entre chaque saisie.

On fait l'hypothèse que la touche `enter` est enfoncée à la fin de chaque saisie.

```C
    printf("Veuillez entrer la valeur de A :\n>");
    int a;
    int ret = scanf("%d",&a);
```

Saisie | `ret` | `a` 
---|---|---
12 | | 
a69 | | 
67ua | | 
56.7 | | 

## Ex 2
Même consigne que pour l'exercice 1
```C
    printf("Veuillez entrer deux valeurs séparées par un espace :\n>");
    int a, b=3;
    int ret = scanf("%d %d",&a,&b);
```

Saisie | `ret` | `a` | `b`
---|---|---|--- 
34 a 12 | | | 
4.5 67 | | | 
34 67 | | | 
a 56 12 | | | 

## Ex 3
Même consigne que pour l'exercice 1
```C
    printf("Veuillez réaliser votre saisie :\n>");
    int a;
    double b;
    char c;
    int ret = scanf("%d %c %lf",&a,&c,&b);
```

Saisie | `ret` | `a` | `b` | `c`
---|---|---|--- |---
34 a 12 | | | 
4 6.7 | | | |
3.4o7.5 | | | 
8u7.3 | | | |

## Ex 4
En reprenant l'exercice #3, quelle serait le résultat en modifiant le format ainsi avec la saisie : `4 6.7`?
```C
    int ret1 = scanf("%d %c %lf",&a,&c,&b); // scanf Ex3
    int ret2 = scanf("%d%c %lf",&a,&c,&b); // scanf modifié
```

Scanf | `ret` | `a` | `b` | `c`
---|---|---|--- |---
Ex3 |  |  |  | 
Modifié | | | | 

## Ex 5
Écrire le code a placer après un `scanf` qui permet de vider le buffer ?

## Ex 6
Un produit est identifié avec un numéro de série qui respecte ce format : `PA135/78U`

Les lettres `PA  /  et  U` sont obligatoires.

Écrire un `scanf` qui permet d'extraire les deux nombres (entier) du numéro de série. Dans cette exemple il devrait pouvoir extraire `135` et `78`.

## Ex 7
Modifier le code ci-dessous pour le rendre robuste en contrôlant le nombre de valeurs récupérées par le `scanf`.

En cas d'erreur il faut quitter le programme.

```C
int val1, val2;
scanf("%d %d", &val1, &val2);
```

## Ex 8
Réaliser un programme qui demander à l'utilisateur de saisir deux lettres majuscules séparées par un espace.

Si le `scanf` ne peut pas extraire les deux valeurs, le programme retourne `2`.

Si les caractères saisis ne sont pas des majuscules, le programme retourne `1`.

**Vous ne devez pas utiliser de fonction de `ctype.h`**

## Solutions
### Ex 1

`x` pour indéfini

Saisie | `ret` | `a` 
---|---|---
12 | 1 | 12 
a69 | 0 | x 
67ua | 1 | 67
56.7 | 1 | 56 

### Ex 2

`x` pour indéfini

Saisie | `ret` | `a` | `b`
---|---|---|--- 
34 a 12 | 1 | 34 | 3
4.5 67 | 1 | 4 | 3
34 67 | 2 | 34 | 67 
a 56 12 | 0 | x | 3

### Ex 3
`x` pour indéfini
Saisie | `ret` | `a` | `b` | `c`
---|---|---|---|---
34 a 12 | 3 | 34 | 12 | 'a'
4 6.7 | 3 | 4 | 0.7 | 6
3.4o7.5 | 3 | 3 | 4 | '.'
8u7.3 | 3 | 8 | 7.3 | u

### Ex 4
Scanf | `ret` | `a` | `b` | `c`
---|---|---|--- |--- 
Ex3 | 3 | 4 | 0.7 | 6
Modifié | 3  | 4 | 6 | ' ' (space)

### Ex 5
```C
while( getchar() != '\n' ){}
```

### Ex 6
```C
int val1 = 0;
int val2 = 0;
int ret = scanf("PA%d/%dU", &val1, &val2);
if( ret != 2 ){
    return 1;
}
```

### Ex 7
```C
int val1, val2;
const int ret = scanf("%d %d", &val1, &val2);
if( ret != 2 ) {
    return 1;
}
```

### Ex 8
```C
#include <stdio.h>

int main()
{
    printf("Veuillez entrer deux lettres majuscules séparées par un espace :\n>");
    
    char c1, c2;
    int ret = scanf("%c %c", &c1, &c2);
    
    if(ret != 2){
        printf("Erreur sur le nombre d'entrée\n");
        return 2;
    }
    else if( c1 >= 'A' && c1 <= 'Z' &&
        c2 >= 'A' && c2 <= 'Z' ){
        printf("Vous avez entrez : %c et %c", c1, c2);
    }
    else{
        printf("Erreur caractère non valide\n");
        return 1;
    }

    return 0;
}
```