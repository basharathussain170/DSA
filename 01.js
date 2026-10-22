// Write  a function that searches an element in an array and returns its index if found, or -1 if not found.

function findIndex(el, arr) {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === el) {
      return i;
    }
  }
  return -1;
}

let arr = [10, 20, 4, 5, -2, 40];
let result = findIndex(-2, arr);
console.log(result);
