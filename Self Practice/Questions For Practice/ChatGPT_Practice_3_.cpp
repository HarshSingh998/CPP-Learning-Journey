
/*
=========================================================
SECTION 1: STL — VECTOR (201–215)
-----------------------------------------------------------

Question:201 ->> Create and Print a Vector

Objective:
Create a vector of integers and print all elements.

Example:
Input: 5 10 20 30 40 50
Output: 10 20 30 40 50

Task:- Use vector<int> and a loop to print elements.


Question:202 ->> Find Vector Size

Objective:
Find the number of elements present in a vector.

Example:
Input: 4 10 20 30 40
Output: 4

Task:- Use the size() function.


Question:203 ->> Insert Element at End

Objective:
Insert a new element at the end of a vector.

Example:
Input: 3 10 20 30 40
Output: 10 20 30 40

Task:- Use push_back().


Question:204 ->> Remove Last Element

Objective:
Remove the last element from a vector.

Example:
Input: 4 10 20 30 40
Output: 10 20 30

Task:- Use pop_back().


Question:205 ->> Access First and Last Element

Objective:
Print the first and last elements of a vector.

Example:
Input: 4 10 20 30 40
Output: 10 40

Task:- Use front() and back().


Question:206 ->> Find Maximum in Vector

Objective:
Find the maximum element in a vector.

Example:
Input: 5 10 50 20 40 30
Output: 50

Task:- Use max_element().


Question:207 ->> Find Minimum in Vector

Objective:
Find the minimum element in a vector.

Example:
Input: 5 10 50 20 40 30
Output: 10

Task:- Use min_element().


Question:208 ->> Reverse a Vector

Objective:
Reverse the elements of a vector.

Example:
Input: 5 10 20 30 40 50
Output: 50 40 30 20 10

Task:- Use reverse().


Question:209 ->> Sort Vector in Ascending Order

Objective:
Sort vector elements from smallest to largest.

Example:
Input: 5 40 10 30 20 50
Output: 10 20 30 40 50

Task:- Use sort().


Question:210 ->> Sort Vector in Descending Order

Objective:
Sort vector elements from largest to smallest.

Example:
Input: 5 40 10 30 20 50
Output: 50 40 30 20 10

Task:- Use greater<int>().


Question:211 ->> Search Element in Vector

Objective:
Check whether a given element exists in a vector.

Example:
Input: 5 10 20 30 40 50 30
Output: Found

Task:- Use find().


Question:212 ->> Count Occurrences in Vector

Objective:
Count how many times a given element occurs.

Example:
Input: 6 10 20 10 30 10 40 10
Output: 3

Task:- Use count().


Question:213 ->> Remove Duplicates from Sorted Vector

Objective:
Remove duplicate elements from a sorted vector.

Example:
Input: 6 10 10 20 20 30 30
Output: 10 20 30

Task:- Use unique() and erase().


Question:214 ->> Find Second Largest Using Vector

Objective:
Find the second largest distinct element.

Example:
Input: 5 10 50 30 50 20
Output: 30

Task:- Use sorting and handle duplicates.


Question:215 ->> Merge Two Vectors

Objective:
Combine two vectors into one vector.

Example:
Input: 3 10 20 30
       2 40 50
Output: 10 20 30 40 50

Task:- Use insert() or push_back().


SECTION 2: STL — STRING (216–225)
-----------------------------------------------------------

Question:216 ->> Find String Length

Objective:
Find the length of a string.

Example:
Input: Hello
Output: 5

Task:- Use length() or size().


Question:217 ->> Reverse a String Using STL

Objective:
Reverse a string.

Example:
Input: Hello
Output: olleH

Task:- Use reverse().


Question:218 ->> Sort Characters in String

Objective:
Sort all characters in ascending order.

Example:
Input: dcba
Output: abcd

Task:- Use sort().


Question:219 ->> Find Character in String

Objective:
Find whether a character exists in a string.

Example:
Input: Hello l
Output: Found

Task:- Use find().


Question:220 ->> Count Character Frequency

Objective:
Count occurrences of a character.

Example:
Input: banana a
Output: 3

Task:- Use count().


Question:221 ->> Convert String to Uppercase

Objective:
Convert all lowercase characters into uppercase.

Example:
Input: hello
Output: HELLO

Task:- Use toupper().


Question:222 ->> Convert String to Lowercase

Objective:
Convert all uppercase characters into lowercase.

Example:
Input: HELLO
Output: hello

Task:- Use tolower().


Question:223 ->> Compare Two Strings

Objective:
Compare two strings.

Example:
Input: apple apple
Output: Equal

Task:- Use == or compare().


Question:224 ->> Concatenate Two Strings

Objective:
Combine two strings.

Example:
Input: Hello World
Output: HelloWorld

Task:- Use + or append().


Question:225 ->> Remove Spaces from String

Objective:
Remove all spaces from a string.

Example:
Input: hello world
Output: helloworld

Task:- Use erase() or a new string.


SECTION 3: LINKED LIST (226–245)
-----------------------------------------------------------

Question:226 ->> Create a Singly Linked List

Objective:
Create a linked list containing N elements.

Example:
Input: 4 10 20 30 40
Output: 10 -> 20 -> 30 -> 40

Task:- Create a Node structure and connect nodes.


Question:227 ->> Traverse a Linked List

Objective:
Print all elements of a linked list.

Example:
Input: 3 10 20 30
Output: 10 20 30

Task:- Use a temporary pointer.


Question:228 ->> Insert Node at Beginning

Objective:
Insert a new node at the beginning.

Example:
Input: 3 10 20 30 5
Output: 5 -> 10 -> 20 -> 30

Task:- Update the head pointer.


Question:229 ->> Insert Node at End

Objective:
Insert a new node at the end.

Example:
Input: 3 10 20 30 40
Output: 10 -> 20 -> 30 -> 40

Task:- Traverse to the last node.


Question:230 ->> Insert Node at Position

Objective:
Insert a node at a specified position.

Example:
Input: 3 10 20 30 15 2
Output: 10 -> 15 -> 20 -> 30

Task:- Update links correctly.


Question:231 ->> Delete First Node

Objective:
Delete the first node.

Example:
Input: 3 10 20 30
Output: 20 -> 30

Task:- Update head and free the old node.


Question:232 ->> Delete Last Node

Objective:
Delete the last node.

Example:
Input: 3 10 20 30
Output: 10 -> 20

Task:- Reach the second-last node.


Question:233 ->> Delete Node by Value

Objective:
Delete the node containing a given value.

Example:
Input: 4 10 20 30 40 30
Output: 10 -> 20 -> 40

Task:- Find and remove the required node.


Question:234 ->> Search in Linked List

Objective:
Search for a given value.

Example:
Input: 4 10 20 30 40 30
Output: Found

Task:- Traverse and compare values.


Question:235 ->> Count Linked List Nodes

Objective:
Count total nodes.

Example:
Input: 4 10 20 30 40
Output: 4

Task:- Traverse and maintain a counter.


Question:236 ->> Find Maximum in Linked List

Objective:
Find the maximum node value.

Example:
Input: 4 10 50 20 40
Output: 50

Task:- Compare each node value.


Question:237 ->> Find Minimum in Linked List

Objective:
Find the minimum node value.

Example:
Input: 4 10 50 20 40
Output: 10

Task:- Traverse and update minimum.


Question:238 ->> Reverse a Linked List

Objective:
Reverse the direction of links.

Example:
Input: 4 10 20 30 40
Output: 40 -> 30 -> 20 -> 10

Task:- Use previous, current and next pointers.


Question:239 ->> Find Middle Node

Objective:
Find the middle element of a linked list.

Example:
Input: 5 10 20 30 40 50
Output: 30

Task:- Use slow and fast pointers.


Question:240 ->> Find Nth Node from End

Objective:
Find the Nth node from the end.

Example:
Input: 5 10 20 30 40 50 2
Output: 40

Task:- Use two pointers.


Question:241 ->> Detect Cycle in Linked List

Objective:
Check whether a linked list contains a cycle.

Example:
Input: Linked list with cycle
Output: Cycle Detected

Task:- Use Floyd's slow and fast pointer algorithm.


Question:242 ->> Remove Duplicate Nodes

Objective:
Remove duplicate values from a linked list.

Example:
Input: 5 10 20 10 30 20
Output: 10 -> 20 -> 30

Task:- Use a set or nested traversal.


Question:243 ->> Merge Two Sorted Linked Lists

Objective:
Merge two sorted linked lists.

Example:
Input: 10 -> 30 -> 50
       20 -> 40 -> 60
Output: 10 -> 20 -> 30 -> 40 -> 50 -> 60

Task:- Compare node values and connect nodes.


Question:244 ->> Check Palindrome Linked List

Objective:
Check whether a linked list reads the same forward and backward.

Example:
Input: 1 -> 2 -> 2 -> 1
Output: Yes

Task:- Use reversing or a stack.


Question:245 ->> Rotate Linked List

Objective:
Rotate a linked list to the right by K positions.

Example:
Input: 5 10 20 30 40 50 2
Output: 40 -> 50 -> 10 -> 20 -> 30

Task:- Change the links carefully.


SECTION 4: STACK (246–260)
-----------------------------------------------------------

Question:246 ->> Implement Stack Using Array

Objective:
Implement push, pop and display operations.

Example:
Push: 10, 20, 30
Pop: 30

Task:- Use an array and a top variable.


Question:247 ->> Implement Stack Using STL

Objective:
Perform stack operations using STL.

Example:
Push: 10 20 30
Top: 30

Task:- Use stack<int>.


Question:248 ->> Stack Top Element

Objective:
Print the top element of a stack.

Example:
Input: Push 10 20 30
Output: 30

Task:- Use top().


Question:249 ->> Reverse String Using Stack

Objective:
Reverse a string using stack.

Example:
Input: Hello
Output: olleH

Task:- Push characters and pop them.


Question:250 ->> Balanced Parentheses

Objective:
Check whether parentheses are balanced.

Example:
Input: ({[]})
Output: Balanced

Task:- Use a stack to match opening and closing brackets.


Question:251 ->> Next Greater Element

Objective:
Find the next greater element for every array element.

Example:
Input: 4 4 5 2 25 7
Output: 5 25 25 25 -1 -1

Task:- Use a monotonic stack.


Question:252 ->> Stock Span Problem

Objective:
Find the stock span for every day.

Example:
Input: 5 100 80 60 70 60 75
Output: 1 1 1 2 1 4

Task:- Use a stack to maintain previous greater prices.


Question:253 ->> Remove Adjacent Duplicates

Objective:
Remove adjacent duplicate characters.

Example:
Input: abbaca
Output: ca

Task:- Use a stack.


Question:254 ->> Min Stack

Objective:
Design a stack that returns its minimum element.

Example:
Push: 5 3 7
Minimum: 3

Task:- Maintain minimum values efficiently.


Question:255 ->> Evaluate Postfix Expression

Objective:
Evaluate a postfix mathematical expression.

Example:
Input: 2 3 +
Output: 5

Task:- Use a stack for operands.


Question:256 ->> Convert Infix to Postfix

Objective:
Convert an infix expression into postfix.

Example:
Input: A+B
Output: AB+

Task:- Use operator precedence and a stack.


Question:257 ->> Largest Rectangle in Histogram

Objective:
Find the largest rectangle in a histogram.

Example:
Input: 6 2 1 5 6 2 3
Output: 10

Task:- Use a monotonic stack.


Question:258 ->> Celebrity Problem

Objective:
Find whether a celebrity exists in a group.

Example:
Input: Celebrity exists
Output: Celebrity Found

Task:- Use stack elimination and verification.


Question:259 ->> Simplify Path

Objective:
Simplify a Unix-style absolute path.

Example:
Input: /a/./b/../c
Output: /a/c

Task:- Use stack or vector.


Question:260 ->> Decode String

Objective:
Decode a string containing repetition patterns.

Example:
Input: 3[a]
Output: aaa

Task:- Use stacks to process repetitions.


SECTION 5: QUEUE AND DEQUE (261–275)
-----------------------------------------------------------

Question:261 ->> Implement Queue Using Array

Objective:
Implement enqueue, dequeue and display.

Example:
Enqueue: 10 20 30
Dequeue: 10

Task:- Use front and rear variables.


Question:262 ->> Implement Queue Using STL

Objective:
Perform queue operations using STL.

Example:
Input: Push 10 20 30
Output: 10

Task:- Use queue<int>.


Question:263 ->> Print Front and Back

Objective:
Print first and last queue elements.

Example:
Queue: 10 20 30
Output: 10 30

Task:- Use front() and back().


Question:264 ->> Reverse a Queue

Objective:
Reverse all elements of a queue.

Example:
Input: 10 20 30
Output: 30 20 10

Task:- Use a stack.


Question:265 ->> Generate Binary Numbers

Objective:
Generate binary numbers from 1 to N.

Example:
Input: 5
Output: 1 10 11 100 101

Task:- Use a queue of strings.


Question:266 ->> Circular Queue

Objective:
Implement a circular queue.

Example:
Insert: 10 20 30
Delete: 10

Task:- Use modulo arithmetic.


Question:267 ->> First Non-Repeating Character

Objective:
Find the first non-repeating character in a stream.

Example:
Input: aabc
Output: a # b b

Task:- Use a queue and frequency array.


Question:268 ->> Implement Deque Using STL

Objective:
Perform insertion and deletion from both ends.

Example:
Input: Insert 10 20
Output: 10 20

Task:- Use deque<int>.


Question:269 ->> Sliding Window Maximum

Objective:
Find the maximum element in every window of size K.

Example:
Input: 8 1 3 -1 -3 5 3 6 7 K=3
Output: 3 3 5 5 6 7

Task:- Use a deque.


Question:270 ->> First Negative in Every Window

Objective:
Find the first negative number in every window.

Example:
Input: 5 -1 2 -3 4 5 K=2
Output: -1 -1 -3 -3 0

Task:- Use a queue or deque.


Question:271 ->> LRU Cache Basics

Objective:
Implement a cache that removes least recently used items.

Example:
Capacity: 2
Operations: Put 1, Put 2, Get 1, Put 3
Output: 1

Task:- Use list and unordered_map.


Question:272 ->> Queue Using Two Stacks

Objective:
Implement queue operations using two stacks.

Example:
Enqueue: 10 20 30
Dequeue: 10

Task:- Use two stacks.


Question:273 ->> Stack Using Two Queues

Objective:
Implement stack operations using two queues.

Example:
Push: 10 20 30
Pop: 30

Task:- Use two queues.


Question:274 ->> Interleave Queue Halves

Objective:
Interleave the first and second halves of a queue.

Example:
Input: 1 2 3 4
Output: 1 3 2 4

Task:- Use a queue and stack.


Question:275 ->> Reverse First K Queue Elements

Objective:
Reverse the first K elements of a queue.

Example:
Input: 5 1 2 3 4 5 K=3
Output: 3 2 1 4 5

Task:- Use a stack.


SECTION 6: TREES AND BST (276–290)
-----------------------------------------------------------

Question:276 ->> Create a Binary Tree

Objective:
Create a binary tree using nodes.

Example:
       1
      / \
     2   3

Task:- Create a Node structure with left and right pointers.


Question:277 ->> Preorder Traversal

Objective:
Print nodes in root-left-right order.

Example:
Tree: 1, 2, 3
Output: 1 2 3

Task:- Use recursion.


Question:278 ->> Inorder Traversal

Objective:
Print nodes in left-root-right order.

Example:
Tree: 1, 2, 3
Output: 2 1 3

Task:- Use recursion.


Question:279 ->> Postorder Traversal

Objective:
Print nodes in left-right-root order.

Example:
Tree: 1, 2, 3
Output: 2 3 1

Task:- Use recursion.


Question:280 ->> Level Order Traversal

Objective:
Print nodes level by level.

Example:
Tree:
    1
   / \
  2   3

Output: 1 2 3

Task:- Use a queue.


Question:281 ->> Count Tree Nodes

Objective:
Count total nodes in a binary tree.

Example:
Tree: 1, 2, 3
Output: 3

Task:- Use recursion.


Question:282 ->> Find Tree Height

Objective:
Find the height of a binary tree.

Example:
Tree with 3 levels
Output: 3

Task:- Use recursion.


Question:283 ->> Count Leaf Nodes

Objective:
Count nodes having no children.

Example:
Tree:
    1
   / \
  2   3

Output: 2

Task:- Check whether left and right are null.


Question:284 ->> Search in Binary Tree

Objective:
Search for a value in a binary tree.

Example:
Tree: 1, 2, 3
Search: 3
Output: Found

Task:- Use recursion or traversal.


Question:285 ->> Insert in BST

Objective:
Insert a value into a Binary Search Tree.

Example:
BST: 10 5 15
Insert: 12

Task:- Follow BST ordering rules.


Question:286 ->> Search in BST

Objective:
Search for an element in a BST.

Example:
BST: 10 5 15
Search: 15
Output: Found

Task:- Compare values and move left or right.


Question:287 ->> Find Minimum in BST

Objective:
Find the smallest value in a BST.

Example:
BST: 10 5 15 2
Output: 2

Task:- Move to the leftmost node.


Question:288 ->> Find Maximum in BST

Objective:
Find the largest value in a BST.

Example:
BST: 10 5 15 20
Output: 20

Task:- Move to the rightmost node.


Question:289 ->> Validate BST

Objective:
Check whether a binary tree follows BST rules.

Example:
Valid BST
Output: True

Task:- Use valid minimum and maximum ranges.


Question:290 ->> Lowest Common Ancestor in BST

Objective:
Find the lowest common ancestor of two BST nodes.

Example:
BST: 20 10 30 5 15
Nodes: 5 and 15
Output: 10

Task:- Use BST ordering properties.


SECTION 7: GRAPH BASICS (291–300)
-----------------------------------------------------------

Question:291 ->> Represent Graph Using Adjacency Matrix

Objective:
Represent a graph using a matrix.

Example:
Input: 3 vertices, edge 0-1
Output:
0 1 0
1 0 0
0 0 0

Task:- Create a 2D matrix.


Question:292 ->> Represent Graph Using Adjacency List

Objective:
Represent a graph using adjacency lists.

Example:
Input: 3 vertices, edge 0-1
Output:
0: 1
1: 0
2:

Task:- Use vector<vector<int>>.


Question:293 ->> Graph BFS Traversal

Objective:
Traverse a graph using Breadth First Search.

Example:
Graph: 0-1-2
Start: 0
Output: 0 1 2

Task:- Use a queue and visited array.


Question:294 ->> Graph DFS Traversal

Objective:
Traverse a graph using Depth First Search.

Example:
Graph: 0-1-2
Start: 0
Output: 0 1 2

Task:- Use recursion or stack.


Question:295 ->> Count Connected Components

Objective:
Count connected components in a graph.

Example:
Graph with 2 separate groups
Output: 2

Task:- Use DFS or BFS.


Question:296 ->> Detect Cycle in Undirected Graph

Objective:
Check whether an undirected graph contains a cycle.

Example:
Graph containing a cycle
Output: Cycle Detected

Task:- Use DFS with parent tracking or DSU.


Question:297 ->> Detect Cycle in Directed Graph

Objective:
Check whether a directed graph contains a cycle.

Example:
Graph containing a directed cycle
Output: Cycle Detected

Task:- Use DFS recursion stack or topological sorting.


Question:298 ->> Topological Sort

Objective:
Print a topological ordering of a DAG.

Example:
Graph: 0 -> 1 -> 2
Output: 0 1 2

Task:- Use DFS or Kahn's algorithm.


Question:299 ->> Shortest Path Using BFS

Objective:
Find shortest distances in an unweighted graph.

Example:
Graph: 0-1-2
Start: 0
Output: 0 1 2

Task:- Use BFS and a distance array.


Question:300 ->> Dijkstra's Algorithm

Objective:
Find shortest distances from a source in a weighted graph with non-negative edge weights.

Example:
Graph: 0 --4--> 1
Start: 0
Output: Distance to 1 = 4

Task:- Use priority_queue and a distance array.


===========================================================
END OF QUESTIONS 201–300
===========================================================
*/
