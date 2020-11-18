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
    int i1, i2;
    do{
        printf(txt);
        ret = scanf("%d,%d", &i1, &i2);
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
    // caractères saisis par l'utilisateur
    char c1, c2;
    saisie("Entrer 2 entiers séparés par une ,\n");
    printf("C1 = %c\nC2 = %c\n", c1, c2);
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
    lc = 'u';
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

## Solutions
```BASH
Q2 = 17
Q1 = 12
Q3 = -1600249280
Q4 = 12
Q5 = 0
Q3 = -1600249276
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
