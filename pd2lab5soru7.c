#include <stdio.h>
#include <string.h>

/*- - Bir i�aret�i kullanarak bir dizgiyi tersten yazd�ran C'de bir program yaz�n.
Test verisi :
Bir dize girin: w3resource
Beklenen ��kt� :
��aret�i : Bir dizeyi ters s�rayla yazd�r�n :
------------------------------------------------
Bir dize girin: w3resource
Dizenin tersi: ecruoser3w
*/
int main(){
    int i;
    char dizi[100];
    char *ilk;
    char *ikinci;
    char gecici;
    
    printf("bir kelime girin:  ");
    gets(dizi);
    
    	ilk=ikinci=dizi;
    	for(ilk=dizi,ikinci=dizi+strlen(dizi)-1;ilk<ikinci;ilk++,ikinci--)
    	{
    		gecici=*ilk;
    		*ilk=*ikinci;
    		*ikinci=gecici;
		}
    	
	for(i=0;i<strlen(dizi);i++)
	{
		printf("%c",*(dizi+i));
	}
 
 return 0;
}
