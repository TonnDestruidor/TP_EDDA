/*****************************************************************//**
 * \file   Header.h
 * \brief  Assinaturas de fun��es
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