# Les tableaux

## Ex 1

Quel est l'affichage du programme suivant

```c
int tab[6] = {0};
tab[1] = 4;
tab[3] = 2;

for(int i = 0; i<6; i++){
    printf("ind = %d - val = %d\n", i, tab[i]);
}
```

## Ex 2

Quel est l'erreur du programme suivant

```c
int tab[6];
tab[1] = 4;
tab[6] = 2;
```

## Ex 3

- Faire un tableau de `10` `char`.
- Initialiser le tableau avec des `espaces`.
- Remplir le tableau avec les voyelles en partant de l'indice `0`.
- Faire une boucle `for` qui affiche les voyelles
  (on ne doit pas afficher les ' ').

```console
Exemple de valeur dans le tableau
0 => 'a'
1 => 'e'
```

## Ex 4

```c
int tab_i[] = {1, 2, 3};
double tab_d[] = {4.5, 1e-2};
bool tab_b[] = {true, true, false, false};
```

Quel est le type de `tab_i[1] * tab_d[0]` :

Quel est le type de `tab_i[1] > tab_d[0]` :

Quel est le type de `tab_i[0] & tab_i[1]` :


## Ex 5

Quel est l'affichage de 

```c
int tab_i[] = {1, 2, 3};
double tab_d[] = {4.5, 1e-2};
bool tab_b[] = {true, true, false, false};

tab_b[0] = tab_d[1] > tab_i[1];
if( tab_b[0] && !tab_b[2])
    printf("Foo");
else
    printf("Bar");
```

## Ex 6

Quel est l'affichage de 

```c
int tab[10];

for( int i = 0; i < 10; i++ ){
    if( i % 2 == 0 )
        tab[i] = i;
    else
        tab[i] = 0;
}

for( int i = 0; i < 10; i++ ){
    printf("val=%d\n", tab[i]);
}
```


## Solutions

### Ex 1

```console
ind = 0 - val = 0
ind = 1 - val = 4
ind = 2 - val = 0
ind = 3 - val = 2
ind = 4 - val = 0
ind = 5 - val = 0
```

### Ex 2

Ici l'indice `6` n'existe pas car la taille du tableau est de `6`.

### Ex 3

```c
char tab[10];

for( int i = 0; i<10; i++){
    tab[i] = ' ';
}

int ind = 0;
tab[ind++] = 'a';
tab[ind++] = 'e';
tab[ind++] = 'i';
tab[ind++] = 'o';
tab[ind++] = 'u';
tab[ind++] = 'y';

for( int i = 0; i<10; i++){
    if( tab[i] != ' ' ){
        printf("voy = %c\n", tab[i]);
    }
}
```

### Ex 4

Quel est le type de `tab_i[1] * tab_d[0]` : double

Quel est le type de `tab_i[1] > tab_d[0]` : bool

Quel est le type de `tab_i[0] & tab_i[1]` : int

### Ex 5
```console
Bar
```

### Ex 6
```console
val=0
val=0
val=2
val=0
val=4
val=0
val=6
val=0
val=8
val=0
```
