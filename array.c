#include <stdio.h>
#define ull unsigned long long
void nl() { printf("\n"); }
void printArray(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  nl();
}
void reverse(int *arr, int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int sum(int *arr, int n) {
  int _sum = 0;
  for (int i = 0; i < n; i++) {
    _sum += arr[i];
  }
  return _sum;
}
int min(int *arr, int n) {
  int _min = arr[0];
  for (int i = 0; i < n; i++) {
    if (_min > arr[i])
      _min = arr[i];
  }
  return _min;
}
int max(int *arr, int n) {
  int _max = arr[0];
  for (int i = 0; i < n; i++) {
    if (_max < arr[i])
      _max = arr[i];
  }
  return _max;
}
int findIndex(int *arr, int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key)
      return i;
  }
  return -1;
}
void search_key(int *arr, int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      printf("Key found at %d", i);
      return;
    }
  }
  printf("Key not found :P");
}

void sum_of_2_arrays(int *arr1, int *arr2,
                     int n) { // assume length of both arrays are equal
  int sum_array[n];
  for (int i = 0; i < n; i++) {
    sum_array[i] = arr1[i] + arr2[i];
  }
  printArray(sum_array, n);
}
void odds_after_evens(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      printf("%d ", arr[i]);
    }
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      printf("%d ", arr[i]);
    }
  }
}

void delete(int *arr, int n, int el) {
  int index = findIndex(arr, n, el), i;
  if (index == -1) {
    printf("%d not found\n.Can\'t delete element\n", el);
    return;
  }
  if (index == n - 1) {
    arr[index] = 0;
    return;
  }
  for (i = index; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[i] = 0;
}

void rotateRight(int *arr, int n, int k) {
  k %= n;

  reverse(arr, 0, n - 1);
  reverse(arr, 0, k - 1);
  reverse(arr, k, n - 1);
}
void rotateLeft(int *arr, int n, int k) {
  k %= n;
  reverse(arr, 0, k - 1);
  reverse(arr, k, n - 1);
  reverse(arr, 0, n - 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  ull n = (sizeof arr / sizeof arr[0]);
  //   printf("Max: %d", max(arr, n));
  //   printf("Min: %d", min(arr, n));
  //   printf("Sum: %d", sum(arr, n));
  // int arr2[] = {5, 4, 3, 2};
  // ull n2 = (sizeof arr2 / sizeof arr2[0]);
  // int key = 3;
  // search_key(arr2, n2, key);
  // nl();
  // int arr3[] = {1, 2, 3, 4};
  // sum_of_2_arrays(arr2, arr3, n2);
  // odds_after_evens(arr, n);
  // int el = 3;
  // printArray(arr, n);
  // delete (arr, n, el);
  printf("Og\n");
  printArray(arr, n);
  int k = 3;
  rotateRight(arr, n, k);
  printf("Right rotate\n");
  printArray(arr, n); // 5671234
  int arr2[] = {1, 2, 3, 4, 5, 6, 7};
  ull n2 = (sizeof arr / sizeof arr[0]);
  k = 2;
  rotateLeft(arr2, n2, k); // 3456712
  printf("Rotate left\n");
  printArray(arr2, n2);
  return 0;
}
