#include <iostream>
#include <string>
#include <math.h>
using namespace std;
double to_radian(double degrees){
    return degrees * (M_PI / 180);
}
double to_degree(double radiant){
    return radiant * (180 / M_PI);
}
class alattrig{
public:
virtual void pilihanlanjut() = 0;
virtual double cnvrt(int pilihan2, double inpsudut) = 0;
};
class fromsinradian : public alattrig{
public:
void pilihanlanjut(){
    cout << "ubah ke apa?" << endl;
    cout << "1. cos" << endl;
    cout << "2. tan" << endl;
    cout << "3. cosec" << endl;
    cout << "4. sec" << endl;
    cout << "5. cot" << endl;
    cout << "pilihan anda :";
}
double cnvrt(int pilihan2, double inpsudut){
    float nilaibfr = sin(inpsudut);
    float nilaiafr;
    switch (pilihan2)
    {
    case 1:
    nilaiafr = acos(nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    case 2:
    nilaiafr = atan(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 3:
    nilaiafr = asin(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 4:
    nilaiafr = acos(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 5:
    nilaiafr = atan(1/nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    default:
    return 1;
    }
}
};
class fromcosradian : public alattrig{
public:
void pilihanlanjut(){
    cout << "ubah ke apa?" << endl;
    cout << "1. sin" << endl;
    cout << "2. tan" << endl;
    cout << "3. cosec" << endl;
    cout << "4. sec" << endl;
    cout << "5. cot" << endl;
    cout << "pilihan anda :";
}
double cnvrt(int pilihan2, double inpsudut){
    float nilaibfr = cos(inpsudut);
    float nilaiafr;
    switch (pilihan2)
    {
    case 1:
    nilaiafr = asin(nilaibfr);
    return to_degree(nilaiafr);
    break;
    case 2:
    nilaiafr = atan(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 3:
    nilaiafr = asin(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 4:
    nilaiafr = acos(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 5:
    nilaiafr = atan(1/nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    default:
    return 1;
    }
}
};
class fromtanradian : public alattrig{
public:
void pilihanlanjut(){
    cout << "ubah ke apa?" << endl;
    cout << "1. sin" << endl;
    cout << "2. cos" << endl;
    cout << "3. cosec" << endl;
    cout << "4. sec" << endl;
    cout << "5. cot" << endl;
    cout << "pilihan anda :";
}
double cnvrt(int pilihan2, double inpsudut){
    float nilaibfr = tan(inpsudut);
    float nilaiafr;
    switch (pilihan2)
    {
    case 1:
    nilaiafr = asin(nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    case 2:
    nilaiafr = acos(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 3:
    nilaiafr = asin(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 4:
    nilaiafr = acos(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 5:
    nilaiafr = atan(1/nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    default:
    return 1;
    }
}
};
class fromcosecradian : public alattrig{
public:
void pilihanlanjut(){
    cout << "ubah ke apa?" << endl;
    cout << "1. sin" << endl;
    cout << "2. cos" << endl;
    cout << "3. tan" << endl;
    cout << "4. sec" << endl;
    cout << "5. cot" << endl;
    cout << "pilihan anda :";
}
double cnvrt(int pilihan2, double inpsudut){
    float nilaibfr = (1/(sin(inpsudut)));
    float nilaiafr;
    switch (pilihan2)
    {
    case 1:
    nilaiafr = asin(nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    case 2:
    nilaiafr = acos(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 3:
    nilaiafr = atan(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 4:
    nilaiafr = acos(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 5:
    nilaiafr = atan(1/nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    default:
    return 1;
    }
}
};
class fromsecradian : public alattrig{
public:
void pilihanlanjut(){
    cout << "ubah ke apa?" << endl;
    cout << "1. sin" << endl;
    cout << "2. cos" << endl;
    cout << "3. tan" << endl;
    cout << "4. sec" << endl;
    cout << "5. cot" << endl;
    cout << "pilihan anda :";
}
double cnvrt(int pilihan2, double inpsudut){
    float nilaibfr = (1/cos(inpsudut));
    float nilaiafr;
    switch (pilihan2)
    {
    case 1:
    nilaiafr = asin(nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    case 2:
    nilaiafr = acos(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 3:
    nilaiafr = atan(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 4:
    nilaiafr = asin(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 5:
    nilaiafr = atan(1/nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    default:
    return 1;
    }
}
};
class fromcotradian : public alattrig{
public:
void pilihanlanjut(){
    cout << "ubah ke apa?" << endl;
    cout << "1. sin" << endl;
    cout << "2. cos" << endl;
    cout << "3. tan" << endl;
    cout << "4. cosec" << endl;
    cout << "5. sec" << endl;
    cout << "pilihan anda :";
}
double cnvrt(int pilihan2, double inpsudut){
    float nilaibfr = (1/tan(inpsudut));
    float nilaiafr;
    switch (pilihan2)
    {
    case 1:
    nilaiafr = asin(nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    case 2:
    nilaiafr = acos(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 3:
    nilaiafr = atan(nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 4:
    nilaiafr = asin(1/nilaibfr);
    return to_degree(nilaiafr);
    break;

    case 5:
    nilaiafr = acos(1/nilaibfr);
    return to_degree(nilaiafr);
    break;
    
    default:
    return 1;
    }
}
};
void pilihanawal(){
    cout << "Selamat Datang, pilihlah jenis yang ingin diubah nanti" << endl;
    cout << "1. sin" << endl;
    cout << "2. cos" << endl;
    cout << "3. tan" << endl;
    cout << "4. cosec" << endl;
    cout << "5. sec" << endl;
    cout << "6. cot" << endl;
    cout << "pilihan anda :";
}
void pilihjenisx(){
    cout << "x? (ex: sin x, x adalah derajat)" << endl;
    cout << "1. derajat" << endl;
    cout << "2. radian" << endl;
}
void ptrpilihanlanjut(alattrig* fromwhat){
    fromwhat -> pilihanlanjut();
}
double ptrcnvrt(alattrig* fromwhat, int pilihanlanjut, double inpsudut){
    return fromwhat ->cnvrt(pilihanlanjut, inpsudut);
}
int main(){
    fromsinradian fromsin;
    fromcosradian fromcos;
    fromtanradian fromtan;
    fromcosecradian fromcosec;
    fromsecradian fromsec;
    fromcotradian fromcot;
    int hslpilihanawal, hslpilihanakhir, hslpilihjenisx;
    string ulang;
    double hslnilaix, nilaiakhir;
    do
    {
        pilihanawal();
        cin >> hslpilihanawal;
        cout << "\n";
        pilihjenisx();
        cin >> hslpilihjenisx;
        cout << "\n";
        cout << "Masukkan nilai x: ";
        cin >> hslnilaix;
        cout << "\n";
        if (hslpilihjenisx == 1)
        {
            hslnilaix = to_radian(hslnilaix);
        }
        switch (hslpilihanawal)
        {
        case 1:
            ptrpilihanlanjut(&fromsin);
            cin >> hslpilihanakhir;
            cout << "\n";
            nilaiakhir = ptrcnvrt(&fromsin, hslpilihanakhir, hslnilaix);
            hslnilaix = to_degree(hslnilaix);
            switch (hslpilihanakhir)
            {
            case 1:
                cout << "sin " << hslnilaix << " = cos " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 2:
                cout << "sin " << hslnilaix << " = tan " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 3:
                cout << "sin " << hslnilaix << " = cosec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 4:
                cout << "sin " << hslnilaix << " = sec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 5:
                cout << "sin " << hslnilaix << " = cot " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            default:
                cout << "invalid choice\n";
                break;
            }
            break;
        case 2:
            ptrpilihanlanjut(&fromcos);
            cin >> hslpilihanakhir;
            cout << "\n";
            nilaiakhir = ptrcnvrt(&fromcos, hslpilihanakhir, hslnilaix);
            if (hslpilihjenisx == 2){
                hslnilaix = to_degree(hslnilaix);
            }
            switch (hslpilihanakhir)
            {
            case 1:
                cout << "cos " << hslnilaix << " = sin " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 2:
                cout << "cos " << hslnilaix << " = tan " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 3:
                cout << "cos " << hslnilaix << " = cosec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 4:
                cout << "cos " << hslnilaix << " = sec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 5:
                cout << "cos " << hslnilaix << " = cot " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            default:
                cout << "invalid choice\n";
                break;
            }
            break;
        case 3:
            ptrpilihanlanjut(&fromtan);
            cin >> hslpilihanakhir;
            cout << "\n";
            nilaiakhir = ptrcnvrt(&fromtan, hslpilihanakhir, hslnilaix);
            if (hslpilihjenisx == 2){
                hslnilaix = to_degree(hslnilaix);
            }
            switch (hslpilihanakhir)
            {
            case 1:
                cout << "tan " << hslnilaix << " = sin " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 2:
                cout << "tan " << hslnilaix << " = cos " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 3:
                cout << "tan " << hslnilaix << " = cosec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 4:
                cout << "tan " << hslnilaix << " = sec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 5:
                cout << "tan " << hslnilaix << " = cot " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            default:
                cout << "invalid choice\n";
                break;
            }
            break;
        case 4:
            ptrpilihanlanjut(&fromcosec);
            cin >> hslpilihanakhir;
            cout << "\n";
            nilaiakhir = ptrcnvrt(&fromcosec, hslpilihanakhir, hslnilaix);
            if (hslpilihjenisx == 2){
                hslnilaix = to_degree(hslnilaix);
            }
            switch (hslpilihanakhir)
            {
            case 1:
                cout << "cosec " << hslnilaix << " = sin " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 2 :
                cout << "cosec " << hslnilaix << " = cos " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 3:
                cout << "cosec " << hslnilaix << " = tan " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 4:
                cout << "cosec " << hslnilaix << " = sec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 5:
                cout << "cosec " << hslnilaix << " = cot " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            default:
                cout << "invalid choice\n";
                break;
            }
            break;
        case 5:
            ptrpilihanlanjut(&fromsec);
            cin >> hslpilihanakhir;
            cout << "\n";
            nilaiakhir = ptrcnvrt(&fromsec, hslpilihanakhir, hslnilaix);
            if (hslpilihjenisx == 2){
                hslnilaix = to_degree(hslnilaix);
            }
            switch (hslpilihanakhir)
            {
            case 1:
                cout << "sec " << hslnilaix << " = sin " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 2:
                cout << "sec " << hslnilaix << " = cos " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 3:
                cout << "sec " << hslnilaix << " = tan " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 4:
                cout << "sec " << hslnilaix << " = cosec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 5:
                cout << "sec " << hslnilaix << " = cot " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            default:
                cout << "invalid choice\n";
                break;
            }
            break;
        case 6:
            ptrpilihanlanjut(&fromcot);
            cin >> hslpilihanakhir;
            cout << "\n";
            nilaiakhir = ptrcnvrt(&fromcot, hslpilihanakhir, hslnilaix);
            if (hslpilihjenisx == 2){
                hslnilaix = to_degree(hslnilaix);
            }
            switch (hslpilihanakhir)
            {
            case 1:
                cout << "cot " << hslnilaix << " = sin " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 2:
                cout << "cot " << hslnilaix << " = cos " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 3:
                cout << "cot " << hslnilaix << " = tan " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 4:
                cout << "cot " << hslnilaix << " = cosec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            case 5:
                cout << "cot " << hslnilaix << " = sec " << nilaiakhir << "(hasil dalam derajat)" << endl;
                break;
            default:
                cout << "invalid choice\n";
                break;
            }
            break;
        default:
            cout << "error: invalid choice, continuing to the next script\n";
            break;
        }
        cout << "apakah ingin ulang?(y/n)\n" << "jawaban anda: ";
        cin >> ulang;
    } while (ulang == "y");
    return 0;
}
