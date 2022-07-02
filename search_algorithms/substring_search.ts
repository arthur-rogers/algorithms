function substringSearch(main_str: string, substr: string): number {
  let counter = 0;
  for (let i = 0; i < main_str.length; i++) {
    for (let j = 0; j < substr.length; j++) {
      if (substr[j] !== main_str[i + j]) break;
      if (j === substr.length - 1) counter++;
    }
  }
  return counter;
}

console.log(substringSearch("lorie lolalo", 'lo'));