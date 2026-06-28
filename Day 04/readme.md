Completed the Intersection of Two Arrays problem.
To solve it I turned both the given arrays into sets and the used count on each element of set nums 2 in set nums 1 and appended it to a result vector.
The solution had a runtime of 2ms and a memeory of 13.75.
I updated this code to use only unordered set of nums 1 and erasing a number from set nums 1 when it is found in nums 2 and added the result vector.
This updated code lead to a runtime of 0ms and a memory of 14.40.