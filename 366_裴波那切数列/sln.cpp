#include <iostream>
using namespace std;

class Solution{
public:
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    int fibonacci(int n) {
        // write your code here
        int num1=0, num2=1;
        if(n==1)
            return num1;
        if(n==2)
            return num2;
        int num=0;
        for(int i=3;i<=n;i++){
            num = num1+num2;
            num1 = num2;
            num2 = num;
        }
        return num;
    }
};

int main(){
    Solution sln;
    int x;
    cin>>x;
    cout<<sln.fibonacci(x)<<endl;
    return 0;
}
