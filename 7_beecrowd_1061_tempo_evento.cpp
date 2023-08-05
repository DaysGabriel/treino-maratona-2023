#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //começo extraindo o Dia
    string diaInic;
    getline(cin, diaInic);

    diaInic = diaInic.substr(4,2);
    int diaInicI = stoi(diaInic);

    //Finalizo a extração do dia

    //começo extranindo a hora

    string horario;
    getline(cin, horario);

    string horaI = horario.substr(0,2);
    string minI = horario.substr(5,2);
    string segI = horario.substr(10,25);

    int hi = stoi(horaI), mi = stoi(minI), si = stoi(segI); 
    //termino extraindo a hora 

    //começo extraindo o Dia
    string diaFim;
    getline(cin, diaFim);

    diaFim = diaFim.substr(4,2);
    int diaFimI = stoi(diaFim);

    //Finalizo a extração do dia

    //começo extranindo a hora

    string horarioF;
    getline(cin, horarioF);

    string horaF = horarioF.substr(0,2);
    string minF = horarioF.substr(5,2);
    string segF = horarioF.substr(10,25);

    int hf = stoi(horaF), mf = stoi(minF), sf = stoi(segF); 
    //termino extraindo a hora 

    //COMEÇO DAS CONTAS
    if (hf == 0) hf = 24;

    int dr, hr, mr, sr;

    if (sf < si)
    {
        sf += 60;
        mf --;
    }
    if (mf < mi)
    {
        mf += 60;
        hf --;
    }
    if (hf < hi)
    {
        hf += 24;
        diaFimI --;
    }


    dr = diaFimI - diaInicI;
    hr = hf - hi;
    mr = mf - mi;
    sf = sf - si;


    cout << dr << " dia(s)\n" << hr << " hora(s)\n" << mr << " minuto(s)\n" << sf << " segundo(s)\n";    
}
