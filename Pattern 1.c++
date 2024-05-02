#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the size of pattern:";
    cin>>num;
    int k=0;
    for(int i=1;i<=num;i++){
        for(int j=num-k;j>=1;j--){
            cout<<"*";
        }
        k++;
        for(int m=2;m<=i;m++){
            cout<<" ";
        }
        for(int m=2;m<=i;m++){
            cout<<" ";
        }
        for(int j=num;j>=k;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    int m=0;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=num-m;k>=2;k--){
            cout<<" ";
        }
        for(int h=num-m;h>=2;h--){
            cout<<" ";
        } 
        for(int r=1;r<=i;r++){
            cout<<"*";
        }
        m++;
        cout<<"\n";
    }
    
    
    return 0;
}


