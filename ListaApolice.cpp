/*
 * ListaApolice.cpp
 *
 *  Created on: 29/06/2013
 *      Author: Igor Racca
 */

#include <iostream>

#include "ListaApolice.h"

using namespace std;

ListaApolice::ListaApolice()
{
	inicio = NULL;
}

bool ListaApolice::listaVazia()
{
	if(inicio == NULL)
		return true;
	else
		return false;
}

int ListaApolice::inserirApolice()
{
	try
    {
		Apolice *novo = new Apolice;
		

		if(listaVazia())
		{
			inicio = novo;
		
			return 1;
		}
		else
		{
			Apolice *paux;
			paux = inicio;
			while((paux->getNumAp() != novo->getNumAp())&&(paux->getProx() != NULL))
				paux = paux->getProx();

			if(paux->getNumAp() == novo->getNumAp())
				return 0;
			else
			{
				paux->setProx(novo);
				novo->setProx(NULL);
		
				return 1;
			}
		}
	}
	catch(bad_alloc)
	{
		return -1;
	}
}

int ListaApolice::buscarApoliceNum()
{
	int n;
	cout << "Informe o número da apólice a ser buscada" << endl;
	cin >> n;

	if(!listaVazia())
	{
		Apolice *paux;
		paux = inicio;
		while((paux->getNumAp() != n)&&(paux->getProx() != NULL))
			paux = paux->getProx();

		if(paux->getNumAp() == n)
		{
			cout << endl;
			cout << "APÓLICE ENCONTRADA:" << endl;
			cout << "Número da apólice: " << paux->getNumAp() << endl;
			cout << "Vigência da apólice: " << paux->getDia() << "/" << paux->getMes() << "/" << paux->getAno() << endl;
			cout << "Classificação: " << paux->getClassificacao() << endl;
                        paux->imprimeCliente();
                        paux->imprimirCondutores();
			paux->imprimirVeiculo();
			paux->exibirSinistros();			
			cout << endl;

			return 1;
		}
	}

	return 0;
}

int ListaApolice::buscarApolicePlaca()
{
	string p;
	cout << "Informe a placa da apólice a ser buscada" << endl;
	cin >> p;

	if(!listaVazia())
	{
		Apolice *paux;
		paux = inicio;
		while((paux->getPlacaVeiculo() != p)&&(paux->getProx() != NULL))
			paux = paux->getProx();

		if(paux->getPlacaVeiculo() == p)
		{
			cout << endl;
			cout << "APÓLICE ENCONTRADA:" << endl;
			cout << "Número da apólice: " << paux->getNumAp() << endl;
			cout << "Vigência da apólice: " << paux->getDia() << "/" << paux->getMes() << "/" << paux->getAno() << endl;
			cout << "Classificação: " << paux->getClassificacao() << endl;
			paux->imprimirVeiculo();
			paux->exibirSinistros();
			cout << endl;

			return 1;
		}
	}

	return 0;
}

int ListaApolice::alterarApolice()
{
	int n;
	cout << "Informe o número da apólice a ser alterada" << endl;
	cin >> n;

	if(!listaVazia())
	{
		Apolice *paux;
		paux = inicio;
		while((paux->getNumAp() != n)&&(paux->getProx() != NULL))
			paux = paux->getProx();

		if(paux->getNumAp() == n)
		{
			int n, d, m, a, v, s;
			cout << endl;
			cout << "APÓLICE ENCONTRADA, INFORME NOVOS DADOS:" << endl;
			cout << "Número da apólice: " << endl;
			cin >> n;
			cout << "Vigência da apólice: " << endl;
			cout << "Dia: " << endl;
			cin >> d;
			cout << "Mês: " << endl;
			cin >> m;
			cout << "Ano: " << endl;
			cin >> a;
			paux->setClassificacao();
			cout << "Alterar veiculo?" << endl;
			cout << "1. Sim, 2. Não" << endl;
			cin >> v;
			if(v == 1)
			{
				paux->alterarVeiculo();
			}
			cout << endl;
			cout << "Alterar Sinistros?" << endl;
			cout << "1. Sim, 2. Não" << endl;
			cin >> s;
			if(s == 1)
			{
				paux->sinistrosCRUD();
			}

			paux->setNumAp(n);
			paux->setVigencia(d, m, a);

			return 1;
		}
	}

	return 0;
}

int ListaApolice::removerApolice()
{
	if(!listaVazia())
	{
	int n;
	cout << "Informe o número da apólice a ser removida" << endl;
	cin >> n;


		Apolice *paux, *prem, *pant = NULL;
		prem = inicio;

		if((prem->getProx() == NULL) && (prem->getNumAp() == n))
		{
			delete prem;
			inicio = NULL;			
		}
		else
		if(prem->getNumAp() == n)
		{
			paux = prem->getProx();
			delete prem;
			inicio = paux;
		}
		else
		{
			while((prem->getNumAp() != n) && (prem->getProx() != NULL))
			{
				pant = prem;
				prem = prem->getProx();
			}

			if(prem->getNumAp() == n)
			{
				paux = prem->getProx();
				pant->setProx(paux);

				delete prem;
			}
		}
		
		return 1;
	}

	return 0;
}

void ListaApolice::criaSinistro(){
    
    if(listaVazia()){
	cout<<"Não há apólices"<<endl;
    }else{
        int num;
        cout<<"Insira número da apólice"<<endl;
        cin>>num;
	Apolice *paux;
	paux = inicio;
	while((paux->getNumAp() != num)&&(paux->getProx() != NULL))
	    paux = paux->getProx();
	if(paux->getNumAp() == num){
            paux->sinistrosCRUD();
        }else{
	    cout<<"Apólice inexistente"<<endl;
	}
    }
    
}

void ListaApolice::imprimirApolices()
{
	if(!listaVazia())
	{
		Apolice *paux = inicio;

		while(1)
		{
			cout << endl;
			cout << "Número da apólice: " << paux->getNumAp() << endl;
			cout << "Vigência da apólice: " << paux->getDia() << "/" << paux->getMes() << "/" << paux->getAno() << endl;
			cout << "Classificacao: " << paux->getClassificacao() << endl;
                        paux->imprimeCliente();
                        paux->imprimirCondutores();
			paux->imprimirVeiculo();
			paux->exibirSinistros();
			cout << "----------------------------------------------" << endl;
			cout << endl;

			if(paux->getProx() != NULL)
				paux = paux->getProx();
			else
				break;
		}
	}
}