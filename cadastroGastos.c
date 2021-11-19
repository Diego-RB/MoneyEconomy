#include<stdio.h>
#include<conio.h>

void gastos(){
    char nome[256][256] = {""};
  
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("Digite seu nome: ");
        gets(nome[i]);
    }

    for (int i = 0; i < 2; i++)
    {
     printf("O nome armazenado foi: %s\n", nome[i]);
    }

    getch();
}




