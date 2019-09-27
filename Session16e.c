#include<stdio.h>

void hello();
void bye();

#pragma startup hello
#pragma exit bye

int main(){
    printf(">> Hello, This is main\n");
    return 0;
}

void hello(){
    printf(">> This is Hello from Auribises\n");
}

void bye(){
    printf(">> This is Bye from Auribises\n");
}
