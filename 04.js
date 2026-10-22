// write a function which return the smallest number in array 


function smallestNum(arr){
    let small=arr[0];
    for(let i=0;i<arr.length;i++){
        if(small>arr[i]){
            small=arr[i]
        }
    }
    return small;
}
let arr=[-100000,20,-5,-1000,0, 50 ,0];
let result=smallestNum(arr);
console.log(result)