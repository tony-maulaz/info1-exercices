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

# Solutions

## Ex 1
```C
```

## Ex 2
```C
```