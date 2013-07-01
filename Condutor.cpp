/* 
 * File:   Condutor.cpp
 * Author: RafaelCâmara
 * 
 * Created on 29 de Junho de 2013, 04:25
 */

#include <iostream>

#include "Condutor.h"

Condutor::Condutor(string license, int age){
    while(!license){
        std::cout<<"Insira número válido para CNH"<<std::endl;
        std::cin>>license;
    }
    while((age < 18) || (age > 90)){
        std::cout<<"Insira idade válida"<<std::endl;
        std::cin>>age;
    }
    numCNH = license;
    idade = age;
}

void Condutor::setIdade(int age){
    while((age < 18) || (age > 90)){
        std::cout<<"Insira idade válida"<<std::endl;
        std::cin>>age;
    }
    idade = age;
}

string Condutor::getNumCNH(){
    return numCNH;
}

int Condutor::getIdade(){
    return idade;
}
