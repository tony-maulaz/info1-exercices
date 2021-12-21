# Exercices incréments

## Ex 1
Quel est l'affichage du code suivant ?
```C
int a = 0;

int b = a++;
printf("Val 1 : %d\n", b);

b = ++a;
printf("Val 2 : %d\n", b);
```

## Ex 2
Quel est l'affichage du code suivant ?
```C
int b;
while( ++b < 10 ){}
printf("Val b : %d",b);
```

## Ex 3
Quel est l'affichage du programme suivant ?
```C
int i=0;
char tab[] = {'1', '2', '3'};
printf("Val 1 : %c\n", tab[++i]);
printf("Val 2 : %c\n", tab[++i]);
```

## Ex 4
Quel est l'affichage du programme suivant ?
```C
int i=0;
if( i++ )
    printf("Cas 1");
else
    printf("Cas 2");
```


# Solutions
## Ex 1
```console
Val 1 : 0
Val 2 : 2
```

## Ex 2
```console
Val b : 10
```

## Ex 3
```console
Val 1 : 2
Val 2 : 3
```

## Ex 4
```console
Cas 2
```