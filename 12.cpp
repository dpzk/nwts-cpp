#include <iostream>
using namespace std;

int main(){
    int x,y,m,x1,y1,best=0,now=0;
    cin >> x >> y >> m;
    x1=m/x;
    y1=(m - x1*x) / y;
    best=m-x1*x-y1*y;
    while (x1>0){
        //cout << x1 << " " << y1 <<endl;
        now=m-x1*x-y1*y;
        if(now<best){
            best=now;
        }
        x1--;
        y1=(m - x1*x) / y;
    }
    cout << m-best << endl;
}
