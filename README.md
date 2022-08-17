# Analog Audio/Video umschalter
## Beschreibung

Diese repo dient dazu einen modularen, über eine Serielle (UART) Schnittstelle steuerbaren Analogen Audio/Video (Composite) umschalter zu bauen/dokumentieren.

Das Projekt ist eine Eigenentwicklung und für jede natürliche Person ohne Kommerziele interessen frei verwendbar.
Eine Vermakrtung/Kommerzialisierung ist ausdrücklich untersagt!

## Aufbau
Die "Eingange" werden über einen 9poligen SUB-D stecker miteinandern verbunden/kaskadiert.
Über einen DIP Switch lassen sich jedem module eine Eindeutige ID zuweisen.

Über die Serielle Schnittstelle kann die gewünschte Adresse gesendet werden.
Existiert eine node mit der eingestellten addresse, wird das Analoge Signal auf die entsprechenden pins der SUB-D9 stecker gelegt und kann abgegrifen werden.

Alle anderen nodes, deren eingestellte Adresse nicht übereinstimmt, schalten den Ausgang ab. 
So dass nur das entsprechende Eingangsmodul mit der richtigen Adresse das Anliegende Signal weiterleitet und es zu keiner überschneidung/mixen von Signalen kommt.

## Skizze
![Untitled Diagram drawio(2)](https://user-images.githubusercontent.com/5003424/185115550-11e41522-d1d8-46a2-8563-4fac5c4a9e41.png)

## Schaltplan
![Schaltplan-led-indicator-1](https://user-images.githubusercontent.com/5003424/185132848-03acea32-05a9-4f62-b5af-b5db8877e880.png)

## PCB Layout
...
