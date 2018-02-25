#include <stdio.h>

#define MAX 100

main (){
	int list [MAX];
	int nElem;
	
	int elem;
	int erase;
	int i;
	
	do{
		printf ("How many elements you are going to insert?\n");
		scanf ("%d", &nElem);
	} while (nElem<0 || nElem>MAX);
	
	for (i=0; i<=nElem-1;i++){
		printf ("insert the element %d\n", i);
		scanf ("%d", &list[i]);
	}
	
	//Search an element in the list
	
	printf ("which element do you want to look for?\n");
	scanf ("%d", &elem);
	
	for (i=0; i<=nElem-1;i++){
		if (elem ==list [i]){
			printf ("The element is in the position %d\n", i);
			break;
		}
	}
	if (i==nElem){
		printf ("The element isn´t in the list\n");
	}
	
	//Erase element of the list
	
	printf ("Which element do you want to erase?\n");
	scanf ("%d", &erase);
	
	for (i=0;i<=nElem-1;i++){
		if (erase == list[i]){
			list [i] == list [nElem-1];
			nElem--;
		}
	}
	
	//insert an element in the list
	
	printf ("Tell me a value to insert it\n");
	scanf ("%d", &list[nElem]);
	nElem++;
	
	//Show the list
	
	for (int i=0;i<=nElem-1;i++){
		printf("%d\n", list[i]);
	}
	
}
