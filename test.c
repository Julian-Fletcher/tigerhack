#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


void makeArray(int * array);
void printArray(int *array);
void DoFancyStuff(int *array);

int main(void){
    printf("HI!!!!\n");

    int arraySize = SIZE;
    int array[SIZE];
    
    makeArray(array);
    //printArray(array);


}

void makeArray(int *array){
    int seq;

    printf("Enter a number: ");
    scanf("%d", &seq);

    for (int i = 0; i < SIZE; i++){
        int val = rand();
        array[i] = val;
        printf("Array[%d] = %d\n", i, array + i);
        
    }
}
/*
void printArray(int *array){
    for (int i = 0; i < SIZE; i++){
        printf("Array[%d] = %d\n", i, array + i);
    }
}
*/