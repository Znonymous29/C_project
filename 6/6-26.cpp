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
	cout << "输入矩阵的行数：" << endl;
	cin >> row;
	cout << "输入矩阵的列数：" << endl;
	cin >> col;
	data = new int[row*col];
	
	cout << "输入矩阵的元素" << endl;
	for (int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			cout << "第" << i+1 << "行第" << j+1 << "个元素为：";
			cin >> data[i*row+j];
		}
	} 
	cout << "输入矩阵为：" << endl;	
	for (int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			cout << data[i*row+j] << " ";
		}
		cout << endl;
	} 	
	trans(data,row,col); 
	cout << "转置矩阵为：" << endl;	
	for (int i = 0;i<col;i++){
		for(int j = 0;j<row;j++){
			cout <<  data[i*col+j] << " ";
		}
		cout << endl;
	} 		
}
