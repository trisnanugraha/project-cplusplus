/* Created By Trisna Nugraha
Boleh diubah atau dicopy paste
saran dan kritik bisa email ke
trisna.nugraha456@gmail.com
 */

#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int num[100],n,i,j,m,k,l,result;

	
	cout<<"\n\tProgram Mencari Angka Hilang di Array";
	cout<<"\n\tCreated By Trisna Nugraha";
	cout<<"\n\tTeknik Informatika\n";
	cout<<"\t==============================================\n";
	
	cout<<"\n\tSilakan masukan jumlah element yang diinginkan : ";
	cin>>n;
	
	cout<<"\n\tSilakan masukan angka setiap array :\n";
	
	for(i=0;i<n;i++)
	{
		cout<<"\n\tElement array ["<<i<<"] adalah : ";
		cin>>num[i];
	}
	
	cout<<"\n\t==============================================\n";
	cout<<"\n\n\tData yang telah dimasukan adalah : ";
	
	for(i=0;i<n;i++)
	{
		cout<<" "<<num[i]<<" ";	
	}

	cout<<"\n\n\tAngka yang hilang dalam array tersebut adalah : ";

				if (num[0] != 1)
			{
				for(k=1;k<num[0];k++)
				{
						cout<<" "<<k<<" ";
				}
			}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{	
			result=num[j]-num[i];
			if(result != 1)
			{
				for(l=1;l<result;l++)
				{
					cout<<" "<<l+num[i]<<" ";
				}
					
			}
			i++;
		}
		j++;
	}	
	
	cout<<"\n";
	
	getch();
	
}
	
	
	
	
	
