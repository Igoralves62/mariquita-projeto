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
