/*
 * PessoaFisica.h
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#ifndef _PESSOA_FISICA_H_
#define _PESSOA_FISICA_H_

#include <iostream>

class PessoaFisica{

	private:

		std::string cpf;

	public:

		PessoaFisica(std::string codigo = "") : cpf(codigo){};
//		~PessoaFisica();
		std::string getCpf() {return cpf;};
		void setCpf (std::string codigo) {cpf=codigo;};

};

#endif