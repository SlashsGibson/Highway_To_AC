#include<iostream> 
using namespace std;
//求 x 的平方根:
//思想: 二分查找,当 l与 r的差距过小的时候停止,取一个边界 
int main()
{
	double x;
	cin>>x;
	double l=0,r=x;
	while(r-l>1e-6)
	{
		double mid=(l+r)/2;
		if(mid*mid>=x) r=mid;
		else l=mid;
	}
	printf("%lf \n",l);
	return 0;
 } 

