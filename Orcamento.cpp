/* 
 * File:   Orcamento.cpp
 * Author: RafaelCâmara
 * 
 * Created on 29 de Junho de 2013, 04:24
 */

#include "Orcamento.h"
#include<iostream>

Orcamento::Orcamento(string type, float value){
    tipo = type;
    valorRessarc = value;
}

void Orcamento::geraOrcamento(){
    string type;
    float value;
    type = getTipo();
    value = getValorRessarc();
    //TERMINARTERMINARTERMINARTERMINARTERMINARTERMINARTERMINARTERMINARTERMINARTERMINARTERMINAR//
}

string Orcamento::getTipo(){
    return tipo;
}

float Orcamento::getValorRessarc(){
    return valorRessarc;
}

Orcamento::~Orcamento() {
	
}

