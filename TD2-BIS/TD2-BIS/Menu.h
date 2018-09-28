/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu.h
 * Author: phabert
 *
 * Created on 24 septembre 2018, 14:38
 */

#ifndef MENU_H
#define MENU_H
#include <string>
#include  <iostream>
#include  <iomanip>

using namespace std;


class Menu {
public:
    Menu(string _nomDuFichier);
    virtual ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
   
private:
    string nomDuFichier;
    string *options;
    int nbLignes;
    int longueurMax;
};

#endif /* MENU_H */
