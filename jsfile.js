let string = "";
let buttons = document.querySelectorAll('.button');
console.buttons
Array.from(buttons).forEach((item)=>{
    buttons.addEventListene('click', (e)=>{
        console.log(e.target)
        string = string + e.target.innerHTML;
    })
})


alert("high")