    #include <iostream>

    using namespace std;

    int Max(int a,int b){
    int m;
    if (a>b){
        m=a;
    }
    else {
        m=b;
    }
return m;
}

int Min(int a,int b){
    int m;
    if (a<b){
        m=a;
    }
    else {
        m=b;
    }
return m;
}


int MaxArray(int arr[],int n){
    int i;
    int m=arr[0];
    for(i=1;i<n;i++){
        if (arr[i]>m)
            m=arr[i];
    }

return m;
}


int MinArray(int arr[],int n){
    int i;
    int m=arr[0];
    for(i=1;i<n;i++){
        if (arr[i]<m)
            m=arr[i];
    }

return m;
}


bool isEven(int x){
    if(x % 2 == 0){
        return true;
    }
    else {
        return false;
    }
}


bool isOdd(int x){
    if(x % 2 != 0){
        return true;
    }
    else {
        return false;
    }
}


bool isFactor(int a,int b){
    if(a % b == 0){
        return true;
    }
    else {
        return false;
    }
}

bool foundArray(int arr[], int n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return true;
    }
  }
  return false;
}

int searchArray(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int SumEven(int arr[],int n){
    int i;
    int m=0;
    for(i=0;i<n;i++){
        if (arr[i] % 2 == 0){
            m+=arr[i];
        }
    }

return m;
}


int SumOdd(int arr[],int n){
    int i;
    int m=0;
    for(i=0;i<n;i++){
        if (arr[i] % 2 != 0){
            m+=arr[i];
        }
    }

return m;
}

            int main(){
                 int x,y;
                    cout<<"Masukkan Nilai Pertama : ";cin>>x;
                    cout<<"Masukkan Nilai Kedua : ";cin>>y;\
                    cout<<"Nilai Terbesar Adalah : "<<Max(x,y);

                    cout<<"Masukkan Nilai Pertama : ";cin>>x;
                    cout<<"Masukkan Nilai Kedua : ";cin>>y;\
                    cout<<"Nilai Terkecil Adalah : "<<Min(x,y);

                    int n;
                    cout<<"Menampilkan Nilai Terbesar dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;
                    int arr[n];
                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    cout<<"Nilai Terbesar Adalah : "<<MaxArray(arr,n);

                    cout<<"Menampilkan Nilai Terkecil dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;

                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    cout<<"Nilai Terkecil Adalah : "<<MinArray(arr,n);


                    cout<<"x apakah bilangan genap"<<endl;
                    cout<<"Masukkan Nilai : ";cin>>x;
                    if(isEven(x)){
                        cout<<"Adalah bilangan genap"<<endl;
                    }
                    else{
                        cout<<"Bukan bilangan genap"<<endl;
                    }


                   cout<<"x apakah bilangan ganjil"<<endl;
                    cout<<"Masukkan Nilai : ";cin>>x;
                    if(isOdd(x)){
                        cout<<"Adalah bilangan ganjil"<<endl;
                    }
                    else{
                        cout<<"Bukan bilangan ganjil"<<endl;
                    }


                    cout<<"x apakah bilangan ganjil"<<endl;
                    cout<<"Masukkan Nilai : ";cin>>x;
                    cout<<"Masukkan Faktor : ";cin>>y;
                    if(isFactor(x,y)){
                        cout<<y<<" "<< "Adalah Faktor dari bilangan"<<" "<<x<<endl;
                    }
                    else{
                        cout<<y<<" "<<"Bukan Faktor dari bilangan"<<" "<<x<<endl;
                    }

                    cout<<"Mencari Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;

                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }
                    cout<<"Nilai Yang Dicari : ";cin>>x;
                    int cari = searchArray(arr, n, x);
                    if (cari != -1) {
                        cout << "Elemen ditemukan di index " << cari << endl;
                    } else {
                        cout << "Tidak ditemukan" << endl;
                    }



                    cout<<"Apakah data Ditemukan"<<endl;
                    cout <<"Masukkan Jumlah Array : ";
                    cin>>n;

                    for (int i = 0; i < n; i++) {
                        cout<<"Masukkan elemen array ke-"<<i<<" : ";cin >> arr[i];
                      }

                    cout << "Masukkan Elemen array yang dicari : ";
                    cin >> x;
                    bool found = foundArray(arr, n, x);
                        if (found) {
                        cout << "Elemen ditemukan di array" << endl;
                      } else {
                        cout << "Tidak ditemukan" << endl;
                      }



                    cout<<"Menghitung Bilangan Genap Dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;

                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    int sum=SumEven(arr,n);
                    cout<<"Jumlah Bilangan Genap Dalam Array Adalah : "<<sum;



                    cout<<"Menghitung Bilangan Ganjil Dalam Array"<<endl;
                    cout<<"Masukkan Jumlah Array : ";cin>>n;

                    for (int i=0;i<n;i++){
                        cout<<"Masukkan elemen ke-"<<i<<":";
                        cin>>arr[i];
                    }

                    sum=SumOdd(arr,n);
                    cout<<"Jumlah Bilangan Ganjil Dalam Array Adalah : "<<sum;

                    return 0;
        }
