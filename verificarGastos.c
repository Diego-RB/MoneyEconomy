#include <stdlib.h>
#include <stdio.h>

void coluna(){}

void verificarGastos(){
    printf("VERIFICAR GASTOS\n");

    float valor[2000], val;
    char nome[300], nomeGastos[][150] = {" "};;
    int linhasValor=0, linhasNome=0,linhas=0;

    FILE *valorDespesa;
    valorDespesa = fopen("valorDespesa.txt", "r");
    
    if(valorDespesa == NULL){
        printf("Arquivo não pode ser aberto");
        getchar();
        exit(1);
    }

    FILE *nomeDespesa;
    nomeDespesa = fopen("nomeDespesa.txt", "r");
    
    if(nomeDespesa == NULL){
        printf("Arquivo não pode ser aberto");
        getchar();
        exit(1);
    }

    while (fscanf(valorDespesa, "%f", &val) != EOF)
    {
        valor[linhasValor] = val;
        linhasValor++;
    }

    while (fgets(nomeGastos[linhasNome], 5000, nomeDespesa ) != NULL)
    {
        linhasNome++;
    }
    
    fclose(nomeDespesa);
    fclose(valorDespesa);
    
        printf ("\t*======================================================*\n");    
        printf ("\t|VALORES                    |GASTOS                    |\n");
        printf ("\t*======================================================*\n");    
    for(int i=0;i<linhasValor;i++){
        printf ("\t| %s                                    | %.2f        \n", nomeGastos[i], valor[i]);
        
    }
        //printf ("\t*------------------------------------------------------*\n");

}
