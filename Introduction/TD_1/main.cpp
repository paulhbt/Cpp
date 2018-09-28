
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    string inputFile;
    
    cout << "Entrer le nom du fichier à lire : ";
    cin >> inputFile;
    
    ifstream fichier(inputFile.c_str());  //On crée un flux en lecture sur le fichier 
    
    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" <<endl;
    
    else {
        

    string pays;
    int nbOr;
    int nbArgent;
    int nbBronze;
    
     cout << setfill('.');
     cout << '+' << setw(17) << '+' << setw(8) << '+' << setw(8) << '+' << setw(8)<< '+' << endl;
             
    while(!fichier.eof()) //Tant qu'on est pas à la fin du fichier 
    {
        fichier >> pays >> nbOr >> nbArgent >> nbBronze; //on recupere les valeurs
        if(fichier.good()) 
        {
            cout << "|" << left << setw(16) << pays << "|"  << right  << setw(7) << nbOr << "|" << right << setw(7) << nbArgent << "|" << right << setw(7) << nbBronze << "|" << endl;
            // Affichage d'une ligne du tableau
        }     
    }
         cout << setfill('.');
     cout << '+' << setw(17) << '+' << setw(8) << '+' << setw(8) << '+' << setw(8)<< '+' << endl;
    //on affiche le bas du tableau
 
    }
    
    return 0;
}

