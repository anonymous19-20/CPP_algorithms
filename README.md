# C++ Algorithms and Data Structures

C++ implementations of core algorithms and data structures — each module
is self-contained, compiles independently with `g++`, and covers the
fundamental logic used in systems programming and technical interviews.

---

## Implementations

| File | Category | What it implements |
|------|----------|--------------------|
| `BinarySearch.cpp` | Searching | O(log n) search on sorted arrays |
| `LinearSearch.cpp` | Searching | Sequential scan, unsorted arrays |
| `MergeSort.cpp` | Sorting | Divide-and-conquer, O(n log n) |
| `QuickSort.cpp` | Sorting | In-place partitioning sort |
| `SelectionSort.cpp` | Sorting | Minimum selection, O(n²) |
| `MergingTwoArrays.cpp` | Arrays | Merging two sorted arrays |
| `Stack.cpp` | Data Structure | LIFO stack — push, pop, peek |
| `Queue.cpp` | Data Structure | FIFO queue — enqueue, dequeue |
| `DoubleLL.cpp` | Data Structure | Doubly linked list — insert, delete, traverse |
| `BinarySearchTree.cpp` | Trees | BST — insert, search, delete |
| `Treversing.cpp` | Trees | Inorder, preorder, postorder traversal |
| `InfixToPostfix.cpp` | Stack Application | Expression conversion using stack |
| `TOH.cpp` | Recursion | Tower of Hanoi — recursive solution |

---

## Build & Run

Requires `g++` (GCC C++ compiler).

```bash
mkdir -p build
g++ -std=c++17 -Wall BinarySearch.cpp -o build/BinarySearch
./build/BinarySearch
```

Replace `BinarySearch.cpp` with any filename from the table above.

---

## Environment

Built on **Kali Linux** · compiled with `g++ -std=c++17`
