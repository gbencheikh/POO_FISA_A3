# Conception d’un Système de Paiement

## 🎯 Objectif de l'exercice
Une boutique en ligne souhaite développer un système permettant d’intégrer plusieurs modes de paiement.
Ce système doit permettre de :
- valider une transaction,
- calculer les frais associés,
- générer un récapitulatif du paiement.

Le système doit être extensible, maintenable et reposer sur une architecture orientée objets permettant d’ajouter facilement de nouveaux moyens de paiement.

Ce cahier des charges définit les exigences à respecter pour implémenter ce module.

## Description du problème

Le système doit intégrer une classe abstract représentant un paiement générique.

La classe doit :

- contenir un attribut `montant` (double),

- définir un constructeur pour initialiser ce montant,

- imposer trois méthodes virtuelles pures :

```bash
bool valider() const = 0
double frais() const = 0
void afficher() const = 0
```
Cette classe ne doit pas pouvoir être instanciée.

### Modes de paiement à implémenter
---

#### 1. Paiement par Carte de Crédit

Attributs obligatoires :

* numéro de carte (string),

* titulaire de la carte (string),

* date d’expiration (string).

Règles métier :

- Un paiement est considéré valide si le numéro contient exactement 16 chiffres.

- Les frais appliqués sont égaux à 2% du montant.

- L’affichage doit masquer le numéro : **** **** **** xxxx.

#### 2. Virement Bancaire
Attributs obligatoires :

* IBAN (string),

* Nom de la banque (string).

Règles métier :

- Un IBAN est valide si sa longueur est ≥ 10.

- Les frais appliqués sont égaux à 1% du montant.

- L’affichage doit inclure IBAN et banque.

#### 3. Paiement en espèces

Règles métier :

- Un paiement en espèces est toujours valide.

- Aucun frais ne doit être appliqué.

- L’affichage indique : « Paiement en espèces ».

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