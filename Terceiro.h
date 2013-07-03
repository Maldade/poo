/*
 * Terceiro.h
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#ifndef _TERCEIRO_H_
#define _TERCEIRO_H_

#include <iostream>
#include "PessoaFisica.h"

class Terceiro : public PessoaFisica{
	private:

		std::string seguradora;
		std::string nome;
		std::string telefone;
		std::string endereco;
		int idade;
		Terceiro *prox;
		
	public:

		Terceiro(std::string cod1 = "", std::string seg = "", std::string n = "", std::string tel = "", std::string end = "", int idd = 0);
		std::string getSeguradora();
		std::string getNome();
		std::string getTelefone();
		std::string getEndereco();		
		int getIdade();
		Terceiro *getProx();
		void setSeguradora(std::string);
		void setNome(std::string);
		void setTelefone(std::string);
		void setEndereco(std::string);		
		void setIdade(int);
		void setProx(Terceiro *p);
		void menu();
		void exibir();
};
#endif
