/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Emballage.cpp
 * Author: phabert
 * 
 * Created on 11 septembre 2018, 16:22
 */
#include <iomanip>
#include <fstream>
#include "Emballage.h"
#include <iostream>

using namespace std;

Emballage::Emballage() {
}

Emballage::Emballage(const Emballage& orig) {
}

Emballage::~Emballage() {
    cout << "Destructeur / " << format << endl;
}

 Emballage::Emballage(string _format, int _resistance, int _longueur, int _largeur, int _hauteur, int _nombreEnStock) :
    format(_format),
    resistance(_resistance), 
    longueur(_longueur), 
    largeur(_largeur), 
    hauteur(_hauteur), 
    nombreEnStock(_nombreEnStock) 
 {
     cout << "Constructeur / " << format << endl;
 }

 void Emballage::Visualiser()
 {
    
    cout << setfill('-');
    cout << '+' << setw(17) << '+' << setw(12) << '+' << setw(17) << '+' << endl; 
    cout << setfill(' ');
    cout << '|' << "Format"  << setw(11) << '|' << "Resistance" << setw(2) << '|' << "Dimensions" << setw(7) << '|' << endl;
    cout << setfill('-');
    cout << '+' << setw(17) << '+' << setw(12) << '+' << setw(17) << '+' << endl;
    cout << setfill(' ');
    cout << '|' << format  << setw(15) << '|' << resistance << setw(3) << "kg" << setw(8) << '|' << longueur 
         << setw(2) << 'x' << setw(4) << largeur << setw(8) << '|' << endl;
    cout << setfill('-');
    cout << '+' << setw(17) << '+' << setw(12) << '+' << setw(17) << '+' << endl;
 }
 
 float Emballage::CalculerVolume(int _longueur, int _largeur, int _hauteur)
 {
     volume=longueur * largeur * hauteur;
 }
 
 bool Emballage::operator== (const Emballage& autreEmballage)
{
return( longueur == autreEmballage.longueur &&  largeur == autreEmballage.largeur && hauteur == autreEmballage.hauteur) ;
}