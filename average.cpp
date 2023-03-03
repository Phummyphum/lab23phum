#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
int main(int x, char *y[]){
    double a;
    double sum;
    for(int i=0;i <(x-1);i++){
        a += atoi(y[i+1]);
    }
    sum = a/(x-1);
    if(x == 1){
        cout << "Please input numbers to find average.";
    }else{
        cout << "---------------------------------\n" << "Average of " << x-1 << " numbers = " << sum << "\n---------------------------------\n";
    }
    return 0;


}
