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
    Condutor(string license, int age);
    virtual ~Condutor();
    void setIdade(int idade = 0);
    string getNumCNH();
    int getIdade();
private:
    string numCNH;
    int idade;
};

#endif	/* CONDUTOR_H */

