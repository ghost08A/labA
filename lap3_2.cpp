#include <iostream>

using namespace std;

int powA(int n,int k,int *count){
	if(k==0){
		return 1;
	}
	if(k%2==0){
		int half = powA(n,k/2,count);
		(*count)++;
		return half*half;
		
	}else{
		int half = powA(n,(k-1)/2,count);
		(*count)++;
		return n*half*half;
	}
}

int main(){
	int i,n,k,count=0;
	cin>>n>>k;
	cout<<powA(n,k,&count)<<" ";
	cout<<count;
	return 0;
}
