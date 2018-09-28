/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Moteur.cpp
 * Author: phabert
 * 
 * Created on 25 septembre 2018, 14:26
 */

#include "Moteur.h"

Moteur::Moteur() {
}

Moteur::Moteur(const Moteur& orig) {
}

Moteur::~Moteur() {
}

Moteur::Moteur(int in_vitesseMax) {
    vitesseMax = in_vitesseMax;
    vitesseMax = 0;
}

Moteur::Accelerer(int in_increment){
    if(vitesse ){
        vitesse = vitesseMax;
    }
}

Moteur::Ralentir(int in_decrement){
    if(vitesse){
        
    }
}

void Moteur::Arreter(){
    vitesse = 0;
}

Moteur::Demarrer(int in_consigneDepart){
}

int Moteur::ObtenirVitesse(){
    return vitesse;
}
