#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <locale.h>
#include "menu.c"
#include "cadastroGastos.c"
#include "verificarGastos.c"
#include "sobre.c"


void main (){
   int opcao;

   SetConsoleOutputCP(65001);

   printf("\n\t########  ######## ##     ##    ##     ## #### ##    ## ########   #######  \n");
   printf("\t##     ## ##       ###   ###    ##     ##  ##  ###   ## ##     ## ##     ## \n");
   printf("\t##     ## ##       #### ####    ##     ##  ##  ####  ## ##     ## ##     ## \n");
   printf("\t########  ######   ## ### ##    ##     ##  ##  ## ## ## ##     ## ##     ## \n");
   printf("\t##     ## ##       ##     ##     ##   ##   ##  ##  #### ##     ## ##     ## \n");
   printf("\t##     ## ##       ##     ##      ## ##    ##  ##   ### ##     ## ##     ## \n");
   printf("\t########  ######## ##     ##       ###    #### ##    ## ########   #######  \n\n");

   system("pause");
   menu:
   opcao = menu();
   system("cls");

   switch(opcao){
      case 0:
         system("cls");
         printf("\n\tTchau, obrigado pela preferencia!\n");
         break;

      case 1:
         printf("Cadastrar gastos\n"),
         CadastroGastos();
         system("pause");
         goto menu;

      case 2:
         
         verificarGastos();
         system("pause");
         goto menu;
      
      case 3:
         Sobre();
         system("pause");
         goto menu;

      default:
         printf("\n\tA opção selecionada não existe. Tente novamente!\n\n");
         system("pause");
         goto menu;
   }
}