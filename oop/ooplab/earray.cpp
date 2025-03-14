#include<iostream>
using namespace std;

class EnhancedArray
{
	private:
	int *arr;
	int size;
	
	public:
	EnhancedArray();
	EnhancedArray(int totalnumbers);
	~EnhancedArray();
	EnhancedArray(const EnhancedArray& array);

	void insertAt(int index, int data);
	int getAt( int index) const;
	int getSize() const;
	EnhancedArray operator + (const EnhancedArray& a2);
	void operator = (const EnhancedArray& a2);
	int& operator [] (int index );
	EnhancedArray operator ++ ();
	void print();
	

};

void testObject(EnhancedArray ar1);

int main()
{
	EnhancedArray ea1(10),ea2(10),c(5);
	int temp;
	cout << "Store values in ea1 object" << endl;
	ea1.insertAt(0,11);
	ea1.insertAt(1,21);
	ea1.insertAt(2,31);
	ea1[3] = 41;
	ea1[4] = 51;
	cout << "Print values in ea1 object" << endl;
	ea1.print();
	cout << "printing with array subscript" << endl;
	cout << ea1[0];
	cout << ea1[1];
	//testObject(ea1);
	//ea1.print();
	cout << "Assigning ea1 to ea2" << endl;
	ea2 = ea1;
	++ea2;
	cout << "Print values in ea2 object" << endl;
	ea2.print();
	cout << "+ operator followed by assignment" << endl;
	c = ea1+ea2;
	cout << "Print values in C object" << endl;
	c.print();
	cout << "creating and intializing new object at the same time" << endl;
	EnhancedArray d = ea1 + c;
	d.print();
	return(0);
}

EnhancedArray :: EnhancedArray()
{
}

EnhancedArray :: EnhancedArray( int totalnumbers)
{
	size = totalnumbers;
	arr = new int[size];
	for(int i=0;i<size; i++)
	{
		arr[i] = -1;
	}
}

EnhancedArray :: ~EnhancedArray()
{
	cout << "From Destructor" << endl;
	delete [] arr;
}

void EnhancedArray :: insertAt( int index, int data)
{
	arr[index] = data;
}

int EnhancedArray :: getAt( int index) const
{
	return(arr[index]);
}

int EnhancedArray :: getSize() const
{
	return(size);
}

void EnhancedArray :: print()
{
	for(int i = 0; i< size; i++)
	{
		cout << arr[i] << endl;
	}
}




EnhancedArray :: EnhancedArray(const EnhancedArray& array)
{
	size = array.getSize();
	arr = new int[size];
	cout << "copy constructor called" << endl;
	for(int i = 0; i< size; i++)
	{
		arr[i] = array.getAt(i);
	}
}

EnhancedArray EnhancedArray :: operator + (const EnhancedArray& a2)
{
	EnhancedArray a3(size);
	cout << "in overloaded operator +"<< endl;
	for(int i =0; i < size; i++)
	{
		a3.insertAt(i, arr[i]+a2.getAt(i));
	}
	return(a3);
	
}

void EnhancedArray :: operator = (const EnhancedArray& a2)
{
	cout << " overloaded Assignment operator called" << endl;
	size = a2.getSize();
	arr = new int [size];
	for(int i =0; i < size; i++)
	{
		arr[i] =  a2.getAt(i);
	}
}

int& EnhancedArray :: operator [] (int index )
{
	cout << "from overloaded array subscript" << endl;
	return(arr[index]);
}


EnhancedArray EnhancedArray :: operator ++ ()
{
	for(int i =0; i < size; i++)
	{
		++arr[i];
	}
	return(*this);
}
void testObject(EnhancedArray ar1)
{
	cout << "in testobject function" << endl;
}










