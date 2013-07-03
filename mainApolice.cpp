#include <iostream>

#include "ListaApolice.h"

using namespace std;

int main()
{


	ListaApolice l;

	int opcao = -1;
	while(opcao != 0)
	{
		cout <<"\e[H\e[2J";
		cout << "------- MENU APÓLICES -------" << endl;
		cout << endl;
                cout << "Escolha uma opção:" << endl;
                cout << "1. Inserir Apólice" << endl;
                cout << "2. Buscar Apólice" << endl;
                cout << "3. Alterar Apólice" << endl;
                cout << "4. Remover Apólice" << endl;
                cout << "5. Imprimir Apólices" << endl;
                cout << "6. Inserir sinistro" << endl;
                cout << "0. Sair" << endl;
                cout << endl;
                cin >> opcao;
                cout << endl;	

	
		int status;

		switch(opcao)
		{
			case 1:
				cout << "INSERIR:" << endl;
				status = l.inserirApolice(); 
				if(status == 1)
				{
					cout << endl;
					cout << "Apólice inserida!" << endl;
				}
				else
				if(status == 0)
				{
					cout << endl;
					cout << "Apólice já cadastrada!" << endl;
				}
				else
				{
					cout << endl;
					cout << "Memória insuficiente!" << endl;
				}
				cout << endl;
				break;
			case 2:
				status = l.buscarApoliceNum();
				if(status == 0)
					cout << "Apólice inexistente!" << endl;
				cout << endl;
				break;
			case 3:
				status = l.alterarApolice(); 
				if(status == 1)
				{
					cout << endl;
					cout << "Apólice alterada!" << endl;
				}
				else
				{
					cout << endl;
					cout << "Apólice inexistente!" << endl;
				}
				cout << endl;
				break;
			case 4:
				status = l.removerApolice(); 
				if(status == 1)
				{
					cout << endl;
					cout << "Apólice removida!" << endl;
				}
				else
				{
					cout << endl;
					cout << "Apólice inexistente!" << endl;
				}
				cout << endl;
				break;
			case 5:
				if(l.listaVazia())
				{
					cout << endl;
					cout << "NENHUM REGISTO" << endl;
					cout << endl;
				}
				else
				{
					cout << endl;
					cout << "================== APÓLICES ==================" << endl;
					l.imprimirApolices();
				}
				break;
                        case 6:
				if(l.listaVazia())
				{
					cout << endl;
					cout << "NENHUMA APÓLICE" << endl;
					cout << endl;
				}
				else
				{
					cout << endl;
					cout << "================== SINISTRO ==================" << endl;
					l.criaSinistro();
				}
				break;
			case 0: 
				break;
			default: 
				cout << endl;
				cout << "Opção inválida!" << endl; 
				cout << endl; 
				break;
		}
	}

	return 0;
}
