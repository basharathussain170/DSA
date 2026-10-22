// write a function that returns the largest number in an array

function largestNum(arr){
    let large=arr[0];
    for(let i=0;i<arr.length;i++){
        if(arr[i]>large){
            large=arr[i]
        }
    }
    return large;
}
let arr=[-2,20,150,30,-5];
let result=largestNum(arr);
console.log(result)
