#include<iostream>
using namespace std;

void trans(int *mat,int r,int c){
	int i,j,temp;
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			temp = *(mat+i*r+j);
			*(mat+i*r+j) = *(mat+j*c+i);
			*(mat+j*c+i) = temp;
		}
	}
}

int main(){
	int row,col;
	int *data; 
	cout << "��������������" << endl;
	cin >> row;
	cout << "��������������" << endl;
	cin >> col;
	data = new int[row*col];
	
	cout << "��������Ԫ��" << endl;
	for (int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			cout << "��" << i+1 << "�е�" << j+1 << "��Ԫ��Ϊ��";
			cin >> data[i*row+j];
		}
	} 
	cout << "�������Ϊ��" << endl;	
	for (int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			cout << data[i*row+j] << " ";
		}
		cout << endl;
	} 	
	trans(data,row,col); 
	cout << "ת�þ���Ϊ��" << endl;	
	for (int i = 0;i<col;i++){
		for(int j = 0;j<row;j++){
			cout <<  data[i*col+j] << " ";
		}
		cout << endl;
	} 		
}
