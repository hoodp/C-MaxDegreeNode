#include <stdio.h>

int main(int argc, char *argv[])
{

  // stores the maximum degree value
  int max = 0;

  // get the size of the matrix 
  int nodes;
  scanf("%d", &nodes);
  printf("Size: %d\n", nodes);

  // starting looping through each row
  int i, j;
  for (i = 0; i < nodes; i++) {
    printf("%d: ", i);
    int edges = 0;
    // start looping through each column
    for (j = 0; j < nodes; j++) {
      int value;
      scanf("%d", &value);
      printf("%d ", value);
      if (i != j && value == 1) {
	edges++;
	/*int value;
	scanf("%d", &value);
	printf("%d ", value);*/
	
      }
    }
    if (edges > max) 
      max = edges;
    printf(": %d\n", max);
  }
  printf("Max: %d\n", max);
  return 0;
}
