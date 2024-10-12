#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// escape input %*type
// [^ch] take input until this character ch
// %n give length of input(chars) including spaces, enter key
// char ch[5];
// int len;
// scanf("%s%n",ch,&len)
void oneDimArray()
{
  char str1[100], str2[100], str3[100];

  printf("str1:");
  scanf("%[^.]%*c", str1);

  printf("str2:");
  scanf("%[^.]%*c", str2);

  printf("str3:");
  scanf("%[^.]", str3);

  printf("%s\n%s\n%s\n", str1, str2, str3);
}

void twoDimArray()
{
  char str[3][100];
  for (int i = 0; i < 3; i++)
  {
    scanf("%[^\n]%*c", str[i]);
  }
  for (int i = 0; i < 3; i++)
  {
    printf("%s\n", str[i]);
  }
}

void concat(char *s1, char *s2, int n1, int n2)
{
  char *res = malloc(sizeof(char) * n1 + n2);
  int i, j;
  for (i = 0; i < n1; i++)
    res[i] = s1[i];
  for (j = 0; j < n2; j++)
    res[i++] = s2[j];
  printf("%s", res);
  free(res);
}

void callConcat()
{
  char s1[] = "Hello";
  char s2[] = "World";
  int n1 = strlen(s1);
  int n2 = strlen(s2);
  concat(s1, s2, n1, n2);
}

void reverse(char *ch)
{
  if (*ch != '\0')
  {
    reverse(ch + 1);
  }
  printf("%c", *ch);
}

void callReverse()
{
  char ch[] = "1234567890";
  reverse(ch);
}

int main()
{
  // oneDimArray();
  // twoDimArray();
  // callConcat();
  callReverse();
  return 0;
}
