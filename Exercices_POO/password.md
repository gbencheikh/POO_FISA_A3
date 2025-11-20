# Gestionnaire de mots de passe

## 🎯 Objectif de l'exercice

Vous devez créer une application pour gérer des mots de passe.  
Chaque entrée de mot de passe contient :

- un **nom de service** (ex : Gmail, Discord)
- un **identifiant**
- un **mot de passe**

---

## Description du problème

Vous implémenterez les classes suivantes :

### 🔹 Classe `Service`

**Attributs :**
- `nom` (string)
- `username` (string)
- `password` (string)

**Méthodes :**
- `afficherInfo()` : affiche le service et le nom d’utilisateur (pas le mot de passe).
- `changerPassword(string nouveauPassword)` : modifie le mot de passe.
- `cryptPassword()` : crypte le mot de passe avant sauvegarde.
- `decryptPassword()` : décrypte le mot de passe pour affichage sécurisé.

---

### 🔹 Classe `GestionnaireMotsDePasse`

**Attribut :**
- `listeMotsDePasse` : liste de pointeurs vers des objets `Service`

**Méthodes :**
- `ajouterMotDePasse(Service service)` : ajoute un mot de passe à la liste.
- `supprimerMotDePasse(string)` : supprime un mot de passe par service.
- `rechercherMotDePasse(string)` : affiche le mot de passe par service.
- `sauvegarderFichier(filename)` : sauvegarde tous les mots de passe cryptés dans un fichier.
- `chargerFichier(filename)` : charge les mots de passe depuis un fichier crypté.

---

## Travail à réaliser

1. Créer la classe `Service` avec ses attributs et méthodes, incluant une **variable static** `compteur`.
2. Créer la classe `GestionnaireMotsDePasse` pour gérer la collection de mots de passe.
3. Implémenter une fonction principale `main` permettant de :
   - ajouter des mots de passe,
   - les rechercher,
   - les supprimer,
   - sauvegarder dans un fichier crypté,
   - charger depuis un fichier crypté.
4. Assurez-vous que chaque mot de passe est **crypté** avant d’être sauvegardé.
5. Ajouter des **tests unitaires** pour vérifier la création, la recherche, la suppression et le cryptage.

---

# Consignes

- **Réutiliser vos méthodes de cryptage et de sauvegarde déjà développées en prosit 2**.  
-	Chaque classe doit être implémentée dans des fichiers séparés .h et .cpp.
-	La fonction principale doit être implémenté dans un fichier main.cpp. Il doit générer un exécutable main.exe lors de la compilation.
-	Les tests unitaires doivent être réalisés dans un fichier test.cpp et générer un exécutable test.exe.

---

## Bonus

- Ajouter une **méthode de génération automatique de mot de passe sécurisé**.

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
