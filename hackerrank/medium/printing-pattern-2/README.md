# Printing Pattern Using Loops

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Print a pattern of numbers from $1$ to $n$ as shown below.  Each of the numbers is separated by a single space.    

                                4 4 4 4 4 4 4  
                                4 3 3 3 3 3 4   
                                4 3 2 2 2 3 4   
                                4 3 2 1 2 3 4   
                                4 3 2 2 2 3 4   
                                4 3 3 3 3 3 4   
                                4 4 4 4 4 4 4   

**Input Format**

The input will contain a single integer $n$.  

**Constraints**

$1 \le n \le 1000$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T15:25:41.550Z  

```c
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            int distance = row;
            if (size - 1 - row < distance) distance = size - 1 - row;
            if (col < distance) distance = col;
            if (size - 1 - col < distance) distance = size - 1 - col;

            printf("%d", n - distance);
            if (col < size - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-pattern-2/problem)