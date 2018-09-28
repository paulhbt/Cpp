/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: phabert
 *
 * Created on 11 septembre 2018, 16:20
 */

#include <cstdlib>
#include "Emballage.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    float volume;
    
    
    Emballage petitEmballage("XS",1,270,120);
    Emballage *ptEmballage;
    Emballage colis1("M",230,130,100);
    Emballage colis2("L",315,210,157);
    
    ptEmballage = new Emballage ("XL"3,335,215,58);
    
    ptEmballage ->Visualiser();
    
    delete ptEmballage;
    
    if (colis1 < colis2)
    {
        cout << "le colis 1 est moins volumineux que le colis 2" << endl;
    }
    else
    {
     cout << "le colis 2 est moins volumineux que le colis 1" << endl;
    }
    
    return 0;
}

