#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s <= e){

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }

    return ans;
}
int main(){
    int arr[6] = {0,1,3,3,3,5};
    int key;
    cin>> key;
    cout<< "First Occurence of " << key << " is at index " << firstOcc(arr, 6, key) << endl;
    cout<< "Last Occurence of " << key << " is at index " << lastOcc(arr, 6, key) << endl;
}