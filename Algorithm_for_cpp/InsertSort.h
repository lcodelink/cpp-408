//
//  InsertSort.h
//  Algorithm_for_cpp
//
//  Created by 刘永辉 on 4/3/24.
//

#ifndef InsertSort_h
#define InsertSort_h
#include "Print.h"

//插入排序
void InsertSort(int A[],int n){
    int i,j,temp;
    int cnum=0;
    //从第二个开始遍历整个数组
    for(i=1;i<n;i++){
        //判断当前元素是否比前一个大,顺序存储,前面的元素必定最大的在要判断的元素前一位
        if(A[i]<A[i-1]){
            //赋值给临时变量
            temp = A[i];
            //从当前位置的前一位遍历到最开始那位
            //同时保证,前一位元素比当前元素小或者相等,保证算法的稳定性
            for(j=i-1;j>=0 && A[j]>=temp;--j){
                //后移元素
                A[j+1]=A[j];
            }
            A[j+1] = temp;//复制到插入位置
            cnum +=1;
        }
    }
    pring(A, n);
    std::cout<<"插入算法执行完毕!!!"
    <<"执行了:"<<cnum<<"次交换"<<std::endl;
}

//折半插入排序
void halfInsertSort(int A[],int n){
    int i,j,low,high,mid,temp;
    int cnum=0;
    for(i=1;i<n;i++){
        temp = A[i];
        low=0;//low指向第一个元素
        high=i-1;//hight指向当前元素的前一位,即前方排序完成的数组的最大值
        while (low <= high) {
            mid=(low+high)/2;
            //如果比中间值大,查找右半子表
            if(A[mid]<A[i]){
                low = mid+1;//low指向中间位置的下一位
            }
            else high = mid -1;
        }
        for(j=i-1;j>high+1;--j){
            A[j+1] = A[j];
        }
        A[high+1] = temp;
        cnum +=1;
    }
    pring(A, n);
    std::cout<<"折半插入排序算法执行完毕!!!"
    <<"执行了:"<<cnum<<"次交换"<<std::endl;
}

//希尔排序
void ShellSort(int A[],int n){
    int i,j,d,temp;
    int cnum=0;
    for(d=n/2;d>=1;d/=2){//希尔建议的步长,最后步长大于等于1
        for(i=d;i<=n;i++){//假设步长为4,那么i就是4,那么就要4和0对比
            if(A[i]>A[d-i]){
                temp = A[i];
                //检查当前元素的前面的元素的位置
                for(j=i-d;j>=0 && temp<A[j];j-=d){
                    //比较当前元素是不是比前面一个补偿的位置的元素小,是就丢到后,然后继续减步长
                    //就相当于插入排序的对比,只不过希尔排序比较的是步长的上一个元素
                    //插入排序比较的是上一个元素
                    A[j+d] = A[j];
                }
                A[j+d] = temp;
                cnum +=1;
            }
        }
        
    }
    pring(A, n);
    std::cout<<"希尔排序算法执行完毕!!!"
    <<"执行了:"<<cnum<<"次交换"<<std::endl;
}


#endif /* InsertSort_h */
