/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */

#include <stdio.h>
struct Point
{
  int x;
  int y;
}
  point1,point2,new_point;
  int main()
{
  printf("Enter the first point(x1,y1) :");
  scanf("%d,%d",&point1.x,&point1.y);
  printf("Enter the second point(x2,y2) :");
  scanf("%d,%d",&point2.x,&point2.y);
  new_point.x=point1.x+point2.x;
  new_point.y=point1.y+point2.y;
  printf("\nnew point after addition\n");
  printf("(%d,%d)\n",new_point.x,new_point.y);
}
