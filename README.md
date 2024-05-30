Aufgabe 2.1 Nicht-blockierendes simpleBlink (30%)
Eine der Aufgaben, die ein Betriebssystem normalerweise erledigt, ist das faire Verteilen von Rechenzeit (mithilfe des sog. Pseudoparallelismus, näheres dazu dann in der LV Betriebssysteme). Da auf unserem Arduino-Board kein Betriebssystem läuft, müssen wir uns selber um eine faire Verteilung der Rechenzeit kümmmern.
Ein großes Problem in Arduino-Programmen ist in diesem Zusammenhang die delay()-Funktion, da diese das Programm pausiert und keine anderen Berechnungen zu lässt. Daher sollte man möglichst auf die Verwendung von delay() verzichten und stattdessen Interrupts oder Timer (hier ist mit Timer nicht der Hardwarebaustein gemeint, sondern das abstrakte Konzept des Timers) verwenden.
Sie finden auf Sakai in der Selbststudium-Sektion entsprechende Links, die das Problem erklären und mögliche Lösungswege beschreiben.
Passen Sie den Code von Aufgabe 1.4 (simpleBlink) so an, dass kein delay() mehr für das Blinken der LEDs verwendet wird sondern ausschließlich Timer.
Falls Sie Aufgabe 1.4 schon ohne delay() richtig implementiert haben, dann laden Sie einfach denselben Code von letzer Woche unverändert nocheinmal hoch.
Laden Sie Ihr Programm auf JupyterHub in einen Unterordner namens Aufgabe_1 im Ordner dieses Übungszettel hoch.

![image](https://github.com/claner2804/Embedded-Systems-hw02-01/assets/131294860/fc81718a-757b-44cc-8a94-947214dbb2db)

