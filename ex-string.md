# Exercices chaîne de caractères

## Ex 1

Quelle est l'affichage du programme suivant :

```c
    const char txt1[] = "Bonjour";
    const char txt2[10] = "Bonjour";

    printf("sizeof 1 = %d\n", sizeof(txt1));
    printf("sizeof 2 = %d\n", sizeof(txt2));
    printf("strlen 1 = %d\n", strlen(txt1));
    printf("strlen 2 = %d\n", strlen(txt2));
    
    printf("strlen 3 = %d\n", strlen(""));
    printf("strlen 4 = %d\n", strlen(" "));
```

## Ex 2

Quelle est la différence entre les deux fonctions ci-dessous ?

Quelle est la meilleure implémentation ?

```c
void func1(char txt[]){
    const int l = strlen(txt);
    for(int i = 0; i<l; i++){
        printf("%c", txt[i]);
    }
    printf("\n");
}

void func2(char txt[]){
    for(int i = 0; txt[i] != '\0'; i++){
        printf("%c", txt[i]);
    }
    printf("\n");
}

int main(void)
{
    const char txt1[] = "Bonjour";
    func1(txt1);
    func2(txt1);
}
```

## Ex 3
### Ex 3.1

Quel est l'affichage du programme suivant avec cette entrée :

```console
123
abc
```

### Ex 3.2

Refaire la même chose avec l'entrée suivante

```console
12345
abc
```

```c
#define RETURN_OK 0
#define TAB_SIZE 5

int main(int argc, char* argv[])
{
    char text1[TAB_SIZE];
    char text2[TAB_SIZE];

    printf("%-8s : ", "Entrée 1 : ");
    fgets(text1, TAB_SIZE, stdin);

    printf("%-8s : ", "Entrée 2 : ");
    fgets(text2, TAB_SIZE, stdin);

    printf("\n\n");

    puts(text1);
    puts(text2);

    return RETURN_OK;
}
```

### Ex 3.3

Idem que pour Ex 3.2


```c
#define RETURN_OK 0
#define TAB_SIZE 5

int main(int argc, char* argv[])
{
    char text1[TAB_SIZE];
    char text2[TAB_SIZE];

    printf("%-8s : ", "Entrée 1 : ");
    fgets(text1, TAB_SIZE, stdin);

    if( text1[TAB_SIZE]-1 != '\n' ){
        while (getchar() != '\n'){}
    }

    printf("%-8s : ", "Entrée 2 : ");
    fgets(text2, TAB_SIZE, stdin);

    printf("\n\n");
    
    puts(text1);
    puts(text2);

    return RETURN_OK;
}
```
### Ex 3.4

Dans le code ci-dessus, pourquoi est-ce qu'il faut faire le contrôle suivant : `if( text1[TAB_SIZE]-1 != '\n' )`
et que l'on ne peut pas simplement vider le buffer comme avec un
`scanf` ?

```c
if( text1[TAB_SIZE]-1 != '\n' ){
    while (getchar() != '\n'){}
}
```

## Ex 4

### Ex 4.1

Ecrire un programme qui demande à l'utilisateur de saisir son nom et son prénom.

Attention il peut y avoir des espaces dans le nom ou dans le prénom et les majuscules sont autorisées.

Les deux données sont stockées dans des variables.

### Ex 4.2

Ecrire une fonction qui transforme une chaîne de caractère en majuscule.

### Ex 4.3

Faire une fonction qui prend une chaine de caractère en entrée. 

Cette fonction va afficher la chaîne et le nombre de lettre.

On doit aussi pouvoir passer un paramètre à cette fonction pour donner la 
longueur de la chaine à afficher (le format du printf).

```console
La chaîne : 9
```
### 4.4

Avec les précédant exercices, écrire un programme qui :

Affiche le nom de l'utilisateur en majuscule avec le nombre de lettre et le prénom sans modification.

La séparation pour le nombre de lettre doit être aligné.

**Tester avec des espaces dans le nom ou prénom**

```console
MAULAZ : 6
Tony   : 4
```

# Solutions

## Ex 1

```console
sizeof 1 = 8
sizeof 2 = 10
strlen 1 = 7
strlen 2 = 7
strlen 3 = 0
strlen 4 = 1
```

## Ex 2

`func2` est une implémentation plus rapide. Dans `func1` la fonction `strlen`
fait une première fois le parcours de la chaîne pour calculer la longueur et ensuite
il y a une deuxième boucle.

## Ex 3.1

Il y a une ligne vide entre les deux lignes car le `\n` n'a pas été supprimé

```console
Entrée 1 :  : abc
Entrée 2 :  : 123

abc

123
```

## Ex 3.2

```console
Entrée 1 :  : 12345
Entrée 2 :  : 

1234
5
```

## Ex 3.3
```console
Entrée 1 :  : 12345
Entrée 2 :  : abc


1234
abc
```


## Ex 4

```c
void string_to_upper(char txt[])
{
    const int off = 'A' - 'a';
    for (int i = 0; txt[i] != '\0'; i++)
    {
        if (isalpha(txt[i]) && islower(txt[i]))
            txt[i] += off;
    }
}

void print(char txt[], const int size){
    printf("%*s : %ld\n", -size, txt, strlen(txt));
}

void saisie_text(const char message[], char text[], const int max_size){
    printf("%s", message);
    fgets(text, max_size, stdin);
    
    const int l = strlen(text);
    if( l > 0 && text[l-1] == '\n'){
        text[l-1] = '\0';
    }
}

#define MAX_CHAR 20
int main(int argc, char* argv[])
{
    char nom[MAX_CHAR];
    char prenom[MAX_CHAR];

    saisie_text("Veuillez saisir votre nom : ", nom, MAX_CHAR);   
    saisie_text("Veuillez saisir votre prénom : ", prenom, MAX_CHAR);

    const int max_size = strlen(nom) > strlen(prenom) ? strlen(nom) : strlen(prenom);
    string_to_upper(nom);
    print( nom, max_size );
    print( prenom, max_size );

    return 0;
}
```
