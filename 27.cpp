#include <iostream>
using namespace std;

int main(){
    int n,m,input[31][31],output[62][62];
    cin >> m >> n;
    for(int c1=0;c1<m;c1++){
        for(int c2=0;c2<n;c2++){
            cin >> input[c2][c1];
        }
    }
    for(int c1=0;c1<n;c1++){
        for(int c2=0;c2<m;c2++){
            output[c1][c2]=input[c1][c2];
        }
    }
    for(int c1=n;c1<2*n;c1++){
        for(int c2=0;c2<m;c2++){
            output[c1][c2]=input[c1-n][c2];
        }
    }
    for(int c1=0;c1<m;c1++){
        for(int c2=0;c2<n;c2++){
            cout << input[c2][c1] << " ";
        }
        cout << endl;
    }
    for(int c1=0;c1<m;c1++){
        for(int c2=0;c2<2*n;c2++){
            cout << output[c2][c1] << " ";
        }
        cout << endl;
    }
}
