/*
 * Bo.h
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#ifndef _B_O_H_
#define _B_O_H_

#include <iostream>
#include "Date.h"

class Bo{

	private:

		int num;
		Date data;
		std::string tipo;

	public:

		Bo(int n = 0, int d = 0, int m = 0, int a = 0, std::string t = "");
//		~Bo();
		std::string getTipo();
		int getNum();
		int getD();
		int getM();
		int getA();
		void setD(int);
		void setM(int);
		void setA(int);
		void setNum(int);
		void setTipo(std::string);
};

#endif