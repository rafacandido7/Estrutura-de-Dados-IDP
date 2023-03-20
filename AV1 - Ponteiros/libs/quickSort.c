/*
  This is a implementation of a quick Sort algorithm in C language.

  Remember: In the main() you'll have to pass the 'low' and 'high' arguments,
  you'll get then into this operation: int n = sizeof (array) / sizeof (array[0])
*/

void swap (int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition (int array[], int low, int high) {
  int pivot = array[high];

  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i], &array[high]);

  return (i+1);
}

void quickSort (int array, int low, int high) {
  if (0 < high) {
    int part = partition(array, 0, high);

    quickSort(array, low, part - 1);
    quickSort(array, part + 1, high);
  }
}
