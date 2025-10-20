#include<bits/stdc++.h>
using namespace std;

//This program aims to evaluate whether the median or the average is more accurate in income surveys under different circumstances.

int main(){
	int N = 0;
	int middle = 0;
	int average = 0;
	int total = 0;
	
	cout<<"enter the number of survey respondents："; cin>>N;

	int* income = new int[N];

	for(int i=0;i < N+1;i++){
		printf("enter No.%d 's income：", i+1);
		cin>>income[i]; cout<<endl;
		total = total + income[i];
	}

	average = total / N;
	
	int m = N % 2;
	int k = (N+m) / 2;

	for(int i=1;i < N-1;i++){	
		int min=0;
		for(int j=i;j < N;j++){
			if(income[j] < income[min]){
				min = j;
			}
		}
		int temp = income[i];
		income[i] = income[min];
		income[min] = temp;
	}

	middle = income[k];

	cout<<"median："<<middle<<endl;
	cout<<"average："<<average<<endl;


	return 0;
}

