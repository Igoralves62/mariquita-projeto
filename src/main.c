#include <stdio.h>
#include <string.h>
 struct Cliente
{
    char nome[100];
    char telefone[20];
    char cpf[15];
    char endereco[200];
    
};

struct Reserva 
{
    char nomeCliente[100];
    char data[11];
    char horario[6];
    int quantidadePessoas;
    float valor;
    char tipoEvento[100];
    char observacoes[300];
};

struct Cliente clientes[100];  //variaveis globais, todas funções do arquivo a utilizam
int totalClientes = 0;

struct Reserva reservas[100];
int totalReservas = 0;

void menuClientes();
void cadastrarCliente();
void listarClientes();
void buscarCliente();
void editarCliente();
void excluirCliente();

void menuReservas();
void cadastrarReserva();
void listarReservas();
void buscarReserva();
void editarReserva();
void excluirReserva();

// Função do menu de clientes
void menuClientes()
{
    int opcaocliente;
do {
    printf("\n========== MENU CLIENTES ==========\n\n");
    
    printf("1 - Cadastrar Cliente\n");
    printf("2 - Listar Clientes\n");
    printf("3 - Buscar Cliente\n");
    printf("4 - Editar Cliente\n");
    printf("5 - Excluir Cliente\n");
    printf("0 - Voltar\n");
    
  
    printf("Escolha uma opção:");
    scanf("%d", &opcaocliente);
    getchar(); 
    switch(opcaocliente)
    {
        case 1:
        cadastrarCliente();
        break;
        
        case 2:
        listarClientes();
        break;
        
         case 3:
        buscarCliente();
        break;
        
         case 4:
        editarCliente();
        break;
        
         case 5:
        excluirCliente();
        break;
        
        case 0:
          break;
      
        default:
            printf("Opção inválida.\n");
    }
}
while (opcaocliente!= 0);
}

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
}
void listarClientes()
{
if (totalClientes==0){

    printf("Não existe nenhum cliente cadastrado\n");
    return;
}

printf("========== CLIENTES CADASTRADOS ==========\n");
for (int i = 0; i < totalClientes; i++)
{

    printf("Cliente %d\n", i + 1);

    printf("Nome: %s\n", clientes[i].nome );

    printf("Telefone: %s\n", clientes[i].telefone );

    printf("CPF: %s\n", clientes[i].cpf );

    printf("Endereço: %s\n", clientes[i].endereco );

    printf("--------------------------------------------\n");

}
}
void buscarCliente()
{
char nomeBusca[100];
int encontrado = 0;
if (totalClientes == 0)
{
    printf("Nao existe nenhum cliente cadastrado.\n");
    return;

}
printf("Digite o nome do cliente: \n");
    fgets(nomeBusca, sizeof(nomeBusca), stdin); // NOME
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

for (int i = 0; i < totalClientes; i++)
{
if (strcmp(nomeBusca, clientes[i].nome) == 0) //comparação entre duas strings, 0 para verdadeiro
{
    printf("Nome: %s\n", clientes[i].nome );

    printf("Telefone: %s\n", clientes[i].telefone );

    printf("CPF: %s\n", clientes[i].cpf );

    printf("Endereço: %s\n", clientes[i].endereco );          //o cliente será encontrado
    encontrado = 1;
     break;
}
}
if (encontrado == 0){
    printf("Cliente não encontrado.\n");
}
}
void editarCliente()
{
    int encontrado = 0;
    if (totalClientes == 0){
    printf("Nao existe nenhum cliente cadastrado.\n");
    return;
 }
    char nomeEditar[100];
    printf("Digite o nome do cliente que deseja editar: ");
    fgets(nomeEditar, sizeof(nomeEditar), stdin); // NOME
    nomeEditar[strcspn(nomeEditar, "\n")] = '\0';

for (int i = 0; i < totalClientes; i++)
 {

if (strcmp(nomeEditar, clientes[i].nome) == 0)
   {
    printf("Digite o novo telefone: ");
    fgets(clientes[i].telefone, sizeof(clientes[i].telefone), stdin);  //TELEFONE
    clientes[i].telefone[strcspn(clientes[i].telefone, "\n")] = '\0';

    printf("Digite o novo CPF: ");
    fgets(clientes[i].cpf, sizeof(clientes[i].cpf), stdin);  //CPF
    clientes[i].cpf[strcspn(clientes[i].cpf, "\n")] = '\0';

    printf("Digite o novo endereço: ");
    fgets(clientes[i].endereco, sizeof(clientes[i].endereco), stdin);  //ENDEREÇO
    clientes[i].endereco[strcspn(clientes[i].endereco, "\n")] = '\0';
   encontrado = 1;
    printf("Cliente atualizado com sucesso!\n");
    
    printf("\n===== DADOS ATUALIZADOS =====\n");

    printf("Nome: %s\n", clientes[i].nome);
    printf("Telefone: %s\n", clientes[i].telefone);
    printf("CPF: %s\n", clientes[i].cpf);
    printf("Endereco: %s\n", clientes[i].endereco);
    
    break;
   }
 }
if (encontrado == 0)
{
    printf("Cliente nao encontrado.\n");
}

}

void excluirCliente(){

char nomeExcluir[100];
int encontrado=0;

if (totalClientes == 0)
{
    printf("Nao existe nenhum cliente cadastrado.\n");
    return;
}

    printf("Digite o nome do cliente que deseja excluir: \n");
    fgets(nomeExcluir, sizeof(nomeExcluir), stdin); // NOME
    nomeExcluir[strcspn(nomeExcluir, "\n")] = '\0';

for (int i = 0; i < totalClientes; i++)
 {

if (strcmp(nomeExcluir, clientes[i].nome) == 0)
  {
for (int j = i; j < totalClientes - 1; j++)
   {
    clientes[j] = clientes[j + 1];
   }  
   totalClientes--;
   encontrado = 1;
   printf("Cliente excluido com sucesso!\n");
   printf("\n");
   break;
  }
 }
 if (encontrado == 0)
{
    printf("Cliente nao encontrado.\n");
}
 
}

void cadastrarReserva()
{
char nomeCliente[100];
int encontrado = 0;

if (totalReservas >= 100)
{
    printf("Limite máximo de reservas atingido.\n");
    return;
}

if (totalClientes == 0)
    {
        printf("Nao existe nenhum cliente cadastrado.\n");
        return;
    }

     printf("Digite o nome do cliente ");
    fgets(nomeCliente, sizeof(nomeCliente), stdin); // NOME
    nomeCliente[strcspn(nomeCliente, "\n")] = '\0';

for (int i = 0; i < totalClientes; i++)
{
    if (strcmp(nomeCliente, clientes[i].nome) == 0)
    {
        encontrado = 1;// Cliente encontrado
        break;
    }
   
}
if (encontrado == 0)
{
    printf("Cliente nao encontrado.\n");
    printf("Cadastre o cliente antes de realizar uma reserva.\n");
    return;
}

strcpy(reservas[totalReservas].nomeCliente, nomeCliente); //copia uma string para a outra

    printf("Digite a data da reserva: ");
    fgets(reservas[totalReservas].data, sizeof(reservas[totalReservas].data), stdin); // NOME
    reservas[totalReservas].data[strcspn(reservas[totalReservas].data, "\n")] = '\0';

    printf("Digite o horário da reserva: ");
    fgets(reservas[totalReservas].horario, sizeof(reservas[totalReservas].horario), stdin); // NOME
    reservas[totalReservas].horario[strcspn(reservas[totalReservas].horario, "\n")] = '\0';

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &reservas[totalReservas].quantidadePessoas);
    getchar();

    printf("Digite o valor: ");
    scanf("%f", &reservas[totalReservas].valor);
    getchar();

    printf("Digite o tipo de evento:? ");
    fgets(reservas[totalReservas].tipoEvento, sizeof(reservas[totalReservas].tipoEvento), stdin); // NOME
    reservas[totalReservas].tipoEvento[strcspn(reservas[totalReservas].tipoEvento, "\n")] = '\0';

    printf("Observações: ");
    fgets(reservas[totalReservas].observacoes, sizeof(reservas[totalReservas].observacoes), stdin); // NOME
    reservas[totalReservas].observacoes[strcspn(reservas[totalReservas].observacoes, "\n")] = '\0';

   printf("\n===== DADOS DA RESERVA =====\n");

printf("Cliente: %s\n", reservas[totalReservas].nomeCliente);
printf("Data: %s\n", reservas[totalReservas].data);
printf("Horario: %s\n", reservas[totalReservas].horario);
printf("Quantidade de pessoas: %d\n", reservas[totalReservas].quantidadePessoas);
printf("Valor: %.2f\n", reservas[totalReservas].valor);
printf("Evento: %s\n", reservas[totalReservas].tipoEvento);
printf("Observacoes: %s\n", reservas[totalReservas].observacoes);

totalReservas++;

printf("Reserva cadastrada com sucesso!\n");
 
}

int main()
{
    int opcao;

 do 
 {
    printf("\n========== SISTEMA CHÁCARA MARIQUITA ==========\n\n");
    printf("1 - Clientes\n");
    printf("2 - Reservas\n");
    printf("3 - Pagamentos\n");
    printf("4 - Relatórios\n");
    printf("0 - Sair\n\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
        case 1:
            menuClientes();
            break;

        case 2:
            printf("Módulo de Reservas em desenvolvimento.\n");
            break;

        case 3:
            printf("Módulo de Pagamentos em desenvolvimento.\n");
            break;

        case 4:
            printf("Módulo de Relatórios em desenvolvimento.\n");
            break;

        case 0:
            printf("Encerrando o sistema...\n");
            break;

        default:
            printf("Opção inválida.\n");
    }
}
    while (opcao != 0);
 
    return 0;
}

