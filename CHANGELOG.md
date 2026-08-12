# Changelog

Todas as alterações importantes do projeto **Sistema Chácara Mariquita** serão registradas neste arquivo.

---

## Sprint 1 - Estrutura inicial do projeto

### Adicionado
- Criação do repositório no GitHub.
- Organização das pastas (`src`, `docs`, `assets`).
- Criação do arquivo `README.md`.
- Configuração inicial do projeto em C.

---

## Sprint 2 - Menu principal

### Adicionado
- Menu principal do sistema.
- Módulos de Clientes, Reservas, Pagamentos e Relatórios.
- Navegação inicial entre os menus.

---

## Sprint 3 - Cadastro de clientes

### Adicionado
- Estrutura `Cliente`.
- Cadastro de clientes.
- Uso de `fgets()` para leitura dos dados.
- Armazenamento em vetor de até 100 clientes.
- Contador de clientes cadastrados.
- Validação do limite máximo de clientes.
- Exibição dos dados cadastrados após o cadastro.
- Retorno automático ao menu após o cadastro.

### Melhorias
- Organização do código em funções.
- Melhoria da navegação entre os menus.

---

## Sprint 4 - Listagem de clientes

### Adicionado
- Função para listar todos os clientes cadastrados.
- Exibição de nome, telefone, CPF e endereço.
- Numeração automática dos clientes listados.

### Melhorias
- Validação para informar quando não houver clientes cadastrados.

---

## Sprint 5 - Busca de clientes

### Adicionado
- Busca de clientes pelo nome.
- Comparação de nomes utilizando `strcmp()`.
- Exibição completa dos dados do cliente encontrado.

### Melhorias
- Validação para informar quando não houver clientes cadastrados.
- Mensagem de cliente não encontrado.
- Correção da leitura do teclado utilizando `getchar()` após `scanf()`.

---

## Sprint 6 - Edição de clientes

### Adicionado
- Função para editar clientes cadastrados.
- Busca do cliente pelo nome utilizando `strcmp()`.
- Atualização dos dados de telefone, CPF e endereço.
- Mensagem de confirmação após a edição do cliente.

### Melhorias
- Validação para informar quando não houver clientes cadastrados.
- Mensagem para cliente não encontrado.
- Encerramento da busca após localizar o cliente utilizando `break`

---

## Sprint 7 - Exclusão de clientes

### Adicionado
- Função para excluir clientes cadastrados.
- Busca do cliente pelo nome utilizando `strcmp()`.
- Remoção do cliente do vetor de clientes.
- Reorganização automática do vetor após a exclusão.
- Atualização da quantidade de clientes cadastrados (`totalClientes`).
- Mensagem de confirmação após a exclusão.

### Melhorias
- Validação para informar quando não houver clientes cadastrados.
- Mensagem para cliente não encontrado.
- Encerramento da busca após localizar o cliente utilizando `break`.
- Deslocamento dos clientes seguintes para evitar posições vazias no vetor.

---

## Sprint 8 - Cadastro de Reservas

### Adicionado
- Criação da estrutura `Reserva`.
- Armazenamento de até 100 reservas em vetor.
- Cadastro de reservas vinculado a clientes já cadastrados.
- Registro de data, horário, quantidade de pessoas, valor, tipo de evento e observações.
- Exibição dos dados da reserva após o cadastro.

### Validações
- Verificação do limite máximo de reservas.
- Verificação da existência de clientes cadastrados.
- Verificação se o cliente informado está cadastrado antes de permitir a reserva.

### Melhorias
- Utilização de `strcpy()` para associar o nome do cliente à reserva.
- Organização do cadastro em função específica (`cadastrarReserva()`).
- Mensagens de confirmação e erro para facilitar a utilização do sistema.

## Sprint 9 - Gerenciamento inicial de reservas

### Adicionado
- Menu exclusivo de Reservas.
- Listagem de todas as reservas cadastradas.
- Estrutura `Data` para armazenamento de datas.
- Cadastro de data de início e data de término.
- Exibição das datas no formato `dd/mm/aaaa`.
- Impressão completa das informações da reserva.

### Melhorias
- Organização das estruturas do projeto.
- Separação dos menus de Clientes e Reservas.
- Código preparado para futuras validações de disponibilidade.

---

## Sprint 10 - Busca de reservas

### Adicionado
- Função `buscarReserva()`.
- Busca de reservas pelo nome do cliente.
- Verificação se existem reservas cadastradas antes da busca.
- Exibição completa dos dados da reserva quando encontrada:
  - Nome do cliente.
  - Data de início.
  - Data de término.
  - Horário.
  - Quantidade de pessoas.
  - Valor da reserva.
  - Tipo de evento.
  - Observações.
- Mensagem de reserva não encontrada quando o cliente não possui reservas.

### Melhorias
- Organização da busca utilizando `strcmp()`.
- Exibição das datas utilizando a estrutura `Data` no formato `dd/mm/aaaa`.
- Padronização das mensagens do módulo de reservas.

## Sprint 11 - Edição de Reservas

### Adicionado
- Implementada a função `editarReserva()`.
- Busca da reserva pelo nome do cliente.
- Validação para verificar se existem reservas cadastradas antes da edição.
- Mensagem de reserva não encontrada quando necessário.

### Funcionalidades da edição
- Alteração da data de início.
- Alteração da data de término.
- Alteração do horário.
- Alteração da quantidade de pessoas.
- Alteração do valor da reserva.
- Alteração do tipo de evento.
- Alteração das observações.

### Melhorias
- Exibição dos dados atualizados após a edição da reserva.
- Mantido o padrão visual utilizado nos módulos anteriores.
- Continuidade da utilização da estrutura `Data` para armazenamento das datas.

## Sprint 12 - Exclusão de Reservas
### Adicionado
- Exclusão de reservas pelo nome do cliente.
- Reorganização automática do vetor de reservas após a exclusão.
- Atualização da variável `totalReservas`.
- Mensagem de confirmação da exclusão.
- Mensagem quando a reserva não for encontrada.

## Sprint 13 - Cadastro de Pagamentos

## Adicionado
Criação da estrutura Pagamento.
Criação do vetor global pagamentos[100].
Criação da variável global totalPagamentos.
Implementação da função menuPagamentos().
Implementação da função cadastrarPagamento().
Funcionalidades implementadas
Verificação se existe alguma reserva cadastrada antes de registrar um pagamento.
Busca da reserva pelo nome do cliente.
Associação automática do pagamento à reserva encontrada.
Cópia do nome do cliente para o registro do pagamento.
Preenchimento automático do valor total utilizando o valor da reserva.
Cadastro do valor pago.
Cadastro da forma de pagamento.
Definição automática do status do pagamento:
Pago
Pagamento Parcial
Pendente
Exibição do resumo completo do pagamento após o cadastro.
Incremento de totalPagamentos após o cadastro.
Estrutura do menu
Cadastro de Pagamentos funcional.
Opções de Listar, Buscar, Editar e Excluir preparadas para as próximas sprints.


## Sprint 14 - Listagem de Pagamentos
## Adicionado
Implementação da função listarPagamentos().
## Funcionalidades implementadas
Verificação se existem pagamentos cadastrados antes da listagem.
Percurso do vetor pagamentos[].
Exibição de todos os pagamentos cadastrados.
Exibição das seguintes informações:
Nome do cliente
Valor total da reserva
Valor pago
Forma de pagamento
Status do pagamento
Organização da saída com numeração dos pagamentos e separadores visuais.
## Melhorias
Padronização da estrutura da função com os módulos de Clientes e Reservas.
Correção do uso dos índices do vetor (pagamentos[i]).
Correção da validação inicial utilizando totalPagamentos.
Correção da leitura dos dados diretamente da estrutura Pagamento.

## Sprint 15 - Busca de Pagamentos

### Adicionado
- Implementada a função `buscarPagamento()`.
- Busca de pagamentos pelo nome do cliente.
- Validação para quando não existem pagamentos cadastrados.
- Utilização da função `strcmp()` para localizar o pagamento.
- Exibição completa dos dados do pagamento encontrado:
  - Nome do cliente;
  - Valor total da reserva;
  - Valor pago;
  - Forma de pagamento;
  - Status do pagamento.
- Mensagem de aviso caso o pagamento não seja encontrado.

##  Sprint 16 - Editar Pagamentos

### Implementado
- Funcionalidade de edição de pagamentos pelo nome do cliente.
- Busca do pagamento utilizando `strcmp()`.
- Atualização do valor pago.
- Atualização da forma de pagamento.
- Recalculo automático do status do pagamento (`Pago`, `Pagamento Parcial` ou `Pendente`).
- Exibição dos dados atualizados após a edição.
- Mensagem de confirmação de atualização.
- Tratamento para pagamento não encontrado.
- Validação para ausência de pagamentos cadastrados.

### Conceitos praticados
- Atualização de registros em vetor.
- Manipulação de strings com `strcmp()`, `strcpy()` e `strcspn()`.
- Estruturas (`struct`).
- Laços de repetição (`for`).
- Estruturas condicionais (`if` / `else if` / `else`).
- Organização de funções seguindo o padrão CRUD.

##  Sprint 17 - Exclusão de Pagamentos

### Implementado
- Exclusão de pagamentos pelo nome do cliente.
- Busca utilizando `strcmp()`.
- Reorganização automática do vetor após a exclusão.
- Atualização da quantidade de pagamentos cadastrados.
- Mensagem de confirmação da exclusão.
- Tratamento para pagamento não encontrado.
- Validação para ausência de pagamentos cadastrados.

### Conceitos praticados
- Exclusão de registros em vetor.
- Reorganização de dados.
- Estruturas (`struct`).
- Manipulação de strings (`strcmp()` e `strcspn()`).
- Laços de repetição (`for`).
- Estruturas condicionais (`if`).
- Organização do CRUD completo do módulo de pagamentos.

## Sprint 18 - Módulo de Relatórios

### Implementado
- Criação do menu de relatórios.
- Integração ao menu principal.
- Organização do módulo de relatórios.

### Conceitos praticados
- Modularização.
- Organização do sistema.
- Menus em linguagem C.


## Sprint 19 - Relatório de Clientes

### Implementado
- Relatório completo dos clientes cadastrados.
- Validação para lista vazia.
- Exibição organizada das informações.

### Conceitos praticados
- Percorrer vetores.
- Impressão formatada.
- Reutilização de código.

## Sprint 20 - Relatório de Reservas

### Implementado
- Relatório completo das reservas.
- Exibição das datas formatadas.
- Exibição de todas as informações da reserva.

### Conceitos praticados
- Percorrer estruturas.
- Impressão formatada.
- Organização dos relatórios.


## Sprint 21 - Relatório de Pagamentos

### Implementado
- Relatório completo dos pagamentos.
- Exibição do valor total.
- Exibição do valor pago.
- Exibição da forma de pagamento.
- Exibição do status do pagamento.

### Conceitos praticados
- Relatórios.
- Organização dos módulos.
- Manipulação de vetores.

## Sprint 22 - Persistência de Clientes

### Implementado
- Criação da função `salvarClientes()`.
- Criação automática do arquivo `clientes.dat`.
- Escrita dos clientes em arquivo binário utilizando `fwrite()`.
- Abertura do arquivo utilizando `fopen()`.
- Fechamento seguro utilizando `fclose()`.
- Salvamento automático após cadastro.
- Salvamento automático após edição.
- Salvamento automático após exclusão.

### Conceitos praticados
- Arquivos em C (`FILE`).
- Persistência de dados.
- Escrita de arquivos binários.
- Manipulação de arquivos.
- Organização do sistema.

## Sprint 23 - Persistência de Clientes

### Implementado
- Criação da função `carregarClientes()`.
- Leitura dos dados armazenados em `clientes.dat`.
- Utilização de `fread()` para recuperar os clientes.
- Atualização automática de `totalClientes`.
- Carregamento automático dos clientes ao iniciar o sistema.
- Verificação da existência do arquivo antes da leitura.
- Fechamento do arquivo utilizando `fclose()`.

### Conceitos praticados
- Leitura de arquivos binários.
- Persistência de dados.
- Utilização de `fread()`.
- Manipulação de ponteiros para arquivos.
- Recuperação de estruturas armazenadas em arquivos.

---

## Sprint 24 - Persistência de Reservas

### Implementado
- Criação da função `salvarReservas()`.
- Criação do arquivo `reservas.dat`.
- Gravação das reservas utilizando `fwrite()`.
- Salvamento automático após cadastro de reserva.
- Salvamento automático após edição de reserva.
- Salvamento automático após exclusão de reserva.
- Criação da função `carregarReservas()`.
- Leitura das reservas utilizando `fread()`.
- Carregamento automático das reservas ao iniciar o sistema.
- Atualização automática de `totalReservas`.
- Fechamento dos arquivos utilizando `fclose()`.

### Conceitos praticados
- Persistência de dados.
- Arquivos binários.
- Leitura e escrita de estruturas.
- Utilização de `fopen()`, `fwrite()`, `fread()` e `fclose()`.
- Manipulação de vetores de estruturas.

---

## Sprint 25 - Persistência de Pagamentos

### Implementado
- Criação da função `salvarPagamentos()`.
- Criação do arquivo `pagamentos.dat`.
- Gravação dos pagamentos utilizando `fwrite()`.
- Salvamento automático após cadastro de pagamento.
- Salvamento automático após edição de pagamento.
- Salvamento automático após exclusão de pagamento.
- Criação da função `carregarPagamentos()`.
- Leitura dos pagamentos utilizando `fread()`.
- Carregamento automático dos pagamentos ao iniciar o sistema.
- Atualização automática de `totalPagamentos`.
- Fechamento dos arquivos utilizando `fclose()`.

### Conceitos praticados
- Persistência de dados.
- Arquivos binários.
- Leitura e escrita de estruturas.
- Utilização de `fopen()`, `fwrite()`, `fread()` e `fclose()`.
- Manipulação de vetores de estruturas.

