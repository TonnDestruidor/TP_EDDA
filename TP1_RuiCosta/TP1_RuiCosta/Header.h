/*****************************************************************//**
 * \file   Header.h
 * \brief  Assinaturas de funções
 * 
 * \author Rui Costa
 * \date   March 2023
 *********************************************************************/

#pragma once

typedef struct Jogo
{
	int cod;
	char titulo[N];
	struct Jogo* next;
}Jogo;