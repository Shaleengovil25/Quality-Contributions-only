
#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>&A,int left,int mid,int right){

    int i=left,j=mid+1,k=0;

    int temp[right-left+1];
    x`
    while(i<=mid && j<=right){
        if(A[i] <= A[j]){
            temp[k++] = A[i++];
        }else {
            temp[k++] = A[j++];
            
        }
    }
    while(i<=mid){
        temp[k++] = A[i++];
    }
    while(j<=right){
        temp[k++] = A[j++];
    }

    for(int i=left,k=0;i<=right;i++,k++){
        A[i] = temp[k];
    }

    
}

void merge_sort(vector<int> &A,int left,int right){

        if (left>=right)
            return;
        
        int mid = (left + right)/2;
         merge_sort(A,left,mid);
         merge_sort(A,mid+1,right);
         merge(A,left,mid,right);

    

}

void printarray(vector<int>&A,int n){
    for (int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    vector<int>A;
    A.push_back(5);
    A.push_back(4);
    A.push_back(3);
    A.push_back(2);
    A.push_back(1);

    merge_sort(A,0,4);
    printarray(A,5);
    return 0;
}
