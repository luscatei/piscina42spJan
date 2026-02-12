# 🏊 Piscina 42 - Diário de Bordo

*Minha jornada na Piscina da 42! 
Aqui registro ideias, códigos e reflexões sobre meu processo de aprendizado.*

---

## 📁 Estrutura do Repositório

```
piscina-42/
├── shell00/
├── shell01/
├── C00/
│   ├── ex00/     # ft_putchar
│   ├── ex01/     # ft_print_alphabet
│   └── ...
├── C01/
│   ├──
├── 
└── Provas/Modelos
```

## 🐚 Shell00 - Fundamentos do Terminal

**Conceitos principais:**
- Comandos básicos do Unix/Linux (`ls`, `cd`, `mkdir`, `rm`)
- Manipulação de arquivos e diretórios
- Permissões (`chmod`)
- Primeiros scripts de automação

**Dica:** Aprenda bem a diferença entre `>` (sobrescrever) e `>>` (acrescentar) para redirecionamento de saída.

## 🐚 Shell01 - Scripting Básico

**Conceitos principais:**
- Variáveis de shell (`$VAR`, `"$VAR"`, `'$VAR'`)
- Condicionais (`if`, `test`, `[ ]`)
- Loops (`for`, `while`)
- Processamento de argumentos (`$1`, `$#`, `$@`)
- Scripts com lógica de controle

---

# 💻 C00 - Fundamentos da Linguagem C

## 1. 🏁 A Função `main()`: Ponto de Partida

### O que é?
Toda execução em C **obrigatoriamente** começa pela função `main()`. É o ponto de entrada do programa - o compilador sempre procura por ela primeiro.

### Estrutura Básica:
```c
int main(void)
{
    // Seu código aqui
    return (0);
}
```

### Anatomia da `main()`:
- **`int`**: Tipo de retorno. Indica que o programa retorna um número inteiro ao sistema operacional.
- **`main`**: Nome reservado (não pode ser alterado).
- **`(void)`**: Parâmetros - `void` significa "sem parâmetros".
- **`return (0)`**: Código de saída. `0` significa "sucesso", qualquer outro valor indica erro.

**Importante:** O sistema operacional interpreta o valor retornado. É por isso que `return (0)` é essencial.

## 2. 🔄 Entrada e Saída (I/O)

### Por que I/O é fundamental?
Um programa sem comunicação com o mundo exterior é inútil. I/O permite que seu programa:
- Receba dados (entrada)
- Mostre resultados (saída)

### Na Piscina 42:
- **Foco inicial**: Saída (`output`)
- **Por quê?** Os testes automáticos avaliam o que seu programa exibe no terminal.
- **Ferramentas básicas**: `write()` e `putchar()`.

### STDIN e STDOUT:
- **`STDIN` (Standard Input)**: Entrada padrão (normalmente o teclado).
- **`STDOUT` (Standard Output)**: Saída padrão (normalmente o terminal).

## 3. ✍️ `write()` vs `printf()`:

### `printf()`: A "mágica".
```c
printf("Número: %d\n", 42);  // Faz tudo automaticamente.
```
- Formata números, texto, datas.
- Conversões automáticas.
- **Problema**: Esconde o que realmente acontece.

### `write()`: O controle manual.
```c
write(1, "42", 2);  // Você controla cada byte.
```
- Escreve bytes brutos.
- Requer entender representação de caracteres.
- **Vantagem**: Ensina o que acontece nos bastidores.

Primeiro domine as ferramentas básicas, depois use as avançadas.

## 4. 🖨️ `ft_putchar()`: Nosso Primeiro Bloco de Construção

### O que faz?
Imprime **um único caractere** por vez. Pense nele como um carimbo que só carimba uma letra de cada vez.

### Implementação:
```c
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
```

### Por que `&c`?
- **`&`**: Operador "endereço de"
- **`c`**: O valor (ex: `'A'`)
- **`&c`**: O endereço na memória onde `'A'` está armazenado

O `write()` precisa do **endereço** porque trabalha diretamente com a memória.

### Sintaxe do `write()`:
```c
write(onde, endereço_dos_dados, quantos_bytes);
```
- **1**: Descritor de arquivo para STDOUT
- **`&c`**: Endereço do caractere
- **1**: Apenas 1 byte (tamanho de um `char`)

### Uso Correto:
```c
ft_putchar('A');   // ✅ Correto - aspas simples para char
ft_putchar("A");   // ❌ Errado - aspas duplas criam string
```

### Exemplo Completo:
```c
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_putchar('L');
    ft_putchar('E');
    ft_putchar('A');
    ft_putchar('R');
    ft_putchar('N');
    return (0);
}
```
**Saída:** `LEARN`

---

## 🎯 Dicas Práticas para C00

### 1. Teste Localmente:
```bash
gcc -Wall -Wextra -Werror arquivo.c -o programa
./programa
```

### 2. Verifique Norminette:
```bash
norminette *.c
```

### 3. Caracteres vs Strings:
- **Char**: `'A'` (aspas simples, 1 byte)
- **String**: `"ABC"` (aspas duplas, array de chars terminado com `\0`)

### 4. Erro Comum:
```c
write(1, c, 1);    // ❌ Falta o &
write(1, &c, 1);   // ✅ Correto
```

---

## 🔄 Fluxo de Trabalho Recomendado

1. **Entenda** o exercício
2. **Planeje** no papel
3. **Escreva** o código
4. **Teste** com vários casos
5. **Verifique** a norminette
6. **Documente** suas descobertas aqui

---

*Próximos passos: Usar `ft_putchar()` em loops para criar funções mais complexas como `ft_print_alphabet()`!*

---

**📌 Nota:** Este diário é um documento vivo. Voltarei para atualizá-lo com novas descobertas e insights durante minha jornada na Piscina 42.

**🚀 Boa jornada para mim (e para você, se estiver lendo isso)!**
