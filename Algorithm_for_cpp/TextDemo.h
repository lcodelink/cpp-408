//
//  TextDemo.h
//  Algorithm_for_cpp
//
//  Created by 刘永辉 on 4/4/24.
//

#ifndef TextDemo_h
#define TextDemo_h

#include "Print.h"
#include "InsertSort.h"
#include "ExchangeSort.h"
#include "SelectSort.h"
#include "MergeSort.h"


using namespace std;


void text(){
    int arr[10]{7,8,7,4,6,5,1,0,6,9};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int x = -1;//哨兵
    int testArr[]={x,88,77,66,88,55,33,11,110,1};
    int len = sizeof(testArr)/sizeof(testArr[x])-1;
    
    Explain(arr, arrSize, 1, 1);
    Explain(testArr, len, 2, 0);
    
    //插入排序,二分插入排序,希尔排序
    InsertSort(arr, arrSize);
    ShellSort(arr, arrSize);
    halfInsertSort(arr, arrSize);
    
    //冒泡排序,快速排序
    BubbleSort(arr, arrSize);
    QuickSort(arr, arrSize);

    //堆排序，简单快速排序
    HeapSort(testArr, 9);
    SelectSort(arr, arrSize);
}


#endif /* TextDemo_h */
