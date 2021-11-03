# Switch

## Ex 1
Quel est l'affichage du programme suivant :

*Attention aux `break`*

```C
for(int i=0; i<10; i++){
    switch(i){
        case 1:
        case 2:
            printf("V1\n");
            break;

        case 4:
        case 8:
            printf("V2\n");
            break;

        case 5:
            printf("V3\n");
            break;

    }
}
```

## Ex 2
Quel est l'affichage du programme ?

*Attention aux `break`*

```C
int i = 4;
switch(i){
    case 1:
    case 2:
        printf("V1\n");
        break;

    case 4:
    case 8:
        printf("V2\n");

    case 5:
        printf("V3\n");
        break;

}
```

## Ex 3
Ajouter un switch dans la boucle ci-dessous afin d'afficher les voyelles.

```C
for(char c='A'; c < 'Z'; c++){
    // switch ...
}
```

```console
Voyelle : A
Voyelle : E
...
Voyelle : Y
```


## Solutions
### Ex 1
```console
V1
V1
V2
V3
V2
```

### Ex 2
```console
V2
V3
```

### Ex 3
```C
for(char c='A'; c < 'Z'; c++){
    switch(c){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            printf("Voyelle : %c\n",c);
            break;
    }
}
```