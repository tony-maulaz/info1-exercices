## Ex 1

Créer une fonction qui calcul la moyenne de deux nombres entiers et qui 
retourne un double

## Ex 2
Quel est l'affichage du programme suivant

```C
    for( int i = 1; i < 10; i++){
        if( i == 4 )
            break;
        printf("i=%d\n", i);
    }
```

## Ex 3
Quel est l'affichage du programme suivant

```C
    for(char c = 'A'; c < 'G'; c++){
        if( c == 'C' || c == 'E' )
            continue;

        printf("C=%c\n", c);
    }
```

## Ex 4
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

## Ex 5
En **1 ligne** ecrire une expression qui affiche la valeur max entre deux entiers
```C
    int a=2, int b=5;
    printf(...)
``` 

L'affichage :
```BASH
Max = 5
```

## Ex 6

Faire une boucle `for` et utiliser un `switch` qui affiche les lettres de l'alphabet.

Si c'est une voyelle il faut afficher 
`Voy = <la lettre>` et si c'est une consonne 
`Cons = <la lettre>`

```BASH
Voy = a
Cons = b
Cons = c
Cons = d
Voy = e
Cons = f
...
```

## Ex 7
Quel est l'affichage du programme suivant

```C
    int value = 0;
    bool in_progress = true;
    for( ; in_progress; value+=3 ){
        printf("Value = %d\n", (value&1)==1 ? value : value+10);

        if( value > 13 )
            in_progress = false;
    }   
```
