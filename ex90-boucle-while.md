# Ex boucle while

## Ex 1
Quel est l'affichage du programme suivant :
```C
int i = 0;
while( i < 5 ){
    printf("%d\n", i);
    i++;
}
```

## Ex 2
Quel est l'affichage du programme suivant :
```C
int i = 0;
while( i < 50 ){
    i++;
}
printf("%d\n", i);
```

## Ex 3
Quel est l'affichage du programme suivant :
```C
int i = 100;
bool inProgress = true;

while( inProgress ){
    if( i <= 0 ){
        inProgress = false;
    }
    i--;
}
printf("%d\n", i);
```

## Ex 4
Quel est l'affichage du programme suivant :
```C
char c  = 'e';
while( c < 'u' ){
    c++;
}
printf("%c\n", c);
```


## Ex 7
Créer une boucle `while` qui affiche les lettres de `A` à `Z` séparées par une `,`

```console
A,B,C,D...X,Y,Z
```

# Solutions
## Ex 5
**Ne pas oublier de vider le buffer**

```C
#include <stdio.h>
#include <stdbool.h>

int ask_int(){
    int value;
    bool isCorrect = false;

    printf("Veuillez entrer une valeur entière :\n>");

    while(!isCorrect){
        if( scanf("%d", &value) == 1 ){
            isCorrect = true;   
        }
        else{
            printf("Saisie incorrecte, veuillez recommencer\n");
        }
        while( getchar() != '\n' ){}
    }
    return value;
}

int main()
{
    printf("%d", ask_int());
    return 0;
}
```

Ou
```C
#include <stdio.h>
#include <stdbool.h>

int ask_int(){
    int value;

    printf("Veuillez entrer une valeur entière :\n>");

    while(true){
        
        const int ret = scanf("%d", &value);
        while( getchar() != '\n' ){}
        if( ret == 1 ){
            return value;
        }
        
        printf("Saisie incorrecte, veuillez recommencer\n");
    }
}

int main()
{
    printf("%d", ask_int());
    return 0;
}
```

## Ex 6

```C
#include <stdio.h>
#include <stdbool.h>

int ask_int(int min, int max){
    int value;

    printf("Veuillez entrer une valeur entière entre %d et %d:\n>", min, max);

    while(true){        
        const int ret = scanf("%d", &value);
        while( getchar() != '\n' ){}
        if( ret == 1 && value >= min && value <= max ){
            return value;
        }
        
        printf("Saisie incorrecte, veuillez recommencer\n");
    }
}

int main()
{
    printf("%d", ask_int(4, 9));
    return 0;
}
```

## Ex 7
```C
char c = 'A'; 
while(c <= 'Z'){    
    printf("%c",c);

    if( c != 'Z')
        printf(",");
    c++;
}
```
