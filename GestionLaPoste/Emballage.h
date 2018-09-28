/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Emballage.h
 * Author: phabert
 *
 * Created on 11 septembre 2018, 16:22
 */

#ifndef EMBALLAGE_H
#define EMBALLAGE_H
#include <string>

using namespace std;

class Emballage {
public:
    Emballage();
    Emballage(const Emballage& orig);
    Emballage(string _format, int _resistance, int _longueur, int _largeur, int _hauteur=0, int _nombreEnStock=0);
    virtual ~Emballage();
    void Visualiser();
    float CalculerVolume(int _longueur, int _largeur, int _hauteur);
    bool operator==(const Emballage &autreEmballage);
    
private:
    
    string format;
    int resistance; 
    int longueur;
    int largeur;
    int hauteur;
    int nombreEnStock;
    float volume;
   

};

#endif /* EMBALLAGE_H */

