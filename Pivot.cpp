#include <iostream>
using namespace std;

int pivot(int arr[],int n){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/ 2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/ 2;
    }
    return start;
}

int main(){
    int arr[2] = {3,1};
    int index = pivot(arr,2);
    int value = arr[index];
    cout<< "Pivot element is present at index "<< index << " and the element is " << value << endl;
}