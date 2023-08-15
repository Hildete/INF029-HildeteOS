#include<stdio.h>
#define TAM_ALUNO 3

int main(){

  int opcao;
  int listaAluno[TAM_ALUNO];
  int qtdAluno;
  
  int sair = 0;


  while(sair !=1){
    printf("Projeto Escola - Hildete Santana \n\n");
    printf("Escolha uma opcao abaixo:\n\n");
    printf("0 - Sair \n");
    printf("1 - Aluno \n");
    printf("2 - Professor\n");
    printf("3 - Disciplinas\n");

    scanf("%d", &opcao);

    switch (opcao){
      case 0:{
        sair = 1;
        break;     
      }

      case 1: {
      
        printf("Projeto Escola - Hildete Santana \n\n");
        printf("Escolha uma opcao abaixo:\n\n");
        printf("Menu Aluno\n");
        int sairAluno = 0;
        int opcaoAluno;
        while(!sair){
          printf("0 - Retornar \n");
          printf("1 - Cadastro \n");
          printf("2 - Listar\n");
          printf("3 - Excluir\n");
            scanf("%d", &opcaoAluno);

          switch (opcaoAluno){

            case 0:{
              sairAluno = 1;
              break;
            }
            case 1:{
              printf("Cadastrar Aluno\n");
              printf("Digite Matricula");
              int matricula;
              scanf("%d", &matricula);
              if (matricula<0){
                printf("Matricula invalida");
              }else{
                 if(qtdAluno==TAM_ALUNO){
                   printf("Limite de alunos atingido");

                    
                  }
                }//
              break;
            }
            case 2:{
              printf("Listar Aluno\n");
              break;
            }
            case 3:{
              printf("Atualizar Aluno\n");
              break;
            }
            case 4:{
              printf("Excluir Aluno\n");
              break;
            }
            case 5:{
              printf("Opcao invalida\n");
              break;
            }

          
        }
      
        
      }
    }
  }
 

  

  return 0;
  
}