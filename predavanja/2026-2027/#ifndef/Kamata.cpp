#include "Kamata.h"

Kamata::Kamata(double stopa)
    : godisnjaStopa(stopa > 0 ? stopa : 0)
{
}

double Kamata::mjesecniObracun(const Racun& r) const
{
    if (!imaPravo(r))
        return 0.0;
    return r.getStanje() * godisnjaStopa / 100.0 / 12.0;
}

void Kamata::pripisi(Racun& r) const
{
    double iznos = mjesecniObracun(r);
    if (iznos > 0)
        r.uplata(iznos);
}