# Dynamic Programming

Those who forget the past, are condemned to repeat it.

There are 2 approaches to solving Dynamic Programming problems:

- Top-Down: Recursion + Memoization
- Bottom-Up:Tabulation

Then focus on space complexity of the problems.

Fibonacci Series: 0,1,1,2,3,5,8,13

f(n) = f(n-1)+ f(n-2)
It can be solved using recursion.

Overlapping of subproblems takes place.

Storing the value of subproblems is Memoization.

Approach:

1. create a 1D array such as dp[n+1]. (Tabular)
2. Ignore the base case in the case of recursion 0 and 1.
3. Assign dp[n+1] to recursive relation.
4. When dp[n+1] is not equal to -1 return the value.

The time complexity of Dynamic Programming will be O(n)
And space complexity will be O(n)+O(n) = O(2n) = O(n)

Now to solving this in problem through Tabular approach:

Create a function fib(n):

1. dp[n+1]
2. dp[1]=1 , dp[0]=0
3. for loop from 2 to n. where dp[i]= dp[i-1]+dp[i-2]
4. return dp[n]

So, predefining the base case. So that it can continue on its own.

So {0,1,-1,-1,-1,-1,-1} Base case 0 and 1 on their respective indexs 0 and 1 are predefined.
Then the operation can continue as such
{0,1,1,2,3,-1,-1,-1}
{0,1,1,2,3,5,-1,-1}
{0,1,1,2,3,5,8,-1}

Time and space complexity in this case is O(n) too.

### Lets approach the problem in a way of solving space complexity.

Create a function in which:

1.  prev1= 0 , prev2= 1
2.  Then assign curr= prev1 + prev2
3.  Now, assign prev2= prev1, prev1 = curr
4.  return prev1

Time complexity will O(n).

And space complexity will be O(1). More optimized.
