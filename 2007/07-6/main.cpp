#include <iostream> 
int main(){
	int a[]={10,12,5,9,4,5,7,8,6,81};  //给定数组
	int t = 0;  //记录和最大的连续三个元素的第一个元素的下标
	int b = 0;  //记录连续三个元素的和
	int sum = 27;  //sum为连续三个元素和的最大值，初始化为前三个元素的和
	for(int i = 0; i<8; i++){  //遍历数组
		b = a[i]+a[i+1]+a[i+2];  //计算连续三个元素的和
		if(b>sum){  //求最大值
			t = i;  //记录当前连续三个元素和的最大值时的第一个元素的下标
			sum = b;
		}
	}
	std::cout<<t<<std::endl;  //输出和最大的第一个元素的下标
} 
