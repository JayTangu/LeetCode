38. Count and Say

The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the run-length encoding of countAndSay(n - 1).
Run-length encoding (RLE) is a string compression method that works by replacing each maximal group of consecutive identical characters with the concatenation of the length of the group followed by the character itself. For example, to compress the string "3322251" we replace "33" with "23", replace "222" with "32", replace "5" with "15", and replace "1" with "11". Thus the compressed string becomes "23321511".

Given a positive integer n, return the nth element of the count-and-say sequence.

 

Example 1:

Input: n = 4

Output: "1211"

Explanation:

countAndSay(1) = "1"
countAndSay(2) = RLE of "1" = "11"
countAndSay(3) = RLE of "11" = "21"
countAndSay(4) = RLE of "21" = "1211"
Example 2:

Input: n = 1

Output: "1"

Explanation:

This is the base case.

 

Constraints:

1 <= n <= 30
 

Follow up: Could you solve it iteratively?


這題的概念就像費氏數列(Fibonacci)一樣:題目只給你一個 $n$，要你求第 $n$ 個數字。這條數列的第一項被題目硬性規定為 "1"
後續每一項都是把前一項拿去做 RLE 算出來的：
n = 1(起點): 題目規定初始值就是 "1"
n = 2: 讀上一項 "1" 1 個 1 -> "11"
n = 3: 讀上一項 "11" 2 個 1 -> "21"
n = 4: 讀上一項 "21" 1 個 2 , 1 個 1 -> "1211"
n = 5: 讀上一項 "1211"  1 個 1 , 1 個 2 , 2 個 1 -> "111221"