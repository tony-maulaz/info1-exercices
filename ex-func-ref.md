## Exercice sur les fonctions et paramètres

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

void saisie(char * txt){
    int ret;
    int v1, v2;
    do{
        printf(txt);
        ret = scanf("%d,%d", &v1, &v2);
        while(getchar() != '\n'){}
    }while(ret != 2);
    // ...
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

    i1 = 6;
    i2 = 12;
    i3 = 2;
    // Ecrire une fonction tri qui prend trois entiers en entrée.
    // Une fois la fonction terminée, il faut que les valeurs soient triées
    
    // tri( i1, i2, i3)
    
    printf("Q14 i1=%d, i2=%d, i3=%d\n", i1, i2, i3);
    // i1=2, i2=6, i3=12

    // Complèter la fonction saisie() pour que le programme affiche les 2 
    // entier saisis par l'utilisateur
    int i1, i2;
    saisie("Entrer 2 entiers séparés par une ,\n");
    printf("I1 = %d\nI2 = %d\n", i1, i2);
}
```

## Ex 2
```C
void test(double* v1, int v2){
    *v1 = v2;
}

void main(){
    double d = 1.2;
    char c = 'a';
    int i;
    
    test(&d, 5);
    printf("ex2 q1 = %lf\n", d);
    
    char* lc = &c;
    printf("char1 = %c\n", c);
    *lc = 'z';
    printf("char2 = %c\n", c);
    c = 'u';
    printf("char3 = %c\n", *lc);
    
    if( *lc == c )
        printf("Ex 2 q2 = true\n");
    else
        printf("Ex 2 q2 = false\n");
        
    if( lc == &c )
        printf("Ex 2 q3 = true\n");
    else
        printf("Ex 2 q3 = false\n");
        
    if( &lc == &c )
        printf("Ex 2 q4 = true\n");
    else
        printf("Ex 2 q4 = false\n");

    printf("ex 2 q5 = %c\n", c);    
    lc = 'z';
    printf("ex 2 q6 = %c\n", c);
    *lc = 'e';
    printf("ex 2 q7 = %c\n", c);
}
```

### Ex 2.1
Est-ce que l'expression suivante est correcte :
```c
test(2.3, 5);
```

### Ex 2.2
Quel est le risque avec le code suivant :
```c
double* link;
link = 300;
*link = 34.5;
```

### Ex 3.0
Quel est l'affichage du programme suivant :

```C
#include <stdio.h>

void func1(int* val){
    (*val)++;    
}

void func2(int val){
    val++;    
}

void func3(int* val){
    val++;    
}

void func4(int* val, int val1){
    val1 = 6;
    *val = val1;
}

void func5(int* val, int val1){
    *val = 5;
    val1 = *val;    
}

int main(int argc, char* argv[])
{
    int val = 0;
    int val1 = 12;

    func1(&val);
    printf("Rep 1 : %d\n", val);

    val = 0;
    func2(val);
    printf("Rep 2 : %d\n", val);

    val = 0;
    func3(&val);
    printf("Rep 3 : %d\n", val);

    val = 0;
    val1 = 12;    
    func4(&val, val1);
    printf("Rep 4 : %d  /  %d\n", val, val1);

    val = 0;
    val1 = 12;    
    func5(&val, val1);
    printf("Rep 4 : %d  /  %d\n", val, val1);
}
```


## Solutions
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

### Fonction tri
```c
void swap(int* i1, int* i2){
    int tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}

void tri(int* i1, int* i2, int* i3){
    if( *i1 > *i2) swap(i1, i2);
    if( *i1 > *i3) swap(i1, i3);
    if( *i2 > *i3) swap(i2, i3);
}

int main(int argc, char* argv[])
{

    int i1=1, i2=3, i3=2;
    tri(&i1, &i2, &i3);
    printf("i1=%d  i2=%d  i3=%d\n", i1, i2, i3);
}
```

### Saisie
```c
void saisie(char * txt, char* c1, char* c2){
    int ret;
    int v1, v2;
    do{
        printf(txt);
        ret = scanf("%d,%d", &v1, &v2);
        while(getchar() != '\n'){}
    }while(ret != 2);

    *c1 = v1;
    *c2 = v2;
}

int main(int argc, char* argv[])
{
    int i1, i2;
    saisie("Entrer 2 entiers séparés par une ,\n", &i1, &i2);
    printf("I1 = %d\nI2 = %d\n", i1, i2);
}
```

## Solutions Ex 2
```console
ex2 q1 = 5.0
char1 = a
char2 = z
char3 = u
Ex 2 q2 = true
Ex 2 q3 = true
Ex 2 q4 = false
ex 2 q5 = u
ex 2 q6 = u
ex 2 q7 = u
```

### Ex 2.1

Non, on ne peut pas passer l'adresse d'une constante car la valeur n'est pas modifiable

### Ex 2.2

On écrase une valeur dans la mémoire du système alors que l'on ne sait pas à quoi correspond l'adresse `300`

### Ex 3.0

```C
Rep 1 : 1
Rep 2 : 0
Rep 3 : 0
Rep 4 : 6  /  12
Rep 4 : 5  /  12
```
