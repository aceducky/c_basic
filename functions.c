#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void sayResult(char *txt, int n, int res) {
  printf("%d is %s %s\n", n, (res ? "" : "not"), txt);
}
int len_of_number(int n) {
  int count = 0;
  while (n) {
    n /= 10;
    count++;
  }
  return count;
}

int factorial(int n) {
  if (n == 0 || n == 1)
    return 1;
  return n * factorial(n - 1);
}

void sayIsArmstrong(int n) {
  int temp = n;
  int len = len_of_number(temp);
  int sum = 0;
  while (temp) {
    sum += (int)pow(temp % 10, len);
    temp /= 10;
  }
  bool res = sum == n;
  sayResult("Armstrong", n, res);
}

void sayIsPerfect(int n) {
  bool res = false;
  if (n < 1) {
    res = false;
  } else if (n <= 2) {
    res = true;
  } else {
    int sum_of_factors = 0;
    for (int i = 1; i < n; i++) {
      if (n % i == 0) {
        sum_of_factors += i;
      }
    }
    res = sum_of_factors == n;
  }
  sayResult("Perfect", n, res);
}

void sayIsStrong(int n) {
  bool res = false;
  if (n < 0) {
    res = false;
  } else if (n <= 2) {
    res = true;
  } else {
    int sum = 0;
    int temp = n;
    while (temp) {
      sum += factorial(temp % 10);
      temp /= 10;
    }
    res = sum == n;
  }
  sayResult("Strong", n, res);
}

void sayIsNeon(int n) {
  bool res = false;
  int sum = 0;
  int temp = (int)pow(n, 2);
  while (temp) {
    sum += temp % 10;
    temp /= 10;
  }
  res = sum == n;
  sayResult("Neon", n, res);
}
void sayIsAutomorphic(int n) {
  bool res = false;

  int last_digit_of_number = n % 10;
  int last_digit_of_square = ((int)pow(n, 2)) % 10;

  res = last_digit_of_number == last_digit_of_square;
  sayResult("Automorphic", n, res);
}

void sayIsSpy(int n) {
  bool res = false;
  int product = 1;
  int sum = 0;
  int temp = n;
  while (temp) {
    sum += temp % 10;
    product *= temp % 10;
    temp /= 10;
  }
  res = sum == product;
  sayResult("Spy", n, res);
}
void sayIsSunny(int n) {
  bool res = false;
  int num_plus_one = n + 1;
  res = sqrt(num_plus_one) == ((int)sqrt(num_plus_one));
  sayResult("Sunny", n, res);
}
void sayIsPronic(int n) {
  bool res = false;
  if (n == 1) {
    res = false;
  } else {
    for (int i = 1; i <= (int)sqrt(n); i++) {
      if (i * (i + 1) == n) {
        res = true;
        break;
      }
    }
  }
  sayResult("Pronic", n, res);
}

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  if (n == 2 || n == 3) {
    return true;
  }
  if (n % 2 == 0) {
    return false;
  }

  for (int i = 3; i <= (int)sqrt(n); i += 2) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int *getPrimes(int n) {
  int *primes = malloc(sizeof(int) * n);
  if (primes == NULL) {
    printf("getPrimes: Memory allocation error\n");
    return NULL;
  }

  primes[0] = 2;
  int num = 3, i = 1;
  while (i < n) {
    if (isPrime(num)) {
      primes[i] = num;
      i++;
    }
    num += 2;
  }
  return primes;
}

void printPrimesPattern(int n) {
  int primes_count = n * (n + 1) / 2;
  int *primes = getPrimes(primes_count);
  if (primes == NULL) {
    printf("printPrimesPattern: Memory allocation error\nCouldn\'t print the "
           "primes\n");
    return;
  }
  int k = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d ", primes[k++]);
    }
    printf("\n");
  }

  free(primes);
  primes = NULL;
}
int main() {
  sayIsArmstrong(153);
  sayIsArmstrong(555);
  sayIsPerfect(6);
  sayIsPerfect(5);
  sayIsStrong(145);
  sayIsNeon(9);
  sayIsNeon(5);
  sayIsAutomorphic(25);
  sayIsAutomorphic(7);
  sayIsSpy(1124);
  sayIsSpy(17);
  sayIsSunny(3);
  sayIsSunny(2);
  sayIsPronic(30);
  sayIsPronic(5);
  int n = 5;
  printPrimesPattern(n);

  return 0;
}
