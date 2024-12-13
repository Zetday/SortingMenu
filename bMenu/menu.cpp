#include <iostream>
#include <conio.h>
using namespace std;
int n;

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. masukan data"<<"\n";            
cout<<"2. tampilkan data"<<"\n";            
cout<<"3. sorting asc"<<"\n";           
cout<<"4. sorting dsc"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void tukar(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}

void input_data(int data[]){
  system("cls");
    cout<<"Masukan jumlah data: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Masukan data ke-"<<i+1<<": ";
        cin>>data[i];
    }
}

void tampil_data(int data[]){
  system("cls");
    cout<<"Data yang telah dimasukan: "<<endl;
    for(int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }
    getch();
}

void sorting_asc(int data[]){
  for(int i = 1; i < n; i++){
    for(int j = n-1; j >= i; j--){
      if(data[j]<data[j-1]) tukar(&data[j], &data[j-1]);
    }
  }
  cout<<" Data yang telah diurutkan secara ascending: "<<endl;
    for(int i=0; i<n; i++){
        cout<<data[i]<<" ";
    }
    getch();
}

int main() {
int data[100];
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    input_data(data);
    break;
   case '2':
    tampil_data(data);
    /* code */ 
    break;  
   case '3':
    sorting_asc(data);
    /* code */
    break;  
   case '4':
    
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}