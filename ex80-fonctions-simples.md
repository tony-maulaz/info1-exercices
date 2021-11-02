# Fonctions simples

## Ex 1
Déclarer une fonction `Print` qui permet d'afficher `Bonjour` sur la console.

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
Déclarer une fonction qui retourne la moyenne (`double`) de deux entiers passés en paramètres.

## Ex 4
Déclarer une fonction qui retourne la valeur `max` entre 3 entiers passés en paramètres.


# Solutions
## Ex 1
Le `void` comme paramètre est important.

```C
void Afficher(void){
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