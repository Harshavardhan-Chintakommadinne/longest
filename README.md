# longest
# Longest Common Substring (C++ Assignment)

##  Overview
This project implements the **Longest Common Substring (LCS)** problem using **Dynamic Programming** in C++.  
The program accepts two input strings (of equal length), constructs a DP lookup table, and determines the longest common substring between them.

**Example:**  
- String 1: `ABAB`  
- String 2: `BABA`  

The program produces a DP table and the longest substring(s), such as `ABA` or `BAB` (both of length 3).

---

##  Features
- Implements LCS using **Dynamic Programming**.  
- Prints the **DP lookup table** for visualization.  
- Displays the **longest common substring** and its length.  
- Handles ties by outputting one valid solution.  
- Assumes at least one shared character exists.



---

## Project Structure
Enter first string: ABAB
Enter second string: BABA

DP Table:
0 0 0 0 0 
0 0 1 0 1 
0 1 0 2 0 
0 0 2 0 3 
0 1 0 3 0 

Longest Common Substring: ABA
Length: 3

