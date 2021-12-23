function result(){

    // alert("Hello")
    let turboc = document.myForm.turboc.value;
    console.log(turboc);
    let java = document.myForm.java.value;
    console.log(java);
    let js = document.myForm.javaScript.value;
    console.log(js);



    if(turboc <= 49 && (java <= 49 && js <= 49)) {

        document.write("<h1>This student is failed.</h1>");

    }else if (turboc <= 49 && (java <= 49 || js <= 49)){

        document.write("<h1>This student is failed.</h1>");

    }else if (turboc <= 49 || (java <= 49 || js <= 49)){

        document.write("<h1>This student is failed.</h1>");
    
    }else if (turboc >= 81 && (java >= 81 && js >= 81)) {

        document.write("<h1>This student is passed with colors.</h1>");
    
    }else if (turboc <= 80 && java <= 80 && js <= 80 ){

        document.write("<h1>This student is passed.</h1>");

    }else if (turboc >= 81 || (java >= 81 && js >= 81)) {

        document.write("<h1>This student is passed with colors.</h1>");
    
    }else if (java >= 81 || (turboc >= 81 && js >= 81)) {

        document.write("<h1>This student is passed with colors.</h1>");
    
    }else if (js >= 81 || (turboc >= 81 && java >= 81)) {

        document.write("<h1>This student is passed with colors.</h1>");
    
    }else {

        document.write("<h1>This student is not found!.</h1>");

    }

}

 
