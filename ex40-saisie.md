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
En reprenant l'exercice #3, quel serait le résultat en modifiant le format ainsi avec la saisie : `4 6.7`?
```C
    int ret1 = scanf("%d %c %lf",&a,&c,&b); // scanf Ex3
    int ret2 = scanf("%d%c %lf",&a,&c,&b); // scanf modifié
```

Scanf | `ret` | `a` | `b` | `c`
---|---|---|--- |---
Ex3 |  |  |  | 
Modifié | | | | 

## Ex 5
### 5.1
Même consigne que pour l'exercice 1

Pour rappel, regarder le slide dans le polycopié *Inof1-05 slide 41*.<br/>
Lorsqu'il y a un espace dans le filtre, cela veut dire : 0 1 ou plusieurs espaces.

```C
    printf("Veuillez réaliser votre saisie :\n>");
    char c1, c2;
    int ret = scanf("%c %c",&c1,&c2);
```

Saisie | `ret` | `c1` | `c2`
---|---|---|---
1234 | | |
12 a | | |
a1 | | | 
a 1 | | |
u &nbsp; &nbsp; 2 | | | 

### 5.2

Idem que pour l'exercice `5.1` mais avec le filtre modifié.

```C
    printf("Veuillez réaliser votre saisie :\n>");
    char c1, c2;
    int ret = scanf("%c%c",&c1,&c2);
```

Saisie | `ret` | `c1` | `c2`
---|---|---|---
1234 | | |
12 a | | |
a1 | | | 
a 1 | | |
u &nbsp; &nbsp; 2 | | |

## Ex 6
Écrire le code a placer après un `scanf` qui permet de vider le buffer ?

## Ex 7
Un produit est identifié avec un numéro de série qui respecte ce format : `PA135/78U`

Les lettres `PA  /  et  U` sont obligatoires.

Écrire un `scanf` qui permet d'extraire les deux nombres (entier) du numéro de série. Dans cet exemple, il devrait pouvoir extraire `135` et `78`.

## Ex 8
Modifier le code ci-dessous pour le rendre robuste en contrôlant le nombre de valeurs récupérées par le `scanf`.

En cas d'erreur il faut quitter le programme.

```C
int val1, val2;
scanf("%d %d", &val1, &val2);
```

## Ex 9
Réaliser un programme qui demander à l'utilisateur de saisir deux lettres majuscules séparées par un espace.

Si le `scanf` ne peut pas extraire les deux valeurs, le programme retourne `2`.

Si les caractères saisis ne sont pas des majuscules, le programme retourne `1`.

**Vous ne devez pas utiliser de fonction de `ctype.h`**

## Ex 10
Réaliser un programme qui demande à un utilisateur de saisir une date dans ce format : `02/06/2021`

Récupérer les trois valeurs numériques dans des variables et afficher :

Il faut respecter l'alignement

```console
Jour  :   02
Mois  :   06
Année : 2021
```

## Ex 11
Réaliser un programme qui demande à l'utilisateur de saisir une date dans ce format : `02/06/2021 12:34`

Le message utilisateur doit être explicite.

Vous devez utiliser **un** seul `scanf`.

Récupérer les valeurs numériques dans des variables et les afficher.

Si la conversion en nombre n'est pas possible ou qu'il y a des erreurs, le programme retourne `2`.

Vous devez contrôler que mois jour heure minute sont dans les limites :

- 0 < mois <= 12
- 0 < jours <= 31
- 0 < année
- 0 < heure <= 24
- 0 < minute < 60

Exemple d'affichage
```console
Jour   : 02
Mois   : 06
Année  : 2021
Heure  : 12
Minute : 34
```

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
Modifié | 3  | 4 | 6.7 | ' ' (space)

### Ex 5
#### 5.1
Saisie | `ret` | `c1` | `c2`
---|---|---|---
1234 | 2 | '1' | '2'
12 a | 2 | '1' | '2'
a1 | 2 | 'a' | '1'
a 1 | 2 | 'a' | '1'
u &nbsp; &nbsp; 2 | 2 | 'u' | '2'

#### 5.2
Saisie | `ret` | `c1` | `c2`
---|---|---|---
1234 | 2 | '1' | '2'
12 a | 2 | '1' | '2'
a1 | 2 | 'a' | '1' 
a 1 | 2 | 'a' | ' '
u &nbsp; &nbsp; 2 | 2 | 'u' | ' '

### Ex 6
```C
while( getchar() != '\n' ){}
```

### Ex 7
```C
int val1 = 0;
int val2 = 0;
int ret = scanf("PA%d/%dU", &val1, &val2);
if( ret != 2 ){
    return 1;
}
```

### Ex 8
```C
int val1, val2;
const int ret = scanf("%d %d", &val1, &val2);
if( ret != 2 ) {
    return 1;
}
```

### Ex 9
```C
#include <stdio.h>

int main()
{
    printf("Veuillez entrer deux lettres majuscules séparées par un espace :\n>");
    
    char c1, c2;
    int ret = scanf("%c %c", &c1, &c2);
    
    if(ret != 2){
        printf("Erreur sur le nombre d'entrées\n");
        return 2;
    }
    else if( c1 >= 'A' && c1 <= 'Z' &&
        c2 >= 'A' && c2 <= 'Z' ){
        printf("Vous avez entré : %c et %c", c1, c2);
    }
    else{
        printf("Erreur caractère non valide\n");
        return 1;
    }

    return 0;
}
```

## Ex 11
```C
#include <stdio.h>

int exemple_date(){
    printf("\n\033[1;34mExemple de date\n\033[0;30m");

    printf("Veuillez entrer une date dans le format suivant : dd/mm/yyyy hh:mm\n>");

    int year, month, day, hour, minute;
    // utilise const car la variable ne peut pas changer
    const int ret = scanf( "%d/%d/%d %d:%d", &day, &month, &year, &hour, &minute);

    // Test le nombre de valeur converties par le scanf
    if( ret < 5 )
    {
        printf("Erreur de saisie");
        return 2;
    }

    if( year < 0 ||
        month <= 0 || month > 12 ||
        day <= 0 || day > 31 ||
        hour <= 0 || hour > 24 ||
        minute <= 0 || minute >= 60 )
    {
        printf("Erreur de saisie nombre invalide");
        return 2;
    }

    // on utilise une constante pour la largeur du texte
    const int length = 5;
    printf("Year    : %*d\n", length, year);
    printf("Month   : %*d\n", length, month);
    printf("Day     : %*d\n", length, day);
    printf("Hour    : %*d\n", length, hour);
    printf("Minute  : %*d\n", length, minute);

    return 0;
}
```