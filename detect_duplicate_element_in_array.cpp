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
	int num[20],i,j,n,count=0;
	
	cout<<"\n\tProgram Mencari Element Ganda dalam Array";
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

	cout<<"\n\n\tAngka duplikat dalam array tersebut adalah : ";
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]==num[j])
			{
				cout<<" "<<num[i]<<" ";
				
			}
		}
	}
	
	cout<<"\n";
	
	getch();
	
}
	
	
	
	
	
