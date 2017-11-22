#include <iostream>
using namespace std;

int main(){
    int input,n,k,diamond[10001],dc=0,kc=0,best=0,temp=0,control=0,best1=0;
    for(int c=1;c<10001;c++){
        diamond[c]=0;
    }
    cin >> n >> k;
    for(int c=1;c<=n;c++){
        cin >> input;
        diamond[input]++;
        if(input>best1){
            best1=input;
        }
    }
    while(kc+k<=best1){
        if(control==0){
            kc++;
            dc=kc;
            control=1;
            temp=0;
        }else{
            temp+=diamond[dc];
            if(dc>=kc+k){
                control=0;
                if(temp>best){
                    best=temp;
                }
            }
            dc++;
        }
    cout << temp << " " << best << " " << kc << " " <<  dc << endl;
    }
    cout << best << endl;
}
