# Arguments

## Ex 1
Dans le prototype de la fonction suivante `int main(int argc, char* argv[])` :
- A quoi correspond `argc` et quelle est la valeur minimum ?
- A quoi correspond `argv` ?

# Ex 2
Compléter la fonction `main` pour afficher l'argument (valeur entière) passé comme dans l'exemple ci-dessous :

Pas de traitement d'erreur.

```console
./app 12
La valeur est 12
```

```c
#include <stdio.h>

int main(int argc, char* argv[]){
    // ...
    printf("La valeur...");
}
```

# Ex 3
Compléter la fonction `main` pour afficher le 3e argument (valeur double) passé comme dans l'exemple ci-dessous :

Pas de traitement d'erreur.

```console
./app 12 c 45.251 3
La valeur est 45.25
```

```c
#include <stdio.h>

int main(int argc, char* argv[]){
    // ...
    printf("La valeur...");
}
```

# Ex 4
Le programme ci-dessous affiche la liste des arguments (valeurs entières).

Compléter la fonction `main` pour que le programme ci-dessous fonctionne même s'il manque des arguments :

Les mauvais types d'arguments ne sont pas gérés.

Il peut y avoir au maximum 3 valeurs numériques.

```console
./app 1
Les valeurs sont
  - 1
```

```console
./app 1 2 45
Les valeurs sont 
- 1
- 2
- 45
```

```c
#include <stdio.h>

int main(int argc, char* argv[]){
    int val1;
    int val2;
    int val3;
    // ...
    printf("Les valeurs sont\n");
    printf("  - %d\n", val1);
    printf("  - %d\n", val2);
    printf("  - %d\n", val3);
}
```

# Ex 5
Quel est l'affichage du programme suivant :

```console
./app 12 34
```

```c
#include <stdio.h>

int main(int argc, char* argv[]){    
    printf("La valeur 1 : %c\n", argv[1][0]);
    printf("La valeur 2 : %c\n", argv[2][0]);
}
```

# Ex 6
Modifier la fonction `main` pour que le programme affiche les arguments uniquement si la conversion est possible et que le nombre d'arguments est correct.

Dans le cas où il y a une erreur, le programme quitte en retournant la valeur `3`. 

- Le premier argument est entier.
- Le deuxième argument est double.

```console
./app 12 34.69
```

```c
#include <stdio.h>

int main(int argc, char* argv[]){    
    printf("La valeur 1 : %d\n" argv[1]);
    printf("La valeur 2 : %lf\n" argv[2]);
}
```

## Ex 7
Quel sont les valeurs des variables suivantes ?

 Appel | `argc` | `argv[0]` | `argv[1]` | `argv[2]` | `argv[3]`
 ---|---|---|---|---|---
| `./app 12 5 5.6 z` | | | | |
| `./app test tout 23.4 6` | | | | |
| `./app 2.6 foo/bar 5.6 8` | | | | |
| `./app 0 .3 aa bb foo 5` | | | | |


## Solutions
### Ex 1
- Le nombre d'arguments passé (au minimum 1 car c'est le nom du programme)
- Un tableau avec tous les arguments

### Ex 2
```c
#include <stdio.h>

int main(int argc, char* argv[]){
    int val = 0;
    sscanf(argv[1], "%d", &val);
    printf("La valeur est : %d", val);
}
```

### Ex 3
```c
#include <stdio.h>

int main(int argc, char* argv[]){
    double val = 0;
    sscanf(argv[3], "%lf", &val);
    printf("La valeur est : %.2lf", val);
}
```

### Ex 4
```c
#include <stdio.h>

int main(int argc, char* argv[]){
    int val;
    
    printf("Argc %d\n", argc);
    
    if( argc >= 2 ) {
        printf("Les valeurs sont\n");
        sscanf(argv[1], "%d", &val);
        printf("  - %d\n", val);
    }

    if( argc >= 3 ){
        sscanf(argv[2], "%d", &val);
        printf("  - %d\n", val);
    }
    
    if( argc >= 4 ){
        sscanf(argv[3], "%d", &val);
        printf("  - %d\n", val);
    }
        
    return 0;
}

```

### Ex 5
```console
La valeur 1 : 1
La valeur 2 : 3
```

### Ex 6
```c
#include <stdio.h>

int main(int argc, char* argv[]){
    
    if( argc != 3 ) 
        return 3;

    int val_i;
    double val_d;

    if( sscanf(argv[1], "%d", &val_i) != 1 )
        return 3;
    
    if( sscanf(argv[2], "%lf", &val_d) != 1 )
        return 3;
    
    printf("Les valeurs sont\n");
    printf("  - %d\n", val_i);
    printf("  - %lf\n", val_d);

    return 0;
}
```

### Ex 7
Quelles sont les valeurs des variables suivantes ?

 Appel | `argc` | `argv[0]` | `argv[1]` | `argv[2]` | `argv[3]`
 ---|---|---|---|---|---
| `./app 12 5 5.6 z` | 5 | `./app` | 12 | 5 | 5.6
| `./app test tout 23.4 6` | 5 | `./app` | test | tout | 23.4
| `./app 2.6 foo/bar 5.6 8` | 5 | `./app` | 2.6 | foo/bar | 5.6
| `./app 0 .3 aa bb foo 5` | 7 | `./app` | 0 | .3 | aa