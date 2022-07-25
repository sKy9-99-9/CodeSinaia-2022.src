#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int d = 2,  
        p;      
    
    while(n > 1)
    {
        p = 0;
        while(n % d == 0)
        {
            ++p;
            n /= d;
        }
        if(p)
            cout << d << "^" << p << endl;
        ++ d;
        if(n>1 && d * d > n){
            d = n;
        }
    }
    return 0;
}