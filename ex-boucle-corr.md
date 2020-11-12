## Ex 1

Créer une fonction qui calcul la moyenne de deux nombres entiers et qui 
retourne un double

```C
// Ex 1
    double moyenne(int val1, int val2){
        return (val1 + val2)/2.0;
    }
```

## Ex 2
Quel est l'affichage du programme suivant

```C
    for( int i = 1; i < 10; i++){
        if( i == 4 )
            break;
        printf("i=%d\n", i);
    }
```

```BASH
i=1
i=2
i=3
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

```BASH
C=A
C=B
C=D
C=F
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

```BASH
i=1
i=2
i=3
i=4
i=7
i=9
i=11
```

## Ex 5
En **1 ligne** ecrire une expression qui affiche la valeur max entre deux entiers
```C
    int a=2, int b=5;
    printf(...)
``` 

```C
    printf("Max = %i", a>b?a:b );
```

L'affichage :
```BASH
Max = 5;
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
```

```C
    for (char c = 'a'; c <= 'z'; c++)
    {
        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            printf("Voy = %c\n", c);
            break;
        
        default:
            printf("Cons = %c\n", c);
            break;
        }
    }
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

```BASH
Value = 10
Value = 3
Value = 16
Value = 9
Value = 22
Value = 15
```
