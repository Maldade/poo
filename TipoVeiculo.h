/*
 * TipoVeiculo.h
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#ifndef TIPO_VEICULO_H
#define TIPO_VEICULO_H

#include <iostream>

class TipoVeiculo 
{
	private:
			int t;
			
	public:
			enum Tipo 
			{
				nada = 0,
				passeio = 1,
				transporte = 2
			};

			TipoVeiculo();
			TipoVeiculo(int t);
			void setTipo();
			std::string getTipo();
			//~TipoVeiculo();
};

#endif