# Day 1 of My DSA 90-day Challenge 🚀
<br>
Today marks the first day of my 90-day DSA challenge! I'm excited to dive into the world of data structures and algorithms. This journey is all about building a strong foundation for problem-solving and enhancing my coding skills. Here's a quick look at my first day:

- Topic Focus: Array traversal and insertion.<br>
- Problems Solved Count: 2.<br>
- Problems Solved:<br>
    1. Two Sum leetcode problem no. 1:<br>
        - Approach:<br>
            1. The solution iterates through the array to find two indices where the sum of their elements equal the target.<br>
            2. For each element at index i, the code calculates the complement:
                ``` complement= target - nums[i] ```
            3. If a maching complement is found at index j (where i != j), the indices i and j are stored in the result vector and returned immediately.<br>
            4. The code stop as soon as a valid pair is found.<br>
        - Complexity:<br>
            * Time Complexity: O(n^2), as the nested loops iterate through the array.<br>
            * Space Complexity: O(1), apart from the result vector.<br>
    2. Best Time to Buy & Sell Stock<br>
        - Approach:<br>
            1. Initialization:<br>
                * ``` buy ``` is initialzed to the first price in the array, representing the minimum price encountered so far.<br>
                * ``` highProfit ``` is initialzed to 0 to track the maximum profit possible.<br>
            2. Iterate through Prices:<br>
                * Starting fro the second day (i = 1), iterate through the array.<br>
                * For each price, update ```buy``` to the smaller of the current price or the previously recorded ```buy```. This ensures ```buy``` always holds the lowest price seen so far.<br>
                * Calculate the potential profit for the current price as:
                    ```current_profit=prices[i] - buy```
            3. Output the Result:<br>
                * After the loop, ```highProfit``` hols the maximum profit achievable with one transaction.<br>
            4. Complexity:<br>
                * Time Complexity: O(n), as the solution iterates through the array once.<br>
                * Space Complexity: O(1), as no additional space is used apart from a few variables.<br>
                
It's just the beginning, and I'm looking forward to what lies ahead!💡