#include <iostream> 
using namespace std; 
int array[100];
int size,i,element,pos;
int choice;

  
// Function to display the menu 
void menu() 
{ 
    cout << "Press 1 to create an Array\n"; 
    cout << "Press 2 to display the array.\n"; 
    cout << "Press 3 to insert numbers to an array\n"; 
    cout << "Press 4 to delete numbers from an array\n"; 
    cout << "Press 5 to search an array\n"; 
    cout << "Press 6 to exit\n"; 
} 

//functions part

void create()

{
	cout <<"enter the size of the array";
	cin >> size;
	cout <<"\nenter the elements\n",size;
	for(i=0; i<size; i++)
	cin >> array[i];
	cout << "\nthe array is created sucessfully";
}

void display()
{
	cout <<"\nThe array elements are\n";
	for(i=0; i<size; i++)
	cout << array[i];
}

void insert()
{
	cout<<"Enter the element to be inserted >> ";
	cin>>element;
	cout<<"enter the position >>";
	cin>>pos;

	if(pos<= 0 && pos>=size)
	{
	for(i=size-1 ; i>=pos ; i--)
	{
		array[i+1]=array[i];
	}

	array[pos]=element;
	size++;
	cout<<"Element is inserted sucessfully ";

	}
	else
        cout<<"enter a valid position";
}

void del()
{
	cout<<"Enter the position of the element to be deleted ";
	cin<<"%d", &pos;

	if(pos<=size)
	{
	element =  array[pos];
	for(i=pos ; i<size ; i++)
	array[i]=array[i+1];
    size--;
    cout<<"deleted element is %d",element;
    }
    else
    {
    cout<<"invalid position";

    }
}

 int main()
{
	int choice ;

	while(1)
	{
	cout <<"\nchoose the operation\n >>";

	cout << "\n1-create\n \n2-insert \n\n3-display\n\n4-delete\n \n5-search\n\n6-exit\n";
	cin >> choice;
	switch(choice)
	{
		case 1 : create(); break ;
		case 2 : display(); break;
		case 3 : insert(); break;
		case 4 : del(); break;
		case 5 : exit(0);
	}
	return 0;
}
}