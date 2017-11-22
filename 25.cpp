#include <iostream>
using namespace std;

int main(){
    int c1=0,n,c=1,m,c2,tru=0;
    cin >> n >> m;
    while(c1<n){
        cout << c << " " << c1 << endl;
        c2=c;
        while(c2>0){
            if(c2%10==m){
                c+=1;
                tru=1;
                break;
            }
            c2-=c2%10;
            c2/=10;
        }
        if(tru==0){
            c1++;
            c++;
        }
        tru=0;
        }
    cout << c << endl;
}
