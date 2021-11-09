#include <iostream>
using namespace std;

int main() {
    __int64 n,i=0,j=1,k,l;
    cin>>n;
    if(n>1){
        cout<<1<<endl;
        for(l=0;l<n-1;l++){
            k=i+j;
            cout<<k<<endl;
            i=j;
            j=k;
        }
    }else{
        cout<<"errore"<<endl;
    }
}
