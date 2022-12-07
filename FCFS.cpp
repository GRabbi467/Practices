#include<iostream>
using namespace std;
int main() {
	int n,bt[10],wt[10],tat[10],avwt=0,avtat=0,i,j;

	cout<<"Enter total number of process:";
	cin>>n;
	cout<<"Enter Process Burst Time"<<endl;
	for (i=0;i<n;i++) {
		cout<<"P["<<i+1<<"]:";
		cin>>bt[i];
	}
	//waiting time
	wt[0]=0;

	for (i=1;i<n;i++) {
		wt[i]=0;
		for (j=0;j<i;j++)
           wt[i]+=bt[j];
	}
        //TAT
	for (i=0 ; i<n ; i++) {
		tat[i]=bt[i]+wt[i];

		for(i=0;i<n;i++){
		avwt+=wt[i];
		avtat+=tat[i];
		cout<<bt[i]<< "   "<<wt[i]<<"   "<<tat[i];
	}

	}

	return 0;
}
