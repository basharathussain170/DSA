// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 


function printPattern(n){
    if(n<=0){
        return console.log("give greater tha 0")
    }
    for(let i=1;i<=n;i++){
        let row="";
        for(let j=1;j<=i;j++){
            row+=j+" ";
        }
        console.log(row)
    }
}
// printPattern(5)


function printPattern2(n){
    for(let i=0;i<n;i++){
        let row="";
        for(let j=0;j<=i;j++){
            row+=j+1 + " ";
        }
        console.log(row)
    }
}
printPattern2(10)