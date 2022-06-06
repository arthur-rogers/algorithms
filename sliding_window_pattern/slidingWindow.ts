function maxSubarraySum(arr: Array<number>, amount: number): number | null {
  if (arr.length === 0) {
    return null;
  }

  let max_sum: number = 0;
  let temp_sum: number = 0;
  for(let i = 0; i < amount; i++) {
    max_sum += arr[i];
  }
  temp_sum = max_sum;
  for (let i = amount; i < arr.length; i++) {
    temp_sum = temp_sum - arr[i - amount] + arr[i];
    max_sum = temp_sum > max_sum ? temp_sum : max_sum;
  }

  return max_sum;
}


console.info(maxSubarraySum([1, 2, 5, 2, 8, 1, 5], 2)); //10
console.info(maxSubarraySum([1, 2, 5, 2, 8, 1, 5], 4)) // 17
console.info(maxSubarraySum([4, 2, 1, 6], 1));  //6
console.info(maxSubarraySum([], 4)); //null