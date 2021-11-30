# Ex boucle
## Ex 1
Quel est l'affichage du programme suivant

```C
    for( int i = 1; i < 10; i++){
        if( i == 4 )
            break;
        printf("i=%d\n", i);
    }
```

## Ex 2
Quel est l'affichage du programme suivant

```C
    for(char c = 'A'; c < 'G'; c++){
        if( c == 'C' || c == 'E' )
            continue;

        printf("C=%c\n", c);
    }
```

## Ex 3
Quel est l'affichage du programme suivant

```C
    int add = 1;
    int i = 0;
    while( i < 10 ){
        i += add;

        if( i == 5 ){
            add = 2;
            continue;
        }

        printf("i=%d\n",i);
    }
```

## Ex 4 
Écrire une fonction de type `void` qui affiche les valeurs entre deux bornes passées en paramètre.

L'incrément entre les valeurs est de 3.

Les valeurs sont séparées par une ','.

Cette fonction affiche les valeurs de la borne1 à la borne2 par ordre croissant.

Il est possible de rien n'avoir à afficher.

- int : borne1
- int : borne2

Prototype de la fonction
```C
void afficher(int b1, int b2);
```

Exemple
```C
afficher(9, 4);
printf("\n");
afficher(3, 11);
printf("\n");
afficher(6, 9);
```

```console

3,6,9
6,9
```


## Ex 5
Écrire une fonction de type `void` qui prend 4 valeurs en entrées
- int : borne1
- int : borne2
- int : inc
- char : sep

Cette fonction permet d'écrire les nombres d'une borne à l'autre comprise.

L'incrément entre les valeurs est donné par le paramètre `inc` qui est toujours positif.

Les bornes peuvent être dans n'importe quel ordre.

Les valeurs sont séparées par le caractère `sep`.

Prototype de la fonction
```C
void afficher(int b1, int b2, int inc, char sep);
```

Exemple
```C
afficher(9, 4, 2, '-');
printf("\n");
afficher(-8, 5, 3, ',');
printf("\n");
afficher(5, 1, 10, ' ');
printf("\n");
```

```console
4-6-8
-8,-5,-2,1,4
1
```


## Solution
[onlinegdb](https://www.onlinegdb.com/)