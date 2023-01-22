#include <iostream>

#include "ListaCadastralEncadeamentoDuplo.hpp"
#include "OperacoesNaoPrimitivas.hpp"

using namespace std;

int main() {

	// Teste da Lista Cadastral com Encadeamento Duplo

	bool deuCerto;
	char X;

	cout << "Construindo uma Lista Cadastral Circular" << endl;
	ListaCadastral L;
	criaL(L);

	cout << "Inserindo os elemento C, Y, A, H e F, respectivamente, na Lista\n" << endl;
	insereL(L, 'C', deuCerto);
	insereL(L, 'Y', deuCerto);
	insereL(L, 'A', deuCerto);
	insereL(L, 'H', deuCerto);
	insereL(L, 'F', deuCerto);

	cout << "Percorrendo a Lista Ciruclar: " << endl;

	pegaOPrimeiro(L, X, deuCerto);
	cout << X << " ";

	pegaOProximo(L, X, deuCerto);
	cout << X << " ";

	pegaOProximo(L, X, deuCerto);
	cout << X << " ";

	pegaOProximo(L, X, deuCerto);
	cout << X << " ";

	pegaOProximo(L, X, deuCerto);
	cout << X << " ";

	pegaOProximo(L, X, deuCerto);

	if (!deuCerto) {

		cout << "\nLista Percorrida!" << endl;

	}

	cout << "\nVerificando se os elementos Y, G e F estao na Lista: " << endl;

	if (estaNaLista(L, 'Y')) {

		cout << "Y esta na Lista!" << endl;

	}

	if (!estaNaLista(L, 'G')) {

		cout << "G nao esta na Lista!" << endl;

	}

	if (estaNaLista(L, 'F')) {

		cout << "F esta na Lista!\n" << endl;

	}

	cout << "Posicao do elemento F na Lista: " << posicao(L, 'F') << endl;

	cout << "\nRetirando os elementos A, Y e F da Lista\n" << endl;

	retiraL(L, 'A', deuCerto);
	retiraL(L, 'Y', deuCerto);
	retiraL(L, 'F', deuCerto);

	cout << "Lista Ciruclar: ";
	imprimeTodos(L);
	cout << endl;

	cout << "\nConstruindo uma segunda Lista Cadastral Circular" << endl;
	ListaCadastral L2;
	criaL(L2);

	ListaCadastral L3;
	criaL(L3);

	cout << "Inserindo os elemento C, J, P, A e M, respectivamente, na Lista\n" << endl;
	insereL(L2, 'C', deuCerto);
	insereL(L2, 'J', deuCerto);
	insereL(L2, 'P', deuCerto);
	insereL(L2, 'A', deuCerto);
	insereL(L2, 'M', deuCerto);

	cout << "Lista Ciruclar 2: ";
	imprimeTodos(L2);
	cout << endl;

	cout << "Elementos que estao na segunda Lista mas nao na primeira: ";
	emL2MasNaoEmL1(L, L2, L3);

	imprimeTodos(L3);
	cout << endl;

	return 0;
}