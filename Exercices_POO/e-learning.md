# Conception d'un système Scolaire (E-learning)

## 🎯 Objectif de l'exercice
Vous devez concevoir un mini-système de gestion scolaire en C++ pour une plateforme d’e-learning.
Ce système gère les utilisateurs, les cours et les interactions pédagogiques.

## Travail demandé

Créer une classe de base Utilisateur avec : nom(string), email(string), identifiant(string)

méthode virtuelle pure : 


```bash
virtual void afficherRole() const = 0;
```

Créer trois classes dérivées :

- Etudiant

- Enseignant

- Administrateur

Gestion des cours :

- Un cours contient un titre, une description, un enseignant, des modules.

- Un module contient un contenu ou un quiz.

Fonctionnalités :

- Un enseignant peut créer et modifier un cours.

- Un étudiant peut s’inscrire à un cours et afficher sa progression.

- Un administrateur gère la liste des utilisateurs.

Le programme doit permettre :

- d’ajouter/supprimer des utilisateurs,

- d’inscrire un étudiant à un cours,

- d’afficher la liste des cours,

- de simuler une progression dans un module.

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