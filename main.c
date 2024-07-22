#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argv[1]!=NULL && argv[2]==NULL)
    {
        // preProcessor(argv[2]);
        FILE *pFileRead, *pFileWrite;
        

        char lineContent[512];
        char *temp;

        temp = argv[1];

	    pFileRead = fopen(argv[1], "r");
	    if (pFileRead == NULL) {
            printf("Erro ao abrir arquivo.\n");
            exit(1);
        }

		pFileWrite = fopen(strcat(strtok(temp, "."),".e"), "w");
        if (pFileWrite == NULL) {
            printf("Erro ao criar arquivo.\n");
            exit(1);
        }

		while (fgets(lineContent, 512, pFileRead) != NULL)
		{
			fputs(lineContent, pFileWrite);
		}

        fclose(pFileRead);
        fclose(pFileWrite);

    } 
    else {
        printf("Quantidade de argumentos nao suportado.");
    }

    return 0;
}
