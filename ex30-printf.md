# 30 - Affichage printf

# Ex 1
Modifier les `printf` suivants pour que les nombres soient alignés sur la droite.

```C
int val1 = 12;
int val2 = 4567;
int val3 = 1;

printf("V1 : %d\n", val1);
printf("V2 : %d\n", val2);
printf("V3 : %d\n", val3);
```

# Ex 2
Modifier les `printf` suivants pour que les nombres soient alignés avec la virgule.
Il doit y avoir 2 chiffres après la virgule d'affichés.

```C
double val1 = 12.3456;
double val2 = 4567.1;
double val3 = 1.876567;

printf("V1 : %lf\n", val1);
printf("V2 : %lf\n", val2);
printf("V3 : %lf\n", val3);
```

# Ex 3
Quel est l'affichage du programme suivant ?
```C
printf("Val-%2d",3451);
```

# Ex 4
Quel est l'affichage du programme suivant ?
```C
printf("Val-%2.3lf",34.45);
```

# Ex 5
Quel est l'affichage du programme suivant ?
```C
printf("Val-%6.2lf",34.45);
```

# Ex 6
Modifier le `printf` suivant pour afficher la variable `result` en hexadécimal.

L'affichage sera :
```console
Result en hex : 0xD
```

```C
int result = 13;
printf("Result en hex : ???", result);
```

## Solutions
### Ex 1
```C
int val1 = 12;
int val2 = 4567;
int val3 = 1;

printf("V1 : %4d\n", val1);
printf("V2 : %4d\n", val2);
printf("V3 : %4d\n", val3);
```

### Ex 2
```C
double val1 = 12.3456;
double val2 = 4567.1;
double val3 = 1.876567;

printf("V1 : %7.2lf\n", val1);
printf("V2 : %7.2lf\n", val2);
printf("V3 : %7.2lf\n", val3);
```

ou

```C
double val1 = 12.3456;
double val2 = 4567.1;
double val3 = 1.876567;

const int nbr = 7;
const int nbr_dig = 2;
printf("V1 : %*.*lf\n", nbr, nbr_dig, val1);
printf("V2 : %*.*lf\n", nbr, nbr_dig, val2);
printf("V3 : %*.*lf\n", nbr, nbr_dig, val3);
```

### Ex 3
```console
Val-3451
```

### Ex 4
```console
Val-34.450
```

### Ex 5
```console
Val- 34.45
```

### Ex 6
```C
int result = 13;
printf("Result en hex : 0x%X", result);
```