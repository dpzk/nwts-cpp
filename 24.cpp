#include <iostream>
using namespace std;

int main(){
    int n,c=0;
    cin >> n;
    for(int c1=1;c1<=n;c1++){
        if(n%c1==0){
            c++;
        }
    }
    if(c%2==1){
        cout << 0 << endl;
    }else{
        cout << c/2 << endl;
    }

}
