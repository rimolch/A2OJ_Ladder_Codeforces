<a href="https://codeforces.com/contest/296/problem/A">Problem</a>
```
Consider an input: 1 1 1 1 2 2 3

There are four 1's, two 2's and one 3. Here four is maximum. So if somehow you are able 
to separate these four elements with one other element where between two 1's there will 
be 2 or 3 each time then the answer will be YES. Otherwise NO.

Here the answer is be YES. Because you can separate the elements like: 1 2 1 2 1 3 1

Now think if there are maximum four same elements in the array then you need at 

least 3 other elements to separate them. Moreover if there is an element mx times

in the array then you need at least mx — 1 other elements to make the same elements separate.

```
