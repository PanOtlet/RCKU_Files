/*
** Autor:Konrix
** @copyright
** Data: 04.03.2008
*/
//Do random//
var Tx=8 + 1

// new array//
var H=new Array()

//wartosci 'H'//
H[0]="1_1"
H[1]="1_2"
H[2]="1_3"

H[3]="2_1"
H[4]="2_2"
H[5]="2_3"

H[6]="3_1"
H[7]="3_2"
H[8]="3_3"

var RandomNum=H[(Math.floor(Math.random() * Tx))]

var n=0
var m=5




function CheckButton(pos)
{
	if (pos == RandomNum)
	{
	var  u=RandomNum
	alert("Trafione!");
	document.getElementById('button'+u).value="BOOM"
	document.getElementById('button'+u).style.backgroundColor="green"
	document.getElementById('button'+u).disabled=true
	document.Boom.score.value=n++
	RandomNum=H[(Math.floor(Math.random() * Tx))]
	}
	else
	{
	document.Boom.left.value=m--
	}
	sprawdz()
}

function sprawdz()
{
	if (m == -2)
	{
	alert("Przegrales!")
	document.Boom.reset();
	Deafault();
	n=0
	m=5
	}
	else if (n == 3)
	{
	alert("Wygrales!");
	document.Boom.reset();
	Deafault();
	n=0
	m=5
	}
}
function Deafault()
{
document.getElementById('score').value="0"
document.getElementById('left').value="5"
document.Boom.button1_1.disabled=false
document.Boom.button1_2.disabled=false
document.Boom.button1_3.disabled=false
document.Boom.button2_1.disabled=false
document.Boom.button2_2.disabled=false
document.Boom.button2_3.disabled=false
document.Boom.button3_1.disabled=false
document.Boom.button3_2.disabled=false
document.Boom.button3_3.disabled=false


document.Boom.button1_1.value="X"
document.Boom.button1_2.value="X"
document.Boom.button1_3.value="X"
document.Boom.button2_1.value="X"
document.Boom.button2_2.value="X"
document.Boom.button2_3.value="X"
document.Boom.button3_1.value="X"
document.Boom.button3_2.value="X"
document.Boom.button3_3.value="X"

document.Boom.button1_1.style.backgroundColor="maroon"
document.Boom.button1_2.style.backgroundColor="maroon"
document.Boom.button1_3.style.backgroundColor="maroon"

document.Boom.button2_1.style.backgroundColor="maroon"
document.Boom.button2_2.style.backgroundColor="maroon"
document.Boom.button2_3.style.backgroundColor="maroon"

document.Boom.button3_1.style.backgroundColor="maroon"
document.Boom.button3_2.style.backgroundColor="maroon"
document.Boom.button3_3.style.backgroundColor="maroon"
}


function C()
{
document.Boom.button1_1.style.backgroundColor="maroon"
document.Boom.button1_2.style.backgroundColor="maroon"
document.Boom.button1_3.style.backgroundColor="maroon"

document.Boom.button2_1.style.backgroundColor="maroon"
document.Boom.button2_2.style.backgroundColor="maroon"
document.Boom.button2_3.style.backgroundColor="maroon"

document.Boom.button3_1.style.backgroundColor="maroon"
document.Boom.button3_2.style.backgroundColor="maroon"
document.Boom.button3_3.style.backgroundColor="maroon"
}


function b(f)
{
	if (f == "1_1")
	{
	document.Boom.button1_1.style.backgroundColor="blue"
	}
	else if (f == "1_2")
	{
	document.Boom.button1_2.style.backgroundColor="blue"
	}
	else if (f == "1_3")
	{
	document.Boom.button1_3.style.backgroundColor="blue"
	}

	else if (f == "2_1")
	{
	document.Boom.button2_1.style.backgroundColor="blue"
	}
	else if (f == "2_2")
	{
	document.Boom.button2_2.style.backgroundColor="blue"
	}
	else if (f == "2_3")
	{
	document.Boom.button2_3.style.backgroundColor="blue"
	}

	else if (f == "3_1")
	{
	document.Boom.button3_1.style.backgroundColor="blue"
	}
	else if (f == "3_2")
	{
	document.Boom.button3_2.style.backgroundColor="blue"
	}
	else if (f == "3_3")
	{
	document.Boom.button3_3.style.backgroundColor="blue"
	}

}