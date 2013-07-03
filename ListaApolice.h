/*
 * ListaApolice.h
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#ifndef LISTA_APOLICE_H
#define LISTA_APOLICE_H

#include <iostream>
#include "Apolice.h"

class ListaApolice 
{
	public:
		Apolice *inicio;

		ListaApolice();
		int inserirApolice();
		int buscarApoliceNum(); 		// Busca apolice pelo número
		int buscarApolicePlaca();		// Busca apolice pela placa do veículo
		int alterarApolice();		// Encontra apolice pelo número e altera tudo
		int removerApolice();		// Remove apolice pelo número
                void criaSinistro();
		void imprimirApolices();
		bool listaVazia();
		// ~ListaVeiculo();
};

#endif