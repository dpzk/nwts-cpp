#include <iostream>
using namespace std;

int main(){
    int gus,in,c=0,statusmain=0,status=0,i=50,h=100,l=1;
    cout << "Guess your Number" << endl;
    while (statusmain==0){
        if(l==99){
            gus=100;
            cout << "Guess:" << gus <<endl;
        }else{
            gus=(l+h)/2;
            cout << "Guess:" << gus <<endl;
        }
        cout << "Please input a number to tell the guess is bigger, smaller or right" << endl << "1.bigger 2.smaller 3.right" <<endl;
        cin >> in;
        if(in<1||in>3){
            cout << "Bad input. 1 2 3 only." << endl;
            status=3;
        }else if(in==3){
            statusmain=1;
        }else if(in==1){
            h=gus;
        }else if(in==2){
            l=gus;
        }
        c++;
    }
    cout << c << " times used.";
}
