/*
 * Apolice.h
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#ifndef APOLICE_H
#define APOLICE_H

#include <iostream>

#include "Date.h"
#include "Veiculo.h"
#include "Classificacao.h"
#include "Sinistro.h"
#include "Cliente.h"
#include "Condutor.h"

 class Apolice
 {
 	private:
 		int numApolice;
 		Date vigencia;
 		Veiculo veiculo;
 		Classificacao classificacao;
 		Sinistro sinistros;
                Cliente cliente;
                Condutor condutor;

 		Apolice *prox;

 	public:
 		Apolice();
 		int getNumAp();
 		int getDia();
 		int getMes();
 		int getAno();
 		std::string getPlacaVeiculo();
 		Apolice *getProx();
 		std::string getClassificacao();
 		void setNumAp(int n);
 		void setVigencia(int d, int m, int a);
 		void setProx(Apolice *p);
 		void setClassificacao();
 		void alterarVeiculo();
 		void imprimirVeiculo();
 		void sinistrosCRUD();
 		void exibirSinistros();
                void imprimeCliente();
                void imprimirCondutores();
 };

 #endif 