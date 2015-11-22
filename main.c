/*packGrade - a CLI C script to help maintain your system!
Yes i do realise this is horribly ugly coding.. Ideas and suggestions would be greatly appreciated. */

#include <stdio.h>
#include <stdlib.h>

int upgrade = 0;
int rmorphans;

/*Determins what actually is done, based on users input*/
int cases(){
	upgrade = 1;
}

int main(){
	printf("%d", upgrade);
	cases();
	printf("%d", upgrade);
	if( upgrade == 1 ){
		system("sudo pacman -Syu");
	}
	else{
		printf("error!\n");
	}
}
