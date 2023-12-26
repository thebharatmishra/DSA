# Sorting

Arrangement of elements in a required order. Generally, increasing or decreasing order.

Lets, say arr[]= {1,7,9,3,2,0} is a given array.

When sorted in increasing order it will turn out to be {0,1,2,3,7,9}

## Selection Sort

Traverses through the list each time and assign the smallest number to the 0th index.

Lets take an array arr[]={64,25,12,22,11}. Now do the selection sort operation on it.

**Round 1:** {64,25,12,22,11}

**Round 2:** {11,25,12,22,64}

**Round 3:** {11,12,25,22,64}

**Round 4:** {11,12,22,25,64}

**Total Rounds :** (n-1) , Where n is number of elements.

Therefore, in above case n=5. So, total rounds will be n-1 = 5-1 = 4.
