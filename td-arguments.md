# Arguments
Un programme peut-être exécuté avec les options suivantes :

- `-n` : valeur par défaut `100`
- `-o` : valeur par défaut `2`
- `-u` : valeur par défaut `-4`

- `-t` : ne prend pas de valeur

Toutes les options sauf `-t` doivent avoir une valeur entière à la suite.

Créer un programme qui affiche la valeur des options

```console
./app
n : 100
o : 2
u : -4
t : Non présent

./app -n4 -t
n : 4
o : 2
u : -4
t : Présent

./app -u5 -n-6
n : -6
o : 2
u : 5
t : Non présent
```