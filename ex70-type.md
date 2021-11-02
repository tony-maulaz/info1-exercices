# Les types

## Ex 1
Quels sont le type et le résultat des expressions suivantes ?

Les variables suivantes sont déclarées:

```c
int val_i = 4;
char c = 'a';
bool val_b = true;
double val_d = 1.2;
```

Expression | Type | Valeur
---|---|---
2 + 3 |
4.5 * val_i |
4 % 2 |
4 > 3 |
c + 4 |
c + val_d |
val_i > 3 && val_d < 0.0 |
1/2 + 3.0 * 1 |

## Ex 2
Il y a deux variables déclarées :
```c
int a = 2;
int b = 34;
```

Stocker le résultat du test `a > b` dans une variable.

```c
//<type> <nom> = a > b;
```

# Solutions
## Ex 1

*Code ASCII `'c'` = 99*

Expression | Type | Valeur
---|---|---
2 + 3 | `int` | 5
2.5 * val_i | `double` | 10
4 % 3 | `int` | 1
4 > 3 | `int` ou `bool` | 1 ou true
c + 4 | `int` | 103
c + val_d | `double` | 100.2
val_i > 3 && val_d < 0.0 | `int` ou `bool` | false
1/2 + 3.0 + 5/7 | `double` | 3.0

## Ex 2
```c
bool res = a > b;
```
