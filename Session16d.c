/*
    C - Preprocessor Directives
        # -> Pre-Processor
        After# -> Directive

        #include
        #define
        #undef
        #ifndef
        #if
        #else
        #elif
        #endif
        #error
        #pragma

        MyProg.c    (Source Code)

        Preprocessor

        MyProg.I (Intermediate Code)
        (Expanded Source Code)

        Compiler

*/

#include<stdio.h>
//MACROS | Developer Defined Constants :)
#define SIZE 10            // Constant
#define PI 3.14            // Constant
#define APPNAME "WhatsApp" // Constant
#define MAX(a, b)(a>b?a:b)

int number = SIZE * SIZE;

#define OS 2  // 1 Android and 2 Mac

//#undef SIZE

int main(){
    int array[SIZE];
    printf(">> Size is: %d \n",SIZE);
    printf(">> Max of 10 and 20 is: %d \n", MAX(10, 20));

    #if OS ==1
        printf(">> Bring icon of Google");
    #else    
        printf(">> Bring icon of Apple");
    #endif    

    return 0;
}
