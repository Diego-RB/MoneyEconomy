#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char buf[1024];
	int numeros[4];

	FILE *fp = fopen("valorDespesa.txt", "r");
	if(fp == NULL)
		return EXIT_FAILURE;

	while(fgets(buf, sizeof(buf), fp)) {
		if(buf[0] == '\n')
			continue;

		sscanf(buf, "%d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3]);
	}

	fclose(fp);
        return EXIT_SUCCESS;
}


 
