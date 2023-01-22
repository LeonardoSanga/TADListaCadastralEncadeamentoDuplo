#include <iostream>

#include "OperacoesNaoPrimitivas.hpp"

void imprimeTodos(ListaCadastral& L) {

	bool temElemento;
	char X;

	pegaOPrimeiro(L, X, temElemento);

	while (temElemento == true) {

		std::cout << X << " ";
		pegaOProximo(L, X, temElemento);

	}

}

int posicao(ListaCadastral& L, char X) {

	int posicao = 0;
	char Y;
	bool temElemento;

	if (estaNaLista(L, X)) {

		pegaOPrimeiro(L, Y, temElemento);

		while (temElemento) {

			posicao++;

			if (Y == X) {

				break;

			}

			pegaOProximo(L, Y, temElemento);

		}

		return posicao;
	}

	return 0; // Mostra que o elemento X não está contido na lista L
}

void emL2MasNaoEmL1(ListaCadastral& L1, ListaCadastral& L2, ListaCadastral& L3) {

	char X;
	bool temElemento;
	bool Ok;

	pegaOPrimeiro(L2, X, temElemento);

	while (temElemento) {

		if (!estaNaLista(L1, X)) {

			insereL(L3, X, Ok);

		}

		pegaOProximo(L2, X, temElemento);

	}

}