#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

struct cadastro_filmes {
    char filme[51];
    int num_sessoes;
    char **hor_sessoes;
    int *cadeiras;
};

void mostrarMenu() {
    printf("========================== MENU ==========================\n");
    printf("OPÇÕES:\n");
    printf("1. Cadastrar um filme e inserir nova sessão de um filme\n");
    printf("2. Mostrar filmes disponíveis e respectivas sessões\n");
    printf("3. Buscar por um filme, mostrando horários das sessões\n");
    printf("4. Editar informações da sessão\n");
    printf("5. Remover sessão\n");
    printf("6. Reservar ou comprar lugar em uma sessão específica\n");
    printf("7. Salvar informações das sessões em um arquivo\n");
    printf("8. Sair do programa\n");
    printf("ESCOLHA UMA OPÇÃO:\n");
}

void retornarMenu() {
    printf("\nPressione Enter para retornar ao MENU\n");
    clearBuffer();
}

void editarSessao(struct cadastro_filmes c[]) {
    int num_filme, num_sessao;

    printf("Digite o número do filme que deseja editar a sessão: ");
    scanf("%d", &num_filme);
    clearBuffer();

    if (num_filme < 1 || num_filme > 4) {
        printf("Filme inválido.\n");
        return;
    }

    printf("Digite o número da sessão que deseja editar: ");
    scanf("%d", &num_sessao);
    clearBuffer();

    if (num_sessao < 1 || num_sessao > c[num_filme - 1].num_sessoes) {
        printf("Número de sessão inválido.\n");
        return;
    }

    printf("Digite o novo horário da sessão: ");
    scanf("%s", c[num_filme - 1].hor_sessoes[num_sessao - 1]);
    clearBuffer();

    printf("Digite a nova quantidade de cadeiras disponíveis: ");
    scanf("%d", &c[num_filme - 1].cadeiras[num_sessao - 1]);
    clearBuffer();

    printf("Informações da sessão editadas com sucesso!\n");
}

int main() {
    int senha = 1234;
    int senha_informada;
    int escolha;

    struct cadastro_filmes c[4];

    do {
        mostrarMenu();

        scanf("%d", &escolha);
        clearBuffer();

        printf("Você escolheu a opção %d\n", escolha);

        switch (escolha) {
            case 1:
                // Código para cadastrar filmes e sessões (conforme já implementado)

                break;

            case 2:
                // Código para mostrar filmes e suas sessões (conforme já implementado)

                break;

            case 3:
                // Código para buscar filme e mostrar horários das sessões (a ser implementado)

                break;

            case 4:
                if (c[0].num_sessoes == 0) {
                    printf("Nenhum filme cadastrado. Cadastre um filme primeiro.\n");
                } else {
                    editarSessao(c);
                }
                break;

            case 5:
                // Código para remover sessão (a ser implementado)

                break;

            case 6:
                // Código para reservar/comprar lugar em uma sessão (a ser implementado)

                break;

            case 7:
                // Código para salvar informações das sessões em um arquivo (a ser implementado)

                break;

            case 8:
                printf("Encerrando o Programa\n");
                break;

            default:
                printf("Número Inválido\n");
        }

        retornarMenu();

    } while (escolha != 8);

    return 0;
}
