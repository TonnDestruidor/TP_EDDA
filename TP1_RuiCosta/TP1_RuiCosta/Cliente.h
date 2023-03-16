/*****************************************************************//**
 * \file   Cliente.h
 * \brief  Assinaturas de funções e defenição de classes para os clientes
 * 
 * \author Rui Costa
 * \date   March 2023
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#pragma once

//constantes

#define tNomeC 30
#define tMoradaC 80
#define txtFileC "D:\Projetos\TP_EDDA\TP1_RuiCosta\CSaveTxt.txt"
#define binFileC "D:\Projetos\TP_EDDA\TP1_RuiCosta\CSaveBin.txt"

//structs

typedef struct Cliente Cliente;
struct Cliente
{
	int nif;
	char nome[tNomeC], morada[tMoradaC];
	float saldo;
	Cliente* proximo;
};

//assinaturas de funções

void adicionarClientes(Cliente cliente, Cliente** listaC);
void inserirCliente(Cliente** listaC);
