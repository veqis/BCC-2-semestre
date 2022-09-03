#include <stdlib.h>
#include <stdio.h>


int main()
{
    int tam, in, max, com;

    do
    {
        scanf("%i",&tam);
        int vet[tam][tam];
        in=1;
        com=0;

        if (tam==0)
        {
            return 0;
        }
        

        for (int max = tam; max > 0; max--)
        {
            for (int l = com; l < max; l++)
            {
                for (int c = com; c < max; c++)
                {
                    vet[l][c]=in;
                }    
            }        
            in++;
            com++;
        }
        
        

        for (int l = 0; l < tam; l++)
        {
            for (int c = 0; c < tam; c++)
            {   
                if (c==0)
                {
                    printf("%i",vet[l][c]);
                }else
                {printf("   %i",vet[l][c]);}
            }
            printf("\n");
        }
    } while (1);
    
             
    return 0;
}
