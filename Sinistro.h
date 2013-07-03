/*
 * Sinistro.h
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#ifndef _SINISTRO_H_
#define _SINISTRO_H_

#include <iostream>
#include "TipoSinistro.h"
#include "Terceiro.h"
#include "Bo.h"
#include "Date.h"
#include "PessoaFisica.h"

class Sinistro{
	private:

		int num;
		Date data;
		std::string local;
		Bo bo;
		Terceiro *terceiro;
		TipoSinistro tipo;
		Sinistro *prox;

	public:

		Sinistro(int n = 0, int d = 0, int m = 0, int a = 0, std::string l ="", int t = 0);
		int inserirTerceiro();
		int removerTerceiro(std::string);
		int getNum();
		Sinistro *getProx();
		int getD();
		int getM();
		int getA();
		std::string getLocal();
		int getDBO();
		int getMBO();
		int getABO();
		std::string getTipoBO();
		int getNumBO();
		std::string getTipoSinistro();
		void setNum(int);
		void setProx(Sinistro *p);
		void setD(int);
		void setM(int);
		void setA(int);
		void setLocal(std::string);
		void setDBO(int);
		void setMBO(int);
		void setABO(int);
		void setTipoBO(std::string);
		void setNumBO(int);
		void setTipoSinistro(std::string);
		void menu();
		~Sinistro();
		void exibir();	 
};

#endif
