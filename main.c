/**
 * @file main.c
 * @author [Mehmet Akif Gök]
 * @brief Finansal bir risk/getiri ölçütü olan Sharpe Orani'ni hesaplayan C programi.
 * @brief Bu program, kullanicidan 3 temel finansal veriyi alir:
 * 1. Yatirim Getirisi
 * 2. Risksiz Faiz Orani
 * 3. Standart Sapma (Risk)
 * @brief Ardindan Sharpe Orani'ni hesaplar ve sonucu yorumlar.
 * @brief Sharpe Orani Formulu: (Yatirim Getirisi - Risksiz Faiz Orani) / Standart Sapma
 * @date 2025-10-22
 */

// Gerekli Kutuphaneler
#include <stdio.h>  // Standart giris/cikis fonksiyonlari icin (printf, scanf)
#include <stdlib.h> // Standart kutuphane (system("pause") vb. icin)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
    // --- DEGISKEN TANIMLAMALARI ---
    
    // Kullanicidan alinacak giris degerleri (float, cunku ondalikli olabilirler)
    float yatirimkazanci;   // Ornek: %11 ise 0.11 girilmelidir.
    float risksizfaizorani; // Ornek: %6 ise 0.06 girilmelidir.
    float standartsapma;    // Portfoyun riski, ornek: %20 ise 0.20 girilmelidir.

    // Hesaplamada kullanilacak cikti degeri
    float sharpeOrani;      // Sharpe orani
	
	
    // --- 1. KULLANICIDAN VERI ALMA BOLUMU ---
    
    // Yatirim getiri oranini al
    printf("Lutfen yatiriminizin getiri oranini giriniz (Orn: 0.11): \n");
    scanf("%f", &yatirimkazanci);
	
    // Risksiz faiz oranini al
    printf("Lutfen risksiz faiz oranini giriniz (Orn: 0.06): \n");
    scanf("%f", &risksizfaizorani);
	
    // Standart sapma (risk) degerini al
    printf("Lutfen portfoyun standart sapmasini giriniz (Orn: 0.20): \n");
    scanf("%f", &standartsapma);
	
	
    // --- 2. HESAPLAMA BOLUMU ---
	
    // Sharpe Orani Formulu:
    // (Yatirim Getirisi - Risksiz Faiz Orani) -> "Riske Katlanarak" elde edilen fazladan getiridir.
    // Bu fazladan getiri, alinan riske (Standart Sapma) bolunur.
    // Sonuc: Alinan her 1 birim risk basina ne kadar fazladan getiri elde edildigidir.
    sharpeOrani = (yatirimkazanci - risksizfaizorani) / standartsapma;
	
    // Hesaplanan ham degeri (Sharpe Orani'ni) ekrana bas
    printf("\n--- HESAPLAMA SONUCU ---\n");
    printf("Hesaplanan Sharpe Orani (Risk Puani): %f\n", sharpeOrani);
	
	
    // --- 3. SONUCU DEGERLENDIRME VE YORUMLAMA BOLUMU ---
	
    // if-else if-else zinciri kullanarak, oranin hangi aralikta oldugunu buluyoruz.
    // Bu yapi, kosullardan YALNIZCA BIRININ calismasini garanti eder ve daha verimlidir.
	
    if (sharpeOrani <= 1)
    {
        // Genel kabulde 1'in alti "yetersiz" veya "kotu" kabul edilir.
        printf("Sonuc Yorumu: Risk orani cok yuksek. Tavsiye edilmez.\n");
    }
    else if (sharpeOrani > 1 && sharpeOrani <= 2)
    {
        // Genel kabulde 1-2 arasi "orta" kabul edilir.
        printf("Sonuc Yorumu: Risk orani orta.\n");
    }
    else if (sharpeOrani > 2 && sharpeOrani <= 3)
    {
        // Genel kabulde 2-3 arasi "dusuk" kabul edilir.
        printf("Sonuc Yorumu: Risk orani dusuk.\n");
    }
    else // (sharpeOrani > 3 ise geriye kalan tek secenektir)
    {
        // Genel kabulde 3'un uzeri "cok dusuk" kabul edilir.
        printf("Sonuc Yorumu: Risk orani cok dusuk. Yatirim icin uygundur.\n");
    }
	
    
    // Programin basariyla tamamlandigini isletim sistemine bildirir.
    return 0; 
}
