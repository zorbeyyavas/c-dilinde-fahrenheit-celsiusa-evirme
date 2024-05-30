#include <ctype.h>

int main(){
    
//scanfler büyük küçğk harfe duyarlıdır bu yüzden küçük f girdiğimizde program hata vericek bunu çözmenin yolu ise 
// #include <ctype.h> kütüphenesini kuramktır 

char birim;
double sicaklik;

printf("\n sicaklik birimini giriniz (F) veya (C):");
scanf("%c",&birim);

birim = toupper(birim); // büyük harfe göre şart koyduğumuz için tuper yoksa küçük harf için birim= tolower(birim); 

if (birim == 'C')
{
    printf("celcius cinsinden sicakligi giriniz");
    scanf("%lf",&sicaklik);
    sicaklik=(sicaklik*9/5)+32;       //celciusdan fahrenaite dönüştürek için kullanılan formül (sıcaklık * 9/5) +32
    printf("sicaklil fahrenait cinsinden %.1f",sicaklik);
}
else if (birim=='F')
{
    printf("\nfahrenait cinsinden sicakligi giriniz");
    scanf("%lf",&sicaklik);
   sicaklik = ((sicaklik -32)*5)/9;
    printf("sicaklik celcius cinsinden %.1lf",sicaklik);
}
else
{
    printf("%c geçerli bir birim degil",birim);
}

}