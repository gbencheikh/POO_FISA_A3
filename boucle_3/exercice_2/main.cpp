#include "maison.h"
#include "salle_bain.h"
#include "chambre.h"

int main(){
    Maison myHouse(0);

    myHouse.ajouterPiece(new Chambre(2, "Bleu", 2));
    myHouse.ajouterPiece(new Salle_bain(1, "Blanc", true));
    myHouse.ajouterPiece(new Chambre(1, "Vert", 1));

    std::cout << "Nombre de salles de bain : " << myHouse.getNbOfBathroom() << std::endl;
    std::cout << "Nombre de chambres : " << myHouse.getNbOfBedroom() << std::endl;

    return 0; 
}