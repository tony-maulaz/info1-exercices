## Conditions
Soient les déclarations de variables suivantes :

```C
float x, y;
int condition;
```

Réécrire l’expression ci-dessous en mettant des parenthèses montrant l’ordre d’évaluation.

```C
condition = x >= 0 && x <= 20 && y > x || y == 50 && x == 2 || y == 60;
```

Donner la valeur de « condition » évaluée avec les valeurs suivantes de x et y.

1.  ) x = -1.0; y = 60.0;
1.  ) x = 0.0 ; y = 1.0;
1.  ) x = 19.0 ; y = 1.0;
1.  ) x = 0.0 ; y = 50.0; 
1.  ) x = 2.0 ; y = 50.0; 
1.  ) x = -10.0 ; y = 60.0;



## Binaire

Soient les déclarations suivantes :

`char m, n = 2, d = 0x55, e = 0xAA;`

Représentez en binaire et en hexadécimal la valeur de tous les bits de la variable m après exécution de chacune des instructions suivantes.

1)  `m = 1 << n;`
2)	`m = ~(1 << n);`
3)	`m = d | (1 << n);`
4)	`m = e | (1 << n);`
5)	`m = d ^ (1 << n);`
6)	`m = e ^ (1 << n);`
7)	`m = d & ~(1 << n);`
8)	`m = e & ~(1 << n);`

Pour chaque expression, dites quelle fonction elle remplit au niveau binaire. Ex : L’expression 1 calcule un nombre binaire dont seul le bit n est à 1.


## Ternaire
Exemple : `res = a>b ? 12 : 34` 
1.  Écrire une expression où a=12 si b est pair sinon a=0
1.  Écrire une expression où res=1 si le bit #3 de b égal 1 sinon res=0
1.  Ecrire une expression où res=true si b est un multiple de 27 sinon b=false

## Boucle (utiliser opérateur `++` et `--`)

1.  Faire une boucle `while` qui affiche les nombre de 23 à 56 séparé par `-` sans afficher la quarantaine. 40, 41..49

2.  Faire une boucle `for` qui affiche les nombres de 10 à 1 par intervalle de 3

3.  Faire `UNE` boucle qui affiche les nombres de 0 à 10 et de 10 à 0 en affichant une seule fois le 10

4.  Faire une boucle qui affiche les caractères de `F` à `W` séparé par `-`

5.  Faire une boucle `do...while` qui affiche les multiples de `13` entre `0 et 200` séparé par `,`

## Conditions

Quel est l'affichage de : 

```C
int a = 12, res;
if( a > 12 )
    res = 0;
else
    res = 12;

printf("Res : %d", res);
```

### Différence entre `if` et `else if`
Faite l'exercice suivant avec `a=5, a=10, a=15, a=20`
```C
int a, res1, res2;

if( a <= 10 )
    res1 = 0;
else if( a < 20 )
    res1 = 1;

if( a <= 10 )
    res2 = 0;
if( a < 20 )
    res2 = 1;

printf("Res1 : %d - Res2 : %d", res1, res2);
```

Faite l'exercice suivant avec `a=5, a=7, a=10, a=23`
```C
switch(a){
    case 1:
        res = 1;
        break;
    case 2:
        res = 2;
        break;
    case 5:
        res = 3;
        break;
    case 23:
    case 10:
        res = 4;
        break;
    default:
        res = 10;
        break;
}
printf("Res : %d", res);
```

## Conditions système

Dans un système nous avons les signaux suivant :
-  porte : `true` la porte est ouverte
-  lampe : `true` la lampe est allumée
-  det_presence : `true` une présence est détectée

### Système 1 :

Lorsque les deux portes sont ouvertes, il faut que la lampe soit éteinte

```C
bool porte1, porte2, lampe;
if( ... ){
    lampe = ...
}
else{
    ...    
}
```

### Système 2 :

Si une des deux portes est ouverte ou que le détecteur repère quelque chose, il faut que la lampe s'allume

```C
bool porte1, porte2, det_presence lampe;
if( ... ){
    lampe = ...
}
else{
    ...    
}
```

### Système 3 :

Si la porte 1 est ouverte et que le détecteur repère quelque chose, il faut que la lampe s'allume. Par contre si la porte 2 est fermée, il faut que la lampe soit dans tout les cas éteintes

```C
bool porte1, porte2, det_presence lampe;
if( ... ){
    lampe = ...
}
else{
    ...    
}
```

### Problèmes

On fait un compteur qui va de `0` à `100`
On affiche les valeurs suivante en fonction du compteur:
-  cpt < 10 : On affiche cpt
-  cpt <= 20 : On affiche cpt * 10
-  cpt <= 30 : On affiche cpt * 100
-  cpt > 30 : On affiche cpt

Exemple d'affichage

```bash
0 - 0
1 - 1
2 - 2
...
13 - 130
14 - 140
...
89 - 89
```

## Affichage

Remplir les `printf` suivant pour respecter l'affichage

### Affichage 1
```C
double a=1.00, b=1000.00
printf(...);
printf(...);
```

```BASH
|    1.00
| 1000.00  
```

### Affichage 2

```C
int a=1000, b=25
printf(...);
printf(...);
```

```BASH
val1     = 1000
valeur 2 = 25  
```

### Affichage 3

```C
int a=1000, b=25
printf(...);
printf(...);
```

```BASH
val1     = 1000
valeur 2 =   25  
```

### Affichage 4

```C
double a=0.001, b=100.4
printf(...);
printf(...);
```

```BASH
val1 =       0.001
valeur 2 = 100.4  
```

### Affichage 5

```C
double a=-12, b=100.123, c=-4.5
printf(...);
printf(...);
printf(...);
```

```BASH
| -12
| 100.123 
|  -4.5 
```
