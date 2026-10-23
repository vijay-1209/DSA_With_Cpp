#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int k){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/ 2;

    while(start <= end){
        if(arr[mid] == k){
            return mid;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int arr[5] = {3,10,17,22,28};
    int key = 12;
    cout<<"The key element is present at index "<<binarySearch(arr, 5, key) << endl;
}