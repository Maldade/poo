/* 
 * File:   Cliente.cpp
 * Author: RafaelCâmara
 * 
 * Created on 29 de Junho de 2013, 04:25
 */

#include<iostream>

#include "Cliente.h"
#include "PessoaFisica.h"

Cliente::Cliente(){
    string name, telephone, address;
    while(name.length() < 3){
        std::cout<<"Insira nome"<<std::endl;
        std::getline(std::cin,name);
    }
    while(telephone.length() < 10){
        std::cout<<"Insira telefone válido com DDD"<<std::endl;
        std::cin>>telephone;
    }
    while(address.length() < 5){
        std::cout<<"Insira endereço válido"<<std::endl;
        std::getline(std::cin,address);
    }
    nome = name;
    endereco = address;
    telefone = telephone;
    prox = NULL;
}

void Cliente::setNome(string name){
    while(name.length() < 3){
        std::cout<<"Insira nome"<<std::endl;
        std::cin>>name;
    }
    nome = name;
}

void Cliente::setTelefone(string telephone){
    while(telephone.length() < 10){
        std::cout<<"Insira telefone com DDD"<<std::endl;
        std::cin>>telephone;
    }
    telefone = telephone;
}

void Cliente::setEndereco(string address){
    while(address.length() < 5){
        std::cin.ignore();
        std::cout<<"Insira endereço válido"<<std::endl;
        std::cin>>address;
    }
    endereco = address;
}

void Cliente::setDocumento(string documment){
    documento.setCpf(documment);
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

string Cliente::getDocumento(){
    return documento.getCpf();
}

void Cliente::exibirCliente(){
    std::cout<<std::endl<<"------------------ Cliente -------------------"<<std::endl<<std::endl;
    std::cout<<"Nome: "<< nome <<std::endl;
    std::cout<<"Telefone: "<< telefone <<std::endl;
    std::cout<<"Endereço: "<< endereco <<std::endl;    
}
