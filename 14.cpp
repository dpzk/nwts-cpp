#include <iostream>
using namespace std;

int main(){
    int var[1000],n,player=0,penny0=0,penny1=0,cmain=0,control=0,c=0,input,pointer=0,m;
    for(int c=0;c<1000;c++){
        var[c]=-1;
    }
    cout << "Pennies in the Boxes" << endl;
    cout << "Please input the size of board:";
    cin >> n;
    m=n;
    cout << "Please input the board:";
    for(int c=0;c<n;c++){
        cin >> var[c];
    }
    cout << endl << "Game start" << endl;
    cout << "0:left 1:right" << endl;
    cout << "Board:";
    while(cmain<m){
        if(control==0){
            if (c<n){
                cout << var[c] << " ";
                c++;
            }else{
                cout << endl;
                control=1;
            }
        }else{
            if(player==0){
                cout << "Player1 Moves:";
                cin >> input;
                if(input!=0&&input!=1){
                    cout << "Please input 1,0."<<endl;
                }else if(input==1){
                    penny0+=var[n-1];
                    var[n-1]=-1;
                    n--;
                    control=0;
                    player=1;
                    cmain++;
                    c=pointer;
                    cout << "Score: Player1:" << penny0 << " Computer:" << penny1<< endl;
                    cout<<"Board:";
                }else if(input==0){
                    penny0+=var[pointer];
                    var[pointer]=-1;
                    pointer++;
                    control=0;
                    player=1;
                    cmain++;
                    c=pointer;
                    cout << "Score: Player1:" << penny0 << " Computer:" << penny1<< endl;
                    cout<<"Board:";
                }
                }else{
                cout << "Computer Moves:";
                if(var[n-1]>=var[pointer]){
                    cout << "1" << endl;
                    penny1+=var[n-1];
                    var[n-1]=-1;
                    n--;
                    control=0;
                    player=0;
                    cmain++;
                    c=pointer;
                    cout << "Score: Player1:" << penny0 << " Computer:" << penny1<<endl;
                    cout<<"Board:";
                }else{
                    cout << "0" << endl;
                    penny1+=var[pointer];
                    var[pointer]=-1;
                    pointer++;
                    control=0;
                    player=0;
                    cmain++;
                    c=pointer;
                    cout << "Score: Player1:" << penny0 << " Computer:" << penny1<< endl;
                    cout<<"Board:";
                }
                }

            }
        }
        cout<<endl;
        if(penny0>penny1){
            cout << "Player1 wins!" << endl;
        }else if(penny1>penny0){
            cout << "Computer wins!"<< endl;
        }else{
            cout << "It`s a tie!" << endl;
        }
    }
