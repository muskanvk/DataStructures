/* 1) Develop a Menu driven program to demonstrate the following operations of Arrays:
 ——MENU—— 1. CREATE		2. DISPLAY		3. INSERT
		  4. DELETE		5. SEARCH		6. EXIT
*/
#include<iostream>
using namespace std;

int array[1000], arraysize;
int element,position;
//1. CREATE
void CreateArray(  )
{	cout<<"Input Array Size = ";
	cin>> arraysize;
	//a= new int[arraysize];
	cout<<"Input all Elements :";
	for(int i=0 ; i<arraysize ; ++i)	
		cin>> array[i];
}
// 2. DISPLAY
void DisplayArray( ){
	cout<<"\nDisplay Array Elements: \n";	
	for(int i=0 ; i<arraysize ; ++i)
		cout<< array[i]<<" ";
	cout<<"\n";	
}
// 3. INSERT
void InsertArray( ){
	cout<<"Enter element to insert = ";
	cin>> element;
	cout<<"Enter index position = ";
	cin>> position;
	if(position>= 0 && position<=arraysize){
		for(int i= (arraysize-1) ;  i>=position ; --i)
		{	array[i+1]=array[i];
		}
		 array[position]= element;
		 arraysize++;
		 printf("Element is inserted sucessfully. \n");
	}
	else printf("Enter a valid position.\n");
}
// 4. DELETE
void DeleteArray(){
	cout<<"Enter index position = ";
	cin>> position;
	if(position <= arraysize)
	{
		element =  array[position];
		for(int i=position ; i<arraysize ; i++)
			array[i]=array[i+1];
    	arraysize--;
    	printf("deleted element is %d",element);
    }
    else
    	printf("invalid position\n");
}
// 5. SEARCH
void SearchArray(){
	int flag=0;
	cout<<"Search Key = ";	
	cin>> element;
	for(int i=0  ; i<(arraysize) ; ++i)
	{
		if( array[i] == element )
		{	cout<<"Key found at Index = "<< i <<"\n";
			flag=1;	
		}		
	}
	if(flag==0)	 
		cout<<"Key Not Found \n";
}


int main(){
		int option;
		do
	{	
		cout<< "---MENU---\n";
		cout<< " 1.CREATE\n 2.DISPLAY\n 3.INSERT\n 4.DELETE\n 5.SEARCH\n 6.EXIT\n"; 
		cout<< "Choose Option: ";
		cin >> option;	
		switch(option)
		{	
			//int searchkey,flag=0;
			
			case 1: CreateArray();
					break;	
			case 2: DisplayArray();	
					break;
			case 3: InsertArray();
					break;
			case 4: DeleteArray();
					break;
			case 5: SearchArray();
					break;
			case 6: exit(0);
		}
	}while(option!=6);
	
}
