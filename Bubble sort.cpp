#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleTitleA("Bubble sort");
	int option;
	cout<<"Bubble sort, class O(N^2) algorithm"<<endl<<"0 - result"<<endl<<"1 - sorting"<<endl<<"Enter the number: ";
	cin>>option;
	for(;;){	
		int sizet;
		double* numbers;	
		cout<<"Enter count of items: ";
		cin>>sizet;
		numbers=new double[sizet];
		cout<<"Enter items:"<<endl;
		for(int i=0;i<sizet;i++) cin>>numbers[i];
		cout<<"Table\t\t";
		for(int i=0;i<sizet;i++) cout<<numbers[i]<<" ";
		cout<<"\t"<<endl;
		for(int i=0;i<sizet;i++){
			int swap=0;
			for(int j=sizet-1;j>0;j--){
				if(numbers[j]<numbers[j-1]){
					if((option==1)&&(swap==0)) cout<<"i="<<i<<"\t";
					double tmp=numbers[j];
					numbers[j]=numbers[j-1];
					numbers[j-1]=tmp;
					if((swap>0)&&(option==1)) cout<<"\t";
					if(option==1) cout<<"j=:"<<j<<"->"<<j-1<<"\t\t";
					if(option==1){
						for(int k=0;k<sizet;k++) cout<<numbers[k]<<" ";
						cout<<endl;	
					}
					swap++;
				}
			}
			if(option==1) cout<<endl;
		}
		cout<<"Ordered table: "<<endl;
		for(int i=0;i<sizet;i++) cout<<numbers[i]<<" ";
		
		delete[] numbers;
		getch();
		system("cls");
	}
	return 0;
}
