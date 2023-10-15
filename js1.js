function dark(){
    var ele = document.body;
    ele.classList.toggle("darkmode") 
    var icon = document.querySelector("#ico");
    icon.classList.replace("fa-solid fa-toggle-off","fa-solid fa-toggle-on");
}

function changeic(){
}

function redirect(){
    window.location.href("book.html");
}