/* 
 * File:   Classificacao.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:24
 */

#ifndef CLASSIFICACAO_H
#define	CLASSIFICACAO_H

#include<string>

using std::string;

class Classificacao {
public:
    Classificacao(int tipo);
    Classificacao(string tipo);
    string getClasse();
    void setClasse(int tipo);
    void setClasse(string tipo);
private:
    enum{
        classe1 = 1,
        classe2
    };
    int classe;
};

#endif	/* CLASSIFICACAO_H */

