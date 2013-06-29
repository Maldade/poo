/* 
 * File:   Classificacao.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:24
 */

#ifndef CLASSIFICACAO_H
#define	CLASSIFICACAO_H

class Classificacao {
public:
    Classificacao();
    Classificacao(const Classificacao& orig);
    virtual ~Classificacao();
private:
    enum{
        classe1,
        classe2
    };
};

#endif	/* CLASSIFICACAO_H */

