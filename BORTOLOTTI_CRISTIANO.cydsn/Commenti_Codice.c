/* ========================================
 Commenti sul codice
Il codice è composto da un main source in cui ho definto inizialmente tutte le costanti utilizzate, ho inizializzato le varie 
periferiche e poi ho strutturato il codice dentro il while(1) per realizzare i vari patterns richiesti; sono presenti poi un 
header e un codice per l'interrupt service routine in cui, respettivamente ho dichiarato la variabile globale necessaria per
realizzare il passaggio tra i vari stati e ho realizza il semplice algoritmo per passare da uno stato all'altro. 
Ho introdotto anche due file "MyFunction.h" e "MyFunction.c" in cui ho, rispettivamente, dichiarato e implementato le funzioni 
che poi ho utilizzato nel main e nell'ISR. 
Ho utilizzato l'Interrupt, triggerata dalla pressione del bottone on-board il cui segnale viene filtrato dal debouncer. 
La più grossa difficoltà è stato la gestione dei LED: essendo il nostro LED RGB ad anodo comune, affinchè passi la corrente e si 
accenda il LED è necessario che il pin sia basso; infatti, quando il pin è alto, il LED si comporta come un circuito aperto e non 
non emette luce dato che non passa corrente. Perciò, ho dovuto ragionare al contrario e considerare acceso il led quando il pin è
basso. 
Su questo ragionamento si è basata la scelta della giusta forma dell'onda quadra: per ottenere,ad esempio, un'onda quadra prima 
alta e poi bassa, è stato necessario ragionare al contrario e settare la compare mode come "Less" (la modalità "Less_Equal" 
generava un piccolo blink quando appunto assumeva un valore uguale al compare) e settare il compare e il periodo in modo tale che 
il pin inizialmente fosse basso (quindi garantendo il passaggio di corrente) per alzarsi a una certa percentuale del periodo.
Nel main, dopo l'inizializzazione di tutti i clocks, dei PWMs e dell'interrupt, si entra nel while(1) e vi è la scansione dei 
vari step in base alla pressione del bottone. L'algoritmo in generale è questo:
1) settaggio della modalità di comparazione del PWM
2) settaggio del periodo del PWM
3) settaggio del compare value
4) reset del counter del PWM in modo tale che si sincronizzi e parta corettamente con il pattern
5) entrata in un while di attesa da cui si esce cliccando il bottone e passando allo stato successivo

I 7 pattern visualizzati sono:
1) Giallo sempre on
2) Giallo 1s, Rosso 1s
3) Verde 1s, Giallo 1s
4) Rosso 0.5s, Verde 0.5s
5) Verde 0.25s, Rosso 0.25s
6) Giallo 1s, Rosso 0.5s, Spento 0.5s
7) Verde 0.5s, Spento 0.5s, Giallo 0.5s, Rosso 0.5s
*/

/* [] END OF FILE */
