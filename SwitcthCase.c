/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    char nome;
    printf("Digite a primeira letra do seu nome: ");
    nome = getchar();
    switch (nome) {
      case  'A':
      case  'a':
         printf("Olá Anthony!!!");
         break;
      case 'F':
      case 'f': 
         printf("Olá Tio Fernando!!!");
         break;
      case 'M':
      case 'm':
         printf("Olá Tia Marcia!!!");
         break;
      default:
          printf("Olá Pessoa!!!");
          break;
    }
    return 0;
}