/*****************************************************************//**
 * \file   Gestor.h
 * \brief  Assinaturas de funções e defenição de classes para os gestores
 *
 * \author Rui Costa
 * \date   March 2023
 *********************************************************************/

#include "Constantes.h"

#pragma once

//constantes

#define tNomeG 30
#define tMoradaG 80
#define txtFileG "D:\Projetos\TP_EDDA\TP1_RuiCosta\GSaveTxt.txt"
#define binFileG "D:\Projetos\TP_EDDA\TP1_RuiCosta\GSaveBin.txt"

//structs

typedef struct Gestor Gestor;
struct Gestor
{
	int nif;
	char nome[tNomeG], morada[tMoradaG];
	Gestor* proximo;
};

//assinaturas de funções