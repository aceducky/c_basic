#include <stdio.h>
#define ull unsigned long long
int n = 5;
void nl() { printf("\n"); }
void p1() {
  /*
  1
 12
123
1234
12345
  */
  for (int i = 1; i <= n; i++) {
    for (int space = 0; space < n - i; space++)
      printf(" ");

    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
}

void p2() {
  /*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
  */
  int t = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", t++);
    }
    nl();
  }
}
void p3() {
  /*
  1
  2 11
  3 12 20
  4 13 21 28
  5 14 22 29 35
  6 15 23 30 36 41
  7 16 24 31 37 42 46
  8 17 25 32 38 43 47 50
  9 18 26 33 39 44 48 51 53
  10 19 27 34 40 45 49 52 54 55
  */
  int d, k;
  for (int i = 1; i <= n; i++) {

    k = i;
    d = n;
    for (int j = 1; j <= i; j++) {
      (j == 1) ? printf("%d ", k) : printf("%d ", k);
      d--;
      k += d;
    }
    printf("\n");
  }
}

void p4() {
  for (int i = 1; i <= n; i++) {
    for (int space = 0; space < n - i; space++) {
      printf(" ");
    }

    for (int j = 1; j <= i; j++) {
      if (j == 1 || j == i || i == n)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}

void p5(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      printf(" ");
    }

    printf("/");
    if (i == n) {
      for (int j = 1; j <= 2 * (i - 1); j++) {
        printf("_");
      }
    } else {
      for (int j = 1; j <= 2 * (i - 1); j++) {
        printf(" ");
      }
    }
    printf("\\\n");
  }
}
void p6() {
  int i, j;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      printf(" ");
    }

    printf("*");
    if (i == n) {
      for (int j = 1; j <= 2 * (i - 1); j++) {
        printf("*");
      }
    } else {
      for (int j = 1; j <= 2 * (i - 1); j++) {
        printf(" ");
      }
    }
    printf("*\n");
  }

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n * 2; j++) {
      if (j == 1 || j == n * 2 || (i >= 7 && (j == 6 || j == 14))) {
        printf("*");
      } else if (i == n || (i == 6 && j >= 6 && j <= 14)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}

void pascal() {
  ull coeff;
  for (int i = 1; i <= n; i++) {
    for (int space = 1; space <= n - i; space++) {
      printf("  ");
    }

    coeff = 1;

    for (int j = 1; j <= i; j++) {
      printf("%3llu ", coeff);
      coeff = coeff * (i - j) / j;
    }
    printf("\n");
  }
}
void p7()
{
  /*
    11111
    1   1
    1   1
    1   1
    11111
  */
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if ((i == 1 || i == n) || (j == 1 || j == n))
      {
        printf("1");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

void p8()
{
  /*
  1
  6 2
  10 7 3
  13 11 8 4
  15 14 12 9 5
  */
  int s = 1, k = 1, d;
  for (int i = 0; i < n; i++)
  {
    d = n - i;
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", k);
      k = k - d;
      d++;
    }
    s = s + n - i;
    k = s;
    printf("\n");
  }
}

void p9()
{
  int k, s, d = 0;
  s = k = n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", k);
      k = k - d;
      d++;
    }
    d = n - i;
    s = s + d - 1;
    k = s;
    printf("\n");
  }
}

void p10()
{
  for (int i = 0; i < n; i++)
  {
    for (int space = 1; space < n - i; space++)
    {
      printf("  ");
    }

    for (int j = 1; j <= (2 * i + 1); j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}

int min(int x, int y)
{
  return (x < y) ? x : y;
}
int max(int x, int y)
{
  return (x > y) ? x : y;
}
void p11()
{
  int i, j;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      printf("%d ", min(i, j));
    }
    printf("\n");
  }
  
}

int main() {
  //   p1();
  //   p2();
  //   p3();
  // p4();
  // p5(10);
  p6();
  //  pascal();
  p7();
  p8();
  p9();
  p10();
  p11();
  return 0;
}
