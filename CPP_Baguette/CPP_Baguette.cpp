// CPP_Baguette.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#ifdef _MSC_VER
#include <io.h>
#include <fcntl.h>
#endif
using namespace std;

int main()
{
    #ifdef _MSC_VER
        _setmode(_fileno(stdout), _O_WTEXT);
        _setmode(_fileno(stdin), _O_WTEXT);
    #else
        std::setlocale(LC_ALL, "en_US.utf8");
        std::locale::global(std::locale("en_US.utf8"));
        std::cout.imbue(std::locale());
        std::cin.imbue(std::locale());
    #endif
        std::wstring phi_symbol = L"π";
        // std::wcout << b;
        // std::wstring b = L"αβγδεζηθιξλμνξοπρστυφχψω"; //Greek Alphabet
        // std::cout << "cm\x00B2";

    // std::cout << "Hai There!\n";
    wprintf(L"Heeeyy Thereee!! \n");
    wprintf(L"\nBerakit - Rakit Kehulu\nBerenang - Renang Ke Tepian\nBersakit - Sakit Dahulu\nBersenang - Senang Kemudian.\n");

    int satu = 1;
    int dua = 2;
    wprintf(L"\nHasil 1 + 2 Adalah: %d \n\n", satu + dua);

    wprintf(L"=================================================\n\n\n");

    // Start of MENGHITUNG BUJUR SANGKAR / PERSEGI //
    // RUMUS KELILING [ 4 * s ]
    // RUMUS LUAS [ s * s ]

    int r=5, c=5, i, j;
    // r Untuk Rows
    // c Untuk Column

    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            if (i == 1 || i == r || j == 1 || j == c)
                wprintf(L"* ");
            else
                wprintf(L"  ");
        }
        wprintf(L"\n");
    }

    int Sisi = 5;

    wprintf(L"\nDiketahui BUJUR SANGKAR / PERSEGI Memiliki:\n");
    wprintf(L"- Sisi: %d \n", Sisi);
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Dengan Rumus: \n");
    wprintf(L"- Keliling ( 4 * s ) \n");
    wprintf(L"- Luas ( s * s ) \n");
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Keliling BUJUR SANGKAR / PERSEGI Diatas Adalah: %d\n", 4 * Sisi);
    wprintf(L"Luas BUJUR SANGKAR / PERSEGI Diatas Adalah: %d \n\n\n", Sisi * Sisi);
    // End of MENGHITUNG BUJUR SANGKAR / PERSEGI //

    wprintf(L"=================================================\n\n\n");

    // Start of MENGHITUNG PERSEGI PANJANG
    // RUMUS KELILING [ (2 * p) + (2 * l) Atau 2 * (p + l) ]
    // RUMUS LUAS [ p * l ]

    int PanjangPP = 21;
    int LebarPP = 5;

    wprintf(L"Diketahui PERSEGI PANJANG Memiliki:\n");
    wprintf(L"- Panjang: %d \n", PanjangPP);
    wprintf(L"- Lebar: %d \n", LebarPP);
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Dengan Rumus: \n");
    wprintf(L"- Keliling ( (2 * p) + (2 * l) Atau 2 * (p + l) ) \n");
    wprintf(L"- Luas ( p * l ) \n");
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Keliling PERSEGI PANJANG Diatas Adalah: %d\n", (2 * PanjangPP) + (2 * LebarPP));
    wprintf(L"Luas PERSEGI PANJANG Diatas Adalah: %d \n\n\n", PanjangPP * LebarPP);
    // End of MENGHITUNG PERSEGI PANJANG //

    wprintf(L"=================================================\n\n\n");

    // Start of MENGHITUNG JAJARAN GENJANG 
    // RUMUS KELILING [ (2 * p) + (2 * l) Atau 2 * (p + l) ]
    // RUMUS LUAS [ a * t ]

    int PanjangJG = 21;
    int LebarJG = 5;
    int AlasJG = 6;
    int TinggiJG = 12;

    wprintf(L"Diketahui JAJARAN GENJANG Memiliki:\n");
    wprintf(L"- Panjang: %d \n", PanjangJG);
    wprintf(L"- Lebar: %d \n", LebarJG);
    wprintf(L"- Alas: %d \n", AlasJG);
    wprintf(L"- Tinggi: %d \n", TinggiJG);
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Dengan Rumus: \n");
    wprintf(L"- Keliling ( (2 * p) + (2 * l) Atau 2 * (p + l) ) \n");
    wprintf(L"- Luas ( a * t ) \n");
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Keliling JAJARAN GENJANG Diatas Adalah: %d\n", (2 * PanjangJG) + (2 * LebarJG));
    wprintf(L"Luas JAJARAN GENJANG Diatas Adalah: %d \n\n\n", AlasJG * TinggiJG);
    // End of MENGHITUNG JAJARAN GENJANG //

    wprintf(L"=================================================\n\n\n");

    // Start of MENGHITUNG TRAPESIUM 
    // RUMUS KELILING [ S1 + S2 + S3 + S4 ]
    // RUMUS LUAS [ (S1 + S2) * t ]

    int S1T = 7;
    int S2T = 7;
    int S3T = 7;
    int S4T = 7;
    int TinggiT = 12;

    wprintf(L"Diketahui TRAPESIUM Memiliki:\n");
    wprintf(L"- Sisi 1: %d \n", S1T);
    wprintf(L"- Sisi 2: %d \n", S2T);
    wprintf(L"- Sisi 3: %d \n", S3T);
    wprintf(L"- Sisi 4: %d \n", S4T);
    wprintf(L"- Tinggi: %d \n", TinggiT);
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Dengan Rumus: \n");
    wprintf(L"- Keliling ( S1 + S2 + S3 + S4 ) \n");
    wprintf(L"- Luas ( (S1 + S2) * t ) \n");
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Keliling TRAPESIUM Diatas Adalah: %d\n", S1T + S2T + S3T + S4T);
    wprintf(L"Luas TRAPESIUM Diatas Adalah: %d \n\n\n", (S1T + S2T) * TinggiT );
    // End of MENGHITUNG TRAPESIUM //

    wprintf(L"=================================================\n\n\n");

    // Start of MENGHITUNG BELAH KETUPAT 
    // RUMUS KELILING [ S1 + S2 + S3 + S4 ]
    // RUMUS LUAS [ (D1 * D2) / 2 ]

    int S1BK = 24;
    int S2BK = 24;
    int S3BK = 24;
    int S4BK = 24;
    int D1BK = 12;
    int D2BK = 12;
    int TinggiBK = 12;

    wprintf(L"Diketahui BELAH KETUPAT Memiliki:\n");
    wprintf(L"- Sisi 1: %d \n", S1BK);
    wprintf(L"- Sisi 2: %d \n", S2BK);
    wprintf(L"- Sisi 3: %d \n", S3BK);
    wprintf(L"- Sisi 4: %d \n", S4BK);
    wprintf(L"- Diagonal 1: %d \n", D1BK);
    wprintf(L"- Diagonal 2: %d \n", D2BK);
    wprintf(L"- Tinggi: %d \n", TinggiBK);
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Dengan Rumus: \n");
    wprintf(L"- Keliling ( S1 + S2 + S3 + S4 ) \n");
    wprintf(L"- Luas ( (D1 * D2) / 2 ) \n");
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Keliling BELAH KETUPAT Diatas Adalah: %d\n", S1BK + S2BK + S3BK + S4BK);
    wprintf(L"Luas BELAH KETUPAT Diatas Adalah: %d \n\n\n", (D1BK * D2BK) / 2);
    // End of MENGHITUNG BELAH KETUPAT //

    wprintf(L"=================================================\n\n\n");

    // Start of MENGHITUNG LAYANG - LAYANG 
    // RUMUS KELILING [ (2 * p) + (2 * l) Atau 2 * (p + l) ]
    // RUMUS LUAS [ (D1 * D2) / 2 ]

    int PanjangLY = 8;
    int LebarLY = 8;
    int D1LY = 3;
    int D2LY = 3;

    wprintf(L"Diketahui LAYANG - LAYANG Memiliki:\n");
    wprintf(L"- Panjang: %d \n", PanjangLY);
    wprintf(L"- Lebar: %d \n", LebarLY);
    wprintf(L"- Diagonal 1: %d \n", D1LY);
    wprintf(L"- Diagonal 2: %d \n", D2LY);
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Dengan Rumus: \n");
    wprintf(L"- Keliling ( (2 * p) + (2 * l) Atau 2 * (p + l) ) \n");
    wprintf(L"- Luas ( (D1 * D2) / 2 ) \n");
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Keliling LAYANG - LAYANG Diatas Adalah: %d\n", S1BK + S2BK + S3BK + S4BK);
    wprintf(L"Luas LAYANG - LAYANG Diatas Adalah: %d \n\n\n", (D1BK * D2BK) / 2);
    // End of MENGHITUNG LAYANG - LAYANG //

    wprintf(L"=================================================\n\n\n");

    // Start of MENGHITUNG SEGITIGA 
    // RUMUS KELILING [ S1 + S2 + S3 ]
    // RUMUS LUAS [ 1/2 * a * t ]

    int S1ST = 12;
    int S2ST = 12;
    int S3ST = 12;
    int AlasST = 5;
    int TinggiST = 15;
    float div = 0.5;
    float Area = div * AlasST * TinggiST;

    wprintf(L"Diketahui SEGITIGA Memiliki:\n");
    wprintf(L"- Sisi 1: %d \n", S1ST);
    wprintf(L"- Sisi 2: %d \n", S2ST);
    wprintf(L"- Sisi 3: %d \n", S3ST);
    wprintf(L"- Alas: %d \n", AlasST);
    wprintf(L"- Tinggi: %d \n", TinggiST);
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Dengan Rumus: \n");
    wprintf(L"- Keliling ( S1 + S2 + S3 ) \n");
    wprintf(L"- Luas ( 1/2 * a * t ) \n");
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Keliling SEGITIGA Diatas Adalah: %d\n", S1ST + S2ST + S3ST);
    wprintf(L"Luas SEGITIGA Diatas Adalah: %.2f\n\n\n", Area);

    // End of MENGHITUNG SEGITIGA //

    wprintf(L"=================================================\n\n\n");

    // Start of MENGHITUNG LINGKARAN 
    // RUMUS KELILING 1 [ π(3.14) * D ]
    // RUMUS KELILING 2 [ 2 * π(3.14) * r ]
    // RUMUS LUAS [ 1/2 * a * t ]

    int DiameterL = 20;
    int JariL = 12;
    double phi = 3.14;

    wprintf(L"Diketahui LINGKARAN Memiliki:\n");
    wprintf(L"- Jari - Jari: %d \n", JariL);
    wprintf(L"- Diameter: %d \n", DiameterL);
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Dengan Rumus: \n");
    wprintf(L"- Keliling Lingkaran 1 ( " );
    std::wcout << phi_symbol;
    wprintf(L" = 3.14 * D )\n");
    wprintf(L"- Keliling Lingkaran 2 ( 2 * ");
    std::wcout << phi_symbol;
    wprintf(L" = 3.14 * r )\n");
    wprintf(L"- Luas ( 1/2 * a * t ) \n");
    wprintf(L"-  -  -  -  -  -  -  -  -  -  -  -  -  -\n");
    wprintf(L"Keliling LINGKARAN 1 Diatas Adalah: %.2f\n", phi * DiameterL);
    wprintf(L"Keliling LINGKARAN 2 Diatas Adalah: %.2f\n", 2 * phi * JariL);
    wprintf(L"Luas LINGKARAN Diatas Adalah: %.2f\n", phi * JariL * JariL);
    
    // End of MENGHITUNG LINGKARAN //

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
