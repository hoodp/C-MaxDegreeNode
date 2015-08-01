#include <stdio.h>

int main(int argc, char *argv[])
{

  // Stores the maximum degree value.
  int max = 0;

  // Get the size of the matrix.
  int nodes;
  scanf("%d", &nodes);

  // Starting looping through each row.
  int i, j;
  for (i = 0; i < nodes; i++) {

    // Stores the number of edges for the current node. 
    int edges = 0;

    // Start looping through each column.
    for (j = 0; j < nodes; j++) {

      // Get the value from the matrix.
      int value;
      scanf("%d", &value);
      
      // Check if edge is on the same node, and that an edge exists. 
      if (i != j && value == 1) {
	
	// Increment the number of edges.
	edges += 1;
      }
    }

    // Update the max if the number of edges for this node is greater 
    // than the current value.
    if (edges > max) 
      max = edges;
  }
  
  // Print the maximum degree. 
  printf("%d\n", max);
  return 0;
}
