# Sorting-by-suffling-Fisher-Yates-Suffling

__How does Fisher-Yates Suffling algorithm work ?__

The Fisher-Yates shuffle, also known as the Knuth shuffle, is a popular algorithm for shuffling an array of integers. The algorithm works by iterating through the array from the last element to the first, and for each element, swapping it with a randomly chosen element that comes before it in the array.

Here's the basic pseudocode for the Fisher-Yates shuffle algorithm:

for i from n - 1 to 1:
    j = random integer between 0 and i (inclusive)
    swap arr[i] with arr[j]
The algorithm starts by initializing a variable i to the last element of the array, and then repeatedly decrements i until it reaches the first element. For each value of i, the algorithm generates a random integer j between 0 and i (inclusive), and then swaps the element at index i with the element at index j.

The Fisher-Yates shuffle algorithm has a time complexity of O(n), which makes it a good choice for shuffling large arrays of integers. It is also a in-place algorithm which means it doesn't require extra memory space.
It produces a uniformly random permutation of the input array and it is considered as a good algorithm for the purpose of shuffling an array.

It's important to note that Fisher-Yates shuffle is not a sorting algorithm, it is actually used for shuffling an array of elements in a random order. It is not efficient for sorting array but used for shuffling.

__What do you mean by having time complexity O(n) ?__

The time complexity of an algorithm is a way of describing how the running time of the algorithm grows as the size of the input data increases. The "O" notation is used to express the time complexity of an algorithm, and it describes the upper bound of the running time of the algorithm in the worst-case scenario.

An algorithm with a time complexity of O(n) means that the running time of the algorithm grows linearly with the size of the input data. In other words, if the input data size is doubled, the running time of the algorithm will also roughly double.
For example, if an algorithm takes 1 second to run on an input of size 100, it will take roughly 2 seconds to run on an input of size 200, and so on. The constant factor is not important, what matters is the relation between the running time and the input size.

Algorithms with a time complexity of O(n) are considered to be very efficient for large inputs. It is considered as a linear time complexity and a good trade-off between the running time and the amount of memory used by the algorithm.

It's important to note that time complexity is not the only metric that should be considered when evaluating the performance of an algorithm. Factors such as memory usage, stability, code complexity and ease of implementation should also be taken into account.



**NOTE**: Here the Fisher-yates Suffling Algorithm has time complexity O(n) but sorting byr suffling (Fisher-Yates Suffling) program written here has time complexity O(n*n). 
