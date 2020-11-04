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


## Ternaire
1.  Ecrire une expression où a=12 si b est pair sinon a=0
1.  Ecrire une expression où res=1 si le bit #3 de b égal 1 sinon res=0
1.  Ecrire une expression où res=true si b est un multiple de 27 sinon b=false
