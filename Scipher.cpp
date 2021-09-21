#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t,v;
    int key;

    cout << "Masukkan Key\n";
    cin >> key;

    cout << "Masukkan Kata\n";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    for(int i = 0; i < s.size(); i++){
        t+=(s[i]-'A'+ key) % 26 + 'A';
    }
    cout << "\n\nEncrypted message is "<< t <<'\n';

    for(int i = 0; i < t.size(); i++){
        v+=(t[i]-'A'- key + 26) % 26 + 'A';
    }
    cout<<"\n\nDecrypted message is "<< v <<'\n';
    return 0;
}