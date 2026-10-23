// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1
// 1 0 1 0 1 0


function pattern (n){
    for(let i=0;i<n;i++){
        let row="";
        for(let j=0;j<=i;j++){
            if(j%2!=0){
                row+="0 "
            }else{
                row+="1 "
            }
        }
        console.log(row)
    }
}

pattern(6)