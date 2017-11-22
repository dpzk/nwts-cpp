#include <iostream>
using namespace std;

int main(){
    int c=0,input1,input2,line1[4]={-1,0,0,0},line2[4]={-1,0,0,0},line3[4]={-1,0,0,0},stop=0,player=1;
    cout << "Tic-Tac-Toe" << endl;
    while(stop==0){
        for(int c1=1;c1<=3;c1++){
            if(line1[c1]==0){
                cout << "-";
            }else if(line1[c1]==1){
                cout << "X";
            }else {
                cout << "O";
            }
        }
        cout << endl;
        for(int c1=1;c1<=3;c1++){
            if(line2[c1]==0){
                cout << "-";
            }else if(line2[c1]==1){
                cout << "X";
            }else {
                cout << "O";
            }
        }
        cout << endl;
        for(int c1=1;c1<=3;c1++){
            if(line3[c1]==0){
                cout << "-";
            }else if(line3[c1]==1){
                cout << "X";
            }else {
                cout << "O";
            }
        }
        cout << endl;
        cin >> input1 >> input2;
        if(input1>0&&input1<4&&input2>0&&input2<4){
            if(input1==1&&line1[input2]==0){
            line1[input2]=player;
            }else if(input1==2&&line2[input2]==0){
            line2[input2]=player;
            }else if(input1==3&&line3[input2]==0){
            line3[input2]=player;
            }else{
                cout << "Bad input" << endl;
                continue;
            }
            if(player==1){
                player=2;
            }else{
                player=1;
            }
            c++;
        }else{
            cout << "Bad input" << endl;
        }
        if((line1[1]==1&&line2[2]==1&&line3[3]==1)
           ||(line1[1]==1&&line1[2]==1&&line1[3]==1)
           ||(line2[1]==1&&line2[2]==1&&line2[3]==1)
           ||(line3[1]==1&&line3[2]==1&&line3[3]==1)
           ||(line1[3]==1&&line2[2]==1&&line3[1]==1)
           ||(line1[1]==1&&line2[1]==1&&line3[1]==1)
           ||(line1[2]==1&&line2[2]==1&&line3[2]==1)
           ||(line1[3]==1&&line2[3]==1&&line3[3]==1)){
            for(int c1=1;c1<=3;c1++){
                if(line1[c1]==0){
                    cout << "-";
                }else if(line1[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            for(int c1=1;c1<=3;c1++){
                if(line2[c1]==0){
                    cout << "-";
                }else if(line2[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            for(int c1=1;c1<=3;c1++){
                if(line3[c1]==0){
                    cout << "-";
                }else if(line3[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            cout << "Player1 win!" << endl;
            break;
           }else if((line1[1]==2&&line2[2]==2&&line3[3]==2)
           ||(line1[1]==2&&line1[2]==2&&line1[3]==2)
           ||(line2[1]==2&&line2[2]==2&&line2[3]==2)
           ||(line3[1]==2&&line3[2]==2&&line3[3]==2)
           ||(line1[3]==2&&line2[2]==2&&line3[1]==2)
           ||(line1[1]==2&&line2[1]==2&&line3[1]==2)
           ||(line1[2]==2&&line2[2]==2&&line3[2]==2)
           ||(line1[3]==2&&line2[3]==2&&line3[3]==2)){
            for(int c1=1;c1<=3;c1++){
                if(line1[c1]==0){
                    cout << "-";
                }else if(line1[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            for(int c1=1;c1<=3;c1++){
                if(line2[c1]==0){
                    cout << "-";
                }else if(line2[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            for(int c1=1;c1<=3;c1++){
                if(line3[c1]==0){
                    cout << "-";
                }else if(line3[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            cout << "Player2 win!" << endl;
            break;
           }
           if(c>=9){
            for(int c1=1;c1<=3;c1++){
                if(line1[c1]==0){
                    cout << "-";
                }else if(line1[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            for(int c1=1;c1<=3;c1++){
                if(line2[c1]==0){
                    cout << "-";
                }else if(line2[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            for(int c1=1;c1<=3;c1++){
                if(line3[c1]==0){
                    cout << "-";
                }else if(line3[c1]==1){
                    cout << "X";
                }else {
                    cout << "O";
                }
            }
            cout << endl;
            cout << "It`s a tie" << endl;
            break;
           }
    }
}
