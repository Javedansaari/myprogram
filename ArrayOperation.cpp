#include<iostream>
using namespace std;

int arr[4]={};
int tmp,i=0,k,j=0;

int isFull(){
	if(j==4){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(){
	if(j==0){
		return 1;
	}else{
		return 0;
	}
}

void insertElement(){
	if(isFull()){
		cout<<"\n \t array is full"<<endl;		
	}else{
		cout<<"\n enter an element to insert ";
		cin>> tmp;
		for(i=0;i<4;i++){
			if(arr[i]==0){
				arr[i] = tmp;
				k=i;
				i++;
				j++;
				break;
			}else{
				isFull();
			}
		}
	}
}

void displayElement(){
	if(isEmpty()){
		cout<<"\n \t no array elements to display "<<endl;
	}else{
		for(int l=0;l<4;l++){
		cout<<"\t"<<arr[l];
	}	
	}
}

void deleteElement(){
	if(isEmpty()){
		cout<<"\n \t no element in an array to delete"<<endl;
	}else{
		for(int m=3;m>=0;m--){
			if(arr[m]!=0){
				arr[m]=0;
				j--;
				break;
			}else{
				isEmpty();
			}
		}
	}
}

int insertAtPosition(){
	if(isFull()){
		cout<<"\n \t array is full";
	}else{
		int position,value,positionone;
		char ans;
		cout<<"\n enter an integer and its position to insert ";
		cin>>value>>position;
			if(position-1 > -1 && position-1 < 4){
				if(arr[position-1]==0){
					arr[position-1]=value;
					j++;
				}else{
					cout<<"\n \t space already occupied. You have to select another location "<<endl;
					cout<<"\n do you want to select another location (y/n)  ";
					cin>>ans;
					if(ans == 'y' || ans == 'Y'){
						cout<<"\n enter location   ";
						cin>>positionone;

						arr[positionone-1]=value;
						j++;
					}else{
						return 0;
					}
				}
			}else{
				cout<<"\n \t invalid position "<<endl;
			}
	}
return 0;
}

int searchElement(int elmnt){
	int hasElement=0;
		for(int n=0;n<4;n++){
				if(elmnt == arr[n]){
					hasElement = n;
					break;
				}else{
					hasElement = -1;
				}
			}
return hasElement;
}

void srchElmnt(){
	if(isEmpty()){
		cout<<"\n array is empty "<<endl;
	}else{
		int a;
		cout<<"\n enter integer to search ";
		cin>>a;
			if(searchElement(a)!=-1){
				cout<<"\n element found in the array "<<endl;
			}else{
				if(isEmpty()){
					cout<<"\n array is empty "<<endl;
				}else{
					cout<<"\n element not found "<<endl;
				}
			}
	}	
}

void deleteParticularElement(){
	int y;
		cout<<"\n enter an element to delete  ";
		cin>>y;
			if(searchElement(y)!=-1){
				int pos = searchElement(y);
				arr[pos]=0;
				j--;
			}else{
				cout<<"\n element not found "<<endl;
			}
}


int main(){

	int option;
	char ch;
	system("cls");
			
		do{
			cout<<"\n \t choose operations from the list below ";
			cout<<"\n \n 1.insert";
			cout<<"\n 2.display";
			cout<<"\n 3.delete";
			cout<<"\n 4.insert at a position";
			cout<<"\n 5.search an element ";
			cout<<"\n 6.delete particular element ";
			cout<<"\n \n \t choose option ";
			cin>>option;

				switch(option){
					case 1 : 
						insertElement(); break;
					case 2 :
						displayElement(); break;
					case 3 :
						deleteElement(); break;
					case 4 :
						insertAtPosition(); break;
					case 5 :
						srchElmnt(); break;
					case 6 :
						deleteParticularElement(); break;
					default :
						cout<<"\n invalid choice  "<<endl;
				}
				cout<<"\n Continue (y/n)   ";
				cin>>ch;
		}while(ch == 'y' || ch == 'Y');

return 0;
}
				cin>>ch;
		}while(ch == 'y' || ch == 'Y');

return 0;
}
