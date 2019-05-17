Merge Sort Algorithm

Merge Sort follows the rule of Divide and Conquer to sort a given set of numbers/elements, recursively, hence consuming less time.

In the last two tutorials, we learned about Selection Sort and Insertion Sort, both of which have a worst-case running time of O(n2). As the size of input grows, insertion and selection sort can take a long time to run.

Merge sort , on the other hand, runs in O(n*log n) time in all the cases.

Before jumping on to, how merge sort works and it's implementation, first lets understand what is the rule of Divide and Conquer?
Divide and Conquer

If we can break a single big problem into smaller sub-problems, solve the smaller sub-problems and combine their solutions to find the solution for the original big problem, it becomes easier to solve the whole problem.
In Merge Sort, the given unsorted array with n elements, is divided into n subarrays, each having one element, because a single element is always sorted in itself. Then, it repeatedly merges these subarrays, to produce new sorted subarrays, and in the end, one complete sorted array is produced.

The concept of Divide and Conquer involves three steps:

    Divide the problem into multiple small problems.
    Conquer the subproblems by solving them. The idea is to break down the problem into atomic subproblems, where they are actually solved.
    Combine the solutions of the subproblems to find the solution of the actual problem.
