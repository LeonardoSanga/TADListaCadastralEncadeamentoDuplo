#pragma once

#include "Node.hpp"

struct ListaCadastral {

	Node* Primeiro;
	Node* Atual;

};

void insereL(ListaCadastral& L, char X, bool& deuCerto);

void retiraL(ListaCadastral& L, char X, bool& deuCerto);

bool estaNaLista(ListaCadastral& L, char X);

void pegaOPrimeiro(ListaCadastral& L, char& X, bool& temElemento);

void pegaOProximo(ListaCadastral& L, char& X, bool& temElemento);

void criaL(ListaCadastral& L);

bool vaziaL(ListaCadastral& L);

bool cheia(ListaCadastral& L);