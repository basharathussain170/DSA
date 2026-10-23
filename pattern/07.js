// 0 0 0 0 *
// 0 0 0 * *
// 0 0 * * *
// 0 * * * *
// * * * * *


function pattern(n){
    for(let i=0;i<n;i++){
        let row="";
        for(let j=0;j<n-i-1;j++){
            row+="0"
        }
        for(let j=0;j<=i;j++){
            row+="*"
        }
        console.log(row)
    }
}
pattern(5)