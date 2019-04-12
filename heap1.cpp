#include<iostream>
using namespace std;
//class for the creation of heap
class binheap
{
	private:
	int mSize, cSize, *bhArr;
	int [50];
	public:
	binheap()
	{
		mSize=50;
		cSize=0;
	}
		//writing the conditions for assigning the minimum heap
	int left(int i)//going to the left
			{
			return ((2*i)+1);
			}
	int right(int i)//going to left
			{
			return ((2*i)+2);
			}
	int parent(int i)//the main(parent
			{
			return ((i-1)/2);
			}
	void insert(int data)
	{
		if(cSize==0)
		{
			cSize++;
			[0]=data;
		}
		//condition for checking the size of the data
		else if(cSize==mSize)
		{
			cout<<"ELEMENYS OVERLOADED"<<endl;
			return;
		}
		else
		{		//condition for the binary heap
			if(data<=[0])
			{
				//entering the data in the array

				for(int i=cSize;i>0;i--)
				{
					[cSize+1]=[cSize];
				}
				[0]=data;
			}
			
			else
			{
				[cSize]=data;
				int l=cSize;
				while([parent(l)]>[l] || parent(l)!=cSize/2)
									{
					int temp;
					temp = [l];
					[l] = [parent(l)];
					[parent(l)] = temp;
					l=parent(l);
				}				



			}
			//move ahead
			cSize++;
		}
	}
	//to extract the minimum value
	int GetMin()
			{
			return [0];
			}
	//driver function
	int extractMin()
	{
		if(cSize==0)
		{
			cout<<"THE HEAP IS EMPTY"<<endl;
			return NULL;
		}
		else if(cSize == 1)
		{
			cSize--;
			return [0];
		}
		else
		{
			int temp = [0];
			for(int i=0;i<cSize;i++)
			{
				[i]=[i+1];
			}
			cSize--;
			return temp;
		}
	}
	void DecreaseKey(int i, int new_val)
	{
		[i]=new_val;
		while( ([parent(i)]>[i] && i==left(parent(i))) || ([parent(i)]<[i] && i==right(parent(i))) || (i==0) )
															{
															temp=[i];
															[i]=[parent(i)];
															[parent(i)]=temp;
															i=parent(i);
															}
		return 0;
	}
	void display()
	{
		if(cSize==0)
		{
			cout<<"NO ELEMENTS PRESENT "<<endl;
			return;
		}
		for(int i=0;i<cSize;i++)
		{
			cout<<[i]<<"	,	";
		}
		cout<<endl;
	}
};

int main()
{
	binheap obj;
	obj.display();
	for(int i=0;i<10;i++)
	{
		obj.insert(i+1);
	}
	obj.insert(9);
	obj.display();
	return 0;
}
