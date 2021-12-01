# Les tableaux et les fonctions


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
