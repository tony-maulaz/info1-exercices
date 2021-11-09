# Boucle `for`

## Ex 1
Dans le code suivant, quand est-ce que la condition `k=2` est exécutée ?

```C
for( k=2; k<100; k++){
}
```

## Ex 2
Est-ce que la 3ème expression est exécutée avant le code ou après ?

## Ex 3
Quel est l'affichage du programme suivant :

```C
for( int i=0; i<5; i++){
    printf("Val : %d\n", i);
}
```

## Ex 4
Quel est l'affichage du programme suivant :

```C
int k = 1;
for( ; k<2 ; ){
    k++;
    printf("%d\n", k);
}
```

## Ex 5
Quel est l'affichage du programme suivant :

```C
for( char c = 'e'; c < 'k'; c+=2 ){
    printf("%c", c);
}
```

## Ex 6
Quel est l'affichage du programme suivant :
```C
for( int i = 10; i > 0; i-- ){
    printf("%d\n", i);
    i--;
}
```

## Ex 7
Écrire une boule `for` qui permet d'afficher les multiples de `7` entre `1` et `100`;

```console
7
14
21
...
84
91
98
```

## Ex 8
Écrire une boucle `for` qui affiche les nombres de 57 à 24 de 3 en 3.
```console
1 : 57
2 : 54
3 : 51
...
10 : 30
11 : 27
12 : 24
```

## Ex 9
Écrire une boucle `for` qui affiche les 10 derniers caractères majuscules de l'alphabet.
```console
'Z'
'Y'
'X'
...
'R'
'Q'
```

## Ex 10
Écrire un programme avec 2 boucles `for` pour afficher une table de multiplication jusqu'à `3`
```console
X 1 2 3
1 1 2 3
2 2 4 6
3 3 6 9
```

# Solutions
## Ex 1
Une seule fois avant la première exécution de la boucle.

## Ex 2
Après le code

## Ex 7
```C
for( int i=1; i<100; i+=7){
    printf("%d\n", i);
}
```

## Ex 8
```C
    int cpt=1;
    for(int i=57; i>=23; i-=3){
        printf("%d : %d\n", cpt, i);
        cpt++;
    }
```

## Ex 9
```C
for(int i=0; i<10; i++){
    printf("%c\n", 'Z'-i);
}
``` 

## Ex 10
```C
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            
            if( i==0 && j == 0 ) // X dans le coin
                printf("X ");
            else if( j == 0 ) // première ligne
                printf("%d ", i);
            else if( i == 0 ) // premier nombre de la ligne
                printf("%d ",j);
            else
                printf("%d ",i*j);
                
        }
        printf("\n");
``` 

## Le reste :
*[onlinegdb](https://www.onlinegdb.com/)*
