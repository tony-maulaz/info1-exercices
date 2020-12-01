# Les tableaux et les fonctions

## Ex 1

Quel est la taille des tableaux suivants et quel est la valeur du tableau

```c
Exemple
1.0 : int tab[2] = {3,4}; : taille 2, [3,4]

1.1 : int tab[4];
1.2 : double tab[7];
1.3 : char tab[];
1.4 : int tab[3] = {1};
1.5 : int tab[3] = {1,2};
1.6 : int tab[3] = {0};
1.7 : int tab[6] = {0,3,6};
1.8 : int tab[] = {0};
1.9 : int tab[] = {4,5,6};
1.10: char tab[4] = {'a','b'};
```

## Ex 2

Complèter le code suivant

- Ecrire une fonction qui `trie` 2 nombres.
- Ecrire une fonction qui trie un tableau dans l'ordre croissant

```c
// Cette fonction prend 2 paramètres et à la fin, il faut que le premier 
// paramètre soit la plus petite valeure
void min(){

}

void tri(){
    
}

int main()
{
    int tab[5] = {5,1,3,4,2};
    
    tri(tab);
    
    for(int i=0; i<5; i++){
        printf("i=%d val=%d\n", i, tab[i]);
    }
    
    return 0;
}
```

## Solutions
### Ex 1
```connsole
1.1 : taille = 4 ,[?,?,?,?]
1.2 : taille = 7 ,[?,?,?,?,?,?,?]
1.3 : error
1.4 : taille = 3 ,[1,0,0]
1.5 : taille = 3 ,[1,2,0]
1.6 : taille = 3 ,[0,0,0]
1.7 : taille = 6 ,[0,3,6,0,0,0]
1.8 : taille = 1 ,[0]
1.9 : taille = 3 ,[4,5,6]
1.10: taille = 4 ,['a','b',0,0]
```

### Ex 2

```c
void min(int* val1, int* val2){
    if(*val1 > *val2){
        const int tmp = *val1;
        *val1 = *val2;
        *val2 = tmp;
    }
}

void tri(int tab[], const int size_tab){
    for(int i=0; i< size_tab-1; i++){
        for(int j=i+1; j<size_tab; j++){
            min(&tab[i], &tab[j]);
        }
    }
}

int main()
{
    int tab[5] = {5,1,3,4,2};
    
    tri(tab, 5);
    
    for(int i=0; i<5; i++){
        printf("i=%d val=%d\n", i, tab[i]);
    }
    
    return 0;
}
```
