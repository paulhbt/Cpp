/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu.cpp
 * Author: phabert
 * 
 * Created on 24 septembre 2018, 14:38
 */

#include "Menu.h"

Menu::Menu(string in_nomDuFichier) {
    ifstream fichier("text.txt", ios::in);
    
    if(fichier){
      nbLignes = count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n');  
    }
    else{
        cerr << "Impossible d'ouvrir le fichier" << endl;
    }
    
    
}

Menu::Menu(const Menu& orig) {
}

Menu::~Menu() {
}

