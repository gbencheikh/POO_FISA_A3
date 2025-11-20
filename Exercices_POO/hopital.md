# Gestion d’un Hôpital

## 🎯 Objectif de l'exercice
Vous devez développer un système de gestion d’un hôpital avec une hiérarchie de personnels et de patients.
L’objectif est de modéliser les rôles, les consultations et les services.

## Travail demandé

Classe de base Personne avec : nom(string), âge(int), identifiant(string)


```bash
virtual void afficher() const = 0;
```

Classes dérivées :

- Medecin (spécialité, liste de patients)

- Infirmier (service, horaires)

- Patient (dossier médical, symptômes)

Gestion des consultations :

- Une consultation associe un médecin, un patient, une date et un diagnostic.

- Le médecin peut ajouter une consultation au dossier du patient.

Gestion des services de l’hôpital :

- Un service (chirurgie, pédiatrie…) contient médecins, infirmiers, patients.

Le système doit permettre :

- d’ajouter du personnel médical et des patients,

- de planifier une consultation,

- d’afficher le dossier d’un patient,

- d’afficher tout le personnel d’un service.

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