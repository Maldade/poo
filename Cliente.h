/* 
 * File:   Cliente.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:25
 */

#ifndef CLIENTE_H
#define	CLIENTE_H

class Cliente {
public:
    Cliente();
    Cliente(const Cliente& orig);
    virtual ~Cliente();
private:
    std::string nome;
    std::string telefone;
    std::string endereco;
};

#endif	/* CLIENTE_H */

