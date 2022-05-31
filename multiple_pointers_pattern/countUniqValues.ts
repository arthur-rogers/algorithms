function countUniqueValues<Type>(arr: Array<Type>): number {
    if (arr.length === 0) {
      return 0;
    }
    // Using sort method here since it's not about sorting algorithms
    arr.sort();
    let i = 0;
    for(let elem of arr) {
      if (elem !== arr[i]) {
        arr[++i] = elem;
      }
    }
    return i + 1;
}

console.log(countUniqueValues([]));                                          // 0
console.log(countUniqueValues([1]));                                         // 1
console.log(countUniqueValues([1, 1, 1, 2, 3, 3, 3, 4]));                    // 4
console.log(countUniqueValues([1.11, 1.12, 1.11, 1.11, 2.35, 9.99, 2.35]));  // 4
console.log(countUniqueValues(['a', 'a', 'b', 'c']));                        // 3
console.log(countUniqueValues(["sample", "sample", "test", "test", "yo"]));  // 3