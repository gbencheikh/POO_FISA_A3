# Conception d’une Hiérarchie de Capteurs

## 🎯 Objectif de l'exercice
Une entreprise développe un système embarqué pour surveiller différents paramètres d’une machine industrielle : température, pression, vitesse de rotation, etc.

Elle souhaite définir une architecture orientée objet claire, évolutive et cohérente pour gérer différents types de capteurs.

Vous êtes chargé de modéliser cette architecture.

## Travail demandé

Créer une classe Capteur répondant aux critères suivants :

1. Elle est abstraite.

2. Elle possède :

* un attribut `id` (chaîne ou entier)

* un constructeur prenant l’id du capteur

3. Elle définit deux méthodes virtuelles pures :

```bash
virtual double lireValeur() const = 0;
virtual std::string type() const = 0;
```
4. Elle contient une méthode non virtuelle (donc héritage simple) :

```bash
void afficher() const;
```
Cette méthode devra afficher :
```
"Capteur [`ID`] de type [`TYPE`] → Valeur : [`VALEUR`]"
```
Elle utilise les méthodes virtuelles lireValeur() et type()

### Classes dérivées (héritage simple + implémentation)
---

Créer au minimum trois classes concrètes, dérivant publiquement de Capteur :

* CapteurTemperature

* CapteurPression

* CapteurVitesse

Chacune doit :

* Avoir un constructeur qui initialise l’id.

* Implémenter les méthodes virtuelles pures de la classe mère. 

* Simuler une lecture de capteur (vous pouvez retourner une valeur aléatoire).
