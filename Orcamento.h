/* 
 * File:   Orcamento.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:24
 */

#ifndef ORCAMENTO_H
#define	ORCAMENTO_H

#include<string>

using std::string;

class Orcamento {
public:
    Orcamento(string type, float value);
    virtual ~Orcamento();
private:
    string tipo;
    float valorRessarc;
};

#endif	/* ORCAMENTO_H */

