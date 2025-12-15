#include<iostream>
using namespace std;
//二分模板1,适用于区间被划分成[l,mid]和[mid+1,r]的情况 
int bsearch1(int l,int r)
{
	while(l<r)
	{
		int mid=(l+r)>>1;
		if(check(mid)) r=mid;
		else l=mid+1;
	}
	return l;
}
//二分模板2,适用于区间被划分成[l,mid-1]和[mid,r]的情况 
int bsearch2(int l,int r)
{
	while(l<r)
	{
		int mid=(l+r+1)>>1;
		if(check(mid)) l=mid
		else r=mid-1;
	}
	return l;
}
int main()
{
	//为何要划分区间?
	//二分查找是把原先一个完整的数组拆分成两个数组的情况,其中一个数组满足 check()函数的性质,另一个数组不满足 
	//单调一定可二分,可二分不一定单调 
	//单调性可知原先数组左右两端点中必有一个符合性质,另一个端点不符合性质
	//设左端点 l 符合性质,,右端点 r 不符合性质 
	//这时检查 mid,若 mid符合 check()函数的性质就使用模板 1,若不符合则使用模板 2
	//若设右端点 r 符合性质,左端点 l 不符合性质则与上述相反
	//原则是先判断哪个端点符合性质,在判断 mid 是否符合性质,最终把原数组分成了两个子数组,一个包含 mid ,另一个不包含 mid ,一个每一项都符合性质,另一个每一项都不符合性质 
	//至于 mid 在哪个数组中根据题设条件和 mid 实际性质进行判断 
	return 0; 
} 
