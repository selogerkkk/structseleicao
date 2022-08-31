#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define minimo 10000

typedef struct
{
    float candidato_a,
        candidato_b,
        candidato_c,
        nulo,
        em_branco,
        total,
        valido;
} eleicao;

int main()
{
    srand(time(NULL));
    eleicao percentual,
        voto;

    voto.candidato_a = minimo + rand() % minimo;
    voto.candidato_b = minimo + rand() % minimo;
    voto.candidato_c = minimo + rand() % minimo;
    voto.nulo = 1000 + rand() % 1000;
    voto.em_branco = 1000 + rand() % 1000;

    voto.total = voto.candidato_a + voto.candidato_b + voto.candidato_c + voto.nulo + voto.em_branco;
    printf("Eleitores participando da eleição eram: %2.f", voto.total);

    voto.valido = voto.total - voto.nulo - voto.em_branco;
    percentual.valido = voto.valido / voto.total;
    printf("\nvotos validos foi de %4.f que corresponde a %4.f%%\n",
           voto.valido, percentual.valido * 100);

    percentual.candidato_a = voto.candidato_a / voto.total;
    printf("\nvotos do candidato A foi de: %4.f, totalizando:%4.f%%\n",
           voto.candidato_a, percentual.candidato_a * 100);

    percentual.candidato_b = voto.candidato_b / voto.total;
    printf("\nvotos do candidato B foi de: %4.f, totalizando: %4.f%%\n",
           voto.candidato_b, percentual.candidato_b * 100);

    percentual.candidato_c = voto.candidato_c / voto.total;
    printf("\nvotos do candidato C foi de: %4.f, totalizando: %4.f%%\n",
           voto.candidato_c, percentual.candidato_c * 100);

    percentual.em_branco = voto.em_branco / voto.total;
    printf("\nvotos em branco foi de: %4.f, totalizando: %f%%\n",
           voto.em_branco, percentual.em_branco);

    percentual.nulo = voto.nulo / voto.total;
    printf("\nvotos nulos foi de: %4.f, totalizando: %f%%\n",
           voto.nulo, percentual.nulo);
}
