# CIS 361 Final 
The degree of a node in a graph (https://en.wikipedia.org/wiki/Degree_%28graph_theory%29) is defined as the number of edges incident to a node.

If a graph has n nodes, the possible values for the degrees of its nodes range between 0 (the node is completely disconnected) to n-1 (the node is connected to all other nodes in the graph).

The degree of a node can calculated as the number of 1s in its row in the adjacency matrix minus one (the edge from the node to itself should not be counted).

Your task will be to write a C program that reads a graph file (as in the previous homeworks) and produces the maximum degree of a node for that graph.

Produce a plot, as in homework 6, that indicates how many graphs have maximum degree 0,1,2,3,4,5 and 6. Submit the source code for your C program and the scripts you used to generate the plot.