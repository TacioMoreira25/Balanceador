#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool verificaBalanceamento(string expressao) 
{
    stack<char> Simbolos;

    for (char e : expressao) 
    {
        switch (e) 
        {
            case '(':
            case '[':
            case '{':
                Simbolos.push(e);
                break;
            case ')':
            case ']':
            case '}':
                if (Simbolos.empty()) 
                {
                    return false;
                } 
                else 
                {
                    if ((e == ')' && Simbolos.top() == '(') ||
                        (e == ']' && Simbolos.top() == '[') ||
                        (e == '}' && Simbolos.top() == '{')) 
                        {
                        Simbolos.pop(); 
                    } else {
                        return false; 
                    }
                }
                break;
            default:
                continue;
        }
    }
    return Simbolos.empty(); 
}

int main() 
{
    string expre;
    string resp;

    do 
    {
        cout << "\nDigite a expressão para verificar se está ou não balanceada: \n";
        getline(cin, expre); 

        if (verificaBalanceamento(expre)) 
        {
            cout << "\nA expressão está balanceada!\n";
        } 
        else 
        {
            cout << "\nA expressão não está balanceada!\n";
        }

        cout << "\nDeseja verificar uma nova expressão? (Sim ou não)\n";
        cin >> resp;
        cin.ignore(); 
    } 
    while (resp == "Sim" || resp == "sim" || resp == "S" || resp == "s");
    
    return 0;
}
