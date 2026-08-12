#include <stdio.h>
#include <string.h>
 #include "clientes.h"

struct Data 
{
  int dia;
  int mes;
  int ano;
};

struct Reserva
{
    char nomeCliente[100];
    
    struct Data dataInicio;
    struct Data dataFim;

    char horario[6];
    int quantidadePessoas;
    float valor;
    char tipoEvento[100];
    char observacoes[300];
};
struct Pagamento
{
    char nomeCliente[100];
    float valorTotal;
    float valorPago;
    char formaPagamento[30];
    char status[50];
};

struct Reserva reservas[100];
int totalReservas = 0;

struct Pagamento pagamentos[100];
int totalPagamentos = 0;

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

void menuPagamentos();
void cadastrarPagamento();
void listarPagamentos();
void buscarPagamento();
void editarPagamento();
void excluirPagamento();

void menuRelatorios();
void relatorioClientes();
void relatorioReservas();
void relatorioPagamentos();

void salvarClientes();
void carregarClientes();

void salvarReservas();
void carregarReservas();
void carregarReservas();

void salvarPagamentos();
void carregarPagamentos();


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
void menuReservas()
{
    int opcaoreserva;
do {
    printf("\n========== MENU RESERVAS ==========\n\n");
    
    printf("1 - Cadastrar Reserva\n");
    printf("2 - Listar Reservas\n");
    printf("3 - Buscar Reserva\n");
    printf("4 - Editar Reserva\n");
    printf("5 - Excluir Reserva\n");
    printf("0 - Voltar\n");
    
  
    printf("Escolha uma opção:");
    scanf("%d", &opcaoreserva);
    getchar(); 
    switch(opcaoreserva)
    {
        case 1:
        cadastrarReserva();
        break;
        
        case 2:
        listarReservas();
        break;
        
         case 3:
        buscarReserva();
        break;
        
         case 4:
        editarReserva();
        break;
        
         case 5:
        excluirReserva();
        break;
        
        case 0:
          break;
      
        default:
            printf("Opção inválida.\n");
    }
}
while (opcaoreserva!= 0);
}

void menuPagamentos()
{
    int opcaoPagamento;

    do
    {
        printf("\n========== MENU PAGAMENTOS ==========\n\n");

        printf("1 - Cadastrar Pagamento\n");
        printf("2 - Listar Pagamentos\n");
        printf("3 - Buscar Pagamento\n");
        printf("4 - Editar Pagamento\n");
        printf("5 - Excluir Pagamento\n");
        printf("0 - Voltar\n\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoPagamento);
        getchar();

       switch(opcaoPagamento)
{
    case 1:
        cadastrarPagamento();
        break;

    case 2:
        listarPagamentos();
        break;

    case 3:
        buscarPagamento();
        break;

    case 4:
       editarPagamento();
        break;

    case 5:
        excluirPagamento();
        break;

    case 0:
        break;

    default:
        printf("Opcao invalida.\n");
}

    } while(opcaoPagamento != 0);
}

void menuRelatorios()
{
    int opcaoRelatorio;

    do
    {
        printf("\n========== RELATORIOS ==========\n\n");

        printf("1 - Relatorio de Clientes\n");
        printf("2 - Relatorio de Reservas\n");
        printf("3 - Relatorio de Pagamentos\n");
        printf("0 - Voltar\n\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoRelatorio);
        getchar();

        switch(opcaoRelatorio)
        {
            case 1:
                relatorioClientes();
                break;

            case 2:
                relatorioReservas();
                break;

            case 3:
                relatorioPagamentos();
                break;

            case 0:
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while(opcaoRelatorio != 0);
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

    salvarClientes();

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
   salvarClientes();
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

     printf("Digite o nome do cliente: ");
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

    printf("Data de início:\n");
    printf("Dia: ");
    scanf("%d", &reservas[totalReservas].dataInicio.dia);

    printf("Mes: ");
    scanf("%d", &reservas[totalReservas].dataInicio.mes);

    printf("Ano: ");
    scanf("%d", &reservas[totalReservas].dataInicio.ano);

    getchar();

    printf("Data do término:\n");
    printf("Dia: ");
    scanf("%d", &reservas[totalReservas].dataFim.dia);

    printf("Mes: ");
    scanf("%d", &reservas[totalReservas].dataFim.mes);

    printf("Ano: ");
    scanf("%d", &reservas[totalReservas].dataFim.ano);

    getchar();

    printf("Digite o horário da reserva: ");
    fgets(reservas[totalReservas].horario, sizeof(reservas[totalReservas].horario), stdin); // NOME
    reservas[totalReservas].horario[strcspn(reservas[totalReservas].horario, "\n")] = '\0';

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &reservas[totalReservas].quantidadePessoas);
    getchar();

    printf("Digite o valor: ");
    scanf("%f", &reservas[totalReservas].valor);
    getchar();

    printf("Digite o tipo de evento: ");
    fgets(reservas[totalReservas].tipoEvento, sizeof(reservas[totalReservas].tipoEvento), stdin); // NOME
    reservas[totalReservas].tipoEvento[strcspn(reservas[totalReservas].tipoEvento, "\n")] = '\0';

    printf("Observações: ");
    fgets(reservas[totalReservas].observacoes, sizeof(reservas[totalReservas].observacoes), stdin); // NOME
    reservas[totalReservas].observacoes[strcspn(reservas[totalReservas].observacoes, "\n")] = '\0';

   printf("\n===== DADOS DA RESERVA =====\n");

printf("Cliente: %s\n", reservas[totalReservas].nomeCliente);
printf("Data de início: %02d/%02d/%04d\n",
       reservas[totalReservas].dataInicio.dia,
       reservas[totalReservas].dataInicio.mes,
       reservas[totalReservas].dataInicio.ano);

printf("Data de término: %02d/%02d/%04d\n",
       reservas[totalReservas].dataFim.dia,
       reservas[totalReservas].dataFim.mes,
       reservas[totalReservas].dataFim.ano);
printf("Horario: %s\n", reservas[totalReservas].horario);
printf("Quantidade de pessoas: %d\n", reservas[totalReservas].quantidadePessoas);
printf("Valor: R$ %.2f\n", reservas[totalReservas].valor);
printf("Evento: %s\n", reservas[totalReservas].tipoEvento);
printf("Observacoes: %s\n", reservas[totalReservas].observacoes);

totalReservas++;
salvarReservas();
printf("Reserva cadastrada com sucesso!");
 
}

void listarReservas(){

if (totalReservas == 0)
{
    printf("Nao existe nenhuma reserva cadastrada.\n");
    return;
}
printf("\n========== RESERVAS CADASTRADAS ==========\n\n");
for (int i = 0; i < totalReservas; i++)
{
    printf("Reserva %d\n", i + 1);

    printf("Cliente: %s\n", reservas[i].nomeCliente );

    printf("Data de início: %02d/%02d/%04d\n", reservas[i].dataInicio.dia, reservas[i].dataInicio.mes, reservas[i].dataInicio.ano);

    printf("Data de término: %02d/%02d/%04d\n", reservas[i].dataFim.dia, reservas[i].dataFim.mes, reservas[i].dataFim.ano);

    printf("Horario: %s\n", reservas[i].horario );

    printf("Quantidade de pessoas: %d\n", reservas[i].quantidadePessoas );

    printf("Valor: R$ %.2f\n", reservas[i].valor );

    printf("Tipo de evento: %s\n", reservas[i].tipoEvento );

    printf("Observações: %s\n", reservas[i].observacoes );

    printf("--------------------------------------------\n");


 }
}
void buscarReserva()
{ 
    char nomeCliente[100];
    int encontrado = 0;

    if (totalReservas == 0)
    {
        printf("Nao ha nenhuma reserva cadastrada.\n");
        return;
    }
    printf("Digite o nome do cliente: \n");
    fgets(nomeCliente, sizeof(nomeCliente), stdin); // NOME
    nomeCliente[strcspn(nomeCliente, "\n")] = '\0';

for (int i = 0; i < totalReservas; i++)
{
    if (strcmp(nomeCliente, reservas[i].nomeCliente) == 0)
    {
        encontrado = 1;

        printf("\n===== RESERVA ENCONTRADA =====\n");

        printf("Cliente: %s\n", reservas[i].nomeCliente);

        printf("Data de início: %02d/%02d/%04d\n",
               reservas[i].dataInicio.dia,
               reservas[i].dataInicio.mes,
               reservas[i].dataInicio.ano);

        printf("Data de término: %02d/%02d/%04d\n",
               reservas[i].dataFim.dia,
               reservas[i].dataFim.mes,
               reservas[i].dataFim.ano);

        printf("Horário: %s\n", reservas[i].horario);
        printf("Quantidade de pessoas: %d\n", reservas[i].quantidadePessoas);
        printf("Valor: R$ %.2f\n", reservas[i].valor);
        printf("Tipo de evento: %s\n", reservas[i].tipoEvento);
        printf("Observações: %s\n", reservas[i].observacoes);

        break;
    }
}

if (encontrado == 0)
{
    printf("Reserva não encontrada.\n");
}
}

void editarReserva()
{
    char nomeCliente[100];
    int encontrado = 0;


if (totalReservas == 0)
{
    printf("Nao ha nenhuma reserva cadastrada.\n");
    return;
}
printf("Digite o nome do cliente da reserva que deseja editar: ");
fgets(nomeCliente, sizeof(nomeCliente), stdin);
nomeCliente[strcspn(nomeCliente, "\n")] = '\0';

for (int i = 0; i < totalReservas; i++)
{
    if (strcmp(nomeCliente, reservas[i].nomeCliente) == 0)
    {
        encontrado = 1;
        
        printf("\n===== RESERVA ATUAL =====\n");

    printf("Cliente: %s\n", reservas[i].nomeCliente);

    printf("Data de início: %02d/%02d/%04d\n",
       reservas[i].dataInicio.dia,
       reservas[i].dataInicio.mes,
       reservas[i].dataInicio.ano);

    printf("Data de término: %02d/%02d/%04d\n",
       reservas[i].dataFim.dia,
       reservas[i].dataFim.mes,
       reservas[i].dataFim.ano);

    printf("Horário: %s\n", reservas[i].horario);

    printf("Quantidade de pessoas: %d\n", reservas[i].quantidadePessoas);

    printf("Valor: R$ %.2f\n", reservas[i].valor);

    printf("Tipo de evento: %s\n", reservas[i].tipoEvento);

    printf("Observações: %s\n\n", reservas[i].observacoes);

 printf("\n===== EDITANDO RESERVA =====\n");
        printf("Nova data de início:\n");

        printf("Dia: ");
        scanf("%d", &reservas[i].dataInicio.dia);

        printf("Mes: ");
        scanf("%d", &reservas[i].dataInicio.mes);

        printf("Ano: ");
        scanf("%d", &reservas[i].dataInicio.ano);

getchar();

printf("Nova data de término:\n");

printf("Dia: ");
scanf("%d", &reservas[i].dataFim.dia);

printf("Mes: ");
scanf("%d", &reservas[i].dataFim.mes);

printf("Ano: ");
scanf("%d", &reservas[i].dataFim.ano);

getchar();

printf("Digite o novo horário da reserva: ");
fgets(reservas[i].horario, sizeof(reservas[i].horario), stdin);
reservas[i].horario[strcspn(reservas[i].horario, "\n")] = '\0';

printf("Digite a nova quantidade de pessoas: ");
scanf("%d", &reservas[i].quantidadePessoas);
getchar();

printf("Digite o novo valor: ");
scanf("%f", &reservas[i].valor);
getchar();

printf("Digite o novo tipo de evento: ");
fgets(reservas[i].tipoEvento, sizeof(reservas[i].tipoEvento), stdin);
reservas[i].tipoEvento[strcspn(reservas[i].tipoEvento, "\n")] = '\0';

printf("Digite as novas observações: ");
fgets(reservas[i].observacoes, sizeof(reservas[i].observacoes), stdin);
reservas[i].observacoes[strcspn(reservas[i].observacoes, "\n")] = '\0';

printf("\nReserva atualizada com sucesso!\n");

printf("\n===== DADOS ATUALIZADOS =====\n");

printf("Cliente: %s\n", reservas[i].nomeCliente);

printf("Data de início: %02d/%02d/%04d\n",
       reservas[i].dataInicio.dia,
       reservas[i].dataInicio.mes,
       reservas[i].dataInicio.ano);

printf("Data de término: %02d/%02d/%04d\n",
       reservas[i].dataFim.dia,
       reservas[i].dataFim.mes,
       reservas[i].dataFim.ano);

printf("Horário: %s\n", reservas[i].horario);

printf("Quantidade de pessoas: %d\n", reservas[i].quantidadePessoas);

printf("Valor: R$ %.2f\n", reservas[i].valor);

printf("Tipo de evento: %s\n", reservas[i].tipoEvento);

printf("Observações: %s\n", reservas[i].observacoes);


salvarReservas();

        break;
    }
}



if (encontrado == 0)
{
    printf("Reserva nao encontrada.\n");
}

}
void excluirReserva()
{
    char nomeCliente[100];
    int encontrado = 0;

    if (totalReservas == 0)
    {
        printf("Nao ha nenhuma reserva cadastrada.\n");
        return;
    }

    printf("Digite o nome do cliente: ");
    fgets(nomeCliente, sizeof(nomeCliente), stdin);
    nomeCliente[strcspn(nomeCliente, "\n")] = '\0';

    for (int i = 0; i < totalReservas; i++)
    {
        if (strcmp(nomeCliente, reservas[i].nomeCliente) == 0)
        {
            encontrado = 1;

            for (int j = i; j < totalReservas - 1; j++)
            {
                reservas[j] = reservas[j + 1];
            }

            totalReservas--;
            
            salvarReservas();

            printf("Reserva excluida com sucesso!\n");
            break;
        }
    }

    if (encontrado == 0)
    {
        printf("Reserva nao encontrada.\n");
    }
}


void cadastrarPagamento()
{
    char nomeCliente[100];
    int encontrado = 0;
    if (totalPagamentos >= 100)
    {
    printf("Limite máximo de pagamentos atingido.\n");
    return;
    }
    if (totalReservas == 0)
    {
        printf("Nao ha nenhuma reserva cadastrada.\n");
        return;
    }

    printf("Digite o nome do cliente: ");
    fgets(nomeCliente, sizeof(nomeCliente), stdin);
    nomeCliente[strcspn(nomeCliente, "\n")] = '\0';

    for (int i = 0; i < totalReservas; i++)
    {
        if (strcmp(nomeCliente, reservas[i].nomeCliente) == 0)
{
    encontrado = 1;

    strcpy(pagamentos[totalPagamentos].nomeCliente, nomeCliente);

    pagamentos[totalPagamentos].valorTotal = reservas[i].valor;

    printf("Valor total da reserva: R$ %.2f\n",
           pagamentos[totalPagamentos].valorTotal);

    printf("Digite o valor pago: ");
    scanf("%f", &pagamentos[totalPagamentos].valorPago);
    getchar();

    printf("Forma de pagamento: ");
    fgets(pagamentos[totalPagamentos].formaPagamento,
          sizeof(pagamentos[totalPagamentos].formaPagamento), stdin);

    pagamentos[totalPagamentos].formaPagamento[
        strcspn(pagamentos[totalPagamentos].formaPagamento, "\n")
    ] = '\0';

    if (pagamentos[totalPagamentos].valorPago >= pagamentos[totalPagamentos].valorTotal)
    {
        strcpy(pagamentos[totalPagamentos].status, "Pago");
    }
    else if (pagamentos[totalPagamentos].valorPago > 0)
    {
        strcpy(pagamentos[totalPagamentos].status, "Pagamento Parcial");
    }
    else
    {
        strcpy(pagamentos[totalPagamentos].status, "Pendente");
    }

    printf("\n===== DADOS DO PAGAMENTO =====\n");

    printf("Cliente: %s\n", pagamentos[totalPagamentos].nomeCliente);
    printf("Valor total: R$ %.2f\n", pagamentos[totalPagamentos].valorTotal);
    printf("Valor pago: R$ %.2f\n", pagamentos[totalPagamentos].valorPago);
    printf("Forma de pagamento: %s\n", pagamentos[totalPagamentos].formaPagamento);
    printf("Status: %s\n", pagamentos[totalPagamentos].status);

   totalPagamentos++;

    salvarPagamentos();

    printf("\nPagamento cadastrado com sucesso!\n");

    break;
}
    }

    if (encontrado == 0)
    {
        printf("Nenhuma reserva encontrada para esse cliente.\n");
    }

}

void listarPagamentos()
{
    if (totalPagamentos == 0)
    {
        printf("Nao existe nenhum pagamento cadastrado.\n");
        return;
    }

    printf("\n========== PAGAMENTOS CADASTRADOS ==========\n\n");

    for (int i = 0; i < totalPagamentos; i++)
    {
        printf("Pagamento %d\n", i + 1);

        printf("Cliente: %s\n", pagamentos[i].nomeCliente);

        printf("Valor total: R$ %.2f\n", pagamentos[i].valorTotal);

        printf("Valor pago: R$ %.2f\n", pagamentos[i].valorPago);

        printf("Forma de pagamento: %s\n", pagamentos[i].formaPagamento);

        printf("Status: %s\n", pagamentos[i].status);

        printf("--------------------------------------------\n");
    }
}

void buscarPagamento()
{
    char nomeCliente[100];
    int encontrado = 0;

    if (totalPagamentos == 0)
    {
        printf("Nao ha nenhum pagamento cadastrado.\n");
        return;
    }

    printf("Digite o nome do cliente: ");
    fgets(nomeCliente, sizeof(nomeCliente), stdin);
    nomeCliente[strcspn(nomeCliente, "\n")] = '\0';

    for (int i = 0; i < totalPagamentos; i++)
    {
        if (strcmp(nomeCliente, pagamentos[i].nomeCliente) == 0)
        {
            encontrado = 1;

            printf("\n===== PAGAMENTO ENCONTRADO =====\n");

            printf("Cliente: %s\n", pagamentos[i].nomeCliente);
            printf("Valor total: R$ %.2f\n", pagamentos[i].valorTotal);
            printf("Valor pago: R$ %.2f\n", pagamentos[i].valorPago);
            printf("Forma de pagamento: %s\n", pagamentos[i].formaPagamento);
            printf("Status: %s\n", pagamentos[i].status);

            break;
        }
    }

    if (encontrado == 0)
    {
        printf("Pagamento nao encontrado.\n");
    }
}

void editarPagamento()
{
    char nomeCliente[100];
    int encontrado = 0;

    if (totalPagamentos == 0)
    {
        printf("Nao ha nenhum pagamento cadastrado.\n");
        return;
    }

    printf("Digite o nome do cliente: ");
    fgets(nomeCliente, sizeof(nomeCliente), stdin);
    nomeCliente[strcspn(nomeCliente, "\n")] = '\0';

for (int i = 0; i < totalPagamentos; i++)
{
    if (strcmp(nomeCliente, pagamentos[i].nomeCliente) == 0)
    {
        encontrado = 1;

        printf("Digite o novo valor pago: ");
        scanf("%f", &pagamentos[i].valorPago);
        getchar();

        printf("Digite a nova forma de pagamento: ");
        fgets(pagamentos[i].formaPagamento, sizeof(pagamentos[i].formaPagamento), stdin);

        pagamentos[i].formaPagamento[strcspn(pagamentos[i].formaPagamento, "\n") ] = '\0';
        
     if (pagamentos[i].valorPago >= pagamentos[i].valorTotal)
{
    strcpy(pagamentos[i].status, "Pago");
}
else if (pagamentos[i].valorPago > 0)
{
    strcpy(pagamentos[i].status, "Pagamento Parcial");
}
else
{
    strcpy(pagamentos[i].status, "Pendente");
}
       printf("\nPagamento atualizado com sucesso!\n");

        printf("\n===== DADOS ATUALIZADOS =====\n");

        printf("Cliente: %s\n", pagamentos[i].nomeCliente);
        printf("Valor total: R$ %.2f\n", pagamentos[i].valorTotal);
        printf("Valor pago: R$ %.2f\n", pagamentos[i].valorPago);
        printf("Forma de pagamento: %s\n", pagamentos[i].formaPagamento);
        printf("Status: %s\n", pagamentos[i].status);
        printf("--------------------------------------------\n");

printf("\nPagamento atualizado com sucesso!\n");

salvarPagamentos();

printf("\n===== DADOS ATUALIZADOS =====\n");
        break;
    }

}
if (encontrado == 0)
{
    printf("Pagamento nao encontrado.\n");
}
}
void excluirPagamento()
{
    char nomeCliente[100];
    int encontrado = 0;

    if (totalPagamentos == 0)
    {
        printf("Nao ha nenhum pagamento cadastrado.\n");
        return;
    }

    printf("Digite o nome do cliente: ");
    fgets(nomeCliente, sizeof(nomeCliente), stdin);
    nomeCliente[strcspn(nomeCliente, "\n")] = '\0';

for (int i = 0; i < totalPagamentos; i++)
{
    if (strcmp(nomeCliente, pagamentos[i].nomeCliente) == 0)
    {
        encontrado = 1;

        for (int j = i; j < totalPagamentos - 1; j++)
        {
        pagamentos[j] = pagamentos[j + 1];
        }
     totalPagamentos--;
     salvarPagamentos();

     printf("Pagamento excluido com sucesso!\n");
        break;
    }
}
if (encontrado == 0)
{
    printf("Pagamento nao encontrado.\n");
}
}

void relatorioClientes()
{
 if (totalClientes == 0)
 {
    printf("Nao ha clientes cadastrados.\n");
    return;
 }
    printf("\n========== RELATORIO DE CLIENTES ==========\n\n");

    for (int i = 0; i < totalClientes; i++)
    {
       printf("Cliente %d\n", i + 1);

       printf("Nome: %s\n", clientes[i].nome);

       printf("Telefone: %s\n", clientes[i].telefone);

       printf("CPF: %s\n", clientes[i].cpf);

       printf("Endereco: %s\n", clientes[i].endereco);

       printf("--------------------------------------------\n");
    }
}
void relatorioReservas()
{
    if (totalReservas == 0)
    {
        printf("Nao ha reservas cadastradas.\n");
        return;
    }

    printf("\n========== RELATORIO DE RESERVAS ==========\n\n");

    for (int i = 0; i < totalReservas; i++)
    {
        printf("Reserva %d\n", i + 1);

        printf("Cliente: %s\n", reservas[i].nomeCliente);

        printf("Data de inicio: %02d/%02d/%04d\n",
               reservas[i].dataInicio.dia,
               reservas[i].dataInicio.mes,
               reservas[i].dataInicio.ano);

        printf("Data de termino: %02d/%02d/%04d\n",
               reservas[i].dataFim.dia,
               reservas[i].dataFim.mes,
               reservas[i].dataFim.ano);

        printf("Horario: %s\n", reservas[i].horario);

        printf("Quantidade de pessoas: %d\n", reservas[i].quantidadePessoas);

        printf("Valor: R$ %.2f\n", reservas[i].valor);

        printf("Tipo de evento: %s\n", reservas[i].tipoEvento);

        printf("Observacoes: %s\n", reservas[i].observacoes);

        printf("--------------------------------------------\n");
    }
}
void relatorioPagamentos()
{
    if (totalPagamentos == 0)
    {
        printf("Nao ha pagamentos cadastrados.\n");
        return;
    }

    printf("\n========== RELATORIO DE PAGAMENTOS ==========\n\n");

    for (int i = 0; i < totalPagamentos; i++)
    {
        printf("Pagamento %d\n", i + 1);

        printf("Cliente: %s\n", pagamentos[i].nomeCliente);

        printf("Valor total: R$ %.2f\n", pagamentos[i].valorTotal);

        printf("Valor pago: R$ %.2f\n", pagamentos[i].valorPago);

        printf("Forma de pagamento: %s\n", pagamentos[i].formaPagamento);

        printf("Status: %s\n", pagamentos[i].status);

        printf("--------------------------------------------\n");
    }
}

void salvarClientes()
{
    FILE *arquivo;

    arquivo = fopen("clientes.dat", "wb");

    if (arquivo == NULL)
    {
    printf("Erro ao abrir o arquivo.\n");
    return;
    }
    fwrite(clientes, sizeof(struct Cliente), totalClientes, arquivo);
    
    fclose(arquivo);
}

void carregarClientes()
{
FILE *arquivo;

arquivo = fopen("clientes.dat", "rb");

if (arquivo == NULL)
{
    return;
}

totalClientes = fread(clientes, sizeof(struct Cliente), 100,  arquivo);

fclose(arquivo);

}

void salvarReservas()
{
 FILE *arquivo;

    arquivo = fopen("reservas.dat", "wb");

    if (arquivo == NULL)
{
    printf("Erro ao abrir o arquivo de reservas.\n");
    return;
}
fwrite(reservas, sizeof(struct Reserva), totalReservas, arquivo);

 fclose(arquivo);
}

void carregarReservas()
{
    FILE *arquivo;

    arquivo = fopen("reservas.dat", "rb");

    if (arquivo == NULL)
    {
        return;
    }

    totalReservas = fread(
        reservas,
        sizeof(struct Reserva),
        100,
        arquivo
    );

    fclose(arquivo);
}


void salvarPagamentos()
{
    FILE *arquivo;

    arquivo = fopen("pagamentos.dat", "wb");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo de pagamentos.\n");
        return;
    }

    fwrite(pagamentos, sizeof(struct Pagamento), totalPagamentos, arquivo);

    fclose(arquivo);
}

void carregarPagamentos()
{
    FILE *arquivo;

    arquivo = fopen("pagamentos.dat", "rb");

    if (arquivo == NULL)
    {
        return;
    }

    totalPagamentos = fread(
        pagamentos,
        sizeof(struct Pagamento),
        100,
        arquivo
    );

    fclose(arquivo);
}

int main()
{
    carregarClientes();
    carregarReservas();
    carregarPagamentos();

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
            menuReservas();
            break;

        case 3:
            menuPagamentos();
            break;

        case 4:
            menuRelatorios();
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

