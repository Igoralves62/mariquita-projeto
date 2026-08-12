#ifndef CLIENTES_H
#define CLIENTES_H

struct Cliente
{
    char nome[100];
    char telefone[20];
    char cpf[15];
    char endereco[200];
};

extern struct Cliente clientes[100];
extern int totalClientes;

void menuClientes();
void cadastrarCliente();
void listarClientes();
void buscarCliente();
void editarCliente();
void excluirCliente();

#endif