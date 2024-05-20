#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int>num1,num2;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        num1.push_back(a);
    }
    for(int i=0;i<n+1;i++){
        int a; cin >>a;
        num2.push_back(a);
    }
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
    for(int i =0;i<n+1;i++){
        if(num2[i]!= num1[i]){
        cout << num2[i];
        return 0;
        }
    }
}