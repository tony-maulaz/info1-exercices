# Exercices tableaux multi-dimensionnels 

## Ex 1
Quel est l'affichage du programme suivant ?

```c
int tab[2][3] = {{1, 2, 3}, {4, 5, 6}};
printf("%d\n", tab[1][2]);
```

## Ex 2
Quel est l'affichage du programme suivant ?

```c
int tab[2][3] = {{1, 2, 3}, {4, 5, 6}};
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", tab[i][j]);
    }
}
```

## Ex 3
Réaliser un programme pour exécuter les instructions suivantes :

### 3.1) Déclarer la matrice de valeurs entières suivante :
**Les valeurs doivent être initialisées lors de la déclaration**

```
1 2 3 4
-2 0 5 6
4 8 9 10
```

### 3.2) Réaliser une fonction qui affiche la matrice
L'affichage des nombres est fait sur 4 caractères

### 3.3) Réaliser une fonction qui modifie la matrice pour mettre toutes les valeurs au carré

Le `main` sera le suivant :
```c
int main() {
    int tab[3][3]; // déclaration de la matrice et initialisation des valeurs

    print_tab();
    square_tab();
    print_tab();
    
    return 0;
}
```

## Ex 4
Déclarer un tableau de chaînes de caractères de 50 éléments et initialiser les valeurs suivantes :
```
Bonjour
Hello
Avec des nombres : 1 2 3 4
Un texte de TesT!!!
```

### 4.1) Réaliser une fonction qui affiche le tableau de chaînes de caractères avec la taille de chaque chaîne.
L'affichage sera le suivant :
```	
0 : Bonjour (7)
1 : Hello (5)
2 : Avec des nombres : 1 2 3 4 (27)
3 : Un texte de TesT!!! (18)
```

### 4.2) Réaliser une fonction qui transforme le tableau de chaînes de caractères en minuscules.

Le programme principal sera le suivant :
```c
int main() {
    char tab[][]; // déclaration du tableau de chaînes de caractères

    print_tab();
    lower_tab();
    print_tab();
    
    return 0;
}
```