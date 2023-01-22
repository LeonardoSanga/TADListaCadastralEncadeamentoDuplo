#include <iostream>

#include "ListaCadastralEncadeamentoDuplo.hpp"

void ProcuraX(ListaCadastral L, char X, Node*& P, Node*& Anterior, bool& achouX) {

	P = L.Primeiro;
	Anterior = new Node; // Alocando memória para Anteior para que seu uso na veificação do While não gere erro

	while ((P != NULL) && (P->Info < X) && (P->Info > Anterior->Info)) {

		Anterior = P;
		P = P->Dir;

	}

	if ((P != NULL) && (P->Info == X)) {

		achouX = true;

	}
	else {

		achouX = false;

	}

}

void retiraL(ListaCadastral& L, char X, bool& deuCerto) {

	Node* P;
	Node* Anterior;

	bool achouX;

	ProcuraX(L, X, P, Anterior, achouX);

	if (achouX) {

		deuCerto = true;

		if (P == P->Dir) {

			L.Primeiro = NULL;
			delete P;
			P = NULL;

		}
		else {

			P->Esq->Dir = P->Dir;

			P->Dir->Esq = P->Esq;

			if (L.Primeiro->Info == X) {

				L.Primeiro = P->Dir;

			}

			delete P;
			P = NULL;

		}

	}
	else {

		deuCerto = false;

	}

}

void insereL(ListaCadastral& L, char X, bool& deuCerto) {

	Node* P;
	Node* Anterior;

	bool achouX;

	ProcuraX(L, X, P, Anterior, achouX);

	if (!achouX) {

		deuCerto = true;

		if (L.Primeiro == NULL) {

			Node* LAux = new Node;
			LAux->Info = X;
			LAux->Dir = LAux;
			LAux->Esq = LAux;

			L.Primeiro = LAux;

			LAux = NULL;

		}
		else {

			if (P == L.Primeiro) {

				Node* LAux = new Node;
				LAux->Info = X;
				LAux->Dir = P;
				LAux->Esq = P->Esq;

				P->Esq->Dir = LAux;
				P->Esq = LAux;

				if (L.Primeiro->Info > X) {

					L.Primeiro = LAux;

				}

				LAux = NULL;

			}
			else {

				Node* LAux = new Node;
				LAux->Info = X;
				LAux->Dir = P;
				LAux->Esq = P->Esq;

				P->Esq->Dir = LAux;
				P->Esq = LAux;

				LAux = NULL;

			}

		}

	}
	else {

		deuCerto = false;

	}

}

bool estaNaLista(ListaCadastral& L, char X) {

	Node* P = L.Primeiro;
	Node* Anterior = new Node;

	while ((P != NULL) && (P->Info > Anterior->Info)) {

		if (P->Info == X) {

			return true;

		}

		Anterior = P;
		P = P->Dir;

	}

	return false;
}

void pegaOPrimeiro(ListaCadastral& L, char& X, bool& temElemento) {

	if (L.Primeiro != NULL) {

		temElemento = true;

		X = L.Primeiro->Info;
		L.Atual = L.Primeiro;

	}
	else {

		temElemento = false;

	}

}

void pegaOProximo(ListaCadastral& L, char& X, bool& temElemento) {

	L.Atual = L.Atual->Dir;

	if (L.Atual != L.Primeiro) {

		temElemento = true;
		X = L.Atual->Info;

	}
	else {

		temElemento = false;

	}

}

void criaL(ListaCadastral& L) {

	L.Primeiro = NULL;
	L.Atual = NULL;

}

bool vaziaL(ListaCadastral& L) {

	if (L.Primeiro == NULL) {

		return true;

	}

	return false;
}

bool cheia(ListaCadastral& L) {

	return false;

}