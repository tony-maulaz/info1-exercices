# 20 - Les conditions 

## Ex 1
Quel est l'affichage du code suivant :
```C
int cond = 3;
if( cond ){
    printf("Cond 1");
}
else{
    printf("Cond 2");
}
```

## Ex 2
Quel est l'affichage du code suivant :
```C
if( 4 + 2 ){
    printf("Cond 1");
}
else{
    printf("Cond 2");
}
```

## Ex 3
Quel est l'affichage du code suivant :
```C
if( 7 / 9 ){
    printf("Cond 1");
}
else{
    printf("Cond 2");
}
```

## Ex 4
Quel est l'affichage du code suivant :
```C
int val = 12;

if( val > 4 ){
    printf("Cond 1");
}
else if(val > 8){
    printf("Cond 2");
}
else{
    printf("Cond 3");
}
```

## Ex 5 
Récrire le code ci-dessous de manière simplifiée
```C
int val1;

if( val1 > 4 ){
    if( val < 8 ){
        printf("Cond 1");
    }
}
else if( val1 > 100 ){
    if( val == 120 ){
        printf("Cond 2");
    }
}
```


## Solutions
### Ex 1
```console
Cond 1
```

### Ex 2
```console
Cond 1
```

### Ex 3
```console
Cond 2
```

### Ex 4
```console
Cond 1
```

### Ex 5
```C
int val1;

if( (val1 > 4) && (val < 8) ){
    printf("Cond 1");
}
else if( val1 == 120 ){
    printf("Cond 2");
}
```