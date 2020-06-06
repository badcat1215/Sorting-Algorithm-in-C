#include <stdio.h>
#define SIZE 8

void sort(int array[], int size){
    for (int i=1; i<size ; i++){
        int j = i-1;
        int key = array[i];
        while(j>=0 && key < array[j]){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}


int main(void){
    int number[SIZE] = {20,30,50,10,80,70,60,40};
    for (int i=0 ; i<SIZE ; i++){
        printf("%i ",number[i]);
    }
    printf("\n");
    sort(number,SIZE);
    for (int i=0 ; i<SIZE ; i++){
        printf("%i ",number[i]);
    }
    printf("\n");
}
