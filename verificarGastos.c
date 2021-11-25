#include <stdlib.h>
#include <stdio.h>

void verificarGastos(){
    printf("VERIFICAR GASTOS\n");

    float valor[] = {0}, val;
    char nome[] = {" "};
    int k=0;

    FILE *valorDespesa;
    valorDespesa = fopen("valorDespesa.txt", "r");
    
    if(valorDespesa == NULL){
        printf("Arquivo não pode ser aberto");
        getchar();
        exit(1);
    }

    FILE *nomeDespesa;
    nomeDespesa = fopen("valorDespesa.txt", "r");
    
    if(nomeDespesa == NULL){
        printf("Arquivo não pode ser aberto");
        getchar();
        exit(1);
    }

    while (fscanf(valorDespesa, "%f", &val) != EOF)
    {
        valor[k] = val;
        k++;
    }

    while (fscanf(nomeDespesa, "%s", nome) != EOF)
    {
        printf("%s\n",nome);
    }
    

    int ch = 0;
    int linhas = 0;

    while (!feof(valorDespesa)) {
        ch = fgetc(valorDespesa);

        if (ch == '\n') {
            linhas++;
        }
    }

    // for(int i=0;i<linhas;i++){
    //     fscanf(valorDespesa, "%f",&valor[i]);
    // }

    for(int i=0;i<linhas;i++){

        printf("%f\n", valor[i]);
    }

    //while(fgets())
    fclose(valorDespesa);
    fclose(nomeDespesa);
    // printf ("\t*------------------------------------------------------*\n");    
    // printf ("\t|                    VALORES|GASTOS                    |\n");
    // printf ("\t*------------------------------------------------------*\n");
    // printf ("\t| %s                           | %.2f                  |\n", gastos[0].Nome, gastos[0].Valor);
    // printf ("\t*------------------------------------------------------*\n");

}
