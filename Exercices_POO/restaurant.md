# Gestion de Restaurant

## 🎯 Objectif de l'exercice
Vous devez développer un système de gestion d’un restaurant.
L’application doit modéliser différents types de plats, la prise de commandes par les clients et la génération des factures.

## Travail demandé

Créer une classe abstraite Plat contenant : nom(string), prix(double)


Créer une méthode virtuelle pure

```bash
void afficher() const = 0
```

Créer au moins trois classes dérivées :

- PlatChaud (temps de cuisson, type de cuisson)

- PlatFroid (température de service)

- Dessert (sucre, allergènes éventuels)

La classe Menu doit :

- contenir une liste de plats disponibles,

- permettre l’affichage du menu,

- rechercher un plat par nom.

- d’ajouter des plats au menu,

Une classe Commande doit :

- contenir une liste de Plat* et la date de la commande (Vous pouvez utiliser la classe `Date` que nous avons implémenté en boucle_2),

- calculer le montant total,

- afficher la facture avec la date de la commande.

Une classe Restaurant doit gérer :

- les menus,

- les commandes.

Le programme doit permettre :

- d’ajouter des plats au menu,

- d’enregistrer une commande,

- d’afficher toutes les commandes,

- de générer la facture détaillée d’une commande.

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