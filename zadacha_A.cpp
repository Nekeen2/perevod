#include <iostream>
using namespace std;
int main()
{
    int a,b,n,k,count=0,max;
    bool o=0,flag=1;
    cin >> a >> b;
    max = a;
    for(int i=a;i<b;i++){
        flag=1;
        if(i<0){
            i = i*-1;
            o=1;
        }
        k=i%100;
        n=i;
        while(n>=100){
            n=n/10;
        }
        if(i < 10 || (n-k)==0){
           flag=0;
        }
        if(o==1){
            i=i*-1;
        }
        if(flag==1){
            if((i%(n-k))==0){
                count++;
                if(i>max){
                    max=i;
                }
            }
        }
    }
    if(count==0){
        cout << 0 << " " <<  0;
    }
    else{
        cout << count << " " << max;
    }
}
