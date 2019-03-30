#include <stdio.h>

int sum(int arr[],int maxLength);
int* digit(int num);


int main()
{
    // int sums[] = {1,2,3,4,5,6,7,8,9,10};
    // printf("%d",sum(sums,9));
    printf("%d",digit(123));
    getchar();
    getchar();
}

int* digit(int num){
    int digitCount = 10; //位数
    int digit = 0;
    while(num/(digitCount*10)!=0){
        digitCount = digitCount * 10;
        digit++;
    }
    int nums[digit];
    for(int i = 0;digitCount!=0;i++){
        nums[i] = num/digitCount;
    }
    return nums;
}

int sum(int arr[],int maxLength)
{
    if(maxLength == -1){
        return 0;
    }
    return arr[maxLength] + sum(arr,maxLength-1);
}
