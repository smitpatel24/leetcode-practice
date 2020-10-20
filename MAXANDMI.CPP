/*
write a program  to find the minimum and maximum of each row and column
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,minrow1,minrow2,minrow3,maxrow1,maxrow2,maxrow3,mincol1,mincol2,mincol3,maxcol1,maxcol2,maxcol3,mat[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter the input:";
			cin>>mat[i][j];
		}
	}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==0)
				{
					maxrow1=mat[0][0];
					if(mat[i][j]>maxrow1)
					{
						maxrow1=mat[i][j];
					}
				}
				else if(i==1)
				{
					maxrow2=mat[1][0];
					if(mat[i][j]>maxrow2)
					{
						maxrow2=mat[i][j];
					}
				}
				else
				{
					maxrow3=mat[2][0];
					if(mat[i][j]>maxrow3)
					{
						maxrow3=mat[i][j];
					}
				}
			}
		}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==0)
			{
				minrow1=mat[0][0];
				if(mat[i][j]<minrow1)
				{
					minrow1=mat[i][j];
				}
			}
			else if(i==1)
				{
					minrow2=mat[1][0];
					if(mat[i][j]<minrow2)
					{
						minrow2=mat[i][j];
					}
				}
			else
			{
				minrow3=mat[2][0];
				if(mat[i][j]<minrow3)
				{
					minrow3=mat[i][j];
				}
			}
		}
	}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(j==0)
				{
					mincol1=mat[0][0];
					if(mat[i][j]<mincol1)
					{
						mincol1=mat[i][j];
					}
				}
				else if(j==1)
				{
					mincol2=mat[0][1];
					if(mat[i][j]<mincol2)
					{
						mincol2=mat[i][j];
					}
				}
			else
			{
				mincol3=mat[0][2];
				if(mat[i][j]<mincol3)
				{
					mincol3=mat[i][j];
				}
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==0)
			{
				maxcol1=mat[0][0];
				if(mat[i][j]<maxcol1)
				{
					maxcol1=mat[i][j];
				}
			}
			else if(j==1)
				{
					maxcol2=mat[1][0];
					if(mat[i][j]<maxcol2)
					{
						maxcol2=mat[i][j];
					}
				}
			else
			{
				maxcol3=mat[0][2];
				if(mat[i][j]<maxcol3)
				{
					maxcol3=mat[i][j];
				}
			}
		}
	}
		cout<<"The matrix :\n";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<mat[i][j]<<"\t";
			}
			cout<<"\n";
		}
		cout<<"\n The maximum value in row 1:"<<maxrow1;
		cout<<"\n The maximum value in row 2:"<<maxrow2;
		cout<<"\n The maximum value in row 3:"<<maxrow3;
		cout<<"\n The minimum value in row 1:"<<minrow1;
		cout<<"\n The minimum value in row 2:"<<minrow2;
		cout<<"\n The minimum value in row 3:"<<minrow3;
		cout<<"\n The maximum value in column 1:"<<maxcol1;
		cout<<"\n The maximum value in column 2:"<<maxcol2;
		cout<<"\n The maximum value in column 3:"<<maxcol3;
		cout<<"\n The minimum value in column 1:"<<mincol1;
		cout<<"\n The minimum value in column 2:"<<mincol2;
		cout<<"\n The minimum value in column 3:"<<mincol3;
		getch();
}



