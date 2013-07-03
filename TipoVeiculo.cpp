/*
 * TipoVeiculo.h
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#include <iostream>
using namespace std;

#include "TipoVeiculo.h"

// Passeio = 1, Transporte = 2
TipoVeiculo::TipoVeiculo()
{
	t = nada;
}

TipoVeiculo::TipoVeiculo(int tp)
{
	switch(tp)
	{
		case 1:	t = passeio;	break;
		case 2: t = transporte;  break;
		default: t = nada; break;
	}
}

void TipoVeiculo::setTipo()
{
	int tp;
	cout << "Informe o tipo:" << endl;
	cout << "1-Passeio, 2-Transporte" << endl;
	cin >> tp;


	switch(tp)
	{
		case 1:	t = passeio;	break;
		case 2: t = transporte;  break;
		default: t = nada; 	break;
	}
}

string TipoVeiculo::getTipo()
{
	switch(t)
	{
		case nada: return "Nada"; break;
		case passeio: return "Passeio"; break;
		case transporte: return "Transporte"; break;
	}
}