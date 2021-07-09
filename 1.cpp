// // // #include <iostream>
// // // #include <iomanip>
// // // using namespace std;
// // // class PhanSo
// // // {
// // // private:
// // //     float tuso;
// // //     float mauso;

// // // public:
// // //     friend PhanSo operator+(PhanSo x, PhanSo y);
// // //     friend PhanSo operator-(PhanSo x, PhanSo y);
// // //     friend PhanSo operator*(PhanSo x, PhanSo y);
// // //     friend PhanSo operator/(PhanSo x, PhanSo y);
// // //     friend ostream& operator<<(ostream &out,  PhanSo &s);
// // //     friend istream& operator>>(istream &in, PhanSo &s);
// // // };

// // // istream& operator>>(istream& in, PhanSo &s){
// // //     cout<<"Tu so:"; in>>s.tuso;
// // //     cout<<"Mau so: ";in>>s.mauso;
// // // }
// // // ostream& operator<<(ostream& out, PhanSo &s){
// // //     cout<<"Phan so";
// // //     out<<s.tuso<<"/"<<s.mauso<<endl;
// // // }
// // // PhanSo operator-(PhanSo x, PhanSo y){

// // // }
// // // PhanSo operator+(PhanSo x, PhanSo y){
// // //     PhanSo ps;
// // //     ps.tuso= x.tuso*y.mauso + x.mauso*y.tuso;
// // //     ps.mauso= x.mauso*y.mauso;
// // //     return ps;
// // // }
// // // int main(){
// // //     PhanSo a, b;
// // //     cout<<"Nhap phan so"<<endl;
// // //     cin>>a;
// // //     cout<<endl;
// // //     cin>>b;
// // //     PhanSo c;
// // //     c = a+b;
// // //     cout<<c;
// // // }

// // #include <iostream>
// // #include <iomanip>
// // using namespace std;

// // class SoPhuc{
// //     private:
// //         float thuc;
// //         float ao;
// //     public:
// //         SoPhuc(){

// //         }
// //         SoPhuc(float a, float b){
// //             thuc=a;
// //             ao=b;
// //         }
// //          SoPhuc operator + (SoPhuc m);
// //          SoPhuc operator-(SoPhuc m);
// //         friend ostream& operator<<(ostream &out, SoPhuc &sp);
// // };
// // SoPhuc SoPhuc::operator + (SoPhuc m){
// //     SoPhuc sp;
// //     sp.thuc = thuc+ m.thuc;
// //     return sp;
// // }
// // SoPhuc SoPhuc::operator-(SoPhuc m){
// //     SoPhuc sp;
// //     sp.thuc = thuc+ m.thuc;
// //     sp.ao = ao + m.ao;
// //     return sp;
// // }
// // ostream& operator<<(ostream &out, SoPhuc &sp){
// //     cout<<"So phuc:";
// //     out<<sp.thuc <<"i";
// //     out<<sp.ao;
// // }

// // int main(){
// //     SoPhuc a(2,4),b(3,7);
// //     SoPhuc c = a+b;
// //     cout<<c;

// // }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// class phuongthucbachai
// {
// private:
//     float a, b, c;

// public:
//     phuongthucbachai()
//     {
//     }
//     phuongthucbachai(float x, float y, float z)
//     {
//         a = x;
//         b = y;
//         c = z;
//     }
//     friend ostream &operator<<(ostream &out, phuongthucbachai &p);
//     phuongthucbachai operator+(phuongthucbachai m);
//     phuongthucbachai operator-(phuongthucbachai m);
//     phuongthucbachai operator-(phuongthucbachai m); //doi dau tam thuc
// };

// ostream &operator<<(ostream &out, phuongthucbachai &p)
// {
//     out << p.a << ".x*2+" << p.b << ".x+" << p.a;
// }
// phuongthucbachai phuongthucbachai::operator+(phuongthucbachai m)
// {
//     phuongthucbachai d;
//     d.a = a + m.a;
//     d.a = b + m.b;
//     d.a = c + m.c;
//     return d;
// }