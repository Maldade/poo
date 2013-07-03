/*
 * veiculo.cpp
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#include <iostream>
#include "Veiculo.h"

using namespace std;

Veiculo::Veiculo()
{
	string p, r;
	int a;

	cout << "Placa do veiculo:" << endl;
	cin >> p;
	cout << "Ano do veiculo:" << endl;
	cin >> a;
	cout << "Renavam do veiculo:" << endl;
	cin >> r;

	setPlaca(p);
	setAno(a);
	setRenavam(r);
	marca.setMarca();
	tipo.setTipo();

}

// Usado para alterar veículo
void Veiculo::alterarVeiculo()
{
	string p, r;
	int a;

	cout << "INFORME NOVOS DADOS:" << endl;
	cout << "Placa do veiculo:" << endl;
	cin >> p;
	cout << "Ano do veiculo:" << endl;
	cin >> a;
	cout << "Renavam do veiculo:" << endl;
	cin >> r;

	setPlaca(p);
	setAno(a);
	setRenavam(r);
	marca.setMarca();
	tipo.setTipo();
}

void Veiculo::setPlaca(string p)
{
	placa = p;
}

void Veiculo::setAno(int a)
{
	ano = a;
}

void Veiculo::setRenavam(string r)
{
	renavam = r;
}

void Veiculo::setProx(Veiculo *p)
{
	prox = p;
}

void Veiculo::setMarca()
{
	marca.setMarca();
}

void Veiculo::setTipo()
{
	tipo.setTipo();
}

string Veiculo::getPlaca()
{
	return placa;
}

int Veiculo::getAno()
{
	return ano;
}

std::string Veiculo::getRenavam()
{
	return renavam;
}

Veiculo * Veiculo::getProx()
{
	return prox;
}

string Veiculo::getMarca()
{
	return marca.getMarca();
}

string Veiculo::getTipo()
{
	return tipo.getTipo();
}

void Veiculo::imprimirVeiculo()
{
	cout << "------------------ Veículos ------------------" << endl;
	cout << "Placa: " << getPlaca() << endl;
	cout << "Ano: " << getAno() << endl;
	cout << "Renavam: " << getRenavam() << endl;
	cout << "Marca: " << marca.getMarca() << endl;
	cout << "Tipo: " << tipo.getTipo() << endl;
}

//Veiculo::~Veiculo(){}