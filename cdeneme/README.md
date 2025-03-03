
# C Kodları - Temel Fonksiyonlar

Bu projede, C dilinde yazılmış 6 farklı fonksiyon bulunmaktadır. Bu fonksiyonlar, temel giriş/çıkış işlemleri, döngüler ve koşullu ifadeleri kullanarak çeşitli çıktılar üretir. Her bir fonksiyonun amacını ve nasıl çalıştığını açıklayacağım.

## 1. **ft_putchar**

Bu fonksiyon, bir karakteri ekrana yazdırmak için kullanılır. `write` fonksiyonu kullanılarak, belirli bir karakterin ASCII değeri ekrana yazdırılır.

### Kod:
```c
void ft_putchar(char c)
{
    write(1, &c, 1);
}
```

### Açıklama:
- `write(1, &c, 1)` komutuyla karakteri ekrana yazdırıyoruz.
- Bu fonksiyon, yalnızca bir karakterin ekrana basılması gerektiği durumlarda kullanılır.

---

## 2. **ft_print_alphabet**

Bu fonksiyon, küçük harflerden oluşan İngilizce alfabeyi sırasıyla ekrana yazdırır.

### Kod:
```c
void ft_print_alphabet(void)
{
    int letter = 'a';
    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}
```

### Açıklama:
- 'a' harfinden başlayarak 'z' harfine kadar her bir harfi yazdırıyoruz.
- `write` fonksiyonu her harfi ekrana basar ve `letter++` ile bir sonraki harfe geçeriz.

---

## 3. **ft_print_reverse_alphabet**

Bu fonksiyon, küçük harflerden oluşan İngilizce alfabeyi ters sırayla ekrana yazdırır.

### Kod:
```c
void ft_print_reverse_alphabet(void)
{
    int letter = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
}
```

### Açıklama:
- 'z' harfinden başlayarak 'a' harfine kadar her bir harfi ters sırayla yazdırıyoruz.
- `write` fonksiyonu her harfi ekrana basar ve `letter--` ile bir önceki harfe geçeriz.

---

## 4. **ft_print_numbers**

Bu fonksiyon, 0'dan 9'a kadar olan tüm rakamları ekrana yazdırır.

### Kod:
```c
void ft_print_numbers(void)
{
    int decimal = 48;
    while (decimal < 58)
    {
        write(1, &decimal, 1);
        decimal++;
    }
}
```

### Açıklama:
- '0' rakamının ASCII değeri 48 olduğu için, `decimal` değişkenini 48'den başlatıyoruz.
- `write` fonksiyonu her bir rakamı ekrana yazdırır ve ardından `decimal++` ile bir sonraki rakama geçeriz.

---

## 5. **ft_is_negative**

Bu fonksiyon, verilen sayının pozitif mi negatif mi olduğunu kontrol eder ve buna göre "P" (pozitif) veya "N" (negatif) harfini ekrana yazdırır.

### Kod:
```c
void ft_is_negative(int n)
{
    if (n >= 0)
        write(1, "P", 1);
    else
        write(1, "N", 1);
}
```

### Açıklama:
- `n` sayısını kontrol ederiz. Eğer `n` pozitif ya da sıfırsa, "P" yazdırılır, negatifse "N" yazdırılır.

---

## 6. **ft_print_comb**

Bu fonksiyon, 0'dan 9'a kadar olan rakamlardan oluşan sırasıyla artan 3 basamaklı tüm kombinasyonları ekrana yazdırır.

### Kod:
```c
void ft_print_comb(void)
{
    int a = '0';
    while (a <= '7')
    {
        int b = a + 1;
        while (b <= '8')
        {
            int c = b + 1;
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a != '7')
                    write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}
```

### Açıklama:
- 0'dan 9'a kadar olan rakamlarla 3 basamaktan oluşan kombinasyonlar sırasıyla yazdırılır.
- `a`, `b` ve `c` değişkenlerinin her biri bir sonraki rakamdan büyük olacak şekilde belirlenir ve yazdırılır. Her bir kombinasyon arasında virgül ve boşluk bulunur.

---

## Kullanım

Bu fonksiyonlar, temel C dilinde kullanılan giriş/çıkış işlemleri ve döngü mantığının basit birer örneğidir. Bu projede:
- `write` fonksiyonu ile ekrana yazdırma işlemi yapılmıştır.
- Döngüler ve koşul ifadeleri kullanılarak sırasıyla artan ve azalan karakterler, sayılar ve kombinasyonlar ekrana basılmıştır.

Eğer bu kodları kendi bilgisayarınızda çalıştırmak isterseniz, her bir fonksiyonu bir `.c` dosyasına yapıştırıp derleyebilirsiniz.
