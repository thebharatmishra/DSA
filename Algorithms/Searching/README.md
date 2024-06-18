# Searching

## Binary Search

**Linear Search :** Lets say we are given an array
{2,7,4,-5,3,1,8}

We need to fing 9 in it
we will traverse the array using index to check whether it exists or not.

We found out it does not exist in the array.

```
// Using a for loop for traversal of the array.
for(i=0;i<n;i++){

//Checking if ith element is equal to the key.
    if(a[i]==key)

    return key;
}
return -1;
```

Now lets talk about Binary Search.

1. Binary Search works only on monotonic functions (Either increasing or decreasing).

   bs={3,5,7,9,13,27}

2. First we determine the middle element check whether it is equal to the needed key value.

   bs={3,5,7, **9** ,13,27} , the middle element being 9.

3. Now on comparing if the value is smaller than the key value then it will be searched in the right part of the list.

   {9,13,27} = (4+5)/2

   While if its larger it will be searched in the left.

4. Now we will operate the same way on the required half of the list. using the mid point formula

   [(i+3)+(i+4)+(i+5)] / 2

   (4+5)/2 = 4.5 = 4 using ceil function. As there are no decimal index in C++. Index value is returned.

5. Therefore, the element can be found using Divide and Conquer approach.
   If the value is not found we will return -1.

### Optimization

if start = $2^{31}$ -1 , end = $2^{31}$ -1

then mid will exceed the int limit

so , mid = start+ ((end-start)/2)

So in a linear search we would need to do 1000 comparisons while in binary search we just do 10 of them in a sorted array.

The time complexity of the algorithm will be O(log N).

N- size of array, as it is divided N/$2^k$ .

N/$2^k$ = 1

N= $2^k$

k = log N.
