#include <iostream>
using namespace std;

int main(){
    int var[2001],n,m,input,c1=0;
    cin >> n;
    for(int c=0;c<2001;c++){
        var[c]=0;
    }
    for(int c=0;c<n;c++){
        cin >> input;
        var[input+1000]=1;
    }
    cin >> m;
    for(int c=0;c<m;c++){
        cin >> input;
        if(var[input+1000]==1){
            var[input+1000]=2;
        }
    }
    while(c1<2001){
            if(var[c1-1000]==2){
                cout << c1-1000 << endl;
            }
            c1++;
        }
}
