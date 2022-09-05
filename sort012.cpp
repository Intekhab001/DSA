#include <iostream>
using namespace std;

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;

}


void sort012(int *arr, int n)
{
   int i=0, j=0, k=n-1;
    
    while(j<=k){
        if(arr[j]==0){
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
        else if(arr[j]==1){
            j++;
        }
        else{
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main(){
    int arr[6]={1,2,1,0,0,2};
    printArray(arr,6);
    sort012(arr,6);
    printArray(arr,6);
    
}