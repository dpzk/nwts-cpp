#include <iostream>
#include <fstream>
using namespace std;

int main(){
    long long int n,c=2,m=2,control=0;
    cin >> n;
    ofstream fout("prime.txt");
    if(n>=2){
        fout << 2 << " ";
        cout << 2 << " ";
    }
    while(c<n){
        if(control==0){
            c++;
            control=1;
            m=2;
        }
        if(c%m==0){
            control=0;
        }else if(m>=c/2){
            fout << c << " ";
            cout << c << " ";
            control=0;
        }
        m++;
    }
}
