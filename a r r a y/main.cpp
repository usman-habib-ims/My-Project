#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	
	int array[size];
	
	for(int  i=0; i<size; i++)
	{
		cout<<"Enter value : ";
		cin>>array[i];
	}
	cout<<"array : ";
	
	for(int  i=0; i<size; i++)
	{
		cout<<array[i] <<"\t";
	}
	return 0;
}