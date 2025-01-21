#include <stdio.h>
#include <string.h>

// Definindo estilos e cores para o ASCII Art e texto
#define NEGRITO "\033[1m"
#define RESET "\033[0m"
#define AMARELO "\033[33m"
#define VERDE "\033[32m"

// Função para exibir a arte ASCII
void exibirArteAscii() {
    printf(NEGRITO AMARELO " _____           _           _            ____________ \n" RESET);
    printf(NEGRITO VERDE "/  __ \\         | |         | |           | ___ \\ ___ \\\n" RESET);
    printf(NEGRITO AMARELO "| /  \\/ __ _  __| | __ _ ___| |_ _ __ ___ | |_/ / |_/ /\n" RESET);
    printf(NEGRITO VERDE "| |    / _` |/ _` |/ _` / __| __| '__/ _ \\| ___ \\    / \n" RESET);
    printf(NEGRITO AMARELO "| \\__/\\ (_| | (_| | (_| \\__ \\ |_| | | (_) | |_/ / |\\ \\ \n" RESET);
    printf(NEGRITO VERDE " \\____/\\__,_|\\__,_|\\__,_|___/\\__|_|  \\___/\\____/\\_| \\_|\n" RESET);
    printf(NEGRITO "                                                       \n" RESET);
    printf(NEGRITO "                                                       \n" RESET);
    printf(NEGRITO VERDE "Feito por: David A. Mascaro (Estácio)\n" RESET);
    printf("\n");
}

int main() {
    // Variáveis para armazenar informações da cidade
    int codigo, populacao, pontosTuristicos;
    float area, pib;
    char nome[50];

    // Exibindo a arte ASCII
    exibirArteAscii();

    // Cadastro de informações
    printf(NEGRITO "Bem-vindo ao sistema de cadastro de cartas!\nCidades\n" RESET);
    
    // Código da cidade
    printf("Digite o código da cidade:\n");
    scanf("%d", &codigo);

    // Nome da cidade
    printf("Digite o nome da cidade:\n");
    getchar(); // Limpa o buffer do teclado antes de usar fgets
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha '\n'

    // População
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    // Área
    printf("Digite a área da cidade (km²):\n");
    scanf("%f", &area);
    while ((getchar()) != '\n'); // Limpa o buffer de entrada

    // PIB
    printf("\nDigite o PIB da cidade (em bilhões):\n");
    scanf("%f", &pib);
    while ((getchar()) != '\n'); // Limpa o buffer de entrada novamente

    // Pontos turísticos
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);

    // Exibindo as informações cadastradas
    printf("\nInformações da Carta:\nCidade\n");
    printf("=============================\n");
    printf(NEGRITO "Código da cidade: " RESET "%d\n", codigo);
    printf("=============================\n");
    printf(NEGRITO "Nome da cidade: " RESET "%s\n", nome);
    printf("=============================\n");
    printf(NEGRITO "População: " RESET "%d\n", populacao);
    printf("=============================\n");
    printf(NEGRITO "Área (km²): " RESET "%.2f\n", area);
    printf("=============================\n");
    printf(NEGRITO "PIB (em bilhões): " RESET "%.2f\n", pib);
    printf("=============================\n");
    printf(NEGRITO "Pontos turísticos: " RESET "%d\n", pontosTuristicos);

    return 0;
}
