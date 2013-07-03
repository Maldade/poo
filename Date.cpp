/*
 * Date.cpp
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#include "Date.h"

using namespace std;

Date::Date(int d, int m, int a){
	time_t rawtime;
	struct tm *timeinfo;
	time (&rawtime);
	timeinfo = localtime (&rawtime);
	if ((d == 0) || (m == 0) || (a == 0)){
		dia=timeinfo->tm_mday;
		mes=timeinfo->tm_mon + 1;
		ano=timeinfo->tm_year + 1900;
	}
	else {
		if (((d > 0) && (d < 32)) && ((m > 0) && (m < 13)) && ((a > 1900) && (a < 2014))){
			dia=d;
			mes=m;
			ano=a;
		}
	}
}

void Date::setDia(int d){
	if ((d > 0) && (d < 32))
		dia=d;
}

void Date::setMes(int m){
	if ((m > 0) && (m < 13))
		mes=m;
}
void Date::setAno(int a){
	if ((a > 1900) && (a < 2014))
		ano=a;
}

int Date::getDia(){
	return dia;
}

int Date::getMes(){
	return mes;
}

int Date::getAno(){
	return ano;
}
