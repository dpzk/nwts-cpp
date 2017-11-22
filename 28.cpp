#include <iostream>
using namespace std;

int main(){
    char c;
    string in;
    int n,m,maze[41][41],x,y,xe,ye,c0=0,C=0;
    cin >> m >> n;
    for(int c1=0;c1<m;c1++){
        for(int c2=0;c2<n;c2++){
            cin >> c;
            if(c=='S'){
                x=c2;
                y=c1;
                maze[c2][c1]=2;
            }else if(c=='#'){
                maze[c2][c1]=1;
            }else if(c=='.'){
                maze[c2][c1]=0;
            }else if(c=='E'){
                xe=c2;
                ye=c1;
                maze[c2][c1]=3;
            }
        }
    }
    cin >> in;
    while((y!=ye||x!=xe)&&c0<in.length()){
        cout << "Your move: " << in[c0] << endl;
        if(in[c0]=='U'){
            if(maze[x][y-1]!=1){
                y--;
                C++;
                c0++;
                maze[x][y]=2;
                maze[x][y+1]=0;
                cout << "Number of moves: " << C << endl;
                    for(int c1=0;c1<m;c1++){
                        for(int c2=0;c2<n;c2++){
                            if(maze[c2][c1]==1){
                                cout << "#";
                            }else if(maze[c2][c1]==0){
                                cout << ".";
                            }else if(maze[c2][c1]==3){
                                cout << "E";
                            }else if(maze[c2][c1]==2){
                                cout << "P";
                            }
                        }
                        cout << endl;
                }
                cout << endl;
            }else{
                cout << "Invalid move!" << endl;
                cout << "Number of moves: " << C << endl;
                c0++;
                    for(int c1=0;c1<m;c1++){
                        for(int c2=0;c2<n;c2++){
                            if(maze[c2][c1]==1){
                                cout << "#";
                            }else if(maze[c2][c1]==0){
                                cout << ".";
                            }else if(maze[c2][c1]==3){
                                cout << "E";
                            }else if(maze[c2][c1]==2){
                                cout << "P";
                            }
                        }
                        cout << endl;
                }
                cout << endl;
            }
        }else if(in[c0]=='L'){
            if(maze[x-1][y]!=1){
                x--;
                C++;
                c0++;
                maze[x][y]=2;
                maze[x+1][y]=0;
                cout << "Number of moves: " << C << endl;
                    for(int c1=0;c1<m;c1++){
                        for(int c2=0;c2<n;c2++){
                            if(maze[c2][c1]==1){
                                cout << "#";
                            }else if(maze[c2][c1]==0){
                                cout << ".";
                            }else if(maze[c2][c1]==3){
                                cout << "E";
                            }else if(maze[c2][c1]==2){
                                cout << "P";
                            }
                        }
                        cout << endl;
                }
                cout << endl;
            }else{
                cout << "Invalid move!" << endl;
                cout << "Number of moves: " << C << endl;
                c0++;
                    for(int c1=0;c1<m;c1++){
                        for(int c2=0;c2<n;c2++){
                            if(maze[c2][c1]==1){
                                cout << "#";
                            }else if(maze[c2][c1]==0){
                                cout << ".";
                            }else if(maze[c2][c1]==3){
                                cout << "E";
                            }else if(maze[c2][c1]==2){
                                cout << "P";
                            }
                        }
                        cout << endl;
                }
                cout << endl;
            }
        }else if(in[c0]=='R'){
            if(maze[x+1][y]!=1){
                x++;
                C++;
                c0++;
                maze[x][y]=2;
                maze[x-1][y]=0;
                cout << "Number of moves: " << C << endl;
                    for(int c1=0;c1<m;c1++){
                        for(int c2=0;c2<n;c2++){
                            if(maze[c2][c1]==1){
                                cout << "#";
                            }else if(maze[c2][c1]==0){
                                cout << ".";
                            }else if(maze[c2][c1]==3){
                                cout << "E";
                            }else if(maze[c2][c1]==2){
                                cout << "P";
                            }
                        }
                        cout << endl;
                }
                cout << endl;
            }else{
                cout << "Invalid move!" << endl;
                cout << "Number of moves: " << C << endl;
                c0++;
                    for(int c1=0;c1<m;c1++){
                        for(int c2=0;c2<n;c2++){
                            if(maze[c2][c1]==1){
                                cout << "#";
                            }else if(maze[c2][c1]==0){
                                cout << ".";
                            }else if(maze[c2][c1]==3){
                                cout << "E";
                            }else if(maze[c2][c1]==2){
                                cout << "P";
                            }
                        }
                        cout << endl;
                }
                cout << endl;
            }
        }else if(in[c0]=='D'){
            if(maze[x][y+1]!=1){
                y++;
                C++;
                c0++;
                maze[x][y]=2;
                maze[x][y-1]=0;
                cout << "Number of moves: " << C << endl;
                    for(int c1=0;c1<m;c1++){
                        for(int c2=0;c2<n;c2++){
                            if(maze[c2][c1]==1){
                                cout << "#";
                            }else if(maze[c2][c1]==0){
                                cout << ".";
                            }else if(maze[c2][c1]==3){
                                cout << "E";
                            }else if(maze[c2][c1]==2){
                                cout << "P";
                            }
                        }
                        cout << endl;
                }
                cout << endl;
            }else{
                cout << "Invalid move!" << endl;
                cout << "Number of moves: " << C << endl;
                c0++;
                    for(int c1=0;c1<m;c1++){
                        for(int c2=0;c2<n;c2++){
                            if(maze[c2][c1]==1){
                                cout << "#";
                            }else if(maze[c2][c1]==0){
                                cout << ".";
                            }else if(maze[c2][c1]==3){
                                cout << "E";
                            }else if(maze[c2][c1]==2){
                                cout << "P";
                            }
                        }
                        cout << endl;
                }
                cout << endl;
            }
        }
    }
    if(x==xe&&y==ye){
        cout << "Congratulations you found the exit!" << endl;
    }
}
