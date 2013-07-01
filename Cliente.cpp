/* 
 * File:   Cliente.cpp
 * Author: RafaelCâmara
 * 
 * Created on 29 de Junho de 2013, 04:25
 */

#include "Cliente.h"

Cliente::Cliente(string name, string telephone, string address){
    while(!name){
        std::cout<<"Insira nome"<<std::endl;
        std::cin>>name;
    }
    while(!telephone){
        std::cout<<"Insira telefone válido"<<std::endl;
        std::cin>>telephone;
    }
    while(!address){
        std::cout<<"Insira endereço válido"<<std::endl;
        std::cin>>address;
    }
    nome = name;
    endereco = address;
    telefone = telephone;
}

void Cliente::setNome(string name){
    while(!name){
        std::cout<<"Insira nome"<<std::endl;
        std::cin>>name;
    }
    nome = name;
}

void Cliente::setTelefone(string telephone){
    while(!telephone){
        std::cout<<"Insira telefone válido"<<std::endl;
        std::cin>>telephone;
    }
    telefone = telephone;
}

void Cliente::setEndereco(string address){
    while(!address){
        std::cout<<"Insira endereço válido"<<std::endl;
        std::cin>>address;
    }
    endereco = address;
}

string Cliente::getNome(){
    return nome;
}

string Cliente::getTelefone(){
    return telefone;
}

string Cliente::getEndereco(){
    return endereco;
}
