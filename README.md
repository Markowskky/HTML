zmiana tłą funkcja const




<head>
<title> Document</title> 
<style> body{background-color:grey;} p{color: red;} </style>
</head>

<body id="akapit">
<h1> JasnyKot☼   </h1>
<h3> &#9788; &#x263C;	W tekstologii – utrwalony (najczęściej w postaci pisemnej) 
	ciąg znaków językowych, przyjmowany jako niezmienny i niemogący podlegać przemianom 
	w procesie komunikacji językowej. tekst w semiotyce – każdy wytwór kultury 
	(tekst kultury)  –  – słowa utworu muzycznego, np. piosenki lub arii.
	tekst spójny – koherentna np. pod względem sema</h3>

	<!--GUZIKI-->
	<button OnClick="zmiana()"> &#9788</button>
	<button OnClick="zmiana2()">&#9789</button>
			
	<script>
    
	const element = document.getElementById('akapit');

	
	// zmiana tła
	function zmianakoloru(color) {
    document.body.style.background = color;
	}

	//słonce
    function zmiana() {
        zmianakoloru('cyan');
        element.innerHTML;element.style.color="Magenta";
    }

	//ksiezyc
	function zmiana2() {
        zmianakoloru('grey');
        element.innerHTML;element.style.color="Black";
	}

</script>

</body>
</html>
