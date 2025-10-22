# Sharpe Oranı Hesaplayıcı (C Dili)

Bu proje, C dili kullanılarak geliştirilmiş basit bir konsol uygulamasıdır. Kantitatif finansal analizde temel bir metrik olan **Sharpe Oranı**'nı hesaplayarak, bir yatırımın risk-getiri performansını değerlendirir.

Bu araç, [Ders Adınızı veya 'Finansal Programlama' yazabilirsiniz] dersi ödevi kapsamında geliştirilmiştir.

## Sharpe Oranı Nedir?

Sharpe Oranı, bir yatırımın, aldığı riske (standart sapma) kıyasla ne kadar "fazladan" getiri (risksiz faiz oranının üzerinde) sağladığını ölçen bir metriktir. Yüksek bir Sharpe Oranı, daha az riskle daha yüksek getiri elde edildiğini gösterir.

**Formül:**
$$\text{Sharpe Oranı} = \frac{(R_p - R_f)}{ \sigma_p}$$

Burada:
* $R_p$ = Yatırımın beklenen getirisi (Portfolio Return)
* $R_f$ = Risksiz faiz oranı (Risk-Free Rate)
* $\sigma_p$ = Portföyün standart sapması (Volatility/Risk)

## Özellikler

* Kullanıcıdan interaktif olarak **yatırım getirisi**, **risksiz faiz oranı** ve **standart sapma** değerlerini alır.
* Girilen değerlere göre Sharpe Oranı'nı hesaplar.
* Hesaplanan orana göre yatırımın risk durumunu yorumlar:
    * **<= 1:** Risk oranı çok yüksek. (Tavsiye edilmez)
    * **1 - 2 arası:** Risk oranı orta.
    * **2 - 3 arası:** Risk oranı düşük.
    * **> 3:** Risk oranı çok düşük. (Yatırım için uygun)

## Nasıl Kullanılır

1.  Projeyi klonlayın veya indirin.
2.  Bir C derleyicisi (GCC, Clang vb.) veya bir IDE (Dev-C++, Code::Blocks) kullanarak `main.c` dosyasını derleyin.
    ```bash
    gcc main.c -o sharpe_calculator
    ```
3.  Oluşturulan çalıştırılabilir dosyayı (`sharpe_calculator.exe` veya `./sharpe_calculator`) başlatın.
4.  Programın istediği üç değeri (örneğin: 0.20, 0.05, 0.04) girin.
5.  Hesaplanan Sharpe Oranı'nı ve yorumu ekranda görün.

## Örnek Çıktı (İyi Senaryo)

Bu örnekte, risk oranı çok düşük (mükemmel) olan bir senaryo gösterilmiştir.
