#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <locale.h>
#include "menu.c"
#include "cadastroGastos.c"
#include "verificarGastos.c"
#include "sobre.c"



// struct Gastos
// {1
//     char Nome[150];
//     float Valor;
// };

//struct Gastos gastos[] = {{" ", 0.0}};

void main (){
   int opcao;

   SetConsoleOutputCP(65001);
   printf("BEM VINDO!");
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