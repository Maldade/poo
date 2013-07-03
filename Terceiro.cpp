/*
 * Terceiro.cpp
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#include <iostream>
#include <string>
using namespace std;

#include "Terceiro.h"

Terceiro::Terceiro(string cod1, string seg, string n, string tel, string end, int idd) : PessoaFisica(cod1), seguradora(seg), nome(n), telefone(tel), endereco(end), idade(idd){
	prox = NULL;
}

string Terceiro::getSeguradora(){
	return seguradora;
}

string Terceiro::getNome(){
	return nome;
}

string Terceiro::getTelefone(){
	return telefone;
}

string Terceiro::getEndereco(){
	return endereco;
}

int Terceiro::getIdade(){
	return idade;
}

Terceiro *Terceiro::getProx(){
	return prox;
}

void Terceiro::setSeguradora(string seg){
	seguradora = seg;
}

void Terceiro::setNome(string n){
	nome = n;
}

void Terceiro::setTelefone(string tel){
	telefone = tel;
}

void Terceiro::setEndereco(string end){
	endereco = end;
}

void Terceiro::setIdade(int id){
	idade = id;
}

void Terceiro::setProx(Terceiro *p){
	prox = p;
}

void Terceiro::menu(){
	int i = 2;
	string t;
	while(i != 1){
		cout << endl <<"-------------- Dados de Terceiro --------------" << endl << endl;
		cout << "Entre com o nome da Seguradora: ";
		getline(cin,seguradora);
		cout << "Entre com o nome do Cliente: ";
		getline(cin,nome);
		cout << "Entre com o Telefone do Cliente: ";
		getline(cin,telefone);
		cout << "Entre com o Endereço do Cliente: ";
		getline(cin,endereco);
		cout << "Entre com a Idade do Cliente: ";
		cin >> idade;
		cout << "Entre com o CPF do Cliente: ";
		cin.ignore();
		getline(cin,t);
		setCpf(t);
		cout << endl << "Os dados estão corretos?" << endl << "1 - SIM"<< endl << "2 - NÃO" << endl << endl;
		exibir();
		cin >> i;
		cin.ignore();
	}

}

void Terceiro::exibir(){
	cout << "Nome da seguradora: " << seguradora << endl;
	cout << "Nome do cliente: " << nome << endl;
	cout << "Telefone do cliente: " << telefone << endl;
	cout << "Endereço do cliente: " << endereco << endl;
	cout << "Idade do cliente: " << idade << endl;
	cout << "CPF: " << getCpf() << endl;
}
