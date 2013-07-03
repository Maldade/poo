/*
 * TipoSinistro.h
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#include <iostream>
using namespace std;

#include "TipoSinistro.h"

TipoSinistro::TipoSinistro(){
	t = nada; 
}

TipoSinistro::TipoSinistro(int tp){
	switch(tp){
		case 1:	t = incendio; break;
		case 2: t = colisao; break;
		case 3: t = furto; break;
		default: t = nada; break;
	}
}

string TipoSinistro::getTipo(){
	switch (t){
		case nada: 		return "Nada"; break;
		case incendio:	return "Incêndio"; break;
		case colisao:	return "Colisão"; break;
		case furto :	return "Furto"; break;
	}
}

void TipoSinistro::setTipo(string tp){
	if (tp == "incendio")		t = incendio;
	else if (tp == "colisao")	t = colisao;
	else if (tp == "furto")		t = furto;
	else 						t = nada;
}