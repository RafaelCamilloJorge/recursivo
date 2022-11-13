#include <stdio.h>


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



}