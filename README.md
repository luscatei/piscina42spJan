# 🏊 Piscina 42 - Diário de Bordo

Esta é a minha tentatica de passar na Piscina da 41!!  
Aqui vou deixar registradas minas ideias, meus códigos e comentários referentes ao meu processo.

> **Nota:** Os arquivos identificados com `c_.c` são arquivos que fiz após ter enviado a quantidade mínima exigida pelo curso (exercícios extras ou revisões).


---

## 🐚 Shell00 - Conceitos principais:
1. Uso básico do Shell Scripting.
2. Execução de comandos de Shell.
3. Manipulação simples de arquivos e diretórios.
4. Scripts básicos para automação.

## 🐚 Shell01 - Conceitos principais:
1. Scripts mais elaborados com argumentos.
2. Uso de loops e condicionais do Shell.
3. Manipulação de arquivos e processos.
4. Scripts básicos para automação.


# 💻 C00 - Conceitos fundamentais da linguagem C:


## 1. Função `main` e Entrada/Saída
Toda execução em C começa obrigatóriamente pela função `main`. Ela é o ponto de entrada do seu programa, você pode ter centenas de funções, mas o compilador sempre vai ignorar todas e buscar o `main`. Ela é a porta de entrada. Se ela não existir, o compilador vai te dar um erro dizendo que não sabe por onde começar.
* `int`: É o tipo de retorno. Indica que, quando o programa compilar ele dece retornar um número interio para o SO,.
* `main`: É o nome reservado. Não pode ser "inicio", "começar" ou "principal". Tem que ser `main`.
* `(void)`: Significa que, para começar a executar, não precisa de argumento inicial.
* `return (0)`: É o sinal de "missão cumprida". O número `0` é o código universal de "SUCESSO!". Qualquer outro número indica um erro especifico.  

* **Protótipo:**
```c
int main(void)
{
	// Seu código aqui
	return (0);
}
```


## 2. Saída de Dados: `putchar`
Este comando é essencial para entender a manipulação de apensa um caractere por vez na saida padrão(`stdout`).
* **Uso:** `putchar('A');` imprime a letra A.
* Fundamental para entender como `strings`são formadas (cadeias de caracteres terminadas em `\0`).


## 3. Controle de Fluxo (Tomada de Decisões)
* Condicionais(`if`/`else`): Avalia se uma declaração é verdadeira ou falsa.
```c
if (n > 0)
	write(1, "+", 1);
else
	write(1, "-", 1);```

## 4. 
