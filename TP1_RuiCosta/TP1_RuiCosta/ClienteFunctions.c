#include "Cliente.h"

//Guarda a lista de clientes em texto e em binario em fixeiros diferentes
void gravarClientes()
{
	
}

//
void adicionarClientes(Cliente cliente, Cliente** listaC)
{
    Cliente* novoCliente = (Cliente*)malloc(sizeof(Cliente));

    if (novoCliente == NULL) 
    {
        free(novoCliente);
        return;
    }

    *novoCliente = cliente;

    if (*listaC == NULL) 
    {
        *listaC = novoCliente;
        return;
    }

    Cliente* last = *listaC;

    while (last->proximo != NULL) 
    {
        last = last->proximo;
    }
    last->proximo = novoCliente;
    return;
}

//
void inserirCliente(Cliente** listaC)
{
    Cliente novoCliente;


    scanf_s("%d", &novoCliente.nif);
    fflush(stdin);
    gets(novoCliente.nome);
    fflush(stdin);
    gets(novoCliente.morada);
    fflush(stdin);
    scanf_s("%f", &novoCliente.saldo);

    adicionarClientes(novoCliente, listaC);
}

//
void editarClientes()
{
	
}
