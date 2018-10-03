package school;



public class ArrayOperation {
	
	private Array
		
	    String array[];
		int i;
		int j;
		int range;
		int counter;
		int del;
	
	
	public ArrayOperation()
	{
		 
		 i=0;
		 j=0;
		 range=0;
		 counter=0;
	}
	
	public Arraysize()
	{
	  range=5;   
	}
	
	public GetElement()
	{
		del=5;
	}
	
	public DeleteElement()
	{
		for(; i<size; i++)
		{
			if(array[i]==del)
			{
				for(int j=i; j<(size-1); j++)
				{
					array[j]=array[j+1];
				}
				count++;
				break;
			}
		}
		if(count==0)
		{
			System.out.printin("Element not found..!!");
		}
		else
		{
			System.out.printin("Element deleted successfully..!!");
			System.out.printin("Now the new array is :");
			for(i=0; i<(size-1); i++)
			{
				System.out.printin(array[i]<<" ");
			}
		}
	};

	public static void main (String[] args) 
	{
		ArrayOperation Array1;
		Array1.DeleteElement();
	}

}
