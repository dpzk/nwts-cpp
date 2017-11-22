#include <time.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(NULL));
    cout << "Guess my Number" << endl;
    cout << "Start guessing:";
    int num,gus,c=0;
    num=rand();
    num=num%100+1;
    while(gus!=num){
        cin >> gus;
        if (gus>num){
            cout << "Guess smaller:";
        }else if(gus<num){
            cout << "Guess bigger:";
        }
        c++;
    }
    cout << "You got it! " << c << " used."<<endl;
}
