# Advanced-algorithms-week1
Description and understanding

I have come across this problem on leetcode platform, and it was my first problem solved on the platform and it introduced me to the wonderful world of algorthms and built my intrest to problemsolving


Solution 1

* This solution involves using a nested for loop to go through the array and find every combination to check if the combination equals to out target
* This solution will give us a correct answer but it is not time efficient, it runs ata worst case time complexity of O(n^2) where n is the size of the array

Solution 2

* Solution 2 involved the use of an aditional data structure in the for of an unordered map (Hashmap) to store the value of the indicies we have seen as a key value pai of value and index
* This approach reduced the lookup time to O(n) where n is the size of the array, but it is important to note that by introducing a hashmap we will now be sacrificing on space efficiency and now our space ccplexity becaomes O(n) instead of O(1)