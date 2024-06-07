//
//  Print.h
//  Algorithm_for_cpp
//
//  Created by 刘永辉 on 4/3/24.
//

#ifndef Print_h
#define Print_h

void pring(int A[],int n){
        for(int i=0 ;i< n ;i++){
            std::cout<<A[i];
            if(i<n-1)
                std::cout<<"-";
            else break;
        }
}

void Explain(int A[],int n,int num, bool T){
    if (T == 1) {
        std::cout<<"乱序数组"<<num<<"为:";
        pring(A, n);
        std::cout<<std::endl;
        std::cout<<"元素个数为:"<<n<<std::endl;
    }
    else{
        std::cout<<"乱序数组"<<num<<"(带哨兵)为:";
        pring(A, n);
        std::cout<<std::endl;
        std::cout<<"元素个数为:"<<n<<std::endl;
    }
}


#endif /* Print_h */
