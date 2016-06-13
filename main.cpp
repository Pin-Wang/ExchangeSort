/*
 * main.cpp
 *
 *  Created on: 2016年6月13日
 *      Author: Administrator
 */

#include "exchange.h"

int main(){
	ExchangeSort exchange;
	int a[]={4,6,8,9,23,65,13,67};
	//exchange.bubbleSort(a,8);
	exchange.quickSort(a,0,7);
	exchange.print(a,8);
	return 0;
}



