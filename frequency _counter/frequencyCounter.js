/*
* Works for sorted arrays only!!!
*/

function same(arr1, arr2) {
  if (arr1.length !== arr2.length) {
    console.log('different length');
    return false;
  }

  let frequencyCounter1 = {};
  let frequencyCounter2 = {};

  for (let item of arr1) {
    frequencyCounter1[item] = (frequencyCounter1[item] || 0) + 1;
  }

  for (let item of arr2) {
    frequencyCounter2[item] = (frequencyCounter2[item] || 0) + 1;
  }

  console.info('frequencyCounter1', frequencyCounter1);
  console.info('frequencyCounter2', frequencyCounter2);

  for (let key in frequencyCounter1) {
    if (!(key ** 2 in frequencyCounter2)) {
      return false;
    }

    if(frequencyCounter2[key ** 2] !== frequencyCounter1[key]) {
      return false;
    }
  }
  return true;
}

console.log(same([1,2,3,4], [1,4,9,16])); // true
console.log(same([1,2,3], [1,4,9, 16]));  // false
console.log(same([2, 11, 9], [1, 3, 5])); // false