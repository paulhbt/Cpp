/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Moteur.h
 * Author: phabert
 *
 * Created on 25 septembre 2018, 14:26
 */

#ifndef MOTEUR_H
#define MOTEUR_H

class Moteur {
public:
    Moteur(const Moteur& orig); 
    virtual ~Moteur();
    Moteur(int in_vitesseMax);
    Accelerer(int in_increment);
    Ralentir(int in_decrement);
    void Arreter();
    Demarrer(int in_consigneDepart);
    int ObtenirVitesse();
    
private:

    int vitesse;
    int vitesseMax;
};

    

#endif /* MOTEUR_H */

