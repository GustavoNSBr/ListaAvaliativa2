#include <stdio.h>

void calcularForcaTime(char posicao, float forca, float *forcaTime) {
    switch (posicao) {
        case 'G':
            *forcaTime += 8 * (forca / 100);
            break;
        case 'L':
            *forcaTime += 10 * (forca / 100);
            break;
        case 'Z':
            *forcaTime += 5 * (forca / 100);
            break;
        case 'V':
            *forcaTime += 8 * (forca / 100);
            break;
        case 'M':
            *forcaTime += 11 * (forca / 100);
            break;
        case 'A':
            *forcaTime += 12 * (forca / 100);
            break;
    }
}

void exibirResultado(char *nomeTime1, float forcaTime1, char *nomeTime2, float forcaTime2) {
    printf("%s: %.2f de forca\n%s: %.2f de forca\n", nomeTime1, forcaTime1, nomeTime2, forcaTime2);
    if (forcaTime1 > forcaTime2) {
        printf("%s eh mais forte\n", nomeTime1);
    } else {
        printf("%s eh mais forte\n", nomeTime2);
    }
}

int main() {
    char nomes[12][30];
    char posicoes[12];
    int forcas[12];
    char nomeTime1[30], nomeTime2[30];
    float forcaTime1 = 0.0, forcaTime2 = 0.0;

    scanf("%[^\n]%*c", nomeTime1);

    for (int i = 0; i < 11; i++) {
        scanf("%[^;];%c;%d%*c", nomes[i], &posicoes[i], &forcas[i]);
        calcularForcaTime(posicoes[i], forcas[i], &forcaTime1);
    }

    scanf("%[^\n]%*c", nomeTime2);

    for (int i = 0; i < 11; i++) {
        scanf("%[^;];%c;%d%*c", nomes[i], &posicoes[i], &forcas[i]);
        calcularForcaTime(posicoes[i], forcas[i], &forcaTime2);
    }

    exibirResultado(nomeTime1, forcaTime1, nomeTime2, forcaTime2);

    return 0;
}
