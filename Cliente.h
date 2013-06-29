/* 
 * File:   Cliente.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:25
 */

#ifndef CLIENTE_H
#define	CLIENTE_H

#include<string>

using std::string;

class Cliente {
public:
    Cliente(string name, string telephone, string address);
    virtual ~Cliente();
    void setNome(string name);
    void setTelefone(string telephone);
    void setEndereco(string address);
    string getNome();
    string getTelefone();
    string getEndereco();
private:
    string nome;
    string telefone;
    string endereco;
};

#endif	/* CLIENTE_H */

