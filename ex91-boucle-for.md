# Boucle `for`

## Ex 1
Dans le code suivant, quand est-ce que la condition `k=2` est exécutée ?

```C
for( k=2; k<100; k++){
}
```

## Ex 2
Est-ce que la condition (3ème expression) est exécutée avant le code ou après ?

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

## Le reste :
*[onlinegdb](https://www.onlinegdb.com/)*