#include<stdio.h>
void SelectionSort(int *Array,int n){
int index_of_min=0;
for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        if(Array[index_of_min]>Array[j]){
            index_of_min=j;
        }
    }
    int temp=Array[i];
    Array[i]=Array[index_of_min];
    Array[index_of_min]=temp;    
}

}

int main(){
    //int Arr[5]={24,54,85,21,34};
    int Arr[5]={24,85,21,34,54};
    int n=5;
    SelectionSort(Arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",Arr[i]);
    }
    
    return 0;
}