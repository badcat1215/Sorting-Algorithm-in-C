#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int sort(int array[],int size){
    int swap;
    do{
    swap = 0;
    //�C�����洫�N�O���@��
    //��S���洫���ɭԴN���sort�w�g����,�i�H����

    for (int i=0; i<size; i++){
            if(array[i+1] < array[i]){
                int temp;
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swap++;
            }
    }
    }while(swap != 0);
}

int main(void){
    int number[SIZE] = {20,30,50,10,80,70,60,40};
    for(int i=0; i<SIZE; i++){
        printf("%i ",number[i]);
    }
    printf("\n");
    sort(number,SIZE);
    for (int i=0; i<SIZE; i++){
        printf("%i ",number[i]);
    }
    printf("\n");
}
