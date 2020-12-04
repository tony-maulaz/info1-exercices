## Saisie multiple

Ecrire un programme qui permet de calculer la somme des nombres saisis.

- Le nombre de valeur à saisir est défini par un `#define`
- On demande à l'utilisateur de saisir une valeur entière.
  - Lors de la saisie, on indique à l'utilisateur le numéro de la saisie qu'il est
    en train d'effectuer (saisie 3/5).
- Tant que la valeur est positive on calcul la somme
- A la fin du programme on affiche la plus petite valeur saisie, la plus grande et la somme.

## Recherche de motif

- On demande à l'utilisateur de saisir une chaine de caractère (peut contenir des espaces).
- On demande à l'utilisateur de saisir un motif (mot ou suite de lettre).
- On considère que le motif et la chaîne de caractère contiennent que des valeurs qui sont
  dans la table ASCII.
- Il faut compter le nombre de fois que le motif apparaît dans la chaine.

```console
Chaîne : Bonjour tout le monde
Motif : on
2
```

## Dessin

- Définir un tableau de 2 dimensions avec des `#define`
- Faire un programme qui dessine un `rond` de diamètre `R` dans ce tableau.
- Le diamètre est choisi avec un `define`ou `const`, il n'y a pas de saisie.
- On utilise le caractère `*` pour faire le motif
- Compter le nombre d'étoile affichées
- Ensuite dessiner un carré
- Les formes sont dessinées au centre du tableau
