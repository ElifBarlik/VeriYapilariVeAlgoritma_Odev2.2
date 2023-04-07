# VeriYapilariVeAlgoritma_Odev2.2

Amaç: Sadece pozitif tamsayılar içeren boş olmayan bir tamsayı dizisi verildiğinde, dizinin her iki alt kümedeki elemanların toplamı eşit olacak şekilde
iki alt kümeye bölünüp bölünemeyeceğini bulmaktır.

Açıklamalar: Program, bir dizinin elemanlarını iki alt kümeye bölmeyi dener ve bu iki alt kümenin elemanlarının toplamının eşit olup olmadığını kontrol eder.
İki fonksiyon kullandım:
esitAltKumeVaMi(): Verilen toplam değeri için bir dizinin elemanlarının iki alt kümesi olup olmadığını kontrol eder.
Dizi elemanları arasında geriye doğru bir arama yaparak, elemanları toplamaya başlar.
Her bir adımda, elemanın toplam değerinden büyük veya eşit olup olmadığı kontrol edilir ve uygun olan alt kümeye atanır.
Toplam değeri 0 olduğunda, alt kümelerin toplamlarının eşit olduğu anlaşılır ve true döndürülür.
ayirma(): Verilen dizinin elemanlarını iki alt kümeye ayırarak esitAltKumeVaMi() fonksiyonunu çağırır ve sonucuna göre "Toplami esit iki alt kumeye ayrilabilir." veya
"Toplami esit iki alt kumeye ayrilamaz." mesajını ekrana yazdırır.
Toplamın çift sayı olup olmadığını kontrol eder ve değilse, alt kümelerin toplamlarının eşit olması mümkün olmayacağı için false döndürür.
Ana fonksiyonda, örnek bir dizi tanımlanır ve ayirma() fonksiyonu bu diziyle çağrılır. Sonuç ekrana yazdırılır.

Kodu Nasıl Test Ederiz?: Girdi değerlerini değiştirerek program test edebiliriz. Dizinin elemanlarını değiştirebilir veya farklı boyutta dizi girebiliriz.
