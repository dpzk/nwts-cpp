#include <iostream>
using namespace std;

int main(){
    int board,choice,storage[22],stop[22],control=0,cgame=1;
    cout << "Please input board size:";
    for(int c=0;c<22;c++){
        storage[c]=-1;
    }
    cin >> board;
    for(int c=1;c<=board;c++){
        if (c<=board/2){
            storage[c]=2;
            stop[c]=1;
        }else if(c==board/2+1){
            storage[c]=0;
            stop[c]=0;
        }else{
            storage[c]=1;
            stop[c]=2;
        }
    }
    while(control!=3){
        if(control==0){
            for(int c=1;c<=board;c++){
                if(storage[c]==1){
                    cout << " F ";
                }else if(storage[c]==2){
                    cout << " T ";
                }else{
                    cout << " - ";
                }
            }
            cout << endl;
            control=1;
        }else if(control==1){
            cin >> choice;
            if(choice<=0||choice>board||storage[choice]==0){
                cout << "Bad input" << endl;
                control=1;
            }else{
                if(storage[choice]==2){
                    if(storage[choice+1]==0){
                        storage[choice]=0;
                        storage[choice+1]=2;
                        control=2;
                    }else if(storage[choice+2]==0&&storage[choice+1]==1){
                        storage[choice+2]=2;
                        storage[choice]=0;
                        control=2;
                    }else{
                        cout << "Bad input" << endl;
                        control=1;
                    }
                }else if(storage[choice]==1){
                    if(storage[choice-1]==0){
                        storage[choice]=0;
                        storage[choice-1]=1;
                        control=2;
                    }else if(storage[choice-2]==0&&storage[choice-1]==2){
                        storage[choice-2]=1;
                        storage[choice]=0;
                        control=2;
                    }else{
                        cout << "Bad input" << endl;
                        control=1;
                    }
                }
            }
        }else{
            if(storage[cgame]!=stop[cgame]){
                control=0;
            }else{
            cgame++;
                if(cgame==board){
                    control=3;
                }
            }
        }
    }
    cout << "You win!" << endl;
}
