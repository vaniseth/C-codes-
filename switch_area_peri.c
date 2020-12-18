#include<stdio.h>
int main()
{
  float r, area,peri, base, height, s1, s2, l;
  int choice;

  printf("1. Area and perimeter of a circle\n");
  printf("2. Area and perimeter of a triangle\n");
  printf("3. Area and perimeter of a square\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch(choice)
  {
    case 1:
      printf("Enter the radius of the circle: \n");
      scanf("%f",&r);
      area = 3.14 * r * r;
      peri = 2 * 3.14 * r;
      printf("\nArea of circle = %.2f",area);
      printf("\nPerimeter of circle = %.2f", peri);
      break;

    case 2:
      printf("Enter the base, height, side1, side2 of the triangle:\n ");
      scanf("%f %f",&base, &height, &s1, &s2);
      area = 0.5 * base * height;
      peri = base + s1 +s2;
      printf("\nArea of triangle = %.2f",area);
      printf("\nPerimeter of triangle = %.2f", peri);
      break;

    case 3:
      printf("Enter the length of the square:\n ");
      scanf("%f %f",&l);
      area = l*l;
      peri = 4*l;
      printf("\nArea of circle = %.2f",area);
      printf("\n Perimeter of square = %.2f", peri);
      break;

    default:
      printf("exit");
  }

  return 0;
}