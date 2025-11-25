# Projet Final – Jeu de la Vie

Ce document présente de manière détaillée l'ensemble des consignes, ressources, objectifs et livrables liés au **projet final du bloc Programmation Orientée Objet (POO)** : l'implémentation du **Jeu de la Vie** de Conway.

## Objectif du projet

Développer une application complète implémentant le **Jeu de la Vie**, avec :

<div>
  <img src="ressources/Gospers_glider_gun.gif" alt="Jeu de la Vie" width="130" style="float: right; 
            margin-left: 20px;
            margin-right: 30px; 
            margin-top: 5px; 
            margin-bottom: 10px; 
            border: 2px solid black; 
            outline: 4px solid white; 
            outline-offset: 2px;
            ">

  * une **version console**,
  * une **version graphique** basée sur **SFML**,
  * une architecture orientée objet propre et cohérente,
  * des tests unitaires,
  * une modélisation UML (classe, séquence, activité).
</div>



Ce projet doit démontrer votre maîtrise des **concepts clés de la POO** (encapsulation, modularité, héritage, polymorphisme, etc.).

## Ressources fournies 

* [Projet.html](https://scenari.cesi.fr/scenari/cas/NEW_Diffusion_Tuteurs_-_PGE_A2_CPI_INFO_PROGRAMMATION_ORIENTEE_OBJET_25_26/webTeacher/res/Projet_html_-_Enonce_du_projet_de_POO.zip) - Enoncé du projet (dans l’archive Enoncé du projet de POO.zip)

* [Squelette de code](https://scenari.cesi.fr/scenari/cas/NEW_Diffusion_Tuteurs_-_PGE_A2_CPI_INFO_PROGRAMMATION_ORIENTEE_OBJET_25_26/webTeacher/res/GUI-SFML.zip) - Ce squelette vous permet d’obtenir une interface graphique de base pour visualiser les grilles de votre automate. 

### Installation de SFML
Avant toute compilation de la version graphique :

```bash
sudo apt-get install libsfml-dev
```

## Consignes générales

* Projet réalisé **en binôme** (sauf indication contraire).
* Travail en **silo** : pas d’échange entre binômes.
* **Plagiat interdit**.
* **Utilisation de LLMs interdite** (ChatGPT, Copilot, ...).

Votre production doit mettre clairement en évidence **votre propre capacité** à concevoir, modéliser et implémenter une application orientée objet.

## Conception attendue

Vous devez fournir :

* Diagramme de classes (UML)
* Diagramme de séquence
* Diagramme d’activité
* Description textuelle de l’architecture

## Développement attendu

Votre solution informatique inclura :

### <img src="icones/image.png" alt="icone" width="16"/> Version console

* Génération, affichage et évolution de grilles
* Application correcte des règles du Jeu de la Vie

### <img src="icones/image.png" alt="icone" width="16"/> Version graphique (SFML)

* Affichage de la grille via le squelette fourni
* Mise à jour visuelle de l’automate

### <img src="icones/image.png" alt="icone" width="16"/> Architecture orientée objet


* Répartition en classes cohérentes,
* Structure claire et lisible.

## Tests unitaires

Vous avez deux possibilités :

1. Utiliser **Google Test**
2. Utiliser la **classe de tests unitaires développée dans `boucle_3`**, qui peut remplacer Google Test.

Vos tests doivent vérifier :

* la validité de la grille à une itération *t*,
* l'application correcte des règles.

---

## Soutenance

Lors de l’oral de 20min, vous devrez :

* présenter votre conception (UML),
* expliquer votre architecture,
* démontrer l'exécution de votre programme,
* prouver votre compréhension des concepts de la POO.

À la suite de cette présentation, il y aura **une session de questions de 10 minutes**.

Une **évaluation par les pairs** complétera la note finale.

## Dates à retenir

* **Soutenance du projet :** le **08 décembre 2025**

* Les livrables doivent être remis **en intégralité** avant le **vendredi précédant la soutenance**.

Respecter la date limite fait partie de l'évaluation.


## Structure recommandée du projet

```
├── src/
│   ├── core/          # classes 
│   ├── console/       # interface console
│   ├── gui/           # interface SFML
│   └── tests/         # tests unitaires
├── diagrams/
│   ├── class_diagram.png
│   ├── sequence_diagram.png
│   └── activity_diagram.png
├── README.md
```

## <img src="icones/email.gif" alt="GIF contact" style="width:25px; vertical-align:middle;" />  Support

En cas de question, contactez moi via les canaux habituels.

Bon courage !
