//
//  SelectSort.h
//  Algorithm_for_cpp
//
//  Created by 刘永辉 on 4/4/24.
//

#ifndef SelectSort_h
#define SelectSort_h

void HeadAdjust(int A[],int k, int len){
    A[0]=A[k]; //哨兵模式,暂存调整的结点
    for (int i=2*k; i<=len ;i*=2){ //
        if(i<len &&A [i]<A[i+1]){ //选择孩子中最大的那个
            i++;
        }
        if(A[0]>=A[i]) break;
        //修改k值,向下下坠
        else{
            A[k]=A[i];
            k=i;
        }

    }
    A[k]=A[0];
}
/*
 堆排序本质可以视为一颗二叉树进行层次遍历后的顺序表;
 大根堆:根大于左右孩子
 小根堆:根小于左右孩子
 二叉树的性质:
 非叶子结点:int n/2 (结点数/2向下取证)
 左孩子:2*n
 右孩子:2*n+1
 */
void CreateHeap(int A[],int len){
    for (int i=len/2;i>0;i--){ //从后往前调整所有的非叶子结点
        HeadAdjust(A,i,len);
    }
}

void HeapSort(int A[],int len){
    CreateHeap(A,len);
    for (int i=len ; i>0 ; i--){
/*
 将最大的即根放到最后,然后将去除最后的元素去掉
 形成新的大根堆
 然后继续调整大根堆
 */
        int temp;
        temp = A[1];
        A[1] = A[i] ;
        A[i] = temp;
        HeadAdjust(A,1,i-1);//新的大根堆进行调整
    }
    for(int j =1;j<=len;j++){
        std::cout<<A[j];
        if(j !=len){
            std::cout<<"-";
        }
        else break;;
    }
    std::cout<<"堆排序执行完毕!!!"<<std::endl;
    
}

//简单选择排序
void SelectSort(int A[],int n){
    for(int i = 0;i < n-1;i++){
        int min = i;                    //记录最小元素位置
        for(int j = i+1;j < n;j++){
            if(A[j] < A[min])
                min = j;                //更新最小元素位置
            if(min != i)
                swap(A[i], A[min]);     //交换元素
            
        }
    }
    pring(A, n);
    std::cout<<"简单选择排序执行完毕!!!"<<std::endl;
}

#endif /* SelectSort_h */
