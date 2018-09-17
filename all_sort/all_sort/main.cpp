#include<iostream>
#include<stack>

using namespace std;
void bubbles_sort(int b[],int len)
{

	for(int i=0;i<len;i++)
	{

		for(int j =i+1;j<len;j++)
		{
			if(b[i]>b[j])
			{

				int temp =b[i];
				b[i] = b[j];
				b[j] = temp;
			}

		}
	}
}

void choose_sort(int a[],int len)
{

	for(int i=0;i<len;i++)
	{
		//int min =a[i];下标
		int min_j = i;
		for(int j=i+1;j<len;j++)
		{
			
			if(a[j]<a[min_j])
			{
				min_j = j;
			}

		}
		int temp = a[i];
		a[i] = a[min_j];
		a[min_j] = temp;
	}
}

void binary_insert_sort(int a[],int len)
{
	for(int i=1;i<len;i++)
	{
		//找到第一个小于的j

		int j= i-1;
		while(a[j]>a[i])
		{

			j--;
		}
		if(j!=i-1)
		{
			int temp = a[i];
			for(int k = i-1;k>=j+1;k--)
			{

				a[k+1] = a[k];
			}
			a[j+1] = temp;
		}

		
	}

}
void merge(int sA[],int temA[],int start,int mid,int end)//将两个数组合并的操作
{
	int i = start,j=mid+1,k =end;
	int t = start;
	while(i!=mid+1&&j!=end+1)
	{
		if(sA[i]<sA[j])
		{
			temA[t++]= sA[i++];
		}
		else
		{

			temA[t++] = sA[j++];
		}
	}

	while (i!=mid+1)
	{
		temA[t++] = sA[i++];
	}
	while(j!=end+1)
	{

		temA[t++]=sA[j++];
	}
	for(int h=start;h<=end;h++)
	{
		sA[h] = temA[h];
	}

}
void mergeSort(int sA[],int temA[],int start,int end)
{
	int mid ;
	//cout<<start<<" "<<end<<endl;
	if(start<end)
	{
		mid = (start+end)/2;
		mergeSort(sA,temA,start,mid);
		mergeSort(sA,temA,mid+1,end);
		merge(sA,temA,start,mid,end);

	}


}

void quicSort(int a[],int start,int end)
{
	if(start<=end)
	{
		
	int left = start;
	int right = end;
	int key = a[left];
	while(left<right)
	{

		while(left<right&&key<=a[right])
		{
			right--;
		}

		a[left] = a[right];
		while(left<right&&key>=a[left])
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = key;
	quicSort(a,start,left-1);
	quicSort(a,right+1,end);
	}
}

void shellSort(int a[],int len)
{

	if(len<=1) return;
	for(int dev = len/2;dev>=1;dev/=2)
	{
		for(int i = dev;i<len;i++)
		{
			for(int j=i;a[j]<a[j-dev]&&j>=0;j=j-dev)
			{

				swap(a[j],a[j-dev]);
			}
		}

	}


}
int main()
{
	int a[8];
	int b[8];
	cout<<"请输入这8个数"<<endl;
	for(int i=0;i<8;i++)
	{

		cin>>a[i];
		b[i] = 0;
	}
	//bubbles_sort(a,10);
	//choose_sort(a,10);
	//binary_insert_sort(a,5);
	//mergeSort(a,b,0,7);
	//quicSort(a,0,7);
	shellSort(a,8);
	for(int i=0;i<8;i++)
	{

		cout<<a[i]<<" ";
	}
	return 0;
}