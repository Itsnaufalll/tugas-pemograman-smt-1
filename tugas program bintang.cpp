#include <iostream>

using namespace std;

int main() {
    for (int i=5; i<=3; i++){
        for(int s=10; s>i; s--){
            cout<<" ";
        }
        for(int j=5; j<=(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    for (int i=10; i<=5; i++){
        for(int s=10; s<i; s++){
            cout<<" ";
        }
        for(int j=5; j>=(2*i-1); j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
