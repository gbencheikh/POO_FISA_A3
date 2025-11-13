#include <iostream>

using namespace std; 

class Date{
private: 
    int j; 
    int m; 
    int a; 

public: 
    Date():j(0),m(0),a(a){} 
    Date(int j, int m, int a):j(j), m(m), a(a){}
    Date(Date& D){
        j = D.getJ(); 
        m = D.getM(); 
        a = D.getA(); 
    }

    // getters
    int getJ(){return j;}
    int getM(){return m;}
    int getA(){return a;}

    // setters
    void setJ(int jour){j = jour;}
    void setM(int mois){m = mois;}
    void setA(int annee){a = annee;}

    //Methods
    static void Affiche_jj_mm_aaaa(int j, int m, int a){
        cout << j << "_" << m << "_" << a << std::endl; 
    }

    static void Affiche_mm_jj_aaaa(int j, int m, int a){
        cout << m << "_" << j << "_" << a << std::endl; 
    }

    static void Affiche_jj_XX_aaaa(int j, int m, int a){
        std::string mois;  
        switch(m){
            case 1 : mois = "Janvier"; break; 
            case 2 : mois = "Fevrier"; break; 
            case 3 : mois = "Mars"; break;
            case 4 : mois = "Avril"; break; 
            case 5 : mois = "Mai"; break; 
            case 6 : mois = "Juin"; break; 
            case 7 : mois = "Juillet"; break; 
            case 8 : mois = "Aout"; break; 
            case 9 : mois = "Septembre"; break; 
            case 10 : mois = "Octobre"; break; 
            case 11 : mois = "Novembre"; break;
            default : mois = "Decembre"; 
        }

        cout << j << " " << mois << " " << a << std::endl; 
    }
};

class Livre{
private: 
    string auteur; 
    string titre; 
    Date* date_publication; 

public: 
    static int cpt; 

    Livre():auteur(""), titre(""), date_publication(new Date()){cpt++; }
    Livre(string auteur, string titre, Date* date_publication): auteur(auteur), titre(titre), date_publication(date_publication){cpt++; }
    Livre(Livre& L){
        auteur = L.getAuteur(); 
        titre = L.getTitre(); 
        date_publication = L.getDate_publication(); 
        cpt++; 
    }

    // getters
    string getAuteur(){return auteur;}
    string getTitre(){return titre;}
    Date* getDate_publication() {return date_publication; }

    // setters 
    void setAuteur(string Auteur){auteur = Auteur;}
    void setTitre(string Titre){titre = Titre;}
    void setDate_publication(Date* Date_publication) {date_publication = Date_publication;}

    // Methods
    void Affiche(){
        cout << "Livre : " << endl; 
        cout << " Auuteur : " << auteur << endl; 
        cout << " Titre : " << titre  << endl; 
        cout << " Date de publication "; Date::Affiche_jj_XX_aaaa(date_publication->getJ(), date_publication->getM(), date_publication->getA());
    }

    ~Livre(){cpt--; }
};

int Livre::cpt = 0; 

int main(){
    Livre L("Ghita", "POO", new Date(13,11,2025));
    Livre L2("Alexandre", "RO", new Date(20,03,2024)); 

    L.Affiche(); 

    cout << "Nombre de livres " << Livre::cpt << endl; 

    Date::Affiche_jj_mm_aaaa(11,5,2020); 
    
    return 0; 
}