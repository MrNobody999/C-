#include<iostream>
using namespace std;

int main(){
	int no = 0;
	cout<<"Enter number"<<endl;
	cin>>no;
	
	int count = 1;

	int row = 1;
	while(row <= no){
		
		int col = 1;
		while(col <= row){
			cout<<count<<" ";
			count = count + 1;
			col = col + 1;
		} 
		cout<<endl;
		row = row + 1;	

    
	}

	row = 1;
	count = 1;
	while(row <= no){	

		int col = 1;       
        int space = no - row;
        while(space){
            cout<< " ";
            space = space-1;
        }

        //int col = 1;
        while(col <= row){
            cout<<count;
		    count = count + 1;
			col = col + 1;      
		}
		cout<<endl;
		row = row + 1;	

    
	}
return 0;
}