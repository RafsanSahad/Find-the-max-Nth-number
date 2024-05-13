#include <iostream>
using namespace std;
void arr(int a[],int b){
    int max,i;
    max = a[0];
    for(i=0;i<=b-1;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"The largest value :"<<max<<endl;
}
int main(){
    int n;
    cout<<"Enter the array size: ";
     cin >> n;
    int a[n];
    for(int c=0;c<=n-1;c++){
        cin>>a[c];
    }
    arr(a, n);
    return 0;
}
