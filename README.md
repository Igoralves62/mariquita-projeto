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

- 🔄 Buscar pagamentos
- 🔄 Editar pagamentos
- 🔄 Excluir pagamentos
- 🔄 Relatórios
- 🔄 Controle de disponibilidade das reservas
- 🔄 Persistência de dados em arquivos (.txt/.bin)
- 🔄 Banco de Dados (versão futura)
- 🔄 Interface gráfica (versão futura)

---

# 📚 Conceitos Aplicados

Durante o desenvolvimento deste projeto estão sendo utilizados conceitos como:

- Programação Estruturada
- Structs
- Vetores
- Funções
- Modularização
- Manipulação de Strings (`string.h`)
- Estruturas de decisão (`if`, `switch`)
- Estruturas de repetição (`for`, `do...while`)
- CRUD (Create, Read, Update, Delete)
- Organização de projetos
- Versionamento com Git
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