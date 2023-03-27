// Simple_Encryption_Program.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

string str="";
int slide=0;

void forward_slider() {
    
    string temp = str;
    slide %= 26;
    int gap=0;

    for (int i = 0; i < str.size(); i++) {
        

        if (temp[i] >= 'a' && temp[i] <= 'z') {

            if (temp[i] + slide > 'z') {
                gap = temp[i]+slide-'z';
                temp[i] = 'a' + gap;

            }
            else {
                temp[i] += slide;
            }


        }
        else if (temp[i] >= 'A' && temp[i] <= 'Z') {

            if (temp[i] + slide > 'Z') {
                gap = temp[i] + slide - 'Z';
                temp[i] = 'A' + gap;

            }
            else {
                temp[i] += slide;
            }





        }


    }
    cout << temp<<endl;

}


void back_slider() {

    string temp = str;
    slide %= 26;
    int gap = 0;

    for (int i = 0; i < str.size(); i++) {


        if (temp[i] >= 'a' && temp[i] <= 'z') {

            if (temp[i] - slide < 'a') {
                gap = temp[i] - slide - 'a';
                temp[i] = 'z' + gap;

            }
            else {
                temp[i] -= slide;
            }


        }
        else if (temp[i] >= 'A' && temp[i] <= 'Z') {

            if (temp[i] - slide <= 'A') {
                gap = temp[i] - slide - 'A';
                temp[i] = 'Z' + gap;

            }
            else {
                temp[i] -= slide;
            }

        }


    }
    cout << temp;

}







int main()
{
    cout << "what do you want encode \n";
    cin >> str;
    cout<< "what do you want one letter slide \n";
    cin >> slide;

    while (slide <= 0 ) {
        cout << "Invalid slide number it must be bigger than zero\n";
        cin >> slide;
    }
    forward_slider();
    back_slider();


}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
