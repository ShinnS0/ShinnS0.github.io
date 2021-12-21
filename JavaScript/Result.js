 
// let Result = document.getElementsByClassName(".input");
function MyFunction() {
   let x = document.getElementById("input").submit();

 if (x > 50) {
     document.write('This Student is passed');
     }else if (x <50) {
     document.write('This student is failed.');
 }else {
     document.write('The student is not found');
 }
}