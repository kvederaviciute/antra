#include "skaiciavimai.h"

void vidurkis(Stud & student, int m)
{
    double sum=0;
    for(int i=0; i<m; i++)
    {
        sum=sum + student.ND.at(i);
    }
    student.vidurkis=sum/m;
}
void galutinisvid(Stud & student)
{
    student.galutinisvid = student.vidurkis*0.4 + student.egzaminas*0.6;
}
void mediana(Stud & student, int m)
{
    double d=2;
    vector<int> nd = student.ND;
    sort(nd.begin(), nd.end());
    if(m%2==0)
    {
        student.mediana = (nd[m / 2 - 1] + nd[m / 2]) / d;
    }
    else
    {
        student.mediana = nd[m/2];
    }
}

void rikiavimas(vector<Stud>& studentai)
{
    sort(studentai.begin(), studentai.end(), [](const Stud& a, const Stud& b)
    {
        return a.vardas < b.vardas;
    });
}
void rikiavimasl(list<Stud>& studentai)
{
    studentai.sort([](const Stud& a, const Stud& b) {
        return a.vardas < b.vardas;
    });
}

void galutinismed(Stud & student)
{
    student.galutinismed = student.mediana*0.4 + student.egzaminas*0.6;
}
void skirstymas(vector<Stud> s, vector<Stud>& k, vector<Stud>& v)
{
    Stud l;
    for(int i=0; i<s.size(); i++)
    {
        l = s.at(i);
        if(l.galutinisvid<5)
        {
            v.push_back(l);
        }
        else
        {
            k.push_back(l);
        }
    }
}
void skirstymasl(list<Stud> s, list<Stud>& k, list<Stud>& v)
{
for (const auto& l : s) {
        if (l.galutinisvid < 5) {
            v.push_back(l);
        } else {
            k.push_back(l);
        }
    }
}
