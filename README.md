<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width, intitial-scale=1.0">
	<title> Document</title>
	<style>
		body{background-color:grey;}
		p{color: red;}
	</style>
</head>
<body>
	<p id="akapit"> JasnyKot&#9788;</p>

	<h3>	&#9788; &#x263C;	W tekstologii – utrwalony (najczęściej w postaci pisemnej) ciąg znaków językowych, przyjmowany jako niezmienny i niemogący podlegać przemianom w procesie komunikacji językowej.
tekst w semiotyce – każdy wytwór kultury (tekst kultury) stanowiący całość uporządkowaną według określonych reguł, np. dzieło sztuki, ubiór, zachowanie realizujące jakiś utrwalony wzorzec kulturowy.
tekst w językoznawstwie strukturalistycznym – przedmiot konkretny służący do przekazywania informacji na bazie rozumianego abstrakcyjnie języka; także fizyczny wytwór sytuacji komunikacyjnej.
tekst w muzyce – słowa utworu muzycznego, np. piosenki lub arii.
tekst spójny – koherentna np. pod względem sema</h3>
	<button OnClick="zmiana()">zmiania motywu</button>
				
		<script>
        function zmianakoloru(color) {
        document.body.style.background = color;
		}
        function zmiana() {
            zmianakoloru('white');
            document.getElementById.innerHTML = "Background Color changed";
        }
	</script>
</body>
</html>
