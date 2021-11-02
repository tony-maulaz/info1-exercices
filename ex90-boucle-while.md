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


## Ex 5
Créer une fonction qui demande à l'utilisateur de saisir une valeur entière.

Si la valeur saisie est incorrecte (non convertible), il faut demander à l'utilisateur de recommencer.

Dès qu'une valeur est saisie, la fonction retourne cette valeur.

## Ex 6
Modifier la fonction de l'exercice `#4` afin d'ajouter une borne `min` et `max` pour la validation de la valeur.

Il faut que la valeur saisie soit dans les bornes pour qu'elle soit valide.

Si la valeur est égale à la limite, la saisie est correcte.

Il faut indiquer les bornes à l'utilisateur.

```C
int ask_int(int min, int max){
    // ...
}
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