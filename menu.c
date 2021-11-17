#include <stdio.h>


int menu(){
    int opcao;

    system("cls");
        printf("\n\tSelecione uma das opções do Menu para começar!\n\n");
		printf ("\t*------------------------------------------------------*\n");    
		printf ("\t|                    MENU DE OPCOES                    |\n");
		printf ("\t*------------------------------------------------------*\n");
		printf ("\t|  0 - SAIR DO PROGRAMA                                |\n");
		printf ("\t|  1 - CADASTRAR GASTOS                                |\n");
        printf ("\t|  2 - VERIFICAR GASTOS                                |\n");           
		printf ("\t|  3 - SOBRE NÓS                                       |\n");
		printf ("\t*------------------------------------------------------*\n");
		printf ("\n\tEscolha uma opção ? ");                                            
		scanf ("%d",&opcao);

    return opcao;
}