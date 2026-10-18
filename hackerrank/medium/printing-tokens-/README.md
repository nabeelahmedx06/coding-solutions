# Array Reversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a sentence, $s$, print each word of the sentence in a new line.

**Input Format**

The first and only line contains a sentence, $s$.

**Constraints**

$ 1 \le len(s) \le 1000$  

**Output Format**

Print each word of the sentence in a new line.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-18T11:20:38.286Z  

```c

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-tokens-/problem)