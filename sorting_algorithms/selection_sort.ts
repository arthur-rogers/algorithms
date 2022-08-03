function selectionSort(arr: Array<number>): Array<number> {
  for (let i = arr[0]; i < arr.length; i++) {
    let smallest = i;
    for (let j = i; j < arr.length; j++) {
      if (arr[smallest] > arr[j]) smallest = j;
    }
    let temp = arr[smallest];
    arr[smallest] = arr[i];
    arr[i] = temp;
  }
  return arr;
}

console.log(selectionSort([1, 2, 5, 9, 3]));