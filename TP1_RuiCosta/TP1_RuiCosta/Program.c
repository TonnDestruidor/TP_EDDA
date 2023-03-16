#include "Cliente.h"
#include "Gestor.h"
#include "MeioDeME.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	Cliente a = { 2020020, "To", "guimaraes", 30.2, NULL };
	Cliente* listaC=NULL;

	//adicionarClientes(a, &listaC);
	inserirCliente(&listaC);
	
	printf("%d\n", listaC->nif);
	printf("%s\n", listaC->nome);
	printf("%s\n", listaC->morada);
	printf("%f\n", listaC->saldo);
}
