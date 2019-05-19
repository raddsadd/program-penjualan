#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int kode,pri,jml,tot,byr,kbl;
char ulang;
void garis()
{
    cout<<endl<<"============================================="<<endl;
}
void pembelian1 ()

{
cout<<"Masukkan Jumlah :";
        cin>>jml;
    pri=3000000;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
            if(kbl<0)
            {
                cout<<"Uang anda tidak cukup"<<endl;
            }
            else
            {


                system("cls");
                garis();
    cout<<"Nama Barang = Keyboard RAZER Death Stalker"<<endl;
    cout<<"Total harga = Rp. "<<tot<<endl;
    cout<<"Kembalian   = Rp. "<<kbl;

    garis();}

}
void pembelian2 ()
{
     pri=200000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
             if(kbl<0)
            {
                cout<<"Uang anda tidak cukup"<<endl;
            }
            else
                {system("cls");
                garis();
    cout<<"Nama Barang = Earphone JBL T205"<<endl;
    cout<<"Total harga = Rp. "<<tot<<endl;
    cout<<"Kembalian   = Rp. "<<kbl;

    garis();
                }

}
void pembelian3 ()
{
    pri=1500000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
             if(kbl<0)
            {
                cout<<"Uang anda tidak cukup"<<endl;
            }
            else
                {system("cls");
                garis();
    cout<<"Nama Barang = Seagate SSD 480GB"<<endl;
    cout<<"Total harga = Rp. "<<tot<<endl;
    cout<<"Kembalian   = Rp. "<<kbl;
    garis();
                }

}
void pembelian4 ()
{   pri=900000;
     cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
             if(kbl<0)
            {
                cout<<"Uang anda tidak cukup"<<endl;
            }
            else
                system("cls");
               {

                garis();
    cout<<"Nama Barang = Hardisk External 1 TB"<<endl;
    cout<<"Total harga = Rp. "<<tot<<endl;
    cout<<"Kembalian   = Rp. "<<kbl;
    garis();
    }

}
void pembelian5 ()
{
    pri=2000000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
             if(kbl<0)
            {
                cout<<"Uang anda tidak cukup"<<endl;
            }
            else
                {system("cls");
                garis();
    cout<<"Nama Barang = Mouse Razer Mamba 1600 Wireless"<<endl;
    cout<<"Total harga = Rp. "<<tot<<endl;
    cout<<"Kembalian   = Rp. "<<kbl;
    garis();}

}
void pembelian6 ()
{
    pri=2500000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
             if(kbl<0)
            {
                cout<<"Uang anda tidak cukup"<<endl;
            }
            else
                {system("cls");
                garis();
    cout<<"Nama Barang = Harman Kardon Onyx Studio 4 Speaker"<<endl;
    cout<<"Total harga = Rp. "<<tot<<endl;
    cout<<"Kembalian   = Rp. "<<kbl;
    garis();}

}
void pembelian7 ()
{
    pri=2700000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>byr;
            kbl=byr-tot;
             if(kbl<0)
            {
                cout<<"Uang anda tidak cukup"<<endl;
            }
            else
                {system("cls");
                garis();
    cout<<"Nama Barang = Kursi Gaming THRONE "<<endl;
    cout<<"Total harga = Rp. "<<tot<<endl;
    cout<<"Kembalian   = Rp. "<<kbl;
    garis();}

}
void lagi ()
{
    cout<<"Apakah masih ada barang yang ingin dibeli ? [Y/T]:"<<endl;

}
int main ()

{

    do
    {
system("cls");
    cout<<"============================================="<<endl;
    cout<<"|          Celestial Geniuses               |"<<endl;
    cout<<"|          Aksesoris Komputer               |"<<endl;
    cout<<"| Jl. celestial Industries Number infinity  |"<<endl;
    cout<<"=============================================\n"<<endl;
    cout<<"Berikut ini adalah daftar barang yang tersedia di toko kami"<<endl;
    cout<<""<<endl;
    cout<<"Aksesoris komputer                            Harga"<<endl;
    cout<<"1. Keyboard RAZER Death Stalker               Rp. 3.000.000"<<endl;
    cout<<"2. Earphone JBL T205                          Rp.   200.000"<<endl;
    cout<<"3. Seagate SSD 480GB                          Rp. 1.500.000"<<endl;
    cout<<"4. Hardisk External 1 TB                      Rp.   900.000"<<endl;
    cout<<"5. Mouse Razer Mamba 1600 Wireless            Rp. 2.000.000"<<endl;
    cout<<"6. Harman Kardon Onyx Studio 4 Speaker        Rp. 2.500.000"<<endl;
    cout<<"7. Kursi Gaming THRONE                        Rp. 2.700.000"<<endl;
    cout<<'\n'<<"Masukkan Pilihan Barang yang ingin anda Beli : ";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<'\n'<<"Keyboard Razer Death Stalker"<<endl;

        pembelian1();
        lagi();
        cin>>ulang;

        break;
    case 2:
        cout<<'\n'<<"Earphone JBL T205"<<endl;
           pembelian2();
        lagi();
        cin>>ulang;
        break;
    case 3:
        cout<<'\n'<<"Seagate SSD 480GB"<<endl;
        pembelian3 ();
        lagi();
        cin>>ulang;
        break;
    case 4:
        cout<<'\n'<<"Hardsik Eksternal 1 TB"<<endl;

        pembelian4 ();
        lagi();
        cin>>ulang;
        break;
    case 5:
        cout<<'\n'<<"mouse Razer Mamba 1600 Wireless"<<endl;
        pembelian5();

        lagi();
        cin>>ulang;
        break;
    case 6:
        cout<<'\n'<<"Harman Kardon Onyx Studio Speaker"<<endl;
            pembelian6 ();
        lagi();
        cin>>ulang;
        break;
    case 7:
        cout<<'\n'<<"Kursi Gaming THRONE"<<endl;
        pembelian7();

        lagi();
        cin>>ulang;
        break;
    default:


    cout<<"Kode yang anda masukkan tidak ada di Daftar Penjualan kami"<<endl;
    }
    }


    while (ulang/='Y');
    cout << " Terima kasih Sudah Berbelanja di Toko Celetial ^____^ ^____^";
    getch ();
    return 0;
}

