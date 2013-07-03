/* 
 * File:   Condutor.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:25
 */

#ifndef CONDUTOR_H
#define	CONDUTOR_H

#include<string>

using std::string;

class Condutor {
public:
    Condutor();
    void setIdade(int age);
    void setNumCNH(string license);
    void exibirCondutor();
    string getNumCNH();
    int getIdade();
    Condutor * inserirCondutor();
    Condutor *proxCond;
private:
    string numCNH;
    int idade;
};

#endif	/* CONDUTOR_H */

