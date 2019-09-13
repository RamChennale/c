/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

/* Write a C program to find both the largest  and smallest number in a list of integers*/


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
main( )
{
		float largest(float a[ ], int n);
		float value[4] = {2.5,-4.75,1.2,3.67};
		printf("%f\n", largest(value,4));
}
float largest(float a[], int n)
{
		int i;
		float max;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
		max = a[0];
		for(i = 1; i < n; i++)
				if(max < a[i])
				max = a[i];
		return(max);
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */