#include <iostream>
using namespace std;

int searchElement(int key, int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        if (key==arr[i])
        {
            return i;
        }   
    }
    return -1;
    
}

int main(){
    int arr[10] = {4,3,5,2,6,8,-12,-33,22,10};
    int isElementPresent =  searchElement(-33, arr, 10);
    if(isElementPresent != -1){
        cout<<"Element is present in the array at index : "<< isElementPresent<<endl;
    } else {
        cout<<"Element is absent"<<endl;
    }
}