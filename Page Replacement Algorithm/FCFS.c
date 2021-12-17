#include<stdio.h>

int main()
{
	int i,j,n,k,arr[50],frame[50],no,avail,count=0;
	printf("Enter the number of Pages:\n");
	scanf("%d",&n);
	
	printf("\nEnter the page Number:\n");
	for(i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	
	printf("\nEnter the number of Frames:\n");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		frame[i]=-1;
	}
	j=0;
	
	printf("\tRef. string\tpage frames\n");
	
	for(i=1;i<=n;i++)
	{
		printf("%d\t\t",arr[i]);
		avail=0;
		for(k=0;k<no;k++)
		{
			if(frame[k]==arr[i])
				avail=1;
			
			if(avail==0)
			{
				frame[j]=arr[i];
				j=(j+1)%no;
				count++;
				for(k=0;k<no;k++)
					printf("%d\t",frame[k]);
			}
			printf("\n");
		}
	}
	
	printf("\nPage Fault is %d\n\n",count);
	
	return 0;
}

