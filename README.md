# HackerRank 3rd Semester Portfolio

This repository contains my C solutions to the five mandatory HackerRank problems completed as part of my 3rd Semester programming activity (Activity 8).

## HackerRank Profile

https://www.hackerrank.com/profile/charithabsj25

## Problems Solved

| No. | Problem | Language | Time | Space | Status |
| --- | --- | --- | --- | --- | --- |
| 1 | [Diagonal Difference](Diagonal-Difference/Solution.c) | C | O(n) | O(1) | Accepted |
| 2 | [Dynamic Array](Dynamic-Array/Solution.c) | C | O(n + q) | O(n + q) | Accepted |
| 3 | [Time Conversion](Time-Conversion/Solution.c) | C | O(1) | O(1) | Accepted |
| 4 | [Compare the Triplets](Compare-the-Triplets/Solution.c) | C | O(1) | O(1) | Accepted |
| 5 | [Sparse Arrays](Sparse-Arrays/Solution.c) | C | O(N x Q) | O(1) extra | Accepted |

## Approach Summary

- **Diagonal Difference:** one loop adds up both diagonals of the square matrix and returns the absolute difference.
- **Dynamic Array:** an array of growable sequences; each query finds its sequence with `(x ^ lastAnswer) % n` and either appends a value or reads one.
- **Time Conversion:** adjusts the hour based on AM/PM (12 AM becomes 00, PM hours get +12 except 12 PM) and keeps the minutes and seconds.
- **Compare the Triplets:** compares Alice's and Bob's values one by one and counts a point for whichever is larger.
- **Sparse Arrays:** for each query string, counts how many input strings match it using `strcmp`.

## Badge

Problem Solving: 3-star Silver badge, 200 points.

## Evidence

The `screenshots` folder contains:

- Accepted submission screenshots for all five problems
- The HackerRank profile showing the 3-star Problem Solving badge

## Note

Each `Solution.c` contains only the function that goes inside HackerRank's C template (the template already provides `main` and the input/output handling).
