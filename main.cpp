#include <iostream>

int main{
    double sum=0;
    int len;
    cin >> len;

    for(double i=1; i<=len; i++){
        sum += 1/i;
    }

    cout << sum << endl;
    
return 0;
}