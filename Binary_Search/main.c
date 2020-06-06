#include <stdio.h>
#include <stdlib.h>

#define FALSE (1==0)
#define TRUE  (1==1)
#define SIZE 8

int search(int n, int array[], int start, int end)
{
    while(start <= end){
    int mid = (end+start)/2;
    if(array[mid] == n){
        return 1;
    }else if(array[mid] > n){
        end = mid-1;
    }else if(array[mid] < n ){
        start = mid+1;
    }
    }
    return 0;

}

int main(void)
{
    int numbers[SIZE] = {4,8,15,16,23,42,55, 108};
    printf(">");
    int n;
    int b;
    scanf("%d",&n);
    if (search(n, numbers, 0, SIZE-1)==1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}
