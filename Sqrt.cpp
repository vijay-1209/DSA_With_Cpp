#include<iostream>
using namespace std;

// square root of a number using binary search
long long int sqrt(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e - s)/ 2;
    long long int ans = -1;

    while(s <= e){
        long long int square = mid * mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e - s)/ 2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number to find its square root: "<< endl;
    cin>> n;
    cout<<"Square root of the entered number is: "<< sqrt(n) << endl;
}