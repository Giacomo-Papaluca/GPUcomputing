# Uso di Google Colab e Jupyter notebook
_Google Colab_ è una piattaforma che permette di eseguire codice direttamente sul cloud (macchina virtuale temporanea) 
 o in locale su server privato. Occorre avere un account Google con accesso a Google Drive dove salvare i propri notebook. 
 Di seguito i passi per programmare in Python (o CUDA C) sul server tramite i notebook gestiti in Colab.
 
- Collegare l'applicazione __Colaboratory__ dal _Google Workspace Marketplace_ (`Nuovo/altra applicazione/Colaboratory`)
- Aprire un nuovo notebook Colab da Drive (`Nuovo/altro/Google Colaboratory`) da browser _Chrome_, _Firefox_, _Safari_ 
- Dal pulsante _connetti_ scegliere _connetti a runtime locale_ e seguire le istruzioni _Create a local connection by following these instructions_ per installare patch locali che permettono a Colab l'accesso al server da remoto (dal prorpio PC)
  - in particolare da STEP 2 installare 
    - `pip install jupyter_http_over_ws`
    - `jupyter serverextension enable --py jupyter_http_over_ws`
- Lanciare dal terminate `tmux` per la gestione e il controllo di applicazioni da terminale (continua ad eseguire in background anche dopo logout) 
- Lanciare dal server il comando `jupyter notebook --NotebookApp.allow_origin='https://colab.research.google.com' --port=8888 --NotebookApp.port_retries=0`, che attiva il notebook su jupyther 
- Lanciare da terminale su PC locale il comando `ssh -N -f -L localhost:8888:localhost:8888 username@volta.di.unimi.it` che attiva il tunnelling verso server remoto
- __NB.__ la porta `8888` è quella di default e può essere usata da un solo utente per volta (come tutte le porte!)... scegliere quindi una porta > 9000 (a caso e senza che sia già in uso - segnalato dal sistema)
