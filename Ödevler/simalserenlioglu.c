#include <stdio.h>

int main() {
    int dizi[10][10];
   int i, j;
   for(i=0; i<10; i++) {
      for(j=0;j<10;j++) {
         dizi[i][j]=((int)rand() % 2);
      }
   }

   for(i=0; i<10; i++) {
      for(j=0;j<10;j++) {
         printf("%d ", dizi[i][j]);
         if(j==9){
            printf("\n");
         }
      }
   }

   printf("\n her sutundaki 1 sayisini diziye atacagiz.\n");
   printf("Her sutundaki 1 sayisi asagidaki sekildedir:\n");

   int sutun[10]={0,0,0,0,0,0,0,0,0,0};

   for(i=0;i<10;i++){
       for(j=0;j<10;j++){
           if(dizi[i][j]==1){
               sutun[j]++;
           }
       }
   }

   for(i=0; i<10; i++) {
        printf("%d ", sutun[i]);
   }

   printf("\n1 sayilarini iceren array icerisindeki en yuksek 2 degeri yakalamaya calisacagiz.\n");


    int largest1 = sutun[0];
    int largest2 = sutun[1];
    int temp;

    if (largest1 < largest2){
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }


    for (int i = 2; i < 10; i++){
        if (sutun[i] > largest1)
        {
            largest2 = largest1;
            largest1 = sutun[i];
        }
        else if (sutun[i] > largest2 && sutun[i] != largest1)
        {
            largest2 = sutun[i];
        }
    }
    printf ("En buyuk deger= %d\n", largest1);
    printf ("En buyuk ikinci deger= %d\n", largest2);

    int bir_no=0,iki_no=0;
    for(i=0; i<10; i++) {
        if(sutun[i]==largest1){
             bir_no=i;
             printf("En yuksek degerin kacinci sutun oldugu bilgisi:%d \n", bir_no);
             break;
        }
    }

    for(i=0; i<10; i++) {
        if(sutun[i]==largest2){
             iki_no=i;
             printf("En yuksek ikinci degerin kacinci sutun oldugu bilgisi:%d \n", iki_no);
             break;
        }
    }


   printf("\nEn yuksek 1'e sahip %d nolu sutunun hangi satirlarda 1 degerine sahip oldugunu bulacagiz",bir_no);
   printf("\nBu satirlar:\n");

   for(int i=0;i<10;i++){
       if(dizi[i][bir_no]==1){
           printf("%d\n",i);
       }
   }

   printf("\nEn yuksek ikinci 1'e sahip %d nolu sutunun hangi satirlarda 1 degerine sahip oldugunu bulacagiz",iki_no);
   printf("\nBu satirlar:\n");

   for(int i=0;i<10;i++){
       if(dizi[i][iki_no]==1){
           printf("%d\n",i);
       }
   }

    return 0
