#include <stdio.h>
#include <stdlib.h>

void busca (int **mat, int num, int nAloca);

int main()
{
   int i, j, num, nAloca;
   int **m;

printf("Digite o tamanho da sua matriz:");
scanf("%d", &nAloca);

//Alocar Dinamicamente

m=(int**)malloc(nAloca*sizeof(int*));

if(m==NULL){
  printf("Erro na alocação");
  exit(1);
}

/*Faz a leitura da matriz M */
     for (i=0; i<nAloca; i++){
        for (j=0; j<nAloca; j++)
          {
            printf("\nEntre com o elemento (%d, %d): ",i,j);
            scanf("%d", &m[i* nAloca + j]);        
          }          
     }
/* mostra a matriz */
 printf("\n Esta e a Matriz lida\n");  

    for (i=0; i<nAloca; i++)
    {
     for (j=0; j<nAloca; j++)
         {
           printf("%6d",m[i * nAloca + j]);
          }
      printf("\n");      
     }    

/* Solicita o elemento de busca */
   
    printf("\n Entre com o numero de busca: ");   
    scanf(" %d",&num);
    busca(m,num,nAloca);
    printf("\n\n");
  
    system("PAUSE");

    free(m);
    
    return 0;     
}

void busca (int **mat, int num, int nAloca)
{
	int i,j, achou=0;
	for (i=0; i<nAloca; i++)
          for (j=0; j<nAloca; j++)
          {
              if(mat[i * nAloca + j] == num)
                {
                	printf("\nO numero %d esta na posicao: (%d,%d)",num,i,j);
                	achou = 1;
                	
                }
                      
          } 
     if (!achou)  printf("\nO numero %d não foi encontrado!",num);
}