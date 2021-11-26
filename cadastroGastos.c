#include<stdio.h>
#include<conio.h>
#include <string.h>

char nomeGastos[][150] = {" "};
float valorGastos[] = {0}, valor=0;

 void CadastroGastos(){

    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("Nome da despesa: ");
        gets(nomeGastos[i]);
        strncat(nomeGastos[i], "\n", 1);
        
        
        printf("Digite o valor: ");
        scanf("%f",&valorGastos[i]);
        
    }

    for (int i = 0; i < 2; i++)
    {
       printf("\nO nome armazenado foi: %s\n", nomeGastos[i]);
       printf("O valor armazenado foi: %.2f\n\n", valorGastos[i]);
    }
    
    
    
    for(int i=0;i<2;i++){
        FILE *nomeDespesa;
        nomeDespesa = fopen("nomeDespesa.txt", "a");
        
        if(nomeDespesa == NULL){
            printf("Arquivo não pode ser aberto");
            getchar();
            exit(1);
        }

        fputs(nomeGastos[i], nomeDespesa);
        fclose(nomeDespesa);

        FILE *valorDespesa;
        valorDespesa = fopen("valorDespesa.txt", "a");
        
        if(valorDespesa == NULL){
            printf("Arquivo não pode ser aberto");
            getchar();
            exit(1);
        }

        fprintf(valorDespesa, "%.2f \n" ,valorGastos[i] );
        fclose(valorDespesa);
    }    
    getch();
    
}









