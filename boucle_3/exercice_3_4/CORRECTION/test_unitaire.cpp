#include <iostream>
#include "objet.h"
#include "carre.h"
#include "rectangle.h"
#include "gestion_objets.h" // exercice 4
#include "UI_test.h"
using namespace std;

// ---------------------------
// Tests Rectangle
// ---------------------------

void testRectangle() {
    Rectangle r(4.2, 3.2);

    test::ASSERT_EQ(r.getLargeur(), 4.2, "Rectangle : getLargeur()");
    test::ASSERT_EQ(r.getLongueur(), 3.2, "Rectangle : getLongueur()");

    test::ASSERT_NEAR(r.aire(), 13.44, 1e-6, "Rectangle : aire()");
    test::ASSERT_NEAR(r.perimetre(), 14.8, 1e-6, "Rectangle : perimetre()");
}

// ---------------------------
// Tests Carre
// ---------------------------

void testCarre() {
    Carre c(5.0);

    test::ASSERT_EQ(c.getCote(), 5.0, "Carre : getCote()");
    test::ASSERT_NEAR(c.aire(), 25.0, 1e-6, "Carre : aire()");
    test::ASSERT_NEAR(c.perimetre(), 20.0, 1e-6, "Carre : perimetre()");
}

// Exercice 4 
void testGestionObjets() {

    GestionObjets gestion(3);

    // Test 1 : Ajout normal
    bool res1 = gestion.ajouterObjet(new Rectangle(4, 2));
    test::printResult(res1, "GestionObjets : ajout d’un premier objet");

    // Test 2 : Ajout à un index précis
    bool res2 = gestion.ajouterObjet(new Carre(5), 2);
    test::printResult(res2, "GestionObjets : ajout à l’index 2");

    // Test 3 : Ajout à un index déjà occupé
    bool res3 = gestion.ajouterObjet(new Rectangle(1, 1), 2);
    test::printResult(!res3, "GestionObjets : refus ajout index occupé");

    // Test 4 : Ajout dans la dernière case libre
    bool res4 = gestion.ajouterObjet(new Rectangle(1, 1));
    test::printResult(res4, "GestionObjets : ajout dernier emplacement libre");

    // Test 5 : Tableau plein, ajout impossible
    Carre* c2 = new Carre(10);
    bool res5 = gestion.ajouterObjet(c2);
    test::printResult(!res5, "GestionObjets : refus ajout lorsque plein");

    cout << "\n-- Vérification des objets stockés --" << endl;

    // On suppose que afficherInfos() appelle aire() et perimetre()
    gestion.afficherInfos();

    // Ici on vérifie indirectement que les bons objets sont stockés :
    test::ASSERT_NEAR(gestion.getObjet(0)->aire(), 8.0, 1e-6, "Rectangle inséré : aire correcte");
    test::ASSERT_NEAR(gestion.getObjet(2)->perimetre(), 20.0, 1e-6, "Carre inséré : perimetre correct");
    test::ASSERT_NEAR(gestion.getObjet(1)->aire(), 1.0, 1e-6, "Rectangle insertion finale : aire correcte");
    
}

// ---------------------------
// MAIN DES TESTS
// ---------------------------

int main() {

    cout << "===== Lancement des tests unitaires =====" << endl << endl;

    testRectangle();
    testCarre();
    testGestionObjets(); 

    cout << "\n===== Résultats =====" << endl;
    cout << "Tests OK    : " << test::tests_reussis << endl;
    cout << "Tests FAIL  : " << test::tests_rates << endl;

    if (test::tests_rates == 0)
        cout << "\n===> Tous les tests sont PASSÉS" << endl;
    else
        cout << "\n===> Certains tests ont ÉCHOUÉ" << endl;

    return 0;
}
