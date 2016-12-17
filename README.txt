Die Sprache Galdur gehoert zu den esoterischen
Programmiersprachen und ist recht Konzeptlos, jedoch
"einfach" und schnell.

=========================================

	Die Sprache wird warscheinlich nicht länger geupdated,
	letztes Update:

							17.7.2016 19:23    | (DE)
							7.17.2016 7:23 PM  | (EN)

=========================================

Jedes Zeichen wird einzelnd eingelesen und ist
somit ein vollwertiger Befehl.

Allgemeine Befehle:
	+ = Erhöht den Wert um 1
	- = Vermindert den Wert um 1
	< = Verschiebt den Zeiger einen nach Rechts
	> = Verschiebt den Zeiger einen nach Links
	= = Zeigt den Wert an und beendet das Programm
	; = Beendet das Programm
	_ = Setzt Wert auf 0
	@ = Zeigt einen Zeilenumbruch an

Hilfe zu Zeigern und Werten:

	Es gibt verschiedene "Speicherzellen" die einen
	Wert speichern können und diesen vermindern und
	erhöhen können. Es gibt 10 Speicherzellen die
	benutzt werden können:

	 0   1   2   3   4   5   6   7   8   9
	[0] [0] [0] [0] [0] [0] [0] [0] [0] [0]
	 ^

	Der Zeiger ist 1, also wird die erste Speicherzelle
	verwendet.

	Wenn nun ein + im Code steht, wird der Wert der Zelle
	1 um 1 erhöht:

		0   1   2   3   4   5   6   7   8   9
	 [1] [0] [0] [0] [0] [0] [0] [0] [0] [0]
		^

	Bei einem - wird dem Wert, wieder einer abgezogen:

		0   1   2   3   4   5   6   7   8   9
	 [0] [0] [0] [0] [0] [0] [0] [0] [0] [0]
		^

	 Wenn wir aber ein > im Code stehen haben, verschiebt
	 sich der Zeiger um eins nach rechts und der nächste
	 Wert wird angesprochen.

		 0   1   2   3   4   5   6   7   8   9
	  [0] [0] [0] [0] [0] [0] [0] [0] [0] [0]
		     ^

	 Wenn wir aber ein < im Code stehen haben, verschiebt
	 sich der Zeiger um eins nach links und der nächste
	 Wert wird angesprochen.

		 0   1   2   3   4   5   6   7   8   9
	  [0] [0] [0] [0] [0] [0] [0] [0] [0] [0]
		 ^

	 Um die Aktuelle Speicherzelle (Name) auszugeben,
	 benutze ein "?" (in Anführungszeichen).

	 Um zwei Speicherzellen zusammenzurechnen, gibt
	 es eine bestimmte Funktion. Siehe unten bei Beispiele.

	 + = P
	 - = M
	 * = A
	 / = D

Input:
	Eine Input aufforderung wird mit dem Zeichen !
	aufgerufen. Um diesen Input dann auszugeben muss
	"$" (in Anführungszeichen) geschrieben werden.

Output:
	Strings werden mit einem Zahlensystem ausgegeben:
		A1-Z26 benutzt diese Sprache
		Das Bedeutet:

		1 = -1
		2 = -2
		3 = -3
		4 = -4
		5 = -5
		6 = -6
		7 = -7
		8 = -8
		9 = -9
		0 = -10

		" " (Leerzeichen) = 0

		A = 1
		B = 2
		C = 3
		D = 4
		E = 5
		F = 6
		G = 7
		H = 8
		I = 9
		J = 10
		K = 11
		L = 12
		M = 13
		N = 14
		O = 15
		P = 16
		Q = 17
		R = 18
		S = 19
		T = 20
		U = 21
		V = 22
		W = 23
		X = 24
		Y = 25
		Z = 26

		! = 27
		? = 28
		. = 29
		: = 30
		; = 31
		" = 32
		- = 33
		+ = 34
		< = 35
		> = 36

Schleifen:
	Wenn Anweisungen in [] stehen, wird der Code der
	dort drin enthalten ist, verdoppelt ausgeführt.

	Wenn Anweisungen in {} stehen, wird der Code endlos
	lange ausgeführt. Diese Methode ist aber noch experimentell
	und sollte nicht ganze Programme unendlich lange ausführen.

	PS: Es könnte sein das Die schleifen manchmal
			nicht ganz wie gewünscht funktionieren, bitte
			überprüfen sie bei Fehlern besonders die Schleifen
			und sehen sie sich deren Ergebnis an.

	PPS: Es wird empfohlen beide Schleifen nicht
			 ineinander zu verwenden!

Beispiele:

	+;

	Wert wird auf 1 gesetzt und Programm
	beendet sich ohne Ausgabe, da = fehlt.

	---------------------------------------------

        +++=

	Programm gibt 3 aus und beendet sich.

	---------------------------------------------

	++_++-=

	Programm gibt 1 aus, da zuerst zwei
	geschrieben, dann der Wert auf Null
	gesetzt und zumm Schluss zwei
	hinzugefügt und einer abgezogen wird.

	---------------------------------------------

	:Hi, wie gehts dir so?:++.

	Das Programm ignoriert das was in den
	Doppelpunkten steht und addiert zum Wert
	2 und gibt dann dies in A1Z26 aus.

	---------------------------------------------

	+!"$"@=

	Programm setzt Wert auf 1 und fordert
	Input an, dann wird der Input angezeigt,
	sowie ein Zeilenumbruch geschieht und
	das Programm beendet sich.

	---------------------------------------------

	[++]=

	Programm setzt Wer auf 4 (2*(1+1)), gibt
	es aus und beendet sich.

	---------------------------------------------

	+"%">++"%"<"%"=

	Zuerst wird der Wert um 1 erhöht und dann wird
	dieser Wert ausgegeben. Dann Zeigt der Zeiger auf
	die nächste, rechte, Speicherzelle und addiert 2.
	Danach wird das Ergebnis ausgegeben und der Zeiger
	verschiebt sich zurück. Dann wird der Wert von
	der 1. Zelle noch einmal ausgegeben. Dann
	beendet sich das Programm und gibt (sollte)
	"[RTRN] > 1" aus(-geben).


	---------------------------------------------

	++>+++<(0P1)=

	Das Programm addierd zur Speicherzelle 0 den Wert
	2 und zu Speicherzelle 1 den Wert 3. Dann werden
	die Speicherzellen 0 und 1 Addiert (P) und die
	Speicherzelle 1 wird gelöscht. Das Ergebnis wird
	dabei in die Speciherzelle 0 gespeichert. Dann wird
	der Wert der Speicherzelle 0 ausgegeben und das Programm
	wird beendet.

	---------------------------------------------

	{"@"_+.}

	Eine Schleife wird begonnen und ein Zeilenumbruch
	geschieht, dazu wird der Zeiger auf Null und dann
	auf 1 gesetzt und der Wert wird in einen Buchstaben
	umgerechnet. Dies wird dann ausgegeben und die
	Schleife beginnt von neuem.

	Kurzer Hinweis: In Schleifen bitte "@" (mit
									Anführungszeichen) und nicht
									nur @ (ohne) verwenden, danke!

	---------------------------------------------
