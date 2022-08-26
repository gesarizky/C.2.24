/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char S1[50] = "belajar";
  char* S2 = (char *) "salin";

  // Melakukan penyalinan string
  // dari variabel S2 ke variabel S1
  strncpy(S1, S2, 4); //dengan hanya menyalin 4 karakter pertama

  // Menampilkan nilai dari variabel S1
  cout<<S1<<endl;

  return 0;
}
