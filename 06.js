//write function which return the second largest number in the array

//duplicate will be second largest
function secondLargest(arr) {
  if (arr.length < 2) {
    return "array size should be length of two";
  }
  let first = -Infinity;
  let second = -Infinity;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > first) {
      second = first;
      first = arr[i];
    } else if (arr[i] > second) {
      second = arr[i];
    }
  }
  return [first, second];
}

//No duplicate will be second largest
function secLarge(arr) {
  if (arr.length < 2) {
    return "array size should be length of two";
  }
  let first = -Infinity;
  let second = -Infinity;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > first) {
      second = first;
      first = arr[i];
    } else if (arr[i] != first && arr[i] > first) {
      second = arr[i];
    }
  }
  return [first, second];
}

let arr = [4, 19, 0, 2, 8, 17, 1];
let result = secondLargest(arr);
// let result = secLarge(arr);
console.log(result);
