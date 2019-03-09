#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elemType;
//��������
void swap(elemType *a,elemType *b){
    elemType temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//ѡ������
/*���������ΪL[1...n],��i�����򼴴�L[i...n]��ѡ��
�ؼ�����С��Ԫ����L[i]������ÿһ�˿���ȷ��һ��Ԫ�ص�����λ�ã�ִ��n-1��*/
void selectSort(elemType a[],int n){
    int i,j,min;
    for(i = 0;i < n - 1;i++){       //ִ��n-1��
        min = i;                    //��¼��СԪ��
        for(j = i + 1;j < n;j++)    //��a[i...n-1]��ѡ����СԪ��
            if(a[j] < a[min])
                min = j;            //������СԪ��λ��
        if(min != i)
            swap(&a[min],&a[i]);     //���i��λ�ý���
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
