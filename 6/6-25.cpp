#include<iostream>
using namespace std;

void trans(int mat[3][3]){
	int i,j;
	for (i=0;i<3;i++){
		for(j=0;j<i;j++){
			int temp; 
			temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}
}

int main(){
	int i, j;
	int data[3][3];
	cout << "��������Ԫ��" << endl;
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			cout << "��" << i+1 << "�е�" << j+1 << "��Ԫ��Ϊ��";
			cin >> data[i][j];
		}
	}
	cout << "����ľ����Ϊ��" << endl;
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
	trans(data);
	cout << "ת�ú�ľ����Ϊ��" << endl;
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			cout << data[i][j] << " ";
		}
		cout << endl;
	}

}
