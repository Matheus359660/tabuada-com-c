#include <stdio.h>
// Variavel global
float totalArrecadado = 0

//procedimento:adiciona a contribuição de um participante
void adicionaContribuicao(float vaor){
    totalArrecadado += valor;
    printf("contribuição de R$ %.2f adicionada! Total: R$ %2.f\n", valor< totalArrecadado)
}

//função: calcula quantidade de carne por pessoas (0.5kg pr pessoas)

float calcularCarne(int qtdPessoas){
    return qtdPessosas * 0.5;
}


//procedimento pra mostrar o resumo
void mostraResumo(int qtdPessoas){
    float carne = calculaCarne(qtdPessoas);
    float media = totalArrecadado / qtdpessoas;
    printf("\n=====RESUMO CHURRASCO =====\n");
    printf("Participantes: %d\n", qtdPessoas);
    printf("carne nescessaria : %,2f KG\n", carne);
    printf("Total arrecadado: R$ %.2f\n" totalArrecadado)
    printf("Média por pessoa: R$ %.2f\n", media);
    printf("==================================\n")
}

int main(){
    int pessoas;
    float valor;

    printf("Digite o nemero de participantes: ");
    scanf("%d", &pessoas);
    for (int i = 1; i <= pessoas; i++){
        printf("Digite a contribuição do participante %d: R$ ", i);
        adicionaContrbuição(valor);
}
mostraResumo(pessoas);
return 0;