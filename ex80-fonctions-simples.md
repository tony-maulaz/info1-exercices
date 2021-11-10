# Fonctions simples

## Ex 1
Déclarer une fonction `Print` qui permet d'afficher `Bonjour` sur la console.

Avec cette fonction, le code suivant doit fonctioner
```C
#include <stdio.h>

// la fonction...

int main(){
    Print();
}
```

## Ex 2
Déclarer une fonction `PrintReal` qui permet d'afficher un nombre réel.
- Premier paramètre : Le nombre (`double`)
- Deuxième paramètre : Le nombre de chiffres après la virgule (`int`).

Exemple :
```C
PrintReal( 23.436, 1) // => Affichage : 23.4
PrintReal( 1.45, 2) // => Affichage : 1.45
```

## Ex 3
Définir une fonction de type `double`(cela indique le type de la valeur de retour) qui retourne la moyenne de deux entiers passés en paramètres.

## Ex 4
Définir une fonction qui retourne la valeur `max` entre 3 entiers passés en paramètres.

## Ex 5
Définir une fonction de type `int` qui retourne la valeur absolue d'une valeur entière passée en paramètre.

## Ex 6 
Écrire une fonction qui prend un caractère comme paramètre d'entrée. Si le caractère est compris dans `[a-z]`, la fonction retourne le caractère en majuscule sinon elle retourne le caractère passé en paramètre.

Vous ne devez pas utiliser de fonction dans `ctype.h` pour transformer le caractère.

# Solutions
## Ex 1
Le `void` comme paramètre est important.

```C
void Print(void){
    printf("Bonjour")
}
``` 

## Ex 2
```C
void PrintReal(double value, int nbr){
    printf("%.*lf", nbr, value);
}
```

## Ex 3
**Très important d'utiliser `2.0` pour que la division soit en `double`**
```C
double Mean(int val1, int val2){
    return (val1 + val2) / 2.0;
}
```

## Ex 4
Il est possible de le faire en une fonction mais cela est plus compliqué.

```C
int max(int a, int b){
    if( a > b )
        return a;
    else
        return b;
}

int max_3_int(int a, int b, int c){
    return max( max(a, b), c);
    /*
      Explicite
      int max_a_b = max(a,b);
      return max( max_a_b, c );
    */
}
```

## Ex 5
```C
int AbsInt(int val){
    if( val <= 0 )
        return val * -1;
    else
        return val;
}
```

## Ex 6
```C
char ToUpper(char c){
    if( c >= 'a' && c <= 'z' ){
        return c - ('a' - 'A');
    }
    else{
        return c;
    }
}
```
