#include <iostream>
using namespace std;

int main()
{
    int x = 15;
    int y = 7;
    int z = 5;
    bool jedna = true;
    bool nula = false;
    char a = 'a';
    char B = 'B';
    cout << "Operátory - matematické" << endl;
    cout << "Součet : " << x << " + " << y << " = " << x + y << endl;  //Sčítání celých i reálných čísel
    cout << "Rozdíl : " << x << " - " << y << " = " << x - y << endl;  //Z prvního operandu odečítá druhý operand (Celá i reálná čísla)
    cout << "Násobení : " << x << " * " << y << " = " << x * y << endl;//Násobíme dvě reálná nebo celá čísla
    cout << "Dělení : " << x << " / " << y << " = " << x / y << endl;  //Dělení je matematická operace, je možné použít v případe celých i reálných čísel.
    cout << "Modulo : " << y << " % " << z << " = " << y % z << endl;  //Zbytek po Dělení
    cout << "Inverze : " << " - " << x << " = " << -x << endl;       //Opačná hodnota
    cout << endl;
    cout << "Operátory - relační\n";
    cout << "Porovnání : " << x << " == " << y << " = " << (x == y) << endl;              //Porovnává dvě hodnoty.
    cout << "Je větší : " << x << " > " << y << " = " << (x > y) << endl;                 //Porovnávání dvou čísel ... Je větší než ... ?
    cout << "Je menší : " << x << " < " << y << " = " << (x < y) << endl;                 //Porovnávání dvou čísel ... Je menší než ... ?
    cout << "Je jiné : " << x << " != " << y << " = " << (x != y) << endl;                //Nerovnost je logický operátor, který se používá k porovnání dvou čísel.
    cout << "Je větší, nebo rovno : " << x << " >= " << y << " = " << (x >= y) << endl;   //Větší nebo rovno je logický operátor, který se používá k porovnání dvou čísel.
    cout << "Je menší, nebo rovno : " << x << " <= " << y << " = " << (x <= y) << endl;   //Operátor Menší nebo rovno je logický operátor, který se používá k porovnání dvou čísel.
    cout << "Operátory - binární\n";
    cout << "Logická negace:" << " !" << jedna << " = " << !jedna << " , !" << nula << " = " << !nula << endl;    //Logický operátor negace se používá k určení opačné hodnoty.
    cout << "Logický součet (OR):" << jedna << "||" << nula << "=" << (jedna || nula) << " , " << nula << "||" << nula << "=" << (nula || nula) << " , " << jedna << "||" << jedna << "=" << (jedna || jedna) << endl;    //Jen v tom případě je výsledek nepravda, jestliže oba vstupy jsou nepravdivé, ve všech ostatních případech je výsledek pravda.
    cout << "Logický součin (AND): " << jedna << "&&" << nula << "=" << (jedna && nula) << " , " << nula << "&&" << nula << "=" << (nula && nula) << " , " << jedna << "&&" << jedna << "=" << (jedna && jedna) << endl;  //Výsledek je pravda jen v tom případe, jestliže oba vstupy jsou splněny, ve všech ostatních situacích je výsledek nepravda.
    cout << "Podmíněný operátor:" << (jedna == !nula ? "pravda" : "nepravda");
    cout << endl;
    cout << "Operátory bitové\n";
    cout << "Bitová negace " << " ~ " << a << " = " << (~a) << endl;                // Je-li vstup 0, pak výstup je 1, a je-li vstup 1 výstup je 0
    cout << "Bitový posun vlevo " << "10" << " << " << "4" << " = " << (10 << 4) << endl;   //Posune levý operand doleva o tolik bitů, kolik udává pravý operand, na volná místa zprava se vkládají nuly.
    cout << "Bitový posun vpravo " << "24" << " << " << "2" << " = " << (24 >> 2) << endl;  //Posune levý operand doprava o tolik bitů, kolik udává pravý operand, na volná místa zleva se vkládají nuly
    cout << "Bitový součin (AND) " << "6" << "&" << "13" << " = " << (6 & 13) << endl;    //alt + 1 ~ ; Operace na smazání bitu. Stanoví bitový součin vstupních operandů.
    cout << "Bitový součet (OR) " << "6" << " | " << "13" << " = " << (6 & 13) << endl;   //Stanoví bitový součet vstupních operandů.
    cout << "Bitová negace (NOT) " << "~6 = " << (~6) << endl;                       //
    cout << "Bitová nonekvivalence (XOR) " << "6" << "^" << "13" << " = " << (6 ^ 13) << endl;    //alt + 3 ^ ; Na místě, kde je jedna jednička, jednička zůstane, jinak je nula.
    return 0;
}