# Gestion d'un système bancaire

## 🎯 Objectif de l'exercice
Vous devez créer un système permettant de gérer différents types de comptes bancaires. Le système doit permettre d'effectuer des dépôts, des retraits, des transferts entre comptes et de calculer des intérêts pour certains types de comptes.

---

## Description du problème

Vous implémenterez les classes suivantes :

### 🔹 Classe `CompteBancaire `

**Attributs :**
- `titulaire` (string)
- `solde` (int)
- `numeroCompte` (int de 8 chiffres)

**Méthodes :**
- `afficherInfo()` : affiche les informations du compte.
- `deposer()` : ajoute un montant du compte.
- `retirer()` : retire un montant du solde du compte, si le solde est suffisant.
- `transferer(CompteBancaire &compteDest, double montant)` : Effectue un transfert entre deux comptes bancaires (le montant est retiré du compte source et ajouté au compte destinataire).

---

### 🔹 Classe `CompteEpargne` (classe dérivée de CompteBancaire) 

**Attribut :**
- `tauxInteret` (double).

**Méthodes :**
- `calculerInteret()` : Calcule et ajoute les intérêts au solde du compte en fonction du taux d'intérêt annuel..
- `afficherInfo()` : Surcharge la méthode afficherInfo() pour afficher également le taux d'intérêt du compte épargne.

---

### 🔹 Classe `CompteCourant` (classe dérivée de CompteBancaire) 

**Attribut :**
- `decouvertAutorise`(double)

**Méthodes :**
- `afficherInfo()` : Surcharge la méthode afficherInfo() pour afficher également le montant du découvert autorisé.

---

### 🔹 Classe `Banque` (classe dérivée de CompteBancaire) 

**Attribut :**
- `comptes`(liste de pointeurs vers CompteBancaire)

**Méthodes :**
- `ajouterCompte(CompteBancaire *compte)` : Ajoute un compte à la liste des comptes de la banque.
- `rechercherCompteParNumero(int numero)` : Recherche un compte par son numéro et affiche ses informations si trouvé.
- `afficherComptes()` : Affiche les informations de tous les comptes dans la banque.	

---

## Travail à réaliser

1. Créer la classe **CompteBancaire** et toutes les classes dérivées.
2. Créer la classe **Banque** permettant de gérer une collection de comptes bancaires.
3. Implémentez la fonction principale main permettant d’ajouter des comptes (Epargne et courant), d'effectuer des dépôts, des retraits, des transferts, et de calculer les intérêts pour un compte épargne. 
4. Implémenter des **tests unitaires** pour valider le fonctionnement des méthodes.

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
