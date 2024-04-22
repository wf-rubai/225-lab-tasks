#include <iostream>
#include <math.h>
#include <vector>
// #include <bits/stdc++.h> 

using namespace std;

int N = 2778533;
int root = sqrt(N);
vector<bool> isPrime(root, true);

int main() {
    time_t start, end; 
    time(&start); 
    
    int count = 1, flag = 1;
    for(int i=3; i<=sqrt(root); i+=2){
        if(isPrime[i]){
            for(int j = i+i; j<=root; j+=i){
                isPrime[j] = false;

            }
        }
    }

    if(N%2 !=0){
        for(int i=3; i<=root; i+=2){
            if(isPrime[i] && N%i ==0){
                flag = 0;
                cout << "Not a prime" << endl;
                break;
            }
        }
    }else{
        flag = 0;
        cout << "Not a prime" << endl;
    }

    if(flag == 1)
        cout << "Prime" << endl;

     
    time(&end);  
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << time_taken << " sec " << endl; 

    return 0;
}