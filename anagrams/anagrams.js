function isAnagram(str1, str2) {
  if (str1.length !== str2.length) {
    return false;
  }

  const lookup = {};
  for (const elem of str1) {
    lookup[elem] ? lookup[elem]++ : lookup[elem] = 1;
  }

  console.log(lookup);

  for (const elem of str2) {
    if (!lookup[elem]) {
      return false;
    } else {
      lookup[elem]--;
    }
  }

  return true;
}

console.log(isAnagram('', ''));                             // true
console.log(isAnagram('aaz', 'zza'));                       // false
console.log(isAnagram('anagram', 'nagaram'));               // true
console.log(isAnagram('rat', 'car'));                       // false
console.log(isAnagram('awesome', 'awsom'));                 // false
console.log(isAnagram('qwerty', 'qeywrt'));                 // false
console.log(isAnagram('texttwisttime', 'timetwisttext'));   // true