#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the size of pattern:";
    cin>>num;
    int k=0;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=num-k;j>=2;j--){
            cout<<" ";
        }
        for(int m=num-k;m>=2;m--){
            cout<<" ";
        }
        for(int n=1;n<=i;n++){
            cout<<"*";
        }
        k++;
        cout<<"\n"; 
    }
    for(int i=1;i<=num;i++){
        int k=1;
        for(int j=num-k;j>=i;j--){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=num-k;j>=i;j--){
            cout<<"*";
        }
        k++;
        cout<<"\n";
    }
    return 0;
}

