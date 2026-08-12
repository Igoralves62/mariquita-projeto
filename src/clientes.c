#include <stdio.h>
#include <string.h>
#include "clientes.h"

struct Cliente clientes[100];
int totalClientes = 0;

void cadastrarCliente()
{
 

 
 if (totalClientes >= 100)
{
    printf("Limite máximo de clientes atingido.\n");
    return;
}
 
 
    printf("Digite o nome: ");
    fgets(clientes[totalClientes].nome, sizeof(clientes[totalClientes].nome), stdin); // NOME
    clientes[totalClientes].nome[strcspn(clientes[totalClientes].nome, "\n")] = '\0';

    printf("Digite o telefone: ");
    fgets(clientes[totalClientes].telefone, sizeof(clientes[totalClientes].telefone), stdin);  //TELEFONE
    clientes[totalClientes].telefone[strcspn(clientes[totalClientes].telefone, "\n")] = '\0';

    printf("Digite o CPF: ");
    fgets(clientes[totalClientes].cpf, sizeof(clientes[totalClientes].cpf), stdin); //CPF
    clientes[totalClientes].cpf[strcspn(clientes[totalClientes].cpf, "\n")] = '\0';

    printf("Digite o seu endereco: ");
    fgets(clientes[totalClientes].endereco, sizeof(clientes[totalClientes].endereco), stdin);  //ENDERECO
     clientes[totalClientes].endereco[strcspn(clientes[totalClientes].endereco, "\n")] = '\0';

    printf("\n===============================\n\n");

    printf("Cliente cadastrado com sucesso!\n");

    printf("\n========== DADOS DO CLIENTE ==========\n\n");
    printf("Nome cadastrado: %s\n", clientes[totalClientes].nome);
    printf("Telefone cadastrado: %s\n", clientes[totalClientes].telefone);
    printf("Cpf cadastrado: %s\n", clientes[totalClientes].cpf);
    printf("Endereco cadastrado: %s\n", clientes[totalClientes].endereco);
    printf("Cliente cadastrado com sucesso!");
    totalClientes++;

    salvarClientes();
}
