<a href="https://codeforces.com/contest/1736/problem/C1">Problem</a>
```
Since a2=gcd(b2,b3), both b2 and b3 has to be divisible by a2
Similarly both b3 and b4 has to be divisible by a3
So the common element which has to be divisible by both a2 and a3 is b3
That's why b3=lcm(a2,a3)
Now that we have b3 just check if gcd(b2,b3) is equal to a2 or not. 
If it is not then answer is "no". Otherwise continue till n 

```
