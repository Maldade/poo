/* 
 * File:   Classificacao.cpp
 * Author: RafaelCâmara
 * 
 * Created on 29 de Junho de 2013, 04:24
 */

#include "Classificacao.h"

Classificacao::Classificacao(int tipo){
    switch (tipo){
        case 1: classe = classe1;
        case 2: classe = classe2;
        default: classe = 3;
    }
}

Classificacao::Classificacao(string tipo){
    tipo = tolower(tipo);
    switch (tipo){
        case classe1: classe = classe1;
        case classe 1: classe = classe1;
        case classe2: classe = classe2;
        case classe 2: classe = classe2;
        default: classe = 3;
    }
}

string Classificacao::getClasse(){
    switch (classe){
        case 1: return "Classe 1";
        case 2: return "Classe 2";
        case 3: return "Não classificado";
    }
}

void Classificacao::setClasse(int tipo){
    switch (tipo){
        case 1: classe = classe1;
        case 2: classe = classe2;
        default: classe = 3;
    }
}

void Classificacao::setClasse(string tipo){
    tipo = tolower(tipo);
    switch (tipo){
        case classe1: classe = classe1;
        case classe 1: classe = classe1;
        case classe2: classe = classe2;
        case classe 2: classe = classe2;
        default: classe = 3;
    }
}
