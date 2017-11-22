#include <iostream>
using namespace std;

int main(){
    int n,c3,bales[101],temp,best=-99999,c=0,ce=1,left,right,t=0,c2;
    cin >> n;
    for(int c1=1;c1<=n;c1++){
        cin >> bales[c1];
    }
    for(int c1=0;c1<n;c1++){
        for(int c2=1;c2<=n-1;c2++){
            if(bales[c2]>bales[c2+1]){
                temp=bales[c2];
                bales[c2]=bales[c2+1];
                bales[c2+1]=temp;
            }
        }
    }
    for(int c1=1;c1<=n;c1++){
        left=c1;
        right=c1;
        while(left!=-1){
                cout << "L:" << c1 << " " << bales[left] << " " << ce << " " << best << endl;
            if(c1==1){
                left=-1;
                break;
            }
            for(c2=left;c2>=1;c2--){
                if(bales[c2]>=bales[left]-ce){
                    t=1;
                    ce++;
                    c++;
                    }
            }
            left=c2;
            if(t==0){
                left=-1;
            }
            t=0;
        }
        ce=1;
        t=0;
        while(right!=-1){
                cout << "R:" << c1 << " " << bales[right] << " " << ce << " " << best << endl;
            if(c1==n){
                right=-1;
                break;
            }
            for(c3=right;c3<=n;c3++){
                if(bales[c3]<=bales[right]+ce){
                    c++;
                    t=1;
                    ce++;
                }
            }
            right=c3;
            if(t==0){
                right=-1;
            }
            t=0;

        }
        ce=1;
        if(c>best){
            best=c;
        }
        c=0;
    }
    cout <<  best << endl;
}
