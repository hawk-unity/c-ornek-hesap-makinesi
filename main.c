#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
main()
{
    int sayi1,sayi2;
    /* sayi1 ile sayi2 adlý bir deðiþken oluþturduk */

        int islem;
    /* iþlem adlý bir girdi çýktý deðiþkeni yaptýk */
    printf("1.Sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    /* prinf ile bir input alaný ekledik  scanf ile de deðerlendirmeye aldýk*/

    printf("\n\n1.Toplama\n");
    printf("2.Cikarma\n");
    printf("3.Bolme\n");
    printf("4.Carma\n");
    
    printf("\nIslemi seciniz:");
    scanf("%d",&islem);
    /* if - else döngüsüne aldýk eðer o olursa bu olur der gibi :) */
    if(islem == 1){
        printf("Toplama isleminin sonucu : %d",sayi1 + sayi2);
    }
    else if(islem ==2){
        printf("Cýkarma isleminin sonucu : %d",sayi1 - sayi2);
    }
    /* bölmeden alýncak sonuç için birde float deðeri ekledik */
    else if(islem ==3){
        printf("Bolme isleminin sonucu : %f", (float) sayi1 / (float) sayi2);
    }
    else if(islem ==4){
        printf("Carpma isleminin sonucu : %d", sayi1 * sayi2);
    }
    else{
    /* else ile olasý bir sonuca karþý alýncak çýktý için */

        printf("Lutfen gecerli bir sayi giriniz..");
    }
}
