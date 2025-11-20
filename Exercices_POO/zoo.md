# Gestion de zoo / animaux

## 🎯 Objectif de l'exercice
Vous devez développer une application orientée objet pour gérer un zoo.
Le zoo contient différents types d’animaux ayant des comportements spécifiques.

## Travail demandé

Créer une classe abstraite Animal contenant : nom(string), âge(int), poids(double)

méthodes virtuelles pures : 


```bash
virtual void crier() const = 0;
virtual void manger() = 0;
virtual void afficheInfos() = 0; 
```

Créer au moins trois familles d’animaux :

- Mammifere

- Oiseau

- Reptile

Chaque classe aura un comportement spécifique et redéfinira les méthodes.

Possibilité de créer plusieurs espèces dérivées :

Lion, Elephant, Aigle, Tortue, etc.

Le zoo doit permettre :

- Ajouter une classe Enclos contenant un ensemble d’animaux.

- l’ajout d’animaux,

- la suppression d’un animal,

- l’affichage de tous les animaux,

- l’alimentation des animaux.

---

### Consignes techniques
-	Chaque classe doit être implémentée dans des fichiers séparés .h et .cpp.
-	La fonction principale doit être implémenté dans un fichier main.cpp. Il doit générer un exécutable main.exe lors de la compilation.
-	Les tests unitaires doivent être réalisés dans un fichier test.cpp et générer un exécutable test.exe.

---

## Livrables à rendre

Votre dépôt GitHub doit inclure :

- **Diagramme de classes UML** illustrant la structure du programme.
- **README.md** contenant :
  - une description du projet,
  - la présentation des classes et de leurs méthodes.
- **Fichiers de tests unitaires** vérifiant le bon fonctionnement des classes.

---