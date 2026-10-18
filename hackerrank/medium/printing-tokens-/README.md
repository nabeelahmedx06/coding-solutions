# Printing Tokens

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
**Submitted:** 2026-10-18T11:21:55.416Z  

```c

#include <stdio.h>

int main() {
    char str[1000];

    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-tokens-/problem)