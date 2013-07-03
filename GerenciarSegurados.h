/* 
 * File:   GerenciarSegurados.h
 * Author: RafaelCâmara
 * 
 * Created on 01 de Julho de 2013, 10:08
 */

#ifndef LISTA_VEICULO_H
#define LISTA_VEICULO_H

#include<iostream>

#include "Cliente.h"
#include "Condutor.h"

class GerenciarSegurados{
    
	public:
		GerenciarSegurados();
		int inserirCliente();
		int buscarCliente(string nome); 		
		int alterarCliente(string nome);		
		int removerCliente(string nome);		
		bool listaVaziaCliente();
		int inserirSegurado();
		int buscarSegurado(string license); 		
		int alterarSegurado(string license);		
		int removerSegurado(string license);		
		bool listaVaziaSegurado();
        
        private:
                Cliente *listaClientes;
                Condutor *listaSegurados;
};

#endif