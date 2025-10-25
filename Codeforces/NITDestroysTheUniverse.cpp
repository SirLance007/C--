#include <iostream>
#include <vector>
using namespace std;

void helperFunc(){

    int n; 
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];


    int zeros = 0;

    for(int &i : v) if(i==0) zeros++;


    if(zeros==n) {

        cout<<0<<endl;

    }

    else if(zeros==0){

        cout<<1<<endl;

    }

    else{

        int curr = 0;

        for(int i=0;i<n;i++){

            if(v[i]!=0) break;

            curr++;

        }

        for(int i=n-1;i>=0;i--){

            if(v[i]!=0) break;

            curr++;

        }
        if(curr==zeros){

            cout<<1<<endl;
            
        }
        else{

            cout<<2<<endl;

        }

    }

    return;

}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        helperFunc();
    }
}