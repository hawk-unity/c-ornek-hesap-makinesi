#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
main()
{
    int sayi1,sayi2;
    /* sayi1 ile sayi2 adl� bir de�i�ken olu�turduk */

        int islem;
    /* i�lem adl� bir girdi ��kt� de�i�keni yapt�k */
    printf("1.Sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    /* prinf ile bir input alan� ekledik  scanf ile de de�erlendirmeye ald�k*/

    printf("\n\n1.Toplama\n");
    printf("2.Cikarma\n");
    printf("3.Bolme\n");
    printf("4.Carma\n");
    
    printf("\nIslemi seciniz:");
    scanf("%d",&islem);
    /* if - else d�ng�s�ne ald�k e�er o olursa bu olur der gibi :) */
    if(islem == 1){
        printf("Toplama isleminin sonucu : %d",sayi1 + sayi2);
    }
    else if(islem ==2){
        printf("C�karma isleminin sonucu : %d",sayi1 - sayi2);
    }
    /* b�lmeden al�ncak sonu� i�in birde float de�eri ekledik */
    else if(islem ==3){
        printf("Bolme isleminin sonucu : %f", (float) sayi1 / (float) sayi2);
    }
    else if(islem ==4){
        printf("Carpma isleminin sonucu : %d", sayi1 * sayi2);
    }
    else{
    /* else ile olas� bir sonuca kar�� al�ncak ��kt� i�in */

        printf("Lutfen gecerli bir sayi giriniz..");
    }
}
