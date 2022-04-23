<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>031921</title>
</head>
<body>
  <h1 id="resultText"></h1>
  <script>
    
    let response = prompt("Can you be my girlfriend? oo o hindi");
    let outputText = "";
    
    if (response=="oo"){
      outputText = "Date tayo sa Saturday!";
    }else if(response=="hindi"){
      outputText = "sorry ganto lang ako";
    }else{
      outputText = "HAHAHAHAAHA!!";
    }
    
    document.getElementById("resultText").innerHTML = outputText;
  </script>
</body>
</html>                                                                                                                                                                                                       
