/* 
 * File:   GerenciarSegurados.cpp
 * Author: RafaelCâmara
 * 
 * Created on 01 de Julho de 2013, 10:08
 */

#include<iostream>

#include"GerenciarSegurados.h"

using namespace std;

GerenciarSegurados::GerenciarSegurados(){
    listaClientes = NULL;
    listaSegurados = NULL;
}

int GerenciarSegurados::inserirCliente(){
    Cliente *newCliente, *aux;
    newCliente = new Cliente();
    aux = listaClientes;
    if(listaVaziaCliente()){
        listaClientes = newCliente;
    }else{
        while(aux != NULL)
            aux = aux->prox;
        aux = newCliente;
    }
}

int GerenciarSegurados::buscarCliente(string nome){
    Cliente *aux;
    aux = listaClientes;
    if(listaVaziaCliente()){
        cout<<"Não há clientes cadastrados"<<endl;
        return false;
    }else{
        while((aux->getNome() != nome) || (aux != NULL))
            aux = aux->prox;
        if(aux->getNome() == nome){
            cout<<"Cliente encontrado"<<endl;
            cout<<"Nome: "<<nome<<endl;
            cout<<"Telefone: "<<aux->getTelefone()<<endl;
            cout<<"Endereço: "<<aux->getEndereco()<<endl;
            return true;
        }else{
            cout<<"Cliente inexistente"<<endl;
            return false;
        }
    }
}

int GerenciarSegurados::alterarCliente(string nome){
    Cliente *aux;
    string auxData;
    aux = listaClientes;
    if(listaVaziaCliente()){
        cout<<"Não há clientes cadastrados"<<endl;
        return false;
    }else{
        while((aux->getNome() != nome) || (aux != NULL))
            aux = aux->prox;
        if(aux->getNome() == nome){
            cout<<"Cliente encontrado"<<endl;
            cout<<"Nome: "<<nome<<endl;
            cout<<"Novo nome: ";
            cin>>auxData;
            aux->setNome(auxData);
            cout<<"Telefone: "<<aux->getTelefone()<<endl;
            cout<<"Novo telefone: ";
            cin>>auxData;
            aux->setTelefone(auxData);
            cout<<"Endereço: "<<aux->getEndereco()<<endl;
            cout<<"Novo endereço: ";
            cin>>auxData;
            aux->setEndereco(auxData);
            cout <<"CPF: "<<aux->getDocumento()<<endl;
            cout<<"Novo CPF: ";
            cin>>auxData;
            aux->setDocumento(auxData);
            return true;
        }else{
            cout<<"Clciente inexistente"<<endl;
            return false;
        }
    }
}

int GerenciarSegurados::removerCliente(string nome){
    Cliente *auxAnt, *auxPos;
    auxAnt = listaClientes;
    if(listaVaziaCliente()){
        cout<<"Não há clientes cadastrados"<<endl;
        return false;
    }else{
        if((auxAnt->prox == NULL) && (auxAnt->getNome() != nome)){
            cout<<"Cliente inexistente"<<endl;
            return false;
        }
        while((auxAnt->prox->getNome() != nome) || (auxAnt->prox != NULL))
                auxAnt = auxAnt->prox;
        if(auxAnt->prox->getNome() == nome){
            cout<<"Cliente a remover:"<<endl;
            cout<<"Nome: "<<nome<<endl;
            cout<<"Telefone: "<<auxAnt->prox->getTelefone()<<endl;
            cout<<"Endereço: "<<auxAnt->prox->getEndereco()<<endl;
            cout <<"CPF: "<<auxAnt->prox->getDocumento()<<endl;
            auxPos = auxAnt->prox->prox;
            delete auxAnt->prox;
            auxAnt->prox = auxPos;
            return true;
        }else{
            cout<<"Cliente inexistente"<<endl;
            return false;
        }
    }
}

bool GerenciarSegurados::listaVaziaCliente(){
    if(listaClientes == NULL)
        return true;
    return false;
}

int GerenciarSegurados::inserirSegurado(){
    Condutor *newSegurado, *aux;
    newSegurado = new Condutor();
    aux = listaSegurados;
    if(listaVaziaSegurado()){
        listaSegurados = newSegurado;
    }else{
        while(aux != NULL)
            aux = aux->proxCond;
        aux = newSegurado;
    }
}

int GerenciarSegurados::buscarSegurado(string numCNH){
     Condutor *aux;
    aux = listaSegurados;
    if(listaVaziaSegurado()){
        cout<<"Não há condutores cadastrados"<<endl;
        return false;
    }else{
        while((aux->getNumCNH() != numCNH) || (aux != NULL))
            aux = aux->proxCond;
        if(aux->getNumCNH() == numCNH){
            cout<<"Condutor encontrado"<<endl;
            cout<<"CNH: "<<numCNH<<endl;
            cout<<"idade: "<<aux->getIdade()<<endl;
            return true;
        }else{
            cout<<"Condutor inexistente"<<endl;
            return false;
        }
    }
}

int GerenciarSegurados::alterarSegurado(string numCNH){
    Condutor *aux;
    string auxData;
    int id;
    aux = listaSegurados;
    if(listaVaziaSegurado()){
        cout<<"Não há Condutores cadastrados"<<endl;
        return false;
    }else{
        while((aux->getNumCNH() != numCNH) || (aux != NULL))
            aux = aux->proxCond;
        if(aux->getNumCNH() == numCNH){
            cout<<"Cliente encontrado"<<endl;
            cout<<"CNH: "<<numCNH<<endl;
            cout<<"Nova CNH: ";
            cin>>auxData;
            aux->setNumCNH(auxData);
            cout <<"Idade: "<<aux->getIdade()<<endl;
            cout<<"Nova idade: ";
            cin>>id;
            aux->setIdade(id);
            return true;
        }else{
            cout<<"Condutor inexistente"<<endl;
            return false;
        }
    }
}

int GerenciarSegurados::removerSegurado(string numCNH){
    Condutor *auxAnt, *auxPos;
    auxAnt = listaSegurados;
    if(listaVaziaSegurado()){
        cout<<"Não há condutores cadastrados"<<endl;
        return false;
    }else{
        if((auxAnt->proxCond == NULL) && (auxAnt->getNumCNH() != numCNH)){
            cout<<"Condutor inexistente"<<endl;
            return false;
        }
        while((auxAnt->proxCond->getNumCNH() != numCNH) || (auxAnt->proxCond != NULL))
                auxAnt = auxAnt->proxCond;
        if(auxAnt->proxCond->getNumCNH() == numCNH){
            cout<<"Condutor a remover:"<<endl;
            cout<<"CNH: "<<numCNH<<endl;
            cout<<"idade: "<<auxAnt->proxCond->getIdade()<<endl;
            auxPos = auxAnt->proxCond->proxCond;
            delete auxAnt->proxCond;
            auxAnt->proxCond = auxPos;
            return true;
        }else{
            cout<<"Condutor inexistente"<<endl;
            return false;
        }
    }
}

bool GerenciarSegurados::listaVaziaSegurado(){
    if(listaSegurados == NULL)
        return true;
    return false;
}
