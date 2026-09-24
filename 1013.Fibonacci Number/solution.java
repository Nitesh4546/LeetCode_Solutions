class Solution {
    int arr[] = new int[32];
    public int fib(int n) {
        if(n<=1){
            return n;
        }
        if(arr[n]!=0){
            return arr[n];
        }
        return arr[n] = fib(n-1)+fib(n-2);
    }
}