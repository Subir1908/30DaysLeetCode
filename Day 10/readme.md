Solved the find the difference problem where we are supposed to find the extra character between two strings s and t.
Used the ASCII math to convert a character into its value and then used an array of size 26 for a counter of each character.
Looping the string s to increment the characters value index and looped t to decreased it and the one which hits negative is the extra letter.
The algorithm initally resulted in 3ms runtime because I put int instead of char in the loop which led to type conversion and and increased runtime which i later fixed.
The final algorithm resulted in a O(N) time complexity and O(1) space complexity and 0ms of runtime and 9.30MB of memory