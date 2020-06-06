#include <stdio.h>
#define SIZE 8

void sort(int array[], int size){
    for (int i=0; i<(size-1) ; i++){
        int min = i;
        for (int j=(i+1); j<size ;j++)
            if(array[j]<array[min]){
                min = j;
            }
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
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
