/*
 * exchange.h
 *
 *  Created on: 2016年6月13日
 *      Author: Administrator
 */

#ifndef EXCHANGE_H_
#define EXCHANGE_H_
#include<iostream>

using namespace std;
typedef int eleT;

class ExchangeSort{
public:
	//冒泡排序，稳定，最好情况可达O(N)
	void bubbleSort(eleT a[],int n);
	//快速排序,不稳定，最好情况是O(n*n)
	void quickSort(eleT a[],int begin,int end);
	//打印数组元素
	void print(eleT a[],int n);
};

void ExchangeSort::bubbleSort(eleT a[],int n){
	for(int i=0;i<n-1;i++){
		bool flag=true;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				flag=false;
				eleT temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==true){
			break;
		}
	}
}

//快排，不稳定，
void ExchangeSort::quickSort(eleT a[],int begin,int end){
	if(begin>=end){
		return;
	}
	int i=begin,j=end;
	eleT temp=a[i];
	while(i!=j){
		//注意快排一定要让右边的j先扫描
		while(a[j]>=temp&&i<j)
		     j--;
		while(a[i]<=temp&&i<j)
			i++;
		eleT tem=a[i];
		a[i]=a[j];
		a[j]=tem;
	}
	a[begin]=a[i];
	a[i]=temp;
	//cout<<0<<" "<<i-1<<endl;
	//cout<<i+1<<" "<<end<<endl;
	quickSort(a,begin,i-1);
	quickSort(a,i+1,end);
}

//输出数组元素
void ExchangeSort::print(eleT a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

#endif /* EXCHANGE_H_ */
