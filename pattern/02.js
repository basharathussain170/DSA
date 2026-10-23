// write function that print the traingle

function triangle(n){
    if(n<=0){
        return console.log("please give greater number");
    }
    for(let i=0;i<n;i++){
        let row="";
        for(let j=0;j<=i;j++){
            row+="* ";
        }
        console.log(row)
    }
}

triangle(1)