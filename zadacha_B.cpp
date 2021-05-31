#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream in;
    in.open("input.txt");
    string s;
    in >> s;
    int max=0;
    bool flag=0;
    char c='Y';
    int size=s.size();
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(s[i]==s[j]){
                flag=1;
                if(j-i-1>max){
                    max=j-i-1;
                    c=s[i];
                }
                if (j-i-1==max && c>s[i]){
                    c=s[i];
                }
            }
        }
    }
    if (flag==0){
        cout << "0";
    }
    else{
        cout << c << " " << max;
    }
    in.close();
}
