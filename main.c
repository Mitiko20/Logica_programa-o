//Aprendendo sobre struct

#include <stdio.h>

int main(void) {

  struct ficha_aluno //tipo de dado sob medida
  {
  char nome[40];
  int numero;
  float nota;
  }; //definição da struct

  struct ficha_aluno aluno;
  printf("\n ----- Cadastro do aluno -----\n\n\n");
  printf("Nome do aluno...");
  fgets(aluno.nome, 40, stdin);

  printf("Digite o numero do aluno: ");
  scanf("%d", &aluno.numero);

  printf("Informe a nota do aluno: ");
  scanf("%f", &aluno.nota);

  printf("\n\n ----- Lendo os dados da struct ------\n \n");
  printf("\nNome.....: %s", aluno.nome);
  printf("\nNumero.....: %d", aluno.numero); 
  printf("\nNota.....: %.f", aluno.nota);
  printf("\n ---- Fim ----\n");
}