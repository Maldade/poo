/*
 * TipoSinistro.cpp
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#ifndef _TIPO_SINISTRO_H_
#define _TIPO_SINISTRO_H_

#include <iostream>

class TipoSinistro{

	public:

		enum Tipo{

			nada = 0,
			incendio = 1,
			colisao = 2,
			furto = 3
		};
		
		TipoSinistro();
		TipoSinistro(int);
		std::string getTipo();
		void setTipo(std::string);

	private:

		Tipo t;
};
#endif