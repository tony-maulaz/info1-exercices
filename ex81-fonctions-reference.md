# Fonctions references 

> **Attention :** Pour ces exercices, testez vos fonctions avec [onlinegdb](https://www.onlinegdb.com)

## Ex 1
Définissez une fonction `void triple(...)` qui prend un paramètre entier en entrée et ne retourne rien.
Cette fonction modifie le paramètre passé afin d'avoir le triple de la valeur

```
// exemple d'appel de la fonction
int val = 2;
triple(...);
printf("Res : %d", val);
```

```console
Res : 6;
```

## Ex 2
Définir une fonction de type `bool` qui prend un caractère en entrée.
- si c'est une lettre minuscule, la fonction modifie la lettre en majuscule et retourne `true`
- sinon elle retourne `false` et le paramètre reste inchangé.

## Ex 3
Quel est l'affichage du programme suivant

```C
void func1(int val){
    val = val + 5;
    printf("Q2 = %d\n", val);
}

void func2(int* val){
    printf("Q3 = %d\n", val);
    printf("Q4 = %d\n", *val);
    *val = 0;
}

void func3(int val1, int val2, double* val3){
    *val3 = val1 + val2;
}

int func4(int* i, double* d){
    printf("Q10 = %d\n", *i);
    *i = *d;
    return 8;
}


int main(int argc, char *argv[])
{
    int i1 = 12;
    int i2 = 1;
    int i3 = 0;
    double d1 = 1.2;

    func1(i1);
    printf("Q1 = %d\n", i1);

    func2(&i1);
    printf("Q5 = %d\n", i1);
    
    func2(&i2);
    printf("Q6 = %d\n", i2);

    i1 = 5;
    i2 = 2;
    func3(i1, i2, &d1);
    printf("Q7 i1=%d\n", i1);
    printf("Q8 i2=%d\n", i2);
    printf("Q9 d1=%lf\n", d1);

    i1 = 3;
    d1 = 4.5;
    int res = func4(&i1, &d1);
    printf("Q11 i1=%d\n", i1);
    printf("Q12 d1=%lf\n", d1);
    printf("Q13 res=%d\n", res);
}
```

## Ex 4
Définir une fonction `swap` qui intervertit deux valeurs entières passées en paramètre.


## Ex 5
Écrire une fonction `tri` de type `void` qui prend trois entiers en entrée.
Une fois la fonction terminée, il faut que les valeurs soient triées par ordre croissant.

Utiliser la fonction `swap` de l'exercice `#4`

Le premier paramètre doit être le plus petit.

```C
    i1 = 6;
    i2 = 12;
    i3 = 2;
    
    tri( i1, i2, i3)
    
    printf("Res tri : i1=%d, i2=%d, i3=%d\n", i1, i2, i3);
```

Affichage
```console
Res tri : i1=2, i2=6, i3=12
```

## Ex 6
Écrire une fonction de type `void` qui prend 3 paramètres en entrée
- val : int
- min : int
- max : int

- Si `val` est plus grand que `max`, `val` prend la valeur de `max`
- Si `val` est plus petit que `min`, `val` prend la valeur de `min`
- Sinon `val` reste inchangée.


## Solutions
### Ex 3
```BASH
Q2 = 17
Q1 = 12
Q3 = -1600249280 (adresse, nombre aléatoire)
Q4 = 12
Q5 = 0
Q3 = -1600249276 (adresse, nombre aléatoire)
Q4 = 1
Q6 = 0
Q7 i1=5
Q8 i2=2
Q9 d1=7.000000
Q10 = 3
Q11 i1=4
Q12 d1=4.500000
Q13 res=8
```
