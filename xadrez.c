#include <stdio.h>


void moverTorre(int casas) {
    if (casas == 0) {
        return; 
    }
    printf("Direita\n");
    moverTorre(casas - 1); 
}


void moverRainha(int casas) {
    if (casas == 0) {
        return; 
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); 
}


void moverBispo(int casas) {
    if (casas == 0) {
        return; 
    }
    
    
    for (int v = 0; v < 1; v++) { 
        printf("Cima\n");
        for (int h = 0; h < 1; h++) {  
            printf("Direita\n");
        }
    }
    
    moverBispo(casas - 1); // Chamada recursiva
}

int main() {

    // Número de casas para cada movimento
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

     // Movimento da Torre 
    printf("Movimento da Torre (%d casas para a Direita):\n", casasTorre);
    moverTorre(casasTorre);
    printf("\n");

    //  Movimento do Bispo 
    printf("Movimento do Bispo (%d casas na Diagonal para Cima e Direita):\n", casasBispo);
    moverBispo(casasBispo);
    printf("\n");

    //  Movimento da Rainha 
    printf("Movimento da Rainha (%d casas para a Esquerda):\n", casasRainha);
    moverRainha(casasRainha);
    printf("\n");

    //  Movimento do Cavalo 
    // Movimento complexo em "L": 2 casas para cima e 1 casa para a direita
    printf("Movimento do Cavalo (em 'L': 2 casas para Cima e 1 para Direita):\n");

    const int movimentosVerticais = 2;  // duas casas para cima
    const int movimentosHorizontais = 1;  // uma casa para a direita

    // Loops aninhados para simular o movimento "L"
    for (int i = 0; i < movimentosVerticais + movimentosHorizontais; i++) {
        if (i < movimentosVerticais) {
            printf("Cima\n");
            continue;  
        }
        
        for (int j = 0; j < movimentosHorizontais; j++) {
            if (j == 0) {
                printf("Direita\n");
                break;  // Interrompe o loop interno após o movimento horizontal
            }
        }
    }

    printf("\n");

    return 0;
}