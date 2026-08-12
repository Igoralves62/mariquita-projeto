# 🌿 Sistema Chácara Mariquita

Sistema desenvolvido em **linguagem C** para gerenciamento de clientes, reservas, pagamentos e, futuramente, relatórios da **Chácara Mariquita**.

Este projeto está sendo desenvolvido como parte do meu **portfólio para ingresso em um estágio na área de Desenvolvimento de Software**, aplicando na prática os conhecimentos adquiridos durante o curso de **Ciência da Computação na PUC Goiás**.

---

# 📌 Objetivo

O objetivo do sistema é informatizar o gerenciamento da Chácara Mariquita, permitindo controlar clientes, reservas e pagamentos de forma simples, organizada e eficiente.

Durante o desenvolvimento, estão sendo aplicados conceitos fundamentais de programação estruturada, organização de projetos, boas práticas e controle de versão utilizando Git e GitHub.

---

# 🚀 Funcionalidades

## ✅ Sprint 1 — Estrutura do Projeto

- Criação do repositório no GitHub
- Organização da estrutura do projeto
- Configuração inicial em linguagem C

---

## ✅ Sprint 2 — Menu Principal

- Menu principal do sistema
- Navegação entre módulos
- Organização do código em funções

---

## ✅ Sprint 3 — Cadastro de Clientes

- Cadastro de até 100 clientes
- Utilização de `struct Cliente`
- Armazenamento em vetor
- Leitura utilizando `fgets()`
- Validação do limite máximo de clientes

---

## ✅ Sprint 4 — Listagem de Clientes

- Listagem de todos os clientes
- Exibição de:
  - Nome
  - Telefone
  - CPF
  - Endereço
- Numeração automática
- Validação para lista vazia

---

## ✅ Sprint 5 — Busca de Clientes

- Busca pelo nome
- Utilização de `strcmp()`
- Exibição completa dos dados
- Tratamento para cliente não encontrado

---

## ✅ Sprint 6 — Edição de Clientes

- Alteração de:
  - Telefone
  - CPF
  - Endereço
- Busca pelo nome
- Confirmação da atualização

---

## ✅ Sprint 7 — Exclusão de Clientes

- Exclusão por nome
- Reorganização automática do vetor
- Atualização da quantidade de clientes

---

## ✅ Sprint 8 — Cadastro de Reservas

- Cadastro de reservas vinculadas a clientes
- Validação de cliente existente
- Cadastro de:
  - Data de início
  - Data de término
  - Horário
  - Quantidade de pessoas
  - Valor
  - Tipo de evento
  - Observações
- Exibição do resumo da reserva

---

## ✅ Sprint 9 — Listagem de Reservas

- Listagem de todas as reservas
- Exibição completa dos dados
- Utilização da estrutura `Data`
- Formatação de datas no padrão brasileiro

---

## ✅ Sprint 10 — Busca de Reservas

- Busca de reservas pelo nome do cliente
- Exibição completa da reserva
- Tratamento para reserva não encontrada

---

## ✅ Sprint 11 — Edição de Reservas

- Alteração de:
  - Data de início
  - Data de término
  - Horário
  - Quantidade de pessoas
  - Valor
  - Tipo de evento
  - Observações
- Exibição dos dados atualizados

---

## ✅ Sprint 12 — Exclusão de Reservas

- Exclusão de reservas
- Reorganização automática do vetor
- Atualização da quantidade de reservas

---

## ✅ Sprint 13 — Cadastro de Pagamentos

- Estrutura `Pagamento`
- Cadastro de pagamentos
- Associação automática com a reserva
- Cadastro de:
  - Valor pago
  - Forma de pagamento
- Definição automática do status:
  - Pago
  - Pagamento Parcial
  - Pendente

---

## ✅ Sprint 14 — Listagem de Pagamentos

- Listagem de todos os pagamentos
- Exibição de:
  - Cliente
  - Valor total
  - Valor pago
  - Forma de pagamento
  - Status

### ✅ Sprint 15 - Busca de Pagamentos
- Busca por nome do cliente
- Exibição completa do pagamento

### ✅ Sprint 16 - Edição de Pagamentos
- Atualização do valor pago
- Atualização da forma de pagamento
- Atualização automática do status

### ✅ Sprint 17 - Exclusão de Pagamentos
- Exclusão de pagamentos pelo nome do cliente
- Reorganização automática do vetor
- Atualização da quantidade de pagamentos
- Confirmação da exclusão

### ✅ Sprint 18 - Módulo de Relatórios
- Criação do menu de relatórios
- Integração ao menu principal
- Organização do sistema em um novo módulo

### ✅ Sprint 19 - Relatório de Clientes
- Exibição de todos os clientes cadastrados
- Listagem organizada das informações
- Validação para ausência de clientes

### ✅ Sprint 20 - Relatório de Reservas
- Exibição de todas as reservas cadastradas
- Apresentação das datas formatadas
- Exibição do horário, valor, quantidade de pessoas, tipo de evento e observações
- Validação para ausência de reservas

### ✅ Sprint 21 - Relatório de Pagamentos
- Exibição de todos os pagamentos cadastrados
- Valor total
- Valor pago
- Forma de pagamento
- Status do pagamento
- Validação para ausência de pagamentos

### ✅ Sprint 22 - Persistência de Clientes
- Criação da função `salvarClientes()`
- Gravação dos clientes em arquivo binário (`clientes.dat`)
- Utilização das funções `fopen()`, `fwrite()` e `fclose()`
- Salvamento automático após cadastrar clientes
- Salvamento automático após editar clientes
- Salvamento automático após excluir clientes

### ✅ Sprint 23 - Carregamento de Clientes
- Criação da função `carregarClientes()`
- Leitura dos clientes armazenados em `clientes.dat`
- Carregamento automático dos dados ao iniciar o sistema
- Utilização de `fread()`
- Atualização automática de `totalClientes`
- Tratamento para arquivo inexistente

### ✅ Sprint 24 - Persistência de Reservas
- Criação do arquivo `reservas.dat`
- Salvamento automático das reservas
- Carregamento automático das reservas ao iniciar o sistema
- Persistência após cadastro, edição e exclusão
- Utilização de arquivos binários
- Utilização de `fopen()`, `fwrite()`, `fread()` e `fclose()`

### ✅ Sprint 25 - Persistência de Pagamentos
- Criação do arquivo `pagamentos.dat`
- Salvamento automático dos pagamentos
- Carregamento automático dos pagamentos ao iniciar o sistema
- Persistência após cadastro, edição e exclusão
- Utilização de arquivos binários
- Utilização de `fopen()`, `fwrite()`, `fread()` e `fclose()`
---

# 🛠 Tecnologias Utilizadas

- Linguagem C
- Git
- GitHub
- Visual Studio Code

---

# 📁 Estrutura do Projeto

```
mariquita-reservas/
│
├── assets/
├── docs/
├── src/
│   └── main.c
├── README.md
└── CHANGELOG.md
```

---

# 📅 Próximas Funcionalidades

## 📅 Próximas Funcionalidades

## 📅 Próximas Funcionalidades

🔄 Modularização do projeto em arquivos `.h` e `.c`

🔄 Separação dos módulos de Clientes, Reservas e Pagamentos

🔄 Melhorias na validação dos dados

🔄 Melhorias nos relatórios

🔄 Controle de disponibilidade das datas

🔄 Histórico de contratos

🔄 Banco de Dados (versão futura)

🔄 Interface gráfica (versão futura)
---

# 📚 Conceitos Aplicados

Durante o desenvolvimento deste projeto estão sendo utilizados conceitos como:

- Persistência de dados
- Arquivos binários
- Leitura e gravação de arquivos
- Manipulação de arquivos com `FILE`

`fopen()`

`fwrite()`

`fread()`

`fclose()`

- Modularização
- CRUD
- Estruturas
- Vetores
- Funções
- Manipulação de Strings
- Laços de repetição
- Git
- GitHub
- Boas práticas de programação

---

# 🎯 Objetivo Profissional

Este projeto faz parte do meu portfólio como estudante de **Ciência da Computação** e tem como objetivo demonstrar minha evolução prática no desenvolvimento de software, utilizando a linguagem C e aplicando conceitos fundamentais de programação.

---

# 👨‍💻 Autor

**Igor Alves Nogueira**

🎓 Ciência da Computação — PUC Goiás

📍 Goiânia - GO

---

> 🚧 Projeto em desenvolvimento. Novas funcionalidades serão adicionadas conforme a evolução das sprints.