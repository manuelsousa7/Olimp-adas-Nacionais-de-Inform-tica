/*
Qualificação para a FINAL das Olimpiadas Nacionais de Informática 2015
Linguagem: C++
Pontos: 100
Complexidade Temporal: N log N
Solved by Manuel Sousa
*/

#include <iostream>
#include <algorithm>

using namespace std;

struct concorrentes{
    string nome;
    int pontos;
}c[50001];

bool compara(const concorrentes &a, const concorrentes &b)
{
    if(a.pontos==b.pontos)
        return a.nome < b.nome;
    else
        return a.pontos > b.pontos;
}

int main()
{
    int N,P,PP;
    cin >> N >> P;
    for(int i=0;i<N;i++)
    {
        cin >> c[i].nome;
        for(int ii=0;ii<P;ii++)
        {
            cin >> PP;
            c[i].pontos+=PP;
        }
    }
    sort(c, c+N,compara);
    for(int i=0;i<N;i++)
    cout << c[i].nome << " " << c[i].pontos << endl;// Complexidade Temporal Final O(N log N)
    return 0;
}
