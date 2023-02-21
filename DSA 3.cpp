#include<iostream>
using namespace std;
void display(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"\narray["<<i<<"]="<<array[i];
	}
}

int main ()
{
	int size;
	
	cout<<endl<<"Enter size of an array:"<<endl;
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++)
	{
		array[i]=0;
	}
	int input;
	start:
	cout<<"Enter '1' for enter value at 0 index"<<endl; 
	cout<<"Enter '2' for enter value at last index"<<endl;
	cout<<"Enter '3' for enter value at k index"<<endl;
//	cout<<"Enter 4"
	cout<<"Enter '4' to delete value at 0 index from an array"<<endl;
	cout<<"Enter '5' to delete value at 0 index from an array"<<endl;
	cout<<"Enter '6' to delete value at 0 index from an array"<<endl;
	cout<<"Enter '7' to display an array!"<<endl;
	cout<<"Enter '0' to terminate the program!"<<endl;
	cin>>input;

	if(input==1)
	{
	    if(array[0]==0)
	    {
//		cout<<"\nEnter array["<<0<<"]:";
		cin>>array[0];
		for(int i=0;i<size;i++)
		cout<<array[i]<<" ";
		goto start;
	    }
	    else 
	    cout<<"\narray[0] is already preserved\n";
	    int check;
	    cout<<"press 1 to overrnide or any other key for not";
	    cin>>check;
	    if(check==1)
	    {
	        array[0]=0;
            cout<<"\nEnte array[0]:";
            cin>>array[0];
	    }
	    else 
	    cout<<"\nYou are not override\n";
	    goto start;
	}
	else if(input==2)
	{
//		cout<<"\nENter Array ["<<size-1<<"]:";
		cin>>array[size-1];
		for(int i=0;i<size;i++)
		cout<<array[i]<<" ";
		goto start;
	}
	else if(input==3)
	{
		int k;
		cout<<"\nENter index between 0-"<<size-1<<" :";
		cin>>k;
		cout<<"\nEnter array["<<k<<"] :";
		cin>>array[k];
		goto start;
	}
	else if(input==4)
	{
	    int pos;
	    cout<<"\nENter the index number in array you want to del:";
	    cin>>pos;
	    for(int i=pos;i<size;i++)
	    {
	        array[i]=array[i+1];
	        
	    }
	    array[size-1]=0;
		goto start;
	}
	else if(input==5)
	{
		display(array,size);
	goto start;
	}
	else if(input==6)
	{
	 cout<<"\nProgram Terminate successfully\n";   
	}
	else 
	{
	    cout<<"\nyou Entered The wrong Number\n";
	    goto start;
	}    
}
