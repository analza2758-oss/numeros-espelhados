# Números Espelhados em C

<p align="center">
  ✦ ─────────────── ✦ ─────────────── ✦
</p>

<p align="center">
  Um pequeno projeto desenvolvido em <strong>C</strong> para praticar lógica de programação e manipulação de números.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C-A8A4FF?style=for-the-badge&logo=c&logoColor=white" alt="Linguagem C">
  <img src="https://img.shields.io/badge/Status-Concluído-B8A1E3?style=for-the-badge" alt="Status do projeto">
  <img src="https://img.shields.io/badge/Objetivo-Aprendizado-D8B4FE?style=for-the-badge" alt="Objetivo educacional">
</p>

---

## ✧ Sobre o projeto

O **Números Espelhados** é um programa desenvolvido na linguagem C que recebe dois números inteiros e exibe uma sequência numérica crescente, seguida de uma sequência decrescente.

Durante a segunda parte, os números com dois algarismos têm suas dezenas e unidades invertidas.

O projeto foi criado com o objetivo de praticar conceitos fundamentais da programação e desenvolver o raciocínio lógico.

## ⟡ Funcionamento

```text
╭────────────────────────────╮
│  01. Recebe dois números   │
│  02. Exibe a ordem crescente│
│  03. Percorre em ordem     │
│      decrescente           │
│  04. Inverte os algarismos │
│      dos números de 2      │
│      dígitos               │
╰────────────────────────────╯
```

## 💻 Exemplo de execução

**Entrada:**

```text
Digite um numero: 2
Digite um numero: 5
```

**Saída:**

```text
23455432
```

> [!NOTE]
> O exemplo considera números de um algarismo. A inversão implementada no código considera apenas a dezena e a unidade.

## 🛠️ Tecnologias e conceitos

| Tecnologia / conceito | Aplicação |
|:---|:---|
| `C` | Linguagem utilizada |
| `printf()` | Exibição de informações |
| `scanf()` | Entrada de dados |
| `for` | Repetição e percursos numéricos |
| `if / else` | Verificação de condições |
| `/` e `%` | Separação dos algarismos |

## 📂 Estrutura do projeto

```text
📁 numeros-espelhados/
 ├── 📄 main.c
 └── 📄 README.md
```

##  Código-fonte

A implementação do projeto foi desenvolvida em linguagem C:

```c
#include <stdio.h>
#include <stdlib.h>

int Numeros()
{
    int X;

    printf("Digite um numero: ");
    scanf("%i", &X);

    return X;
}

int Espelho(int X, int Y)
{
    for (int i = X; i <= Y; i++)
    {
        printf("%i", i);
    }

    for (int i = Y; i >= X; i--)
    {
        if (i >= 10)
        {
            int dezena = i / 10;
            int unidade = i % 10;

            printf("%i%i", unidade, dezena);
        }
        else
        {
            printf("%i", i);
        }
    }
}

int main()
{
    int A = Numeros();
    int B = Numeros();

    int E = Espelho(A, B);

    return 0;
}
```


## 🚀 Como executar

**1. Clone o repositório**

```bash
git clone https://github.com/SEU-USUARIO/numeros-espelhados.git
```

**2. Acesse a pasta**

```bash
cd numeros-espelhados
```

**3. Compile o programa**

```bash
gcc main.c -o numeros-espelhados
```

**4. Execute**

```bash
./numeros-espelhados
```

No Windows, você também pode executar o arquivo `numeros-espelhados.exe` após a compilação.

## 📚 Aprendizados

- Organização de código em funções.
- Entrada e saída de dados.
- Estruturas condicionais e de repetição.
- Operações aritméticas.
- Desenvolvimento do raciocínio lógico.

---
