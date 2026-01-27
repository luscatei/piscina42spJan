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


## 1. Função `main` Entrada e saida básica.
Toda execução em C começa obrigatóriamente pela função `main`. Ela é o ponto de entrada do seu programa, você pode ter centenas de funções, mas o compilador sempre vai ignorar todas e buscar o `main`. Ela é a porta de entrada. Se ela não existir, o compilador vai te dar um erro dizendo que não sabe por onde começar.
* `int`: É o tipo de retorno. Indica que, quando o programa compilar ele dece retornar um número interio para o SO.
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


### 1.2 Entrada e Saida (I/O - Imput/Output).
Um programa que não recebe nada e nem mostra nada, não se comunica com o mundo exterior. I/O é como o programa se comunica com o usuário.
- Saida (`output`)
É o ato de mandar dados do programa para a tela (terminal).
* No C00, usamos funções como `write` ou o `putchar`.
* Conceito: Você "empurra" bits para um lugar chamado `STDOUT`(Standard Output ou Saída Padrão).  

- Entrada (`input`)
É quando o programa espera que você de informações para poder executar.
* Os dados vêm do `STDIN` (standard Input ou Entrada Padrão).
* Na Piscina a gente foca muito mais na saida e exibição de resultados do que na Entrada, os testes automáticos avaliam a saida no terminal.

### 1.3 Por que no C00 focamos no `putchar` e `write`?
A 42 exige entendimento do baixo nível.
* O `printf`é como um robô que ja faz tudo: ele formata números, textos, datas. É "mágica".
* O `write`e o `putchar` são ferramentas manuais. Eles tem ensinam que para mostrar o número `42`, você precisa mostrar os caracteres de `4` e de `2`. Isso cria controle e autonomia sobre a memoria e o processamento.

