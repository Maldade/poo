/*
 * Apolice.cpp
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#include <iostream>
#include "Apolice.h"

using namespace std;

Apolice::Apolice()
{
	int n;
	cout << "Informe o número da apólice: " << endl;
	cin >> n;
	cout << "Vigêcia da apólice: " << vigencia.getDia() << "/" << vigencia.getMes() << "/" << vigencia.getAno() << endl;
	
	setNumAp(n);
	setClassificacao();
        condutor = (*condutor.inserirCondutor());
}

void Apolice::setNumAp(int n)
{
	numApolice = n;
}

int Apolice::getNumAp()
{
	return numApolice;
}

int Apolice::getDia()
{
	return vigencia.getDia();
}

int Apolice::getMes()
{
	return vigencia.getMes();
}

int Apolice::getAno()
{
	return vigencia.getAno();
}

void Apolice::setVigencia(int d, int m, int a)
{
	vigencia.setDia(d);
	vigencia.setMes(m);
	vigencia.setAno(a);
}

void Apolice::setClassificacao()
{
	classificacao.setClasse();
}

string Apolice::getClassificacao()
{
	return classificacao.getClasse();
}

string Apolice::getPlacaVeiculo()
{
	return veiculo.getPlaca();
}

Apolice *Apolice::getProx()
{
	return prox;
}

void Apolice::setProx(Apolice *p)
{
	prox = p;
}

void Apolice::alterarVeiculo()
{
	veiculo.alterarVeiculo();
}

void Apolice::imprimirVeiculo()
{
	veiculo.imprimirVeiculo();
}

void Apolice::sinistrosCRUD()
{
	sinistros.menu();
}

void Apolice::exibirSinistros()
{
	sinistros.exibir();
}

void Apolice::imprimeCliente(){
    cliente.exibirCliente();
}

void Apolice::imprimirCondutores(){
    condutor.exibirCondutor();
}
