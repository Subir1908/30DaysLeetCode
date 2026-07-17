Solved the Reverse string problem where we need to reverse a given string.
Solved it by swapping out the characters opposite of each other like swapping first with last and so on using the swap function which has a time and space complexity of O(1). 
The algorithm I wrote intially resulted in a 4ms runtime beacuse i put n/2 in the for loop so it divides the number in each iteration which resulted in an increased runtime.
I changed the algorithm to include a new variable called limit which stores n/2 as i would need n at the end of each iteration for swapping.
After the adjustments the final algorithm resulted in runtime of 0ms and memory of 27.28 MB with time complexity of O(n) and space complexity of O(1).