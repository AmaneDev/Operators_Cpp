#include<iostream>

using namespace std;

int main()
{
    int x = 15;
    int y = 7;
    int z = 5;
    bool jedna = true;      //Proměnná typu Bool má 2 stavy - True / False, zabírá 1 Bajt v paměti
    bool nula = false;
    char a = 'a';
    char B = 'B';
    cout << "Operátory - matematické"<<endl;
    cout << "Součet : "<<x<<" + "<<y<<" = "<< x+y <<endl;  //Součet dvou čísel uložených v proměnných x a y.
    cout << "Rozdíl : "<<x<<" - "<<y<<" = "<< x-y <<endl;  //Rozdíl dvou čísel uložených v proměnných x a y.
    cout << "Násobení : "<<x<<" * "<<y<<" = "<< x*y <<endl;//Součin dvou čísel uložených v proměnných x a y.
    cout << "Dělení : "<<x<<" / "<<y<<" = "<< x/y <<endl;  //Podíl dvou čísel uložených v proměnných x a y.
    cout << "Modulo : "<<y<<" % "<<z<<" = "<< y%z <<endl;  //Zbytek po celočíselném dělení.
    cout << "Inverze : "<<" - "<<x<<" = "<<-x<<endl;       //Opačná hodnota
    cout << endl;
    cout << "Operátory - relační\n";
    cout << "Porovnání : "<<x<<" == "<<y<<" = "<<(x==y)<<endl;              //Porovnává dvě hodnoty. Výsledek true - operandy mají stejnou hodnotu.
    cout << "Je větší : "<<x<<" > "<<y<<" = "<<(x>y)<<endl;                 //Výsledek false, x není větší než y.
    cout << "Je menší : "<<x<<" < "<<y<<" = "<<(x<y)<<endl;                 //Výsledek true, x je menší než y.
    cout << "Je jiné : "<<x<<" != "<<y<<" = "<<(x!=y)<<endl;                //Nerovnost - Výsledek false, když operandy mají stejnou hodnotu.
    cout << "Je větší, nebo rovno : "<<x<<" >= "<<y<<" = "<<(x>=y)<<endl;   //Výsledek true, když je x větší nebo rovno y
    cout << "Je menší, nebo rovno : "<<x<<" <= "<<y<<" = "<<(x<=y)<<endl;   //Výsledek true, když je x menší nebo rovno y
    cout << "Operátory - binární\n";
    cout << "Logická negace:"<<" !"<<jedna<<" = "<<!jedna<<" , !"<<nula<<" = "<<!nula<<endl;    //Logický operátor negace se používá k určení opačné hodnoty. Používáme, když je třeba "otočit" podmínku.
    cout << "Logický součet (OR):"<<jedna<<"||"<<nula<<"="<<(jedna||nula)<<" , "<<nula<<"||"<<nula<<"="<<(nula||nula)<<" , "<<jedna<<"||"<<jedna<<"="<<(jedna||jedna)<<endl;    //Výraz je pravdivý, pokud je alespomň jeden z operandů pravdivý. Používáme pro sloučení dvou podmínek. Pokud platí alespomň jedna z podmínek, je výseldek true. 
    cout << "Logický součin (AND): "<<jedna<<"&&"<<nula<<"="<<(jedna&&nula)<<" , "<<nula<<"&&"<<nula<<"="<<(nula&&nula)<<" , "<<jedna<<"&&"<<jedna<<"="<<(jedna&&jedna)<<endl;  //Výraz je pravdivý pouze tehdy, když jsou oba operandy pravdivé. Používáme, pokud výsledný výraz má být true při současném splnění obou podmínek.
    cout << "Podmíněný operátor:" << (jedna==!nula? "pravda":"nepravda");
    cout << endl;
    cout << "Operátory bitové\n";
    cout << "Bitová negace "<<" ~ " << a <<" = " << (~a) <<endl;                // Je-li vstup 0, pak výstup je 1, a je-li vstup 1 výstup je 0
    cout << "Bitový posun vlevo "<<"10"<<" << "<<"4"<<" = " <<(10<<4) <<endl;   //Posune levý operand doleva o tolik bitů, kolik udává pravý operand, na volná místa zprava se vkládají nuly.
    cout << "Bitový posun vpravo "<<"24"<<" << "<<"2"<<" = " <<(24>>2) <<endl;  //Posune levý operand doprava o tolik bitů, kolik udává pravý operand, na volná místa zleva se vkládají nuly
    cout << "Bitový součin (AND) "<< "6"<<"&"<<"13"<<" = "<< (6&13) << endl;    //alt + 1 ~ ; Stanoví bitový součin vstupních operandů.
    cout << "Bitový součet (OR) "<< "6"<<" | "<<"13"<<" = "<< (6&13) << endl;   //Stanoví bitový součet vstupních operandů.
    cout << "Bitová negace (NOT) "<< "~6 = "<<(~6)<<endl;                       //Zneguje všechny bity oprandu, 0 se překlopí na 1, 1 se překlopí na 0.
    cout << "Bitová nonekvivalence (XOR) "<<"6"<<"^"<<"13"<<" = "<<(6^13)<<endl;    //alt + 3 "^" ; Na místě, kde je jedna jednička, jednička zůstane, jinak je nula.
    return 0;
}
