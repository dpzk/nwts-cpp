#include <iostream>
using namespace std;

int main()
{
    int n,z,control=0,i;
    string str;
    cin >> z;
    while(z>0){
        if(control==0){
            cin >> n >> i >> str;
            control=1;
        }else{
            str=str.substr(n,str.length())+str;
            i--;
            if(i<=0){
                cout << str << endl;
                control=0;
                z--;
            }
        }
    }
}
