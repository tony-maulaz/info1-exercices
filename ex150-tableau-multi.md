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
2 : Avec des nombres : 1 2 3 4 (26)
3 : Un texte de TesT!!! (19)
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



# Solutions
## Ex 3

```c
#include <stdio.h>

#define MAT_SIZE 4

void print_tab(int mat[][MAT_SIZE], int nbr_line){
    for(int l=0; l<nbr_line; l++){
        for(int pos=0; pos<MAT_SIZE; pos++){
            printf("%4d", mat[l][pos]);
        }
        printf("\n");
    }
}

void square_tab(int mat[][MAT_SIZE], int nbr_line){
    for(int l=0; l<nbr_line; l++){
        for(int pos=0; pos<MAT_SIZE; pos++){
            mat[l][pos] *= mat[l][pos];
        }
    }
}

int main()
{
    int tab[][MAT_SIZE] = {
        {1, 2, 3, 4}, 
        {-2, 0, 5, 6},
        {4, 8, 9, 10}
    };
    
    const int nbr_line = sizeof(tab) / (sizeof(int) * MAT_SIZE);
    
    printf("Line count : %d\n", nbr_line);
    
    printf("\nMatrice\n");
    print_tab(tab, nbr_line);
    square_tab(tab, nbr_line);
    printf("\nMatrice au carré\n");
    print_tab(tab, nbr_line);
}
```


## Ex 4

```c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TXT_SIZE 50

void print_tab(char mat[][TXT_SIZE], int nbr_line){
    for(int l=0; l<nbr_line; l++){
        printf("%d : %s (%ld)\n", l, mat[l], strlen(mat[l]));
    }
}

void tab_to_lower(char mat[][TXT_SIZE], int nbr_line){
    for(int l=0; l<nbr_line; l++){
        for(int pos=0; pos<TXT_SIZE; pos++){
            mat[l][pos] = tolower(mat[l][pos]);
        }
    }
}

// Il est aussi possible de créer une fonction qui transforme une chaîne
void string_to_lower(char txt[]){
    for(int i=0; txt[i] != '\0'; i++){
        txt[i] = tolower(txt[i]);
    }
}

// Conversion de chaque chaîne
void tab_to_lower2(char mat[][TXT_SIZE], int nbr_line){
    for(int l=0; l<nbr_line; l++){
        string_to_lower(mat[l]); // Conversion de chaque chaîne
    }
}

int main()
{
    char tab_txt[][TXT_SIZE] = {
        "Bonjour",
        "Hello",
        "Avec des nombres : 1 2 3 4",
        "Un texte de TesT!!!"
    };

    printf("\n\n");
    print_tab(tab_txt, 4);
    tab_to_lower(tab_txt, 4);
    printf("\n\n");
    print_tab(tab_txt, 4);

    return 0;
}
```