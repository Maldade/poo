/*
 * Apolice.h
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include "TipoVeiculo.h"
#include "Marca.h"

class Veiculo
{
	private: 
		std::string placa;
		int ano;
		std::string renavam;
		TipoVeiculo tipo;
		Marca marca;
		Veiculo *prox;
	
	public:
		Veiculo();
		void lerVeiculo();
		void setPlaca(std::string p);
		void setAno(int a);
		void setRenavam(std::string r);
		void setProx(Veiculo *p);
		void setMarca();
		void setTipo();
		void alterarVeiculo();	
		std::string getPlaca();
		int getAno();
		std::string getRenavam();
		Veiculo *getProx();	
		std::string getMarca();
		std::string getTipo();
		void imprimirVeiculo();
		//~Veiculo();
};

#endif