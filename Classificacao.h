/* 
 * File:   Classificacao.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:24
 */

#ifndef CLASSIFICACAO_H
#define	CLASSIFICACAO_H

#include <iostream>

class Classificacao {
public:
    Classificacao();
    std::string getClasse();
    void setClasse();
private:
    enum{
        classe1 = 1,
        classe2
    };
    int classe;
};

#endif	/* CLASSIFICACAO_H */

