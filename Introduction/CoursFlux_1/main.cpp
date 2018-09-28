/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmichaud
 *
 * Created on 10 septembre 2018, 14:14
 */

#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "Bonjour le monde !!"<< endl;
    
    int unEntier=10;
    cout << unEntier << endl;
    
    
    
    
    cout << "Entrez un nombre : ";
    
    int nombre;
    cin >> nombre;
    
    cout << "le nombre saisi est :" << nombre << endl;
    
    cout << "Entrez une phrase : ";
    
    string phrase;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,phrase);
    
    cout << "la phrase saisi est :" << phrase << endl;
    
    
    //boolalpha
        
    cout << true << " et " << false << endl;
    cout << boolalpha ;
    cout << true << " et " << false << endl;
    
    cout << 45 << endl;
    cout << hex << 45 << endl;
    cout << oct << 45 << endl;
    cout << dec << 45 << endl;
    
    //Les manipulateurs plus avancés
    
    cout << setfill('.');
    for (int i=0;i<10;i++)
    {
        if (i%2)
            cout << "|" << left << setw(5) << i << "|" << endl;
        else
            cout << "|" << right << setw(5) << i << "|" << endl;
    }
    
    
    return 0;    
}

