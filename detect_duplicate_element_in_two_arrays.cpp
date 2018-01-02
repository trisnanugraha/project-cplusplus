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
	int arrOne[20],arrTwo[20],indexOne,indexTwo,i,j,count=0;
	
	cout<<"\n\tProgram Mencari Element Ganda pada Dua Array";
	cout<<"\n\tCreated By Trisna Nugraha";
	cout<<"\n\tTeknik Informatika\n";
	cout<<"\t==============================================\n";
	
	cout<<"\n\tSilakan masukan jumlah element yang diinginkan pada array pertama : ";
	cin>>indexOne;
	
	cout<<"\n\tSilakan masukan angka setiap array pertama :\n";
	
	for(i=0;i<indexOne;i++)
	{
		cout<<"\n\tElement array pertama ["<<i<<"] adalah : ";
		cin>>arrOne[i];
	}
	
	cout<<"\n\n\tData yang telah dimasukan pada array pertama adalah : ";
		for(i=0;i<indexOne;i++)
	{
		cout<<" "<<arrOne[i]<<" ";	
	}
	cout<<"\n\t==============================================\n";
		
	cout<<"\n\tSilakan masukan jumlah element yang diinginkan pada array kedua : ";
	cin>>indexTwo;
	
	cout<<"\n\tSilakan masukan angka setiap array kedua :\n";
	
	for(j=0;j<indexTwo;j++)
	{
		cout<<"\n\tElement array kedua ["<<j<<"] adalah : ";
		cin>>arrTwo[j];
	}
	cout<<"\n\n\tData yang telah dimasukan pada array kedua adalah : ";
	for(j=0;j<indexTwo;j++)
	{
		cout<<" "<<arrTwo[j]<<" ";	
	}	
	cout<<"\n\t==============================================\n";
	
	cout<<"\n\tAngka duplikat pada kedua array tersebut adalah : ";
	
	for(i=0;i<indexOne;i++)
	{
		for(j=0;j<indexTwo;j++)
		{
			if(arrOne[i]==arrTwo[j])
			{
				cout<<" "<<arrOne[i]<<" ";
				
			}
		}
		
	}
	
	cout<<"\n";
	
	getch();
	
}
	
	
	
	
	
