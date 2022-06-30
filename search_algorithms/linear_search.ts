function linearSearch<Type>(arr: Type[], val: Type): number {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === val) return i;
  }

  return -1;
}


console.log(linearSearch([1, 2, 3, 14, 92, 4, 12, 77], 14));    // 3
console.log(linearSearch(["some", "basic", "words"], "words")); // 2
console.log(linearSearch([0.22, 15.78, 29.1, 54,2], 15.78));    // 1
