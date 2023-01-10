# Exercices chaîne de caractères

## Ex 1

Écrire une fonction qui prend une chaîne de caractère en entrée.  
Cette fonction convertit tous les caractères minuscules en majuscule.  
Il peut y avoir des caractères spéciaux dans le texte.  

```c
int main(){
    str_to_lower("Bonjour 12 !");
}
```

Résultat
```console
bonjour 12 !
```

## Ex 2

Écrire une fonction qui teste si une chaîne de caractères passée en paramètre est un palindrome.  
Cette fonction est de type `bool`.  
Cette fonction est insensible à la casse.  

```c
int main(){
    
    char text[] = "Sugus";

    if( is_palindrome(text) ){
        printf("%s : C'est un palindrome", text);
    }
    else{
        printf("Ce n'est pas un palindrome");
    }
}
```

Résultat
```console
Sugus : C'est un palindrome
```


## Ex 3 Occurrence

Faire un programme qui affiche le nombre d'occurence des caractères dans une chaîne.

Compter le nombre d'occurrence pour chaque caractères de la table ASCII.

Les caractères qui ne sont pas dans la table ASCII ne sont pas pris en compte.

Afficher le nombre d'occurrence de chaque caractère, s'il est présent au moins une fois.

La chaîne peut contenir au maximun 80 caratères.

**Aide**

*Pensez à utiliser un tableau pour stocker les occurrences*

Par exemple si vous voulez compter les occurences des chiffres dans `011569899`

On aurait un tableau comme ceci

```c
tab[0] = 1 // occurrence 0
tab[1] = 2 // occurence 1
tab[2] = 0 // occurence 2
...
tab[9] = 3 // occurrence 9
```

**L'affichage du programme**

```console
Le texte : Quelle belle journée !

  |  3
! |  1
Q |  1
b |  1
e |  5
j |  1
l |  4
n |  1
o |  1
r |  1
u |  2
```

### Ex 4 - Motif

Compléter la fonction `find` pour que le programme suivant affiche la position du motif s'il est présent dans 
la chaîne de caractères.

La taille du motif n'est pas fixe, il est donc possible d'utiliser les motifs suivants :
-  on
-  Bonjour
-  allez

La fonction doit compter le nombre de fois que le motif est présent dans toute la chaîne.

La position correspond à l'index du premier caractère dans la chaîne.

Si le motif n'est pas présent, la fonction doit mettre `-1` dans la position.

```c
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void find(){
}

int main(void)
{
    const char txt[] = "Bonjour tout le monde, comment allez-vous oon?";
    const char motif[] = "on"; 
    int pos;
    int count;

    find(txt, motif, &pos, &count);

    if( pos >= 0)
        printf("Le premier motif commence à la pos : %d "
            "et il est présent %d fois.", pos, count);
    else
        printf("Le motif n'est pas présent");
    
    return EXIT_SUCCESS;
}
```

# Solutions

## Ex 1
```C
```

## Ex 2
```C
```
