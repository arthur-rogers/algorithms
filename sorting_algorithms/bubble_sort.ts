function bubbleSort(arr: Array<number>): Array<number> {
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        console.log(arr, arr[j], arr[j + 1]);
      }
    }
  }
  return arr;
}

bubbleSort([32, 15, 42, 90, 1, 10])