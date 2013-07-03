/*
 * Date.h
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>
#include <ctime>

class Date{

	private:

		int dia;
		int mes;
		int ano;

	public:

		Date(int d = 0, int m = 0, int a = 0);
//		~Date();
		int getDia();
		int getMes();
		int getAno();
		void setDia(int);
		void setMes(int);
		void setAno(int);
};
#endif