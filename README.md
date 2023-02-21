
# 42-Push Swap

Push Swap is a 42 project that consists of ordering a list of integers using only 2 stacks with the least number of moves and following specific rules!

## Allowed moves:

| Instructions | Description   |
| -------------| ------------- |
| sa           | swap first two elements of stack A |
| sb           | swap first two elements of stack B | 
| ss           | sa and sb at the same time         | 
| pa           | pops the first elememt on B and puts it on top of A | 
| pb           | pops the first elememt on B and puts it on top of B | 
| ra           | rotates stuck A up by one         | 
| rb           | rotates stuck B up by one         | 
| rr           | rotates both A and B up by one    | 
| rra          | rotates stuck A down by one       | 
| rrb          | rotates stuck B down by one       | 
| rrr          | rotates both A and B down by one  | 

I chose the radix sort which was enough to pass with 84 points, but I will definitely return to this project in search of the 125 points.


## What i learned:
 - Algorithm's Time Complexity
 - Sorting algorithms
 - Improve understanding of linked lists
 - C programming
 - Basic algorithms

## Installation and Running

Install push_swap with make

```bash
  make
```

```bash
  ARGS="5 4 3 2 1"
  ./push_swap $ARGS
```
The program shows which moves were used to sort the list!

## Useful links

- [Time Complexity](https://www.mygreatlearning.com/blog/why-is-time-complexity-essential/)
- [Sorting Algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)


