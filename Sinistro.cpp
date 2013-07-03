/*
 * Sinistro.cpp
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#include <iostream>
using namespace std;

#include "Sinistro.h"

Sinistro::Sinistro(int n, int d, int m, int a, string l, int t) : num(n),local(l), data(d,m,a), tipo(t){
	terceiro = NULL;
	prox = NULL;
}

int Sinistro::inserirTerceiro(){
	try{
		Terceiro *novo = new Terceiro;
		novo->menu();

		if (terceiro == NULL){
			terceiro = novo;
		}
		else{
			novo->setProx(terceiro);
			terceiro = novo;
		}
	}
	catch (bad_alloc){
		cout << "Memória Insuficiente!" << endl;
	}
}

int Sinistro::removerTerceiro(string n){
	Terceiro *aux1, *aux2 = terceiro;
	while (aux2 != NULL){
		if (aux2->getNome() == n){
			if (aux2 == terceiro){
				terceiro = aux2->getProx();
				delete(aux2);
				return 1;
			}
			else{
				aux1->setProx(aux2->getProx());
				delete(aux2);
				return 1;
			}
		}
		aux1 = aux2;
		aux2 = aux2->getProx();
	}
	return 0;
}

int Sinistro::getNum(){
	return num;
}

Sinistro *Sinistro::getProx(){
	return prox;
}

int Sinistro::getD(){
	return data.getDia();
}

int Sinistro::getM(){
	return data.getMes();
}

int Sinistro::getA(){
	return data.getAno();
}

std::string Sinistro::getLocal(){
	return local;
}

int Sinistro::getDBO(){
	return bo.getD();
}

int Sinistro::getMBO(){
	return bo.getM();
}

int Sinistro::getABO(){
	return bo.getA();
}

std::string Sinistro::getTipoBO(){
	return bo.getTipo();
}

int Sinistro::getNumBO(){
	return bo.getNum();
}

string Sinistro::getTipoSinistro(){
	return tipo.getTipo();
}

void Sinistro::setNum(int n){
	num = n;
}

void Sinistro::setProx(Sinistro *p){
	prox = p;
}

void Sinistro::setD(int d){
	data.setDia(d);
}

void Sinistro::setM(int m){
	data.setMes(m);
}

void Sinistro::setA(int a){
	data.setAno(a);
}

void Sinistro::setLocal(string l){
	local = l;
}

void Sinistro::setDBO(int d){
	bo.setD(d);
}

void Sinistro::setMBO(int m){
	bo.setM(m);
}

void Sinistro::setABO(int a){
	bo.setA(a);
}

void Sinistro::setTipoBO(string t){
	bo.setTipo(t);
}

void Sinistro::setNumBO(int n){
	bo.setNum(n);
}

void Sinistro::setTipoSinistro(string t){
	tipo.setTipo(t);
}

Sinistro::~Sinistro(){
	Terceiro *aux = terceiro;
	while (aux != NULL){
		terceiro = aux->getProx();
		delete(aux);
		aux = terceiro;
	}
}

void Sinistro::menu(){
	int d,m,a,n,i=0;
	string t;
	while (i != 4){
		if (num != 0){
			cout << endl << "-------------- Menu no Sinistro ---------------" << endl;
			cout << "1 - Imprimir Dados" << endl;
			cout << "2 - Remover Terceiro" << endl;
			cout << "3 - Editar Dados" << endl;
			cout << "4 - Sair do Menu Sinistro.";
			cin >> i;
		}
		if ((num == 0) || (i == 3)) {
			cout <<"\e[H\e[2J";
			cout << endl << "------------- Inserir no Sinistro -------------" << endl;
			cout << endl << endl;
			cout << "Entre com o número do Sinistro: ";
			cin >> num;
			cout << "Entre com a data do Sinistro (dia mês ano): ";
			cin >> d >> m >> a;
			if (((d < 0) || (d>31)) || ((m<0) || (m>12)) || ((a<1900) || (a>2013))){
				cout << "Data inválida, dia atual inserido!" << endl;
				d = m = a = 0;
			}
			setD(d);
			setM(m);
			setA(a);
			cout << "Entre com o Local do Sinistro: ";
			cin.ignore();
			getline(cin,local);
			cout << "Entre com o tipo do Sinistro: ";
			getline(cin,t);
			setTipoSinistro(t);
			cout << endl <<"-------- Dados do Boletim de Ocorrêcia --------" << endl << endl;
			cout << "Entre com o número do Boletim de Ocorrência: ";
			cin >> n;
			setNumBO(n);
			cout << "Entre com a data do Boletim de Ocorrência (dia mês ano): ";
			cin >> d >> m >> a;
			if (((d < 0) || (d>31)) || ((m<0) || (m>12)) || ((a<1900) || (a>2013))){
				cout << "Data inválida, dia atual inserido!" << endl;
				d = m = a = 0;
			}
			setDBO(d);
			setMBO(m);
			setABO(a);
			cout << "Entre com o tipo do Boletim de Ocorrência: ";
			cin.ignore();
			getline(cin,t);
			setTipoBO(t);
			n=1;
			while (n != 2){
				inserirTerceiro();
				cout << endl << "Deseja inserir mais Terceiros?" << endl << "1 - SIM"<< endl << "2 - NÃO" << endl << endl;
				cin >> n;
				cin.ignore();
			}
			cout <<"\e[H\e[2J";
		}
		else if (i == 1){
			cout <<"\e[H\e[2J";
			exibir();
		}
		else if (i == 2){
			cout <<"\e[H\e[2J";
			cout << "Entre com o Nome do Terceiro que deseja excluir" << endl;
			cin.ignore();
			getline(cin,t);
			if (removerTerceiro(t) == 0)
				cout << "Nome não encontrado." << endl;
			else
				cout << t << " removido." << endl;
		}
	}
}

void Sinistro::exibir(){
	cout << endl <<"------------------ Sinistro -------------------" << endl << endl;
	cout << "Número do Sinistro: " << num << endl;
	cout << "Data: " << getD() << " / " << getM() << " / " << getA() << endl;
	cout << "Local do Sinistro: " << local << endl;
	cout << "Tipo do Sinistro: " << getTipoSinistro() << endl;
	cout << endl <<"------------ Boletim de Ocorrência ------------" << endl << endl;
	cout << "Número do Boletim de Ocorrência: " << getNumBO()<< endl;
	cout << "Data do Boletim de Ocorrência: " << getDBO() << " / " << getMBO() << " / " << getABO() << endl;
	cout << "Tipo do Boletim de Ocorrência: " << getTipoBO() << endl;
	cout << endl <<"------------------ Terceiros ------------------" << endl << endl;
	Terceiro *aux = terceiro;
	while (aux != NULL){
		aux->exibir();
		cout<< endl << endl;
		aux = aux->getProx();
	}
}
