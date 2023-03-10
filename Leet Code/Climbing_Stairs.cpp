/*
// Using Recursion showing tle when n=4
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1){
            return 1;
        }else{
            return climbStairs(n-1)+climbStairs(n-2);
        }
        
    }
};
*/

// SO i use Dynamic Programming

class Solution {
public:
    int climbStairs(int n) {
        int f[n+2];
        int i;
        f[0]=1;
        f[1]=1;
        for(i=2;i<=n;i++){
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
        
    }
};

// Btw Logic is, When we count steps its maked Fibonacci Series 
// outputs for n=0 to n=45 , SO i apply febonacci Formula , just One chnage f[0]=1;
/*
n=0: 1
n=1: 1
n=2: 2
n=3: 3
n=4: 5
n=5: 8
n=6: 13
n=7: 21
n=8: 34
n=9: 55
n=10: 89
n=11: 144
n=12: 233
n=13: 377
n=14: 610
n=15: 987
n=16: 1597
n=17: 2584
n=18: 4181
n=19: 6765
n=20: 10946
n=21: 17711
n=22: 28657
n=23: 46368
n=24: 75025
n=25: 121393
n=26: 196418
n=27: 317811
n=28: 514229
n=29: 832040
n=30: 1346269
n=31: 2178309
n=32: 3524578
n=33: 5702887
n=34: 9227465
n=35: 14930352
n=36: 24157817
n=37: 39088169
n=38: 63245986
n=39: 102334155
n=40: 165580141
n=41: 267914296
n=42: 433494437
n=43: 701408733
n=44: 1134903170
n=45: 1836311903
*/
