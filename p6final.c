#include<stdio.h>
void input_string(char *a)
{
  printf("Enter the String: ");
  scanf("%s", a);
}
int str_reverse(char *a)
{
  int t=0;
  for(int i =0; a[i]!='\0';i++)
    {
      t++;
    }
  printf("The length of The String is %d\n", t);
  return t;
}
void output(char *a, char reversea)
{
  printf("The reversed String is:\t");
  for(int i = reversea-1;i>=0;i--)
    {
      printf("%c", a[i]);
    }
  printf("\n");
}
int main()
{
  char a[100];
  int t;
  char reversea;
  input_string(a);
  reversea = str_reverse(a);
  output(a,reversea);
  return 0;
}