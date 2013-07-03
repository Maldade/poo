/* 
 * File:   Classificacao.cpp
 * Author: RafaelCâmara
 * 
 * Created on 29 de Junho de 2013, 04:24
 */

#include "Classificacao.h"

using namespace std;

Classificacao::Classificacao(){
        classe = classe1;
}

string Classificacao::getClasse(){
    switch (classe){
        case 1: return "Classe 1";
        case 2: return "Classe 2";
        case 3: return "Não classificado";
    }
}

void Classificacao::setClasse(){
    int tipo;
    cout << "Informe a classificação da apólice: " << endl;
    cin >> tipo;

    switch (tipo){
        case 1: classe = classe1; break;
        case 2: classe = classe2; break;
        default: classe = 3; break;
    }
}


