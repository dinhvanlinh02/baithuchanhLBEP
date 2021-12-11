/*aptech_DinhVanLinh_TH2110024_LBEP
*/
#include<stdio.h>
int checkprime( int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)count++;
	}
	if(n==1) return 0;//1 khong phai so nguyen to
	else if(count==2) return 1;
	else
	return 0;
}

