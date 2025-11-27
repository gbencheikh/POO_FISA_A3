## Exercice 3


Contrairement à nombre de languages le C++ laisse au programmeur une grande flexibilité quant à l’implémentation de ses programmes. Il est par exemple possible, et parfois souhaitable, d’implémenter plusieurs classes au sein de mêmes fichiers ; ce qui n’est pas la norme en Java. En outre, il fournit une mécanique d’implémentation en ligne (in line) et hors ligne (out of line) des classes. En C++, le code est classiquement réparti dans plusieurs typologies de fichiers. Un fichier d’entête (.h ou .hpp) contient généralement les déclarations de variables, de fonctions ou de structures/classes, les macros, les fonctions inline, des commentaires, etc. mais plus rarement l’implémentation à proprement parler. Pour résumer, ce fichier devrait contenir l’ensemble des informations utiles à la compilation d’un projet par un utilisateur tiers. A contrario, les fichiers sources (.cpp) contiennent les définition des fonctions et méthodes, et ne sont pas nécessairement diffusés. En effet et ce n’est pas neutre, le programmeur est maître sur le partage ou non du code source.

* Définir les notions de déclaration et de définition.
Proposer un exemple de déclaration et définition de méthode.
Proposer un exemple de déclaration et définition de classe.
* A partir de l’exemple de classe accessible via le main ci-dessous, proposer l’implémentation hors ligne afférente. Lien vers le code source à modifier.