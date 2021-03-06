# Uso di Google Colab e Jupyter notebook
_Google Colab_ è una piattaforma che permette di eseguire codice direttamente sul cloud (macchina virtuale temporanea) 
 o in locale su server privato. Occorre avere un account Google con accesso a Google Drive dove salvare i propri notebook. 
 Di seguito i passi per programmare in Python (o CUDA C) sul server tramite i notebook gestiti in Colab.
 
- Collegare l'applicazione __Colaboratory__ dal _Google Workspace Marketplace_ (`Nuovo/altra applicazione/Colaboratory`)
- Aprire un nuovo notebook Colab da Drive (`Nuovo/altro/Google Colaboratory`) da browser _Chrome_, _Firefox_, _Safari_ 
- Dal menu `Runtime` scegliere `Cambia tipo di runtime` e dal pulsante _connetti_ scegliere _connetti a runtime ospitato_  e definire GPU nella scelta di accelerazione HW
- editare ed eseguire il codice nelle celle del notebook
