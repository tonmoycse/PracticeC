#include <stdio.h>
int sum(int x, int y)
{
  return x + y;
}
int main()
{
  int x, y;
  printf("Enter x and y\n");
  scanf("%d %d", &x, &y);
  printf("Sum : %d", sum(x, y));
  return 0;
}