#include<stdio.h>

// kendisi haric pozitif tam b�lenlerin toplami kendisine e�it olan sayilara m�k sayi denir.

 int muksayi(int sayi){
 	int i,topla=0;
 	for(i=1;i<sayi;i++){
 		 if(sayi%i==0)
 		 topla+=i;
	 }
	 if (topla==sayi)
	 return 1;
	 else 
	 return 0;
 }

int main(){
	int sayi,sonuc;
	printf("bir sayi girin");
	scanf("%d",&sayi);
	sonuc=muksayi(sayi);
	if(sonuc==1)
	printf("muk");
	
	else 
	printf("muk degil");
	
	return 0;
}
