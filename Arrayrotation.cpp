// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
vector<int> rotate(vector<int> &A){
    int temp=A[0];
    for(int i=0;i<A.size();i++){
        int t=A[i];
        A[i]=temp;
        temp=t;
        
    }
    A[0]=temp;
    return A;
}
vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==0){
        return A;
    }
    for(int i=0;i<K;i++){
        A=rotate(A);
    }
    return A;
}
