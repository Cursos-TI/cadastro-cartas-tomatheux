/*
 * Desafio: Nível Novato - Movimentando as Peças do Xadrez
 * * Este programa simula o movimento de três peças de xadrez (Torre, Bispo, Rainha)
 * usando uma estrutura de repetição diferente para cada uma (for, while, do-while).
 * O objetivo é imprimir a direção do movimento a cada "casa" percorrida.
 */

// Inclui a biblioteca padrão de Entrada e Saída (Standard Input/Output)
// Necessária para usar a função printf()
#include <stdio.h>
// Inclui a biblioteca padrão (Standard Library)
// Útil para funções gerais, embora não estritamente necessária aqui.
#include <stdlib.h>

// A função main() é o ponto de entrada de todo programa C.
int main() {

    // --- 1. Movimento da Torre (usando 'for') ---
    
    // Define o número de casas que a Torre andará.
    // 'const' significa que o valor não pode ser alterado.
    const int casas_torre = 5;
    
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");

    /*
     * Loop 'for':
     * Ideal para quando sabemos exatamente quantas vezes queremos repetir.
     * * Sintaxe: for (inicialização; condição; incremento)
     * * 1. int i = 0;: Cria uma variável 'i' (contador) e a inicia em 0.
     * 2. i < casas_torre;: O loop continuará *enquanto* 'i' for menor que 5.
     * 3. i++: Ao final de cada execução do loop, 'i' é incrementado (i = i + 1).
     * * O loop executará para i=0, i=1, i=2, i=3, i=4 (total de 5 vezes).
     */
    for (int i = 0; i < casas_torre; i++) {
        // Imprime a direção do movimento da Torre
        printf("Direita\n");
    }

    // --- 2. Movimento do Bispo (usando 'while') ---

    // Define o número de casas que o Bispo andará.
    const int casas_bispo = 5;
    
    // Inicializa a variável de controle *antes* do loop.
    int j = 0; 

    printf("\n--- Movimento do Bispo (5 casas para cima-direita) ---\n");

    /*
     * Loop 'while' (enquanto):
     * Verifica a condição *antes* de executar o bloco de código.
     * * Sintaxe: while (condição) { ... }
     * * 1. while (j < casas_bispo): Verifica se 'j' (0) é menor que 5.
     * 2. Se for verdadeiro, executa o bloco de código.
     * 3. Ao final do bloco, ele volta ao topo e verifica a condição novamente.
     * 4. Continua até que 'j' não seja mais menor que 5.
     */
    while (j < casas_bispo) {
        // Imprime a direção do movimento diagonal do Bispo
        printf("Cima, Direita\n");
        
        // Incremento manual: É crucial incrementar o contador
        // dentro do loop 'while', senão ele se torna um loop infinito!
        j++; 
    }

    // --- 3. Movimento da Rainha (usando 'do-while') ---

    // Define o número de casas que a Rainha andará.
    const int casas_rainha = 8;
    
    // Inicializa a variável de controle *antes* do loop.
    int k = 0; 

    printf("\n--- Movimento da Rainha (8 casas para a esquerda) ---\n");

    /*
     * Loop 'do-while' (faça-enquanto):
     * Similar ao 'while', mas com uma diferença crucial:
     * Ele executa o bloco de código *pelo menos uma vez* e só
     * *depois* verifica a condição.
     * * Sintaxe: do { ... } while (condição);
     * * 1. do { ... }: Executa o bloco de código (imprime "Esquerda\n" e incrementa k).
     * 2. while (k < casas_rainha);: Verifica a condição (se k < 8).
     * 3. Se for verdadeiro, volta ao 'do' e executa o bloco novamente.
     * 4. Continua até que 'k' não seja mais menor que 8.
     */
    do {
        // Imprime a direção do movimento da Rainha
        printf("Esquerda\n");
        
        // Incremento manual, assim como no 'while'.
        k++;
        
    } while (k < casas_rainha);
    
    // 'return 0' indica ao sistema operacional que o programa
    // foi executado com sucesso e terminou sem erros.
    return 0;
}
