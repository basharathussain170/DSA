// write a function that return the number of negative numbers in an array

function findNegative(arr){
    let totalNeg=[];
    for(let i=0;i<arr.length;i++){
        if(arr[i]<0){
            totalNeg.push(arr[i])
        }
    }
    return totalNeg;
}

let arr=[-1,20,-30,50,60,-2,-0];
// let arr=[1,20,+30,50,60,+2,+0];
// let result=findNegative(arr);
// console.log(result)


function totalNegative(arr){
    let totalNeg=0;
    for(let i=0;i<arr.length;i++){
        if(arr[i]<0){
            totalNeg++;
        }
    }
    return totalNeg;
}

let result=totalNegative(arr);
console.log(result)