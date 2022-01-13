let humberger = document.querySelector(".humberger");
let navlink = document.querySelector(".nav-link");
let links = document.querySelectorAll(".nav-link li");
// let openlink = document.querySelector(".nav-link.open");


humberger.addEventListener('click', function (){
    navlink.classList.toggle("open");
    links.forEach(function (links) {
            links.classList.toggle("fade");
        });
    });

