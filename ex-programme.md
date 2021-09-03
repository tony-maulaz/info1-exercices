# Premier code
## Ex 1.1 Que fait ce programme ?

Nous utiliserons dans les programmes ci-dessous les instructions suivantes, qui
seront étudiées en détail dans les prochains cours.

```C
float x; // déclare 1 variable x de type réel
scanf("%f", &x); // attend la saisie d'un réel, place le résultat dans x
printf("%f", y); // affiche la valeur du réel y. %f veut dire réel.
```

```C
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x, y;
    float a, b;

    printf("--- Programme exemple n 1 ---\n");
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("x=");
    scanf("%f", &x);
    
    y = a * x + b;
    
    printf("y=%f\n", y);
    
    return 0;
}
```

1. Où commence l’exécution de ce programme ?
1. Dans quel ordre s’exécutent les instructions ?
1. Décrivez ce que fait ce programme étape par étape.
1. Que verra l’utilisateur à l’écran ?
