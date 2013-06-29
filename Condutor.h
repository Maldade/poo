/* 
 * File:   Condutor.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:25
 */

#ifndef CONDUTOR_H
#define	CONDUTOR_H

class Condutor {
public:
    Condutor();
    Condutor(const Condutor& orig);
    virtual ~Condutor();
private:
    std::string numCNH;
    int idade;
};

#endif	/* CONDUTOR_H */

