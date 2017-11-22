#include <iostream>
using namespace std;

int main(){
    int  m,c1=0,c2=0,control=1,c3=1;
    cin >> m;
    while(c3<=m){
        if (control==0){
            cout<< endl;
            control=1;
            c3++;
        }else if(control=1){
            cout << "";
            c2++;
            if(c2>=m-c3){
                control=2;
                c2=0;

            }
        }else{
            cout << "*";
            c1++;
            if(c1>=c3){
                control=0;
                c1=0;
            }
        }
   }
}
