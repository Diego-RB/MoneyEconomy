#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <locale.h>
#include "menu.c"
#include "cadastroGastos.c"
#include "verificarGastos.c"
#include "sobre.c"

int opcao;

int main (void){
   
   SetConsoleOutputCP(65001);
   printf("BEM VINDO!");

   // menu:
   // opcao = menu();
   // system("cls");

   // switch(opcao){
   //    case 0:
   //       system("cls");
   //       printf("\n\tTchau, obrigado pela preferencia!\n");
   //       break;

   //    case 1:
   //       printf("Cadastrar gastos\n"),
   //       system("pause");
   //       goto menu;

   //    case 2:
   //       printf("VERIFICAR GASTOS\n");
   //       system("pause");
   //       goto menu;
      
   //    case 3:
   //       printf("SOBRE NÓS\n");
   //       system("pause");
   //       goto menu;

   //    default:
   //       printf("\n\tA apção selecionada não existe. Tente novamente!\n\n");
   //       system("pause");
   //       goto menu;
   // }
    return 0;
}