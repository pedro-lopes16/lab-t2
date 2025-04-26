#include <stdio.h>
#include <string.h>

char *senhacorreta = "orbita2025";
int max_tentativas = 3;

int autenticar() {
  char senha[20];
  int tentativas = 0;

  while (tentativas < max_tentativas) {
    printf("Digite a senha para acessar o sistema: ");
    scanf("%s", senha);

    if (strcmp(senha, senhacorreta) == 0) {
      return 1;
    } else {
      tentativas++;
      printf("Senha incorreta. Tentativa %d de %d.\n", tentativas,
             max_tentativas);
    }
  }

  return 0;
}

int main() {
  printf("=== Sistema de Controle de Missões Espaciais ===\n");

  if (autenticar()) {
    printf("Bem-vindo comandante! Acesso ao menu principal liberado.\n");
    menu();
  }
  else {
    printf("Número máximo de tentativas atingido. Encerrando o sistema.\n");
  }

  return 0;
}

int menu() {
    int opcao = 0;

    do{
        printf("Bem vindo ao menu!\n");
        printf("1. Simular Queima de Combustível\n");
        printf("2. Calcular Ângulo de Trajetória\n");
        printf("3. Calcular Gravidade em Planeta\n");
        printf("4. Registrar Missão\n");
        printf("5. Ver Histórico de Missões\n");
        printf("6. Calcular Energia para Emergência (Recursivo)\n");
        printf("7. Ordenar Missões por Distância\n");
        printf("8. Missão Final - Simulação de Decisão\n");
        printf("9. Sair\n");
        printf("Selecione uma opção:\n");
        scanf ("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf ("Simular Queima de Combustível – Inicia uma simulação que representa a queima gradual de combustível da nave, reduzindo 50 litros a cada iteração.");
                queimar();
                break;

            case 2:
                printf ("Calcular Ângulo de Trajetória – Permite ao usuário inserir uma distância até o destino e recebe como retorno o ângulo ideal para o lançamento");
                break;

            case 3:
                printf ("Calcular Gravidade em Planeta – Permite escolher um planeta e retorna a gravidade correspondente, com recomendações baseadas no valor.");
                break;

            case 4:
                printf ("Registrar Missão – Coleta dados de uma missão (distância, planeta) e armazena em um vetor de estruturas.");
                break;

            case 5:
                printf ("Ver Histórico de Missões – Exibe todas as missões registradas, com detalhes como distância, ângulo, planeta e status.");
                break;

            case 6:
                printf ("Calcular Energia para Emergência (Recursivo) – Calcula de forma recursiva a energia necessária para manter n sistemas ativos da nave.");
                break;

            case 7:
                printf ("Ordenar Missões por Distância – Organiza o histórico de missões do menor para o maior valor de distância usando ordenação simples.");
                break;

            case 8:
                printf ("Missão Final - Simulação de Decisão – Apresenta um cenário de crise onde o usuário deve escolher entre três ações que afetam o resultado da missão.");
                break;

            case 9:
                printf ("Sair – Finaliza o programa.");
                return 0;
        }

    } while (opcao != 9);
    printf("Opção inválida. Tente novamente.\n");
    return 0;

}

int queima () {
  int combustivel = 1000; 
  int queima = 50;

  for(int i=0; i < 20; i++){
    printf("Combustível restante: %d\n", combustivel);
    combustivel = combustivel - 50;

    if(combustivel == 500){
      printf("Quantidade de combustível: %d\n", combustivel);
      printf("Atingindo atmosfera superior\n");
    }
    if (combustivel == 100){
    printf("Quantidade de combustível: %d\n", combustivel);
    printf("Quase em órbita\n");
    }
  }

  return 0;
} 

int queimar (){
  int combustivel = 1000;
  int queima = 50;

  printf("A quantidade de combustivel é: %d\n", combustivel);
  
    while(combustivel > 0){ 
      combustivel = combustivel - queima;
      printf("A quantidade de combustivel é: %d\n", combustivel);
   }
}