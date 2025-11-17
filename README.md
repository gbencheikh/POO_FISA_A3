# Bloc POO – EI A2 INFO 2025-2026

## 🎯 Objectif du bloc
L’objectif de ce bloc est de **maîtriser les fondements de la programmation orientée objet (POO)** en **C++**.  
À la fin de ce bloc, vous serez capables de **modéliser et de coder un logiciel complet en C++**, en respectant les standards de conception orientée objet.

---

## Organisation du bloc

Le bloc POO s’articule autour de plusieurs activités :

- **1 séquence de préparation**
- **6 boucles PBL** (Problem-Based Learning) accompagnées de **workshops**
- **2 CCTLs** : ** le **11/12/2025** (session de rattrapage le **08/01/2026**)  
  - Génie logiciel  
  - Notions de POO
- **1 projet final**

📅 **Période :** du **04/11/2025** au **08/12/2025**  

**Projet :**
- Lancement : **24/11/2025**  
- Durée : **2 semaines** (dont 1 dédiée au développement)
- Soutenances : **08/12/2025**

---

## Déroulement pédagogique

Chaque workshop permet de découvrir et de mettre en pratique une notion clé de la POO :

![Déroulement_bloc](ressources/deroulement_bloc.png)

Les **corrections des workshops** seront publiées progressivement dans ce dépôt afin de vous aider à consolider vos connaissances.

---

## Environnement de développement requis

- Un ordinateur portable sous **Windows 10+**, **Linux**, ou **macOS**
- **Terminal** (WSL sous Windows si nécessaire)
- **g++** (`build-essential`)
- **Git**
- **VS Code** (éditeur conseillé)
- **Google Test** (pour les tests unitaires)
- Langage : **C++ standard**

⚙️ Reportez-vous au [tutoriel d’installation](ressources/tutoriel_installation_linux_vscode.pdf) pour configurer correctement Linux (WSL) et Visual Studio Code.

---

## Projet final

Le projet constitue la synthèse du bloc.  
Il s’agira de concevoir un **logiciel orienté objet complet en C++**, en appliquant :
- les principes d’encapsulation, d’héritage et de polymorphisme ;
- une architecture modulaire claire ;
- une gestion de code collaborative via Git.

🗓️ **Soutenance du projet :** le **08 décembre 2025**

---

## Structure du dépôt

```bash
.
├── README.md
├── /boucle_1
│   ├── Introduction/
│   ├── partie_1/
│   ├── ...
├── /boucle_2
│   ├── partie_1/
│   ├── partie_2/
│   └── ...
````

## Collaboration

Chaque élève est invité à : 

1. Cloner le dépôt sur sa machine 

```bash
git clone https://github.com/gbencheikh/POO_FISA_A3
````

2. Créer une branche personnelle pour travailler sur les exercices : 

```bash
git checkout -b prenom-nom
````

3. Pousser ses modifications après validation locale : 

```bash
git add .
git commit -m "Ajout de la partie 3 boucle 2"
git push origin prenom-nom
````

## Tests unitaires

Les tests unitaires sont des petites parties de code qui permettent de vérifier que les différentes fonctions de notre programme fonctionnent correctement. Chaque test se concentre sur une fonction spécifique et vérifie que celle-ci donne les résultats attendus pour des données d'entrée précises. Par exemple, si nous avons une fonction d'addition, un test unitaire vérifiera que cette fonction retourne bien la somme des nombres que nous lui passons en paramètres.

### Exemple d'un test unitaire

Supposons que nous avons une classe Calculatrice avec une fonction addition qui additionne deux nombres. Voici comment on pourrait écrire un test unitaire pour vérifier cette fonction :

```bash
// Rappel : on utilise Google Test pour les tests
TEST(CalculatriceTests, TestAddition) {
    // Vérifie que 2 + 3 = 5
    EXPECT_DOUBLE_EQ(Calculatrice::addition(2.0, 3.0), 5.0); 
}
````
Dans cet exemple :

* **TEST** est la commande qui crée un test unitaire.
* **CalculatriceTests** est le nom de notre groupe de tests (pour organiser plusieurs tests similaires).
* **TestAddition** est le nom de ce test spécifique.
* **EXPECT_DOUBLE_EQ** est utilisée dans les tests unitaires pour comparer deux valeurs en vérifiant leur égalité avec une certaine précision. Dans cet exemple, elle vérifie que le résultat de Calculatrice::addition(2.0, 3.0) est égal au résultat attendu 5.0.

### Compilation des tests unitaires

Installer Google Test (si ce n'est pas déjà fait) : Vous pouvez suivre les instructions sur Google Test GitHub pour installer Google Test.

```bash
sudo apt install libgtest-dev
````

Les tests unitaires peuvent être compilés comme suit :

```bash
g++ test.cpp -o test.exe -lgtest -lgtest_main -pthread
````