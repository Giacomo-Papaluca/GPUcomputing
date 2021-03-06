# Uso di Google Colab e Jupyter notebook
_Google Colab_ è una piattaforma che permette di eseguire codice direttamente sul cloud (macchina virtuale temporanea) 
 o in locale su server privato. Occorre avere un account Google con accesso a Google Drive dove salvare i propri notebook. 
 Di seguito i passi per programmare in Python (o CUDA C) sul server tramite i notebook gestiti in Colab.
 
- Collegare l'applicazione __Colaboratory__ dal _Google Workspace Marketplace_ (`Nuovo/altra applicazione/Colaboratory`)
- Aprire un nuovo notebook Colab dal proprio Drive (`Nuovo/altro/Google Colaboratory`) mediante browser _Chrome_, _Firefox_ o _Safari_ 
- Dal menu `Runtime` scegliere `Cambia tipo di runtime` e dal pulsante `connetti` scegliere `connetti a runtime ospitato` e definire GPU nella scelta di accelerazione HW
- Seguire le istruzioni in [CUDA_base.ipynb](https://github.com/giulianogrossi/GPUcomputing/blob/master/lab1/CUDA_base.ipynb) per programmare in CUDA C
