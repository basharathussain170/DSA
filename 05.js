// write a function which return the second largest element from an array

function largestNum(arr){
    let firstLarge=[0];
    let secondLarge=[0];

    for(let i=0;i<arr.length;i++){
        if(arr[i]>firstLarge){
            firstLarge=arr[i]
        }
    }

    for(let i=0;i<arr.length;i++){
        if(arr[i]>secondLarge){
            if(arr[i]!=firstLarge){
                secondLarge=arr[i]
            }
        }
    }
    return secondLarge
}


let arr=[10,-20,30,-32308,-50,-200,10432,-4423,];
let result=largestNum(arr);
console.log(result)