#include <stdio.h>
#include <stdlib.h>


int main(void){
	char solust,sagust,sagalt,solalt,yatay,dikey,yataygolge,dikeygolge;
	solust=201;	sagust=187;	sagalt=188;	solalt=200;
	yatay=205;	dikey=186;
	yataygolge=223;	dikeygolge=219;
	int dik,taban;
	int i,j;
	int esc;
	do{
	printf("En az 3x3 boyutunda dikdortgen cizebilirsiniz!\n");
	printf("Istediginiz dikdortgenin boyutunu girin: ");
	scanf("%d %d",&dik,&taban);
	if(dik<3)
	dik=3;
	if(taban<3)
	taban=3;
	printf("%c",solust);
	for(i=0;i<taban-2;i++){
	printf("%c",yatay);
	}
	printf("%c",sagust);
	printf("\n");
	for(i=0;i<dik-2;i++){
		printf("%c",dikey);
		for(j=0;j<taban-2;j++){
			printf(" ");
			}
		printf("%c%c",dikey,dikeygolge);
		printf("\n");}
	printf("%c",solalt);
	for(i=0;i<taban-2;i++){
		printf("%c",yatay);
	}	
	printf("%c%c",sagalt,dikeygolge);
	printf("\n ");
	for(i=0;i<=taban-2;i++){
		printf("%c",yataygolge);
	}
	printf("%c",yataygolge);
	printf("\n");
	printf("\nCikmak icin esc ye basin,tekrar cizmek icin herhangi bir tusa basin.\n\n");
	esc=getch();
	}
	while(esc!=27);
    return 0;
}
