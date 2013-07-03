/*
 * Marca.h
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#ifndef MARCA_H
#define MARCA_H

#include <iostream>

class Marca 
{
	private:
			int marca;
			
	public:
			enum marcas 
			{
				nada = 0,
				fiat = 1,
				vw = 2,
				ford = 3,
				honda = 4
			};

			Marca();
			Marca(int m);
			void setMarca();
			std::string getMarca();
			//~Marca();
};

#endif