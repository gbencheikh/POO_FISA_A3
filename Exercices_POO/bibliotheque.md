# Gestion d'une bibliothèque

## 🎯 Objectif de l'exercice
L’objectif de cet exercice est d’implémenter les concepts fondamentaux de la programmation orientée objet (POO) à travers la création de classes, d’objets, ainsi que l’utilisation d’attributs et de méthodes simples.

---

## Description du problème

Vous devez modéliser une bibliothèque contenant plusieurs livres.  
Chaque livre possède :

- un **titre**
- un **auteur**
- un **nombre de pages**
- un **statut** : disponible ou emprunté

Vous devez implémenter les classes suivantes :

### 🔹 Classe `Livre`

**Attributs :**
- `titre` (string)
- `auteur` (string)
- `nbPages` (int)
- `disponible` (bool)

**Méthodes :**
- `afficherInfo()` : affiche les informations du livre.
- `emprunter()` : change le statut du livre à *emprunté*.
- `retourner()` : change le statut du livre à *disponible*.

---

### 🔹 Classe `Bibliothèque`

**Attribut :**
- Une liste de pointeurs vers des objets `Livre`.

**Méthodes :**
- `ajouterLivre(Livre livre)` : ajoute un livre à la bibliothèque.
- `afficherBibliothèque()` : affiche toutes les informations des livres.
- `rechercherLivreParTitre(titre)` : recherche un livre par son titre et affiche ses informations s’il est trouvé.

---

## Travail à réaliser

1. Créer la classe **Livre** avec toutes ses méthodes.
2. Créer la classe **Bibliothèque** permettant de gérer une collection de livres.
3. Écrire une fonction principale `main` qui :
   - ajoute des livres,
   - permet d'en emprunter et d'en retourner,
   - affiche les informations à chaque étape.
4. Implémenter des **tests unitaires** pour valider le fonctionnement des méthodes.

---

## Livrables à rendre

Votre dépôt GitHub doit inclure :

- **Diagramme de classes UML** illustrant la structure du programme.
- **README.md** contenant :
  - une description du projet,
  - la présentation des classes et de leurs méthodes.
- **Fichiers de tests unitaires** vérifiant le bon fonctionnement des classes.

---
