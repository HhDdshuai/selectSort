#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elemType;
//交换函数
void swap(elemType *a,elemType *b){
    elemType temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//选择排序
/*假设排序表为L[1...n],第i趟排序即从L[i...n]中选择
关键字最小的元素与L[i]交换，每一趟可以确定一个元素的最终位置，执行n-1次*/
void selectSort(elemType a[],int n){
    int i,j,min;
    for(i = 0;i < n - 1;i++){       //执行n-1次
        min = i;                    //记录最小元素
        for(j = i + 1;j < n;j++)    //在a[i...n-1]中选择最小元素
            if(a[j] < a[min])
                min = j;            //更新最小元素位置
        if(min != i)
            swap(&a[min],&a[i]);     //与第i个位置交换
    }
}
int main()
{
    elemType a[] = {17,689,941,365,756,45,75,12,13,19,28,26,46,
    43,37,98,67,61,06,07,102,961,231};
    int len = sizeof(a)/sizeof(elemType);
    selectSort(a,len);
    for(int i = 0;i < len;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
