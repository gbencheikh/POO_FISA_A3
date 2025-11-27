## Exercice 4

Les templates sont des mécanismes très puissants, non seulement pour rendre un code générique, mais également pour réaliser des traitements, implémenter des mécanismes d’évaluation partielle de code, ou encore intégrer des contraintes afin de valider un code, le tout statiquement. Le cadre d’usage des templates C++ est cependant limité car appliqués statiquement par le compilateur. C’est naturellement qu’il est devenu le mécanisme de référence utilisé pour implémenter la généricité (polymorphisme paramétrique). Cette technique implique de paramétrer une structure de données par un ou plusieurs types spécifiques à la compilation. L’idée est de raffiner les éléments contenus dans une structure de de données au dernier moment. Ainsi, le conteneur reste suffisamment générique, diffusable et employable dans de multiples situations.

Donner un exemple cas d’usage pertinent des templates.
Les questions suivantes portent sur le code fourni dans l’exercice 3.

Quel est l’intérêt d’utiliser le mot clé typedef ? Quelles en sont les limitations ?
Pourquoi avoir créé la fonction array_element_to_string(ArrayElement *el) ? Quelles en sont les limitations ?
L’héritage permettrait-il de rendre cette implémentation plus générique ? Quels en seraient le ou les inconvénients ?
Faire évoluer l’implémentation par la mise en oeuvre du mécanisme de template. Appliquer cela sur l’écriture de code en ligne et hors ligne. Observez les implications, en particulier sur la version hors ligne. L’objectif sera d’être capable d’utiliser le tableau dynamique sous la forme suivante :
```
DynamicArray<string> array; 
array.add("Hello");
```
Montrer le bon fonctionnement de votre code sur un exemple.