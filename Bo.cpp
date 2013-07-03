/*
 * Bo.cpp
 *
 *  Created on: 29/06/2013
 *      Author: João Pedro Dias
 */

#include <iostream>
using namespace std;

#include "Bo.h"

Bo::Bo(int n, int d, int m, int a, string t) : num(n), tipo(t), data(d,m,a){
}

std::string Bo::getTipo(){
	return tipo;
}

int Bo::getNum(){
	return num;
}

int Bo::getD(){
	return data.getDia();
}

int Bo::getM(){
	return data.getMes();
}

int Bo::getA(){
	return data.getAno();
}

void Bo::setNum(int n){
	num = n;
}

void Bo::setD(int d){
	data.setDia(d);
}

void Bo::setM(int m){
	data.setMes(m);
}

void Bo::setA(int a){
	data.setAno(a);
}

void Bo::setTipo(string t){
	tipo = t;
}