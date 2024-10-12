#include <stdio.h>
#include <math.h>
void printn(int n) { printf("%d ", n); }
void q1();
void q2();
void q3();
void q4();
void q5();
void q6();
void q7();
void q8();
void q9();
void q10();
void q11();
void fun(int n)
{
  int v = 4, d = 3;
  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
      printf("1 ");
    else if (i == 2)
      printf("4 ");
    else
    {
      printf("%d ", v + d + i);
      int temp = v + d + i;
      d = (d + i);
      v = temp;
    }
  }
  printf("\n");
}
int n = 100;

int main()
{
  // q1();
  // q2();
  // q3();
  // q4();
  // q5();
  // q6();
  // q7();
  // q8();
  q9();
  fun(n);
  // q10();
  // q11();
  return 0;
}

void q1()
{
  for (int i = 1; i <= n; i++)
  {
    printn(i);
  }
  printf("\n");
}

void q2()
{
  for (int i = -1 * n; i <= n; i++)
  {
    printn(i);
  }
  printf("\n");
}

void q3()
{
  for (int i = 1; i <= n; i++)
  {
    printn(i * 2);
  }

  printf("\n");
}
void q4()
{
  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      printn(i);
      continue;
    }
    printf("%c%d ", ((i % 2 == 0) ? '+' : '-'), i);
  };
  printf("\n");
}
void q5()
{
  int temp = n;

  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      printn(temp);
      continue;
    }
    if (i % 2 == 0)
      (temp -= 2);
    else
      (temp += 3);
    printn(temp);
  }
  printf("\n");
}
void q6()
{
  for (int i = 1; i < n; i++)
  {
    printn(i * 7);
  }
  printf("\n");
}
void q7()
{
  for (int i = 1; i <= n; i++)
  {
    printn(i * i);
  }

  printf("\n");
}
void q8()
{
  int temp = 0;
  for (int i = 1; i <= n; i++)
  {
    temp += i;
    printn(temp);
  }
  printf("\n");
}
void q9()
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += (i * (i + 1)) / 2;
    printn(sum);
  }
  printf("\n");
}

void q10()
{
  int prev = 0, curr = 1, sum = 0;
  for (int i = 1; i <= n; i++)
  {
    printn(prev);
    sum = prev + curr;
    prev = curr;
    curr = sum;
  }

  printf("\n");
}
int is_prime(int a)
{
  if (a == 0 || a == 1)
    return 0;
  for (int i = 2; i <= (int)sqrt(a); i++)
  {
    if (a % i == 0)
      return 0;
  }
  return 1;
}
void q11()
{
  int i = 1, count = 0;
  while (count != n)
  {
    if (is_prime(i))
    {
      printn(i);
      count++;
    }
    i++;
  }
  printf("\n");
}