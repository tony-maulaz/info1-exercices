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

## Solution
[onlinegdb](https://www.onlinegdb.com/)