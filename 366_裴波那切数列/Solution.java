class Solution {
    /**
     * @param n: an integer
     * @return an integer f(n)
     */
    public int fibonacci(int n) {
        // write your code here
        if(n==1)
            return 0;
        else if(n==2)
        return 1;
        else{
            int num1=0;
            int num2=1;
            int num=0;
            for(int i=3;i<=n;i++){
                num = num1+num2;
                num1=num2;
                num2=num;
            }
            return num;
        }
    }
}
