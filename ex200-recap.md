# Serie 7

## Chaîne
Ecrire une fonction qui transforme une chaîne de caractères en minuscule.

## length
Ecrire une fonction qui retourne la longueur d'une chaîne passée en paramètre sans utiliser `strlen`.

## Swap
Ecrire une fonction qui échange deux valeurs entières 16bits signées passées en paramètre

## Bit
Donner une expression qui force le bit #2 d'une valeur à 1

## argv
Affiche version sur la sortie standard si
--version est présent dans un des arguments
void fonc(int argc, char* argv){
}


# Circuit RC

Dans cet exercice, il faut calculer la tension aux bornes d'un condensateur
dans un circuit RC.

Les données du circuit sont :
- `R = 100 [ohm]`
- `C = 1 [mF]`

Pour les calculs, l'incrément de temps sera de `1 [us]`. 

Le courant dans la résistance est donné par : `Ir = (U - Uc)/R` 

La variation de tension du condensateur pour un courant constant est donnée par : `Uc = 1/C * Ic * t` 

À la fin de chaque étape, affichez :
- le temps,
- le courant,
- la tension.

## Étape 1
Le circuit est alimenté avec une tension de `5 [V]` pendant `100 [ms]` 

## Étape 2
La tension passe à `10 [V]`, jusqu'à ce que le temps total soit de `200 [ms]`.

## Étape 3
La tension passe à `0.6 [V]`.  
Après le changement de tension, combien de temps faut-il pour que la tension
aux bornes du condensateur soit plus petite que `1.2 [V]` ?

## Étape 4
Calculer l'énergie dissipée par la résistance et afficher la valeur pour chaque étape.



# Déplacement

La consommation d'un engin propulsé se déplaçant à `25 km/h` est donnée par la formule suivante :
`c = 30 + m * 1.6 [l / km]` ou `m` est la masse totale du véhicule.

La masse du véhicule est de 1500 kg plus le carburant.

La masse volumique du carburant est de `1500 [kg/m3]`

Quelle distance peut-il parcourir en partant avec 50 litres de carburant.


# Chute 

Un objet de 80 kg est lâché avec une vitesse initiale nulle.

Sa force de frottement vaut `F = k * v`  
avec `k=34`

`F = m*a => m*g - k*v = m*a` 

Quelle est la vitesse maximale de l'objet ?

Combien de temps met l'objet pour tomber de `500 m` ?

Après combien de temps la vitesse de l'objet est stable ?



# Retournement

Un programme contient un tableau de chaînes de caractères. Il faut les afficher verticalement.

Le tableau a une capacité de 5 chaînes de caractères pouvant contenir 20 caractères chacune.

Compléter la fonction `affichage`

```C
#include <stdio.h>
#include <string.h>

#define NBR_STRING 5
#define MAX_CHAR 20

void affichage(char txt[][MAX_CHAR]){

}

int main()
{
    printf("Affichage\n\n");
    
    char txt[NBR_STRING][MAX_CHAR] = { "Test", "Hello", "Super", "A", "Bonjour" };

    affichage(txt);

    return 0;
}
```

Exemple d'affichage (version compliquée)
```console
Affichage

             B 
             o 
    H  S     n 
 T  e  u     j 
 e  l  p     o 
 s  l  e     u 
 t  o  r  A  r 
---------------
 4  5  5  1  7 
 ```

Exemple d'affichage (version simple)
```console
Affichage

 T  H  S  A  B 
 e  e  u     o 
 s  l  p     n 
 t  l  e     j 
    o  r     o 
             u 
             r 
---------------
 4  5  5  1  7  
 ```



# Solutions

## RC
```console
Step 1
  t = 100.00 [ms]
  Uc = 3.16 [V]
  Ic = 18 [mA]
  Energy = 0.011 [Ws]

Step 2
  t = 200.00 [ms]
  Uc = 7.48 [V]
  Ic = 25 [mA]
  Energy = 0.031 [Ws]

Step 3
  t = 444.00 [ms]
  dt = 244.00 [ms]
  Uc = 1.20 [V]
  Ic = -6 [mA]
  Energy = 0.055 [Ws]
```

## Déplacement
```console
Consommation
Distance : 20.09
```

## Chute
```console
Chute
Temps : 24.01
Vitesse : 23.08
Acc: 0.00
Dist : 500.01
Dist : 500.128658

```

# Code
## RC

```C
#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Simul\n");
    
    double u = 5;
    double dt = 1e-6;
    double r = 1e2;
    double c = 1000e-6;
    
    double ir, ic;
    double energy = 0;
    
    double uc = 0;

    double t1 = 1e-1;
    double t2 = 2e-1;
    double t;
    
    while( t < t1 ){
        ir = (u - uc) / r;
        energy += r * ir * ir * dt;
        double duc = ir * dt / c;
        uc += duc;
        t += dt;
    }
    printf("\nStep 1\n");
    printf("  t = %.2lf [ms]\n", t*1000);
    printf("  Uc = %.2lf [V]\n", uc);
    printf("  Ic = %.2lg [mA]\n", ir*1000);
    printf("  Energy = %.2lg [Ws]\n", energy);

    u = 10;
    while( t < t2 ){
        ir = (u - uc) / r;
        energy += r * ir * ir * dt;
        double duc = ir * dt / c;
        uc += duc;
        t += dt;
    }
    printf("\nStep 2\n");
    printf("  t = %.2lf [ms]\n", t*1000);
    printf("  Uc = %.2lf [V]\n", uc);
    printf("  Ic = %.2lg [mA]\n", ir*1000);
    printf("  Energy = %.2lg [Ws]\n", energy);


    u = 0.6;
    double tint = t;
    while( uc > 1.2 ){
        ir = (u - uc) / r;
        energy += r * ir * ir * dt;
        double duc = ir * dt / c;
        uc += duc;
        t += dt;        
    }    
    printf("\nStep 3\n");
    printf("  t = %.2lf [ms]\n", t*1000);
    printf("  dt = %.2lf [ms]\n", (t - tint)*1000);
    printf("  Uc = %.2lf [V]\n", uc);
    printf("  Ic = %.2lg [mA]\n", ir*1000);
    printf("  Energy = %.2lg [Ws]\n", energy);

    return 0;
}
```

## Déplacement
```C
#include <stdio.h>

int main()
{
    printf("Consommation\n");
    
    double masse = 1500.0;
    double capacite = 50;
    double masse_vol = 1.5;
    
    double vitesse = 25;
    
    double dt = 1e-4;
    double time = 0.0;
    
    double dist = 0;
    
    int cpt = 0;
    while( capacite > 0 ){
        
        double m = masse + capacite * masse_vol;
        double conso = (30 + m * 1.6)/(1e3); // l/m
        
        dist += vitesse * dt;
        
        double volume = conso * vitesse * dt;
        capacite -= volume;
    
        cpt++;
        time += dt;
    }
    
    printf("Distance : %.2lf", dist);
    

    return 0;
}
```

## Chute
```C
#include <stdio.h>

int main()
{
    printf("Chute\n");
    
    double masse = 80.0;
    double k = 34.0;
    double g = 9.81;
    
    double dt = 1e-2;
    double time = 0.0;
    
    double dist = 0.0;
    double vitesse = 0.0;
    double acc;
    
    double dst = 0;
    double dst_v = 0;
    
    int cpt = 0;
    while( dst_v < 500 ){
        
        double f = masse*g - k*vitesse;
        
        acc = f/masse;
        
        //dst += 0.5 * acc * dt * dt + vitesse * dt;
        
        vitesse += acc * dt;
        
        dst_v += vitesse * dt;
        
        cpt++;
        time += dt;
    }
    
    printf("Temps : %.2lf\n", time);
    printf("Vitesse : %.2lf\n", vitesse);
    printf("Acc: %.2lf\n", acc);
    printf("Dist : %.2lf\n", dst);
    printf("Dist : %.6lf\n", dst_v);
    

    return 0;
}
```


## Text
```C
#include <stdio.h>
#include <string.h>

#define NBR_STRING 5
#define MAX_CHAR 20

void affichage(char txt[][MAX_CHAR]){
    int size[NBR_STRING] = {0};

    int max = 0;
    for(int i=0; i<NBR_STRING; i++){
        size[i] = strlen(txt[i]);
        max = size[i] > max ? size[i] : max;
    }

    for(int pos_y=max-1; pos_y>=0; pos_y--){
        for(int k=0; k<NBR_STRING; k++){
            
            char c = pos_y < size[k] ? txt[k][size[k] - pos_y - 1] : ' ';
            
            printf(" %c ", c);
        }
        printf("\n");
    }
    
    for(int k=0; k<NBR_STRING; k++){
        printf("---");
    }
    printf("\n");
    
    for(int k=0; k<NBR_STRING; k++){
        printf(" %d ", size[k]);
    }
}

void affichage_simple(char txt[][MAX_CHAR]){
    int size[NBR_STRING] = {0};

    int max = 0;
    for(int i=0; i<NBR_STRING; i++){
        size[i] = strlen(txt[i]);
        max = size[i] > max ? size[i] : max;
    }

    for(int pos_y=0; pos_y<max; pos_y++){
        for(int k=0; k<NBR_STRING; k++){
            
            char c = txt[k][pos_y] != '\0' ? txt[k][pos_y] : ' ';
            printf(" %c ", c);
        }
        printf("\n");
    }
    
    for(int k=0; k<NBR_STRING; k++){
        printf("---");
    }
    printf("\n");
    
    for(int k=0; k<NBR_STRING; k++){
        printf(" %d ", size[k]);
    }
}

int main()
{
    printf("Affichage\n");
    
    char txt[NBR_STRING][MAX_CHAR] = { "Test", "Hello", "Super", "A", "Bonjour" };

    affichage(txt);

    printf("\n\n");
    affichage_simple(txt);
    return 0;
}
```