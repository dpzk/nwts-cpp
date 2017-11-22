#include <iostream>
using namespace std;

int main(){
    do{
    int x;
    cin >> x;
    while(x!=1){
        if (x%2==1){
            x=3*x+1;
        }else{
            x=x/2;
        }
        cout << x << endl;
    }
    }while(1==1);
}
