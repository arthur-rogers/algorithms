function findNumbersForZeroSum(arr: Array<number>): Array<number> | undefined {
  let begin = 0;
  let end = arr.length - 1;
  while(begin < end) {
    let sum = arr[begin] + arr[end];
    if(sum === 0) {
      return [arr[begin], arr[end]];
    } else if (sum > 0) {
      end--;
    } else {
      begin++;
    }
  }
}

console.log(findNumbersForZeroSum([-4, -3, -2, -1, 0, 1, 2, 3, 10]));
console.log(findNumbersForZeroSum([-4.2, -3.9, -2.1, -1.0, 0, 1.4, 2.5, 3.9, 4.8]));
console.log(findNumbersForZeroSum([-2.25, -1.33, -0.04, 0, -1.29, 3.30]));