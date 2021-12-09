#include <iostream>
#include <string>
using namespace std;

int main()
{
    char metin[1000];			//1000 karakter alabilecek bir char array'i tanimlanmasi

    cout << "sifrelenmis metni girin: ";
    cin >> metin;			//metin input'unun alinmasi
        for(int i = 0; i < 1000; i++)			//metindeki tüm karakterlerin
		{  
        	if(metin[i] != char(0))			//input sonuna kadar isleme sokulmasi
			{  
                    metin[i] += 0;			//kodu buraya yazin
            } 
			else			//input sonunda islemin durdurulmasi
			{                
                i = 1000;
        	}
        }
    cout << "gercek metin: " << metin;			//sifrelenmis metnin yazdirilmasi
    cout << " " << endl;
    return 0;
}
