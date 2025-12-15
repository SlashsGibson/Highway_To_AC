#include<iostream>
using namespace std;
const int N=1e7;
int q[N],tmp[N],n;
void merge_sort(int q[],int l,int r)
{
	if(l>=r) return;
	int i=l,mid=(l+r)>>1,j=mid+1,k=0;
	merge_sort(q,l,mid);
	merge_sort(q,mid+1,r);
	while(i<=mid&&j<=r)
	{
		if(q[i]<q[j]) tmp[k++]=q[i++];
		else tmp[k++]=q[j++];
	}
	while(i<=mid) tmp[k++]=q[i++];
	while(j<=r) tmp[k++]=q[j++];
	for(int i=0,j=l;i<k;i++,j++) q[j]=tmp[i];
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) scanf("%d",&q[i]);
	merge_sort(q,0,n-1);
	for(int i=0;i<n;i++) printf("%d ",q[i]);
	return 0;
}
