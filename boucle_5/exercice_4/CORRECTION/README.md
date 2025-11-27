## Exercice 4

Les templates sont des mécanismes très puissants, non seulement pour rendre un code générique, mais également pour réaliser des traitements, implémenter des mécanismes d’évaluation partielle de code, ou encore intégrer des contraintes afin de valider un code, le tout statiquement. Le cadre d’usage des templates C++ est cependant limité car appliqués statiquement par le compilateur. C’est naturellement qu’il est devenu le mécanisme de référence utilisé pour implémenter la généricité (polymorphisme paramétrique). Cette technique implique de paramétrer une structure de données par un ou plusieurs types spécifiques à la compilation. L’idée est de raffiner les éléments contenus dans une structure de de données au dernier moment. Ainsi, le conteneur reste suffisamment générique, diffusable et employable dans de multiples situations.

Donner un exemple cas d’usage pertinent des templates.
> Un cas d’usage classique et pertinent des templates est la création de conteneurs génériques, comme std::vector<T>.
Grâce aux templates, un même code peut manipuler indifféremment :
> * des int,
> * des double,
> * des std::string,
> * ou des objets complexes.
>
> Cela évite la duplication de code et permet une généricité forte, avec un coût d’exécution nul (tout est résolu à la compilation).

Les questions suivantes portent sur le code fourni dans l'exercice 3.

Quel est l’intérêt d’utiliser le mot clé typedef ? 

> typedef int ArrayElement; permet :
> * de donner un nom abstrait à un type,
> * de faciliter les modifications futures (changer int en float ne nécessite qu’un seul changement),

Quelles en sont les limitations ?
> il n’y a aucune sécurité de type supplémentaire.

Pourquoi avoir créé la fonction array_element_to_string(ArrayElement *el) ? 

> Pour permettre l’affichage des éléments du tableau dynamique sans connaître leur type exact.

Quelles en sont les limitations ?
> Ne fonctionne pas avec tout les types (string par exemple)

L’héritage permettrait-il de rendre cette implémentation plus générique ? 
> Oui, en créant une classe de base « Printable » avec une méthode virtuelle toString().

Quels en seraient le ou les inconvénients ?

> tout objet doit hériter de Printable.
> Impossible d’utiliser le tableau avec des types que tu ne contrôles pas (ex : int, double, std::string, des classes d'une bibliothèque tierce).
>
> ! L’héritage ne doit être utilisé que pour du polymorphisme métier, pas pour de la généricité.

Faire évoluer l’implémentation par la mise en oeuvre du mécanisme de template. Appliquer cela sur l’écriture de code en ligne et hors ligne.

> voir `dynamicArray.h` et `dynamicArray.cpp` 

Observez les implications, en particulier sur la version hors ligne. L’objectif sera d’être capable d’utiliser le tableau dynamique sous la forme suivante :

```
DynamicArray<string> array; 
array.add("Hello");
```

> La syntaxe DynamicArray<string> array; array.add("Hello"); n’est pas compatible avec la version actuelle du programme, car le tableau dynamique utilise des pointeurs (T** els) et attend des adresses d’objets alloués dynamiquement (new).
Pour pouvoir ajouter directement des objets comme "Hello" ou 5, il faudrait changer la structure pour stocker des objets par valeur (T* els → T* els ou T* els remplacé par T* els par valeur) plutôt que des pointeurs, ce qui simplifie l’usage et supprime le besoin de new.

Montrer le bon fonctionnement de votre code sur un exemple.

> executer le `main.cpp` 

