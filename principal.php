<!DOCTYPE html>
    <html>
       <head>
          <meta charset="utf-8">
          <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
           <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
           <link rel="stylesheet" type="text/css" href="style.css">
       </head>
    <body>
      <h1> LOGIN </h1>
      <center>
        <br> <br>
        <form action="valida.php" method="POST">

   <input type="text" placeholder="nome" name="nomedousuario"/><br>
   <input type="text" placeholder="data de nascimento" name="datadenascimento"/><br>
   <input type="text" id="email" placeholder="email" name="email"/><br>
   <input type="text" id="confirmação" placeholder="confirmar" name="cemail"/><br>
   <input type="submit" value="enviar" onclick="valida();return false;"/>
  </center>
  </form>
        <script>
            function valida(){
          
  if ( document.getElementById("email").value == document.getElementById("confirmação").value ) { 
     document.frm.submit(); 
     return true; 
    }
     else { 
       alert(" Os campos de email são inválidos"); 
     return false; 
    }
  }
    </script>
               
<!--===============================================================================================-->
  <script src="vendor/jquery/jquery-3.2.1.min.js"></script>
<!--===============================================================================================-->
  <script src="vendor/animsition/js/animsition.min.js"></script>
<!--===============================================================================================-->
  <script src="vendor/bootstrap/js/popper.js"></script>
  <script src="vendor/bootstrap/js/bootstrap.min.js"></script>
<!--===============================================================================================-->
  <script src="vendor/select2/select2.min.js"></script>
<!--===============================================================================================-->
  <script src="vendor/daterangepicker/moment.min.js"></script>
  <script src="vendor/daterangepicker/daterangepicker.js"></script>
<!--===============================================================================================-->
  <script src="vendor/countdowntime/countdowntime.js"></script>
<!--===============================================================================================-->
  <script src="js/main.js"></script>
        </body>
    </html>

