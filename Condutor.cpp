/* 
 * File:   Condutor.cpp
 * Author: RafaelCâmara
 * 
 * Created on 29 de Junho de 2013, 04:25
 */

#include <iostream>

#include "Condutor.h"

Condutor::Condutor(){
    idade = 0;
    numCNH = '1';
    proxCond = NULL;
}

void Condutor::setNumCNH(string license){
    while(license.length() != 11){
        std::cout<<"Insira número válido para CNH (11 dígitos)"<<std::endl;
        std::cin>>license;
    }
    numCNH = license;
}

void Condutor::setIdade(int age){
    while((age < 18) || (age > 90)){
        std::cout<<"Insira idade válida"<<std::endl;
        std::cin>>age;
    }
    idade = age;
}

void Condutor::exibirCondutor(){
    Condutor *aux = proxCond;
    std::cout<<std::endl<<"------------------ Condutores -------------------"<<std::endl<<std::endl;
    std::cout<<"CNH: "<< numCNH <<std::endl;
    std::cout<<"Idade: "<< idade <<std::endl;
    while(aux != NULL){
        std::cout<<"CNH: "<< aux->getNumCNH() <<std::endl;
        std::cout<<"Idade: "<< aux->getIdade() <<std::endl<<std::endl;
        aux = aux->proxCond;
    }
}

string Condutor::getNumCNH(){
    return numCNH;
}

int Condutor::getIdade(){
    return idade;
}

Condutor * Condutor::inserirCondutor(){
    Condutor *novo;
    string license;
    int age = 0, option;
    novo = new Condutor;
    while(license.length() != 11){
        std::cout<<"Insira número válido para CNH (11 dígitos)"<<std::endl;
        std::cin>>license;
    }
    while((age < 18) || (age > 90)){
        std::cout<<"Insira idade válida"<<std::endl;
        std::cin>>age;
    }
    novo->setNumCNH(license);
    novo->setIdade(age);
    std::cout << std::endl << "Deseja inserir outro condutor?" << std::endl << "1 - SIM"<< std::endl << "2 - NÃO" << std::endl << std::endl;
    std::cin>>option;
    if(option == 1)
        novo->proxCond = inserirCondutor();
    else 
        novo->proxCond = NULL;
    return novo;
}