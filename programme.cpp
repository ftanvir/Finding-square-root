#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solveSquare_root(float num) 
{
    int start=0, end= num;
    float ans;
    while(start<=end) {
        float mid = (start+end)/2;
        
        if(mid*mid == num){
            ans = mid;
            break;
        }
        else if(mid*mid < num) {
            start = mid+1;
            ans = mid;
        } else {
            end = mid -1;
        }
    }
    float decimal=0.1;
    for(int i=0; i<4; i++) {
        while(ans*ans<=num) {
            ans = ans+decimal;
        }
        ans = ans - decimal;
        decimal= decimal/10;
    }
    
    cout<<ans;
}

int main()
{
    float num;
    cin>>num;
    solveSquare_root(num);
    
    
    return 0;
}