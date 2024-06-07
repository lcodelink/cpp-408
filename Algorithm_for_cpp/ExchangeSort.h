//
//  ExchangeSort.h
//  Algorithm_for_cpp
//
//  Created by 刘永辉 on 4/3/24.
//

#ifndef ExchangeSort_h
#define ExchangeSort_h
#include "Print.h"
#include "Tool.h"

void BubbleSort(int A[],int n){
    int i,j;
    /*
     i指向的是前面已经排好序的元素
     从后往期前对比排序
     */
    for(i= 0;i<n-1;i++){
        bool flag = false;
        for(j=n-1;j>i;j--){
            if(A[j]<A[j-1]){
                swap(A[j-1],A[j]);
                flag = true;
            }
        if(flag == false)
            break;
        }
    }
    pring(A, n);
    std::cout<<"冒泡算法执行完毕!!!"<<std::endl;
}

//将一个数组划分为两个区域,比基准元素小的放在坐区域,大或者相等的在右区域
int Partition(int A[],int low,int high){
    int pivot = A[low];//基准元素
    while (low<high) {
        while (low<high && A[high]>= pivot) --high;
        A[low] = A[high];
        while (low<high && A[low]<= pivot) ++low;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

void QuickSort(int A[],int low,int high){
    if(low<high){
        int Pivotnum = Partition(A, low, high);
        QuickSort(A, low, Pivotnum-1);
        QuickSort(A, Pivotnum+1, high);
    }
    
}

void QuickSort(int A[],int n){
    int low = 0;
    int high = n-1;
    QuickSort(A, low, high);
    pring(A, n);
    std::cout<<"快速排序执行完毕!!!"<<std::endl;
}

#endif /* ExchangeSort_h */
