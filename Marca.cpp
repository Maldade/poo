/*
 * Marca.cpp
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#include <iostream>
#include "Marca.h"

using namespace std;

Marca::Marca()
{
	marca = nada;
}

Marca::Marca(int m)
{
	switch(m)
	{
		case 1:	marca = fiat;	break;
		case 2: marca = vw;  break;
		case 3: marca = ford; break;
		case 4: marca = honda; break;
		default: marca = nada; break;
	}
}

void Marca::setMarca()
{
	int m;
	cout << "Informe a marca:" << endl;
	cout << "1-Fiat, 2-VW, 3-Ford, 4-Honda" << endl;
	cin >> m;

	switch(m)
	{
		case 1:	marca = fiat;	break;
		case 2: marca = vw;  break;
		case 3: marca = ford; break;
		case 4: marca = honda; break;
		default: marca = nada; break;
	}
}

string Marca::getMarca()
{
	switch(marca)
	{
		case nada: return "Nada"; break;
		case fiat: return "Fiat"; break;
		case vw: return "Volksvagen"; break;
		case ford: return "Ford"; break;
		case honda: return "Honda"; break;
	}
}
