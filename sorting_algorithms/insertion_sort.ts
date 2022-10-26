function insertionSort(arr: Array<number>): Array<number> {
  for (let i = 1; i < arr.length; i++) {
    let currentValue = arr[i];
    for(let j = i - 1; j >= 0; j--) {
      if(arr[j] > currentValue) {
        arr[j + 1] = arr[j];
        arr[j] = currentValue;
        console.table({ array: arr });
      }
    }
  }
  return arr;
}

const sorted = insertionSort([2, 1, 9, 76, 4]);
console.info(sorted);

//        j i 
// 2 1 9 76 4

// if (i < j)