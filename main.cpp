#include <bits/stdc++.h> 
using namespace std; 

bool esitAltKumeVaMi (int dizi[], int boyut, int toplam) 
{ 
   if (toplam == 0) 
   	return true; 
   if (boyut == 0 && toplam != 0) 
   	return false; 

   if (dizi[boyut-1] > toplam) 
   return esitAltKumeVaMi(dizi, boyut-1, toplam); 

   return esitAltKumeVaMi(dizi, boyut-1, toplam) || esitAltKumeVaMi(dizi, boyut-1, toplam-dizi[boyut-1]); 
} 

bool ayirma (int dizi[], int boyut) 
{
   int toplam = 0,i; 
   for (i = 0; i < boyut; i++) 
   toplam += dizi[i]; 

   if (toplam%2 != 0) 
   return false; 

   return esitAltKumeVaMi(dizi, boyut, toplam/2); 
} 

int main() 
{ 
   int dizi[] = {7, 5, 6, 11, 3, 4}; 
   int boyut = sizeof(dizi)/sizeof(dizi[0]); 
   if (ayirma(dizi, boyut)) 
   	cout << "Toplami esit iki alt kumeye ayrilabilir."; 
   else
   	cout << "Toplami esit iki alt kumeye ayrilamaz."; 
   return 0; 
} 

