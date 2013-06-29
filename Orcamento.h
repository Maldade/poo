/* 
 * File:   Orcamento.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:24
 */

#ifndef ORCAMENTO_H
#define	ORCAMENTO_H

class Orcamento {
public:
    Orcamento();
    Orcamento(const Orcamento& orig);
    virtual ~Orcamento();
private:
    std::string tipo;
    float valorRessarc;
};

#endif	/* ORCAMENTO_H */

