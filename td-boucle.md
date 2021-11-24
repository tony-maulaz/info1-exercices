# Boucle
Créer un programme qui permet d'afficher des valeurs entre deux bornes.

Les bornes sont passées par les arguments.

Le premier argument permet de choisir l'opération a effectuer
- `a` : Afficher les valeurs entre les deux bornes avec un incrément de 1.
  - il est possible que la première bornes soit plus grande que la deuxième.
  - dans tous les cas, les valeurs seront affichées dans l'ordre croissant.
- `b` : Afficher les valeurs entre les deux bornes avec un incrément configurable
  - l'incrément se trouve dans le deuxième argument.
  - l'incrément peut être négatif.
  - l'ordre d'affichage est donné par l'incrément.
- `c` : Afficher les nombres premiers qui se trouvent entre les deux bornes.

Il est possible d'ajouter une option `-s` au début qui permet de choisir le séparateur de nombre.
> le caractère de séparation doit obligatoirement suivre le `s`, il ne peut y avoir d'espace.

Simulation:
```console
./app a 3 6
3 4 5 6

./app a 7 1
1 2 3 4 5 6 7

./app -s, a 3 1
1,2,3

./app -s, b -3 7 15
15,12,9

./app b -3 3 -8
3 0 -3 -6

./app c 40 70
41 43 47 53 59 61 67

./app -s- c 40 70
41-43-47-53-59-61-67
```