# Recursion

### What is recursion?

Function calls itself.

```
int random(int num){
    ....
    ....
    ....
    random(num)
}
```

It is used when a Bigger problem depends upon similar type of smaller problem.

### Example:

$2^n$ : 2 to the power n.

$2^4$ = 2 x 2 x 2 x 2 \
$2^4$ = 2 x $2^3$ \
$2^n$ = 2 x $2^{n-1}$ \
f(n) = 2 x f(n-1)

Another example could be [**Factorial**](../Recursion/Factorial.cpp).

5! = 5 x 4 x 3 x 2 x 1 \
5! = 5 x 4! \
n! = n x (n-1)! \
f(n) = n x f(n-1) \

NOTE : Where the program stops in recursion it is called a base case.
like factorial at 0! = 1.

**Recursion**

- Base case - Returning the function is mandatory.
- Recursive relation.
