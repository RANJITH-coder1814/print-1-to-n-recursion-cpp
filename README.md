# print-1-to-n-recursion-cpp
Alice and Bob are playing a game called Blobby Volley. In this game, one player is the server and the other is the receiver.
# Blobby Volley Scores

## Problem Description

Alice and Bob are playing a game of **Blobby Volley**. In this game, one player is the **server** and the other is the **receiver**.

Initially, **Alice is the server** and **Bob is the receiver**.

### Game Rules

* If the **server wins the point**, their score **increases by 1**, and they **remain the server** for the next turn.
* If the **receiver wins the point**, their score **does not increase**, but they **become the server** for the next turn.
* A player's score increases **only when they win a point while serving**.

### Input

You are given:

* An integer **T** representing the number of test cases.
* For each test case:

  * An integer **N** representing the number of turns.
  * A string **S** of length **N** consisting of characters:

    * `'A'` → Alice wins the point
    * `'B'` → Bob wins the point

### Output

For each test case, print the **final score of Alice and Bob** after all turns are played.

### Example

Input

```
1
3
ABA
```

Output

```
1 0
```

### Explanation

* Initially, **Alice is the server**.
* Turn 1: `A` wins → Alice scores **1** and remains server.
* Turn 2: `B` wins → Bob becomes server, no score.
* Turn 3: `A` wins → Alice becomes server again, no score.

Final score:

* **Alice = 1**
* **Bob = 0**

### Time Complexity

* **O(N)** per test case.
