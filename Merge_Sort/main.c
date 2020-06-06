#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int temp[SIZE] = {0};

void merge(int A[],int start_L,int end_L,int start_R,int end_R){

    int i = start_L;
    int length = end_R-start_L+1;
    while( start_L <= end_L && start_R <= end_R ){
        if(A[start_L] <= A[start_R]){
            temp[i] = A[start_L];
            start_L++;
        }
        else{
            temp[i] = A[start_R];
            start_R++;
        }
        i++;
    }
    while(start_L<=end_L){
        temp[i]=A[start_L];
        start_L++;
        i++;
    }
    while(start_R<=end_R){
        temp[i]=A[start_R];
        start_R++;
        i++;
    }
    for (int k = end_R, j = 0; j <= length; k--, j++)
    {
        A[k] = temp[k];
    }
}
void merge_sort(int array[],int start,int end){
    if (end > start){
    int mid = (start+end)/2;
    merge_sort(array,start,mid);
    merge_sort(array,mid+1,end);
    merge(array,start,mid,mid+1,end);
    }
}
int main(void)
{
    int numbers[SIZE]={4,15,208,110,8,43,42,108};
    printf("\n");
    for (int i = 0; i < SIZE; i++){
        printf("%i ",numbers[i]);
    }
    printf("\n");
    merge_sort(numbers,0,SIZE-1);
    for (int i = 0; i < SIZE; i++){
        printf("%i ",numbers[i]);
    }
    printf("\n");
}
