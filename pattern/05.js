// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

function pattern(n){
    for(let i=5;i>0;i--){
        let row=""
        for(let j=0;j<i;j++){
            row+= j+1 +" ";
        }
        console.log(row)
    }
}
// pattern(5)


function pattern2(n){
    for(let i=0;i<n;i++){
        let row="";
        for(let j=0;j<n-i;j++){
            row+=j+1 +" ";
        }
        console.log(row)
    }
}
pattern2(7)