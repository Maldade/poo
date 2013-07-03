/* 
 * File:   Cliente.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:25
 */

#ifndef CLIENTE_H
#define	CLIENTE_H

#include<string>
#include"PessoaFisica.h"

using std::string;

class Cliente {
public:
    Cliente();
    void setNome(string name);
    void setTelefone(string telephone);
    void setEndereco(string address);
    void setDocumento(string documment);
    string getNome();
    string getTelefone();
    string getEndereco();
    string getDocumento();
    void exibirCliente();
    Cliente *prox;
private:
    string nome;
    string telefone;
    string endereco;
    PessoaFisica documento;
    
};

#endif	/* CLIENTE_H */

