#include<iostream>
using namespace std;

// square root of a number using binary search
long long int sqrtInteger(int n){
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
double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(double i = 0; i < precision; i++){
        factor = factor/10;

        for(double j = ans; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter a number to find its square root: " << endl;
    cin >> n;
    cout << "Square root of the entered number is: " << sqrtInteger(n) << endl;

    int tempSol = sqrtInteger(n);
    cout << "More precise answer is: " << morePrecision(n, 3, tempSol);

    return 0;
}