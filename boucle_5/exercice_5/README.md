Les espaces de nom ou namespace sont des constructions permettant d’organiser un code, au sein de groupes composés de multiples fonctions et classes. Ils ont d’une part un rôle structurel, car ils permettent de rassembler des composantes logiciel sémantiquement liées, mais sont également utiles pour éviter les collisions de noms. Ce phénomène se produit classiquement lorsque plusieurs identificateurs portent le même nom. En raison de l’ambiguïté générée, le compilateur peut ainsi ne plus être en mesure d’associer une utilisation de code à son implémentation. Typiquement une bibliothèque logicielle contiendra plusieurs espaces de noms.

* Exécuter le code ci-dessous. Quel est le résultat ? Corriger en conséquence.

```
#include <iostream>

int main() {
  cout << "Hello World!\n";
  return 0;
}
```

* Quel est l’intérêt du mot clé using ? Implémenter et compiler le code ci-dessous. Que se passe-t-il ?
```
#include <iostream>
#include <list>

using namespace std;

template<typename T>
class list {
public:
  void clear() { ; };
};

int main() {
  list<int> m;

  m.clear();
  
  return 0;
}
```

* Dans quelle situation l’utilisation de ce mot clé n’est-elle pas envisageable ? Quelle stratégie employer dans ce cas ?
* Compléter le code disponible à l’adresse ci-dessous en utilisant notamment les espaces de nom. Lien vers le [code source](https://github.com/Supertuteur/Bloc-POO-CPI-A2/tree/8e9e0292a58996b222c8070ab86b1cfc5f1ac9ec/Boucle-5/WS/Ex5-Namespace) à compléter. 