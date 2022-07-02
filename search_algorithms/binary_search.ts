function binarySearch<Type>(arr: Array<Type>, val: Type): number {
  let begin = 0;
  let end = arr.length - 1;
  let middile = Math.floor((begin + end) / 2);
  while (arr[middile] !== val && begin < end) {
    if (val < arr[middile]) end = middile - 1;
    else begin = middile + 1;
    middile = Math.floor((begin + end) / 2);
  }

  return arr[middile] === val ? middile : -1;
}

console.log(binarySearch([1, 2, 3, 4, 5, 6, 7], 6));
console.log(binarySearch([1.22, 3.15, 4.22, 5.57, 8.99, 10.22], 4.22));
console.log(binarySearch([1.22, 3.15, 4.22, 5.57, 8.99, 10.22], 0.02));
