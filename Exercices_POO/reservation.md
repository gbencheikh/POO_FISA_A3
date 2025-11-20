# Conception d'un système de Réservation (Vols, Hôtels, Cinéma)

## 🎯 Objectif de l'exercice
Vous devez développer une application permettant de gérer différents types de réservations :
vols, hôtels et séances de cinéma.

## Travail demandé

Classe de base `Reservation` avec : nom(string), âge(int), identifiant(string)


```bash
virtual void afficherDetails() const = 0;
```

Classes dérivées :

- ReservationVol (destination, compagnie, numéro de siège)

- ReservationHotel (nom hôtel, nombre de nuits, type de chambre)

- ReservationCinema (film, salle, numéro de siège)

Une classe SystemeReservation devra pouvoir :

- ajouter une réservation,

- annuler une réservation,

- afficher toutes les réservations,

- rechercher une réservation par numéro.

Possibilité d’ajouter :

- gestion des disponibilités,

- prix variable selon le type de réservation.

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