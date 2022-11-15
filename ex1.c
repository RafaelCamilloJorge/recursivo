/*#include <stdio.h>


void principal(int n){
    if(n < 10){
        principal(n + 1);
    }
    printf(" %d ", n);
}

 void inversa(int n){
    if(n > 0){
        inversa(n - 1);
    }
    printf(" %d ", n);

 }


 int fatorial(int n){

    if(n > 1){
        return n * fatorial(n - 1);
    }

 }

 int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else if(n > 0){
        return (fib(n - 1) + fib(n - 2));
    }
 }



int main(){
    int n;
    scanf("%d", &n);
    principal(n);
    printf("\n");
    inversa(n);
    printf("\n");
    printf("%d", fatorial(n));
    fib(4);



}*/

typedef struct alunos{
    char nome[20];
    int sala;
    float nota1;
    float nota2;
    float nota3;
}Alunos;

int main(){
    int N = 2;
    Alunos classes[N];

    for(int i = 0; i < N; i++){
        printf("DIGITE O NOME: ");
        scanf("%s", &classes[N].nome);
        printf("DIGITE A SALA: ");
        scanf("%d", &classes[N].sala);
        printf("DIGITE A NOTA 1: ");
        scanf("%f", &classes[N].nota1);
        printf("DIGITE A NOTA 2: ");
        scanf("%f", &classes[N].nota2);
        printf("DIGITE A NOTA 3: ");
        scanf("%f", &classes[N].nota3); 
    }

    for(int i = 0; i < N; i++){
        printf("%s", classes[N].nome);
        printf("%s", classes[N].sala);
        printf("%.2f", classes[N].nota1);
        printf("%.2f", classes[N].nota2);
        printf("%.2f", classes[N].nota3);
    }



}