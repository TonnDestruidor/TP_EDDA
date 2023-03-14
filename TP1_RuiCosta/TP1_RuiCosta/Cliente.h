/*****************************************************************//**
 * \file   Cliente.h
 * \brief  Assinaturas de funções e defenição de classes para os clientes
 * 
 * \author Rui Costa
 * \date   March 2023
 *********************************************************************/

#pragma once

//constantes

#define tNome 30
#define tMorada 80
#define txtFileM "D:\Projetos\TP_EDDA\TP1_RuiCosta\CSaveTxt.txt"
#define binFileM "D:\Projetos\TP_EDDA\TP1_RuiCosta\CSaveBin.txt"

//structs

typedef struct Cliente Cliente;
struct Cliente
{
	int nif;
	char nome[tNome], moarada[tMorada];
	float saldo;
	Cliente* proximo;
};

//assinaturas de funções