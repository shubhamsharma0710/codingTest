#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>frq;
    for(char n:s) {
        frq[n]++;
    }
    for(char n:s) {
        if(frq[n]==1) {
            cout<<n;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}