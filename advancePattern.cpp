#include<iostream>
using namespace std;
int main(){
    cout << "4.2 Advanced Pattern Questions in C++\n";
    //cout<< "hello world";
    //https://youtu.be/k9OlCJFy5yo?si=8cqbamivqjfIkr_R ------link

    cout<<"inverted pattern\n";
    int n;
    cout<<"enter a nmbr :";
    cin>>n;
    for(int i =n ;i>=1;i--){
        for(int j =1 ;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


return 0;
}
