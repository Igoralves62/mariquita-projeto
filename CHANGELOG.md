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