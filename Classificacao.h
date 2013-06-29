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
    int getClasse();
private:
    enum{
        classe1,
        classe2
    };
    int classe;
};

#endif	/* CLASSIFICACAO_H */

