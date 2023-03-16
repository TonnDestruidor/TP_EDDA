/*****************************************************************//**
 * \file   MeioDeME.h
 * \brief  Assinaturas de funções e defenição de classes para os Meios de Mobilidade Eletrica
 *
 * \author Rui Costa
 * \date   March 2023
 *********************************************************************/

#pragma once

//constantes

#define tNomeM 20
#define tGeocodigo 20
#define tMatricula 9
#define txtFileM "D:\Projetos\TP_EDDA\TP1_RuiCosta\MSaveTxt.txt"
#define binFileM "D:\Projetos\TP_EDDA\TP1_RuiCosta\MSaveBin.txt"

 //enums

typedef enum tCarga
{
	M1,
	M2,
	M3,
	M4
}tCarga;

//structs

typedef struct MeiosDeME MeiosDeME;
struct MeiosDeME
{
	char nome[tNomeM], geocodigo[tGeocodigo], matricula[tMatricula];
	tCarga carga;
	int custo, autonomia;
	MeiosDeME* proximo;
};

//assinaturas de funções