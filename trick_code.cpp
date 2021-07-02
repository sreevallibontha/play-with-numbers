#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	char start;
	cout<<"-------------------------------NUMBERS MAGIC-------------------------------\n";
	
	cout<<"TO START THE GAME PRESS 's'";
	cin>>start;//press s to start .
	system("cls");
if(start=='s'){	
	int last[21];//an array to store the elements
	int num[7][3]={//matrix of numbers
					{14,85,152},
					{27,94,35},
					{34,150,60},
					{84,119,78},
					{52,102,47},
					{56,83,90},
					{79,12,180}
					};
	int temp[7][3];//temperorary matrix to store the dummey matrix.
	cout<<"ROW1\tROW2\tROW3\n";
	for(int i=0;i<=6;i++){
		for(int j=0;j<=2;j++){
			cout<<num[i][j]<<"\t";//print the matrix.
		}
		cout<<"\n";
	}
	cout<<"Selcet one number in the above numbers and keep it secret\n";
	int turn=1;//the process of choosing rows continus for 3 times so initilize the turs=1 
	while(1){
		int c;
		cout<<"Now tell the row number where the secreat number exists:";
		cin>>c;//select the row.
		system("cls");//clears the screen
		turn++;
		if(c==2){//if you choose row 2
			int t1=0,t=0;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<7;j++)
				{
					last[t]=num[j][i];//suffeling the numbers in an array
					t++;
				}
			}
			for(int i=0;i<7;i++)
			{
				for(int j=0;j<3;j++)
				{
					num[i][j]=last[t1];//elements are assigning to matrix.
					t1++;
				}
			}
			cout<<"ROW1\tROW2\tROW3\n";
			for(int i=0;i<=6;i++){
				for(int j=0;j<=2;j++){
					cout<<num[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		if(c==1){//if you choose row 1
			int t=0,t1=0;
			for(int i=0;i<7;i++)
			{
				for(int j=0;j<3;j++)
				{
					temp[i][j]=num[i][j];//assigning the orginal matrix to temprory matrix.
				}
			}
			for(int i=0;i<7;i++)
			{
				num[i][1]=temp[i][0];
			}
			for(int i=0;i<7;i++)
			{
				num[i][0]=temp[i][1];
			}
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<7;j++)
				{
					last[t]=num[j][i];
					t++;
				}
			}
			for(int i=0;i<7;i++)
			{
				for(int j=0;j<3;j++)
				{
					num[i][j]=last[t1];
					t1++;
				}
			}
			cout<<"ROW1\tROW2\tROW3\n";
			for(int i=0;i<=6;i++){
				for(int j=0;j<=2;j++){
					cout<<num[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		if(c==3)//if you choose row3
		{
			int t=0,t1=0;
			for(int i=0;i<7;i++)
			{
				for(int j=0;j<3;j++)
				{
					temp[i][j]=num[i][j];
				}
			}
			for(int i=0;i<7;i++)
			{
				num[i][2]=temp[i][1];
			}
			for(int i=0;i<7;i++)
			{
				num[i][1]=temp[i][2];
			}
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<7;j++)
				{
					last[t]=num[j][i];
					t++;
				}
			}
			for(int i=0;i<7;i++)
			{
				for(int j=0;j<3;j++)
				{
					num[i][j]=last[t1];
					t1++;
				}
			}
			cout<<"ROW1\tROW2\tROW3\n";
			for(int i=0;i<=6;i++){
				for(int j=0;j<=2;j++){
					cout<<num[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
	if(turn==4){
		system("cls");
		cout<<"Your secreat number is....\n";
		sleep(1);//stops the execution for 1 sec
		cout<<"...\n";
		sleep(1);
		cout<<"....\n";
		sleep(1);
		cout<<".....\n";
		sleep(1);
		cout<<"......\n";
		sleep(1);
		cout<<"...???\n?\n\n";
		cout<<"The number is :";
		cout<<last[10];//the secret number you choose.(the answer).
		break;
		}
	}
}
}
