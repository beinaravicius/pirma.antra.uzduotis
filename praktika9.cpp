#include <iostream>
#include <conio.h>

using namespace std;



 struct Kovotojas
{
    string nick;
    int ataka=7;
    int gynyba=8;
    int greitis=9;
    int patirtis=1000;
    int lygis=1;
    int pinigai=100000;
};

struct Goblinas
{
    string nick="Goblinas";
    int ataka=10;
    int gynyba=15;
    int greitis=10;
    int lygis=2;
};

struct Kunigas
{
    string nick="Kunigas";
    int ataka=18;
    int gynyba=20;
    int greitis=23;
    int lygis=3;
};

int apavas1=0;
int apavas2=0;
int apavas3=0;
int ginklai1=0;
int ginklai2=0;
int ginklai3=0;
int sarvai1=0;
int sarvai2=0;
int sarvai3=0;
int skydai1=0;
int skydai2=0;
int skydai3=0;
int parduoti=0;
int ant=0;
int val=0;
int lygis2=0;
int lygis3=0;

int main()
{
    int auksas=0;
    Goblinas an;
    Kunigas vl;
    Kovotojas zd;
    cout << "Sveiki atvyke i nuotykiu zaidima! Iveskite jusu vartotojo varda" << endl;
    cin >> zd.nick;
    cout << "Jusu vartotojo vardas: " << zd.nick << endl;
    cout << "Zaidimo procese galesite pirkti daiktus kurie pagerins jusu statistika. Siuo metu jusu Kovotojas atrodo taip: " << endl;
    cout << "Puolimas = 7" << endl;
    cout << "Gynyba = 8" << endl;
    cout << "Greitis = 9" << endl;
    cout << "Patirtis = 1000" << endl;
    cout << "Lygis = 1" << endl;
    cout << "Rubliai = 10000" << endl;
    cout << "Paspauskite bet kuri mygtuka zaidimo tesimui" << endl;
    getch();
    cout << "Dabar jus turite kelis pasirinkimus, galite eiti kovoti pries pirma bosa, arba galite apsipirkti naudingais daiktais." << endl;
    cout << "Koks jusu pasirinkimas?" << endl;

pradzia:
    int menu;
    cout << "1. Apsilankyti shope" << endl;
    cout << "2. Eiti  pas bosa Goblinas" << endl;
    cout << "3. Eiti  pas bosa Kunigas" << endl;
    cin >> menu;

    while(menu>=1 && menu<=3)
    {
    switch (menu)
        {
        case 1:
    int pasirinkimas;
    int a;
    cout << "Jus turite " << zd.pinigai << " Pinigu." << "Pasirinkite, ka norite nusipirkti: " << endl;

    cout << "1. Batai " << endl;
    cout << "2. Ginklai " << endl;
    cout << "3. Skydai " << endl;
    cout << "4. Sarvai " << endl;
    cout << "5. Parduoti prekes" << endl;
    cout << "6. Iseiti is parduotuves" << endl;
    cin >> a;


            switch (a)
            {
            case 1:
                {
                    int patobulinti_batai=2000;
                    cout << "1. Patobulinti Batai - 2000 pinigeliu" << endl;

                    int specialus_batai=4000;
                    cout << "2. Specialus batai - 4000 pinigeliu" << endl;

                    int geriausi_batai=6000;
                    cout << "3. Geriausi batai - 6000 pinigeliu" << endl;
                    cout <<"Iveskite numeri daikto, kuri norite isigyti" << endl;
                    cout << endl;
                    cin >> pasirinkimas;
                    if (pasirinkimas>=4) cout << "Tokio pasirinkimo nera" << endl;
                    if((pasirinkimas==1) && (zd.pinigai >= patobulinti_batai))
                    {
                        zd.greitis=zd.greitis+5;
                        zd.pinigai=zd.pinigai-patobulinti_batai;
                        cout << "Po prekes isigijimo jusu greitis tapo: " << zd.greitis << endl;
                        apavas1=1;

                    }
                    else if ((pasirinkimas==2) && (zd.pinigai >= specialus_batai))
                    {
                        zd.greitis=zd.greitis+10;
                        zd.pinigai=zd.pinigai-specialus_batai;
                        cout << "Po prekes isigijimo jusu greitis tapo: " << zd.greitis << endl;
                        apavas2=1;
                    }
                    else if((pasirinkimas==3) && (zd.pinigai >= geriausi_batai))
                    {
                        zd.greitis=zd.greitis+15;
                        zd.pinigai=zd.pinigai-geriausi_batai;
                        cout << "Po prekes isigijimo jusu greitis tapo: " << zd.greitis << endl;
                        apavas3=1;
                    }
                    else
                    {
                        cout << "Neuztenka pinigu" << endl;
                    }
                } break;
            case 2:
                {
                    int patobulintas_ginklas=2000;
                    cout << "1. Patobulintas ginklas - 2000 pinigeliu" << endl;

                    int specialus_ginklas=4000;
                    cout << "2. Specialus ginklas - 4000 pinigeliu" << endl;

                    int geriausias_ginklas=6000;
                    cout << "3. Geriausias ginklas - 6000 pinigeliu" << endl;
                    cout <<"Iveskite numeri daikto, kuri norite isigyti" << endl;
                    cout << endl;
                    cin >> pasirinkimas;
                    if (pasirinkimas>=4) cout << "Tokio pasirinkimo nera" << endl;
                    if((pasirinkimas==1) && (zd.pinigai >= patobulintas_ginklas))
                    {
                        zd.ataka=zd.ataka+5;
                        zd.pinigai=zd.pinigai-patobulintas_ginklas;
                        cout << "Po prekes isigijimo jusu puolimas tapo: " << zd.ataka << endl;
                        ginklai1=1;
                    }
                    else if((pasirinkimas==2) && (zd.pinigai >= specialus_ginklas))
                    {
                        zd.ataka=zd.ataka+10;
                        zd.pinigai=zd.pinigai-specialus_ginklas;
                        cout << "Po prekes isigijimo jusu puolimas tapo: " << zd.ataka << endl;
                        ginklai2=1;
                    }
                    else if((pasirinkimas==3) && (zd.pinigai >= geriausias_ginklas))
                    {
                        zd.ataka=zd.ataka+15;
                        zd.pinigai=zd.pinigai-geriausias_ginklas;
                        cout << "Po prekes isigijimo jusu puolimas tapo: " << zd.ataka << endl;
                        ginklai3=1;
                    }
                    else
                    {
                        cout << "Neuztenka pinigu" << endl;
                    }
                } break;
            case 3:
                {
                    int patobulintas_skydas=2000;
                    cout << "1. Patobulintas skydas - 2000 pinigeliu" << endl;

                    int specialus_skydas=4000;
                    cout << "2. Specialus skydas - 4000 pinigeliu" << endl;

                    int geriausias_skydas=6000;
                    cout << "3. Geriausias skydas - 6000 pinigeliu" << endl;
                    cout <<"Iveskite numeri daikto, kuri norite isigyti" << endl;
                    cout << endl;
                    cin >> pasirinkimas;
                    if (pasirinkimas>=4) cout << "Tokio pasirinkimo nera" << endl;
                    if((pasirinkimas==1) && (zd.pinigai >= patobulintas_skydas))
                    {
                        zd.gynyba==zd.gynyba+2;
                        zd.pinigai=zd.pinigai-patobulintas_skydas;
                        cout << "Po prekes isigijimo jusu gynyba tapo: " << zd.gynyba << endl;
                        skydai1=1;
                    }
                    else if((pasirinkimas==2) && (zd.pinigai >= specialus_skydas))
                        {
                        zd.gynyba=zd.gynyba+4;
                        zd.pinigai=zd.pinigai-specialus_skydas;
                         cout << "Po prekes isigijimo jusu gynyba tapo: " << zd.gynyba << endl;
                         skydai2=1;
                        }
                    else if ((pasirinkimas==3) && (zd.pinigai >= geriausias_skydas))
                    {
                        zd.gynyba=zd.gynyba+6;
                        zd.pinigai=zd.pinigai-geriausias_skydas;
                         cout << "Po prekes isigijimo jusu gynyba tapo: " << zd.gynyba << endl;
                         skydai3=1;
                    }
                    else
                    {
                        cout << "Neuztenka pinigu" << endl;
                    }
                } break;
            case 4:
                {
                    int patobulinti_sarvai=2000;
                    cout << "1. Patobulinti sarvai - 2000 pinigeliu" << endl;

                    int specialus_sarvai=4000;
                    cout << "2. Specialus sarvai - 4000 pinigeliu" << endl;

                    int geriausi_sarvai=6000;
                    cout << "3. Geriausi sarvai - 6000 pinigeliu" << endl;
                    cout <<"Iveskite numeri daikto, kuri norite isigyti" << endl;
                    cout << endl;
                    cin >> pasirinkimas;
                    if (pasirinkimas>=4) cout << "Tokio pasirinkimo nera" << endl;
                    if((pasirinkimas==1) && (zd.pinigai >= patobulinti_sarvai))
                    {
                        zd.gynyba=zd.gynyba+5;
                        zd.pinigai=zd.pinigai-patobulinti_sarvai;
                         cout << "Po prekes isigijimo jusu gynyba tapo: " << zd.gynyba << endl;
                         sarvai1=1;
                    }
                    else if((pasirinkimas==2) && (zd.pinigai >= specialus_sarvai))
                    {
                        zd.gynyba=zd.gynyba+10;
                        zd.pinigai=zd.pinigai-specialus_sarvai;
                         cout << "Po prekes isigijimo jusu gynyba tapo: " << zd.gynyba << endl;
                         sarvai2=1;
                    }
                    else if ((pasirinkimas==3) && (zd.pinigai >= geriausi_sarvai))
                    {
                        zd.gynyba=zd.gynyba+15;
                        zd.pinigai=zd.pinigai-geriausi_sarvai;
                         cout << "Po prekes isigijimo jusu gynyba tapo: " << zd.gynyba << endl;
                         sarvai3=1;
                    }
                    else
                    {
                        cout << "Neuztenka pinigu" << endl;
                    }
                } break;
            case 5:
                {
                    string pard;
                    if(auksas==0)
                    {
                        cout << "Jus neturite ka parduoti" << endl;
                        cout << endl;
                        break;
                    }
                    else
                    {
                        cout << "Kristalu verte - " << auksas << endl;
                        cout << "Parduoti kristalus? Iveskite Taip arba Ne" << endl;
                        cout << endl;
                    }
                    cin >> pard;
                    if(pard=="Taip")
                    {
                        zd.pinigai=zd.pinigai+auksas;
                        parduoti=1;
                        auksas=auksas-auksas;
                        break;
                    }
                    else if(pard=="Ne")
                    {
                        cout << "Jus buvote grazintas i parduotuves meniu" << endl;
                        break;
                    }
                    else
                    {
                        break;
                    }

                }
            case 6:
                {
                    cout << "Sekmes!" << endl;
                    goto pradzia;
                }

            }
            break;
        case 2:
            {
            cout << "Jus pasirinkote kovoti su Goblinas. Linkime sekmes!" << endl;
            cout << endl;
            cout << "Paspauskite bet kuri mygtuka kad testi" << endl;
        getch();
        cout << endl;
        cout << "Jus atsiteleportavote i Antharo urva! Kova vyks sulyginimo principu - Jeigu jusu tam tikra statistika" << endl;
        cout << "didesne uz Antharo, jus gausite viena taska, ir kas sumoje tures daugiau tasku, tas taps nugaletoju! Pradekime" << endl;
        cout << endl;
cout << "Spauskite bet kuri mygtuka kad testi" << endl;
getch();
//Kova
        int zaid=0;
        int boss=0;
        cout << "Lyginame puolimo statistika:" << endl;
        cout << endl;
        cout << zd.nick << " puolimas yra: " << zd.ataka << " || Goblinaso puolimas yra: " << an.ataka << endl;
        cout << endl;
        if(zd.ataka>an.ataka)
        {
            cout<< zd.nick << " Gauna viena taska!" << endl;
            zaid++;
        }
        else
        {
            cout << "Goblinas gauna viena taska!" << endl;
            boss++;
        }
cout << "Spauskite bet kuri mygtuka kad testi" << endl;
getch();


        cout << "Lyginame gynybos statistika:" << endl;
        cout << endl;
        cout << zd.nick << " gynyba yra: " << zd.gynyba << " || Goblinaso gynyba yra: " << an.gynyba << endl;
        cout << endl;
        if(zd.gynyba>an.gynyba)
        {
            cout<< zd.nick << " Gauna viena taska!" << endl;
            zaid++;
        }
        else
        {
            cout << "Goblinas gauna viena taska!" << endl;
            boss++;
        }
cout << "Spauskite bet kuri mygtuka kad testi" << endl;
getch();


            cout << "Lyginame greicio statistika:" << endl;
            cout << endl;
        cout << zd.nick << " greitis yra: " << zd.greitis << " || Goblinaso greitis yra: " << an.greitis<< endl;
        cout << endl;
        if(zd.greitis>an.greitis)
        {
            cout<< zd.nick << " Gauna viena taska!" << endl;
            zaid++;
        }
        else
        {
            cout << "Goblinas gauna viena taska!" << endl;
            boss++;
        }
cout << "Spauskite bet kuri mygtuka kad testi" << endl;
getch();

int ismesti_auksas=50000;
int ismesti_pinigai=70000;

    if(zaid>boss)
    {
        cout << "Sveikiname, jus nugalejote bossa Goblinas! Jis ismete kelis daiktus, kuriuos galite parduoti" << endl;
        ant=1;
        cout << "Taipogi pakilo jusu lygis is pirmo pakilo i antra!" << endl;
        zd.patirtis=zd.patirtis+1000;
        zd.lygis=zd.lygis+1;
        lygis2=1;
        cout << endl;
        cout << "Spauskite bet kuri mygtuka, kad surinkti ismestus kristalus" << endl;
        cout << endl;
        getch();
        auksas=auksas+ismesti_auksas;
        cout << "Spauskite bet kuri mygtuka, kad surinkti ismestus pinigus" << endl;
        cout << endl;
        getch();
        zd.pinigai=zd.pinigai+ismesti_pinigai;
        }
        else
        {
        cout << endl;
        cout << "Jus pralaimejote. Bandykite apsipirkti stipresniais daiktais!" << endl;
        }
        goto pradzia;
        break;
            }
            case 3:
                {
                    if(ant==0)
                    {
                        cout << "Jus dar nenugalejote Antharo!" << endl;
                        cout << endl;
                        goto pradzia;
                    }
                    else
                    {
            cout << "Jus pasirinkote kovoti su Kunigas. Linkime sekmes!" << endl;
            cout << endl;
            cout << "Paspauskite bet kuri mygtuka kad testi" << endl;
        getch();
        cout << endl;
        cout << "Jus atsiteleportavote i Valako urva! Kova vyks sulyginimo principu - Jeigu jusu tam tikra statistika" << endl;
        cout << "didesne uz Valako, jus gausite viena taska, ir kas sumoje tures daugiau tasku, tas taps nugaletoju! Pradekime" << endl;
        cout << endl;
        cout << "Spauskite bet kuri mygtuka kad testi" << endl;
getch();
//Kova
        int zaidd=0;
        int bosss=0;
        cout << "Lyginame puolimo statistika:" << endl;
        cout << endl;
        cout << zd.nick << " puolimas yra: " << zd.ataka << " || Valako puolimas yra: " << vl.ataka << endl;
        cout << endl;
        if(zd.ataka>vl.ataka)
        {
            cout<< zd.nick << " Gauna viena taska!" << endl;
            zaidd++;
        }
        else
        {
            cout << "Kunigas gauna viena taska!" << endl;
            bosss++;
        }
cout << "Spauskite bet kuri mygtuka kad testi" << endl;
getch();


        cout << "Lyginame gynybos statistika:" << endl;
        cout << endl;
        cout << zd.nick << " gynyba yra: " << zd.gynyba << " || Valako gynyba yra: " << vl.gynyba << endl;
        cout << endl;
        if(zd.gynyba>vl.gynyba)
        {
            cout<< zd.nick << " Gauna viena taska!" << endl;
            zaidd++;
        }
        else
        {
            cout << "Goblinas gauna viena taska!" << endl;
            bosss++;
        }
cout << "Spauskite bet kuri mygtuka kad testi" << endl;
getch();


            cout << "Lyginame greicio statistika:" << endl;
            cout << endl;
        cout << zd.nick << " greitis yra: " << zd.greitis << " || Valako greitis yra: " << vl.greitis<< endl;
        cout << endl;
        if(zd.greitis>vl.greitis)
        {
            cout<< zd.nick << " Gauna viena taska!" << endl;
            zaidd++;
        }
        else
        {
            cout << "Kunigas gauna viena taska!" << endl;
            bosss++;
        }
cout << "Spauskite bet kuri mygtuka kad testi" << endl;
getch();

int ismesti_auksas=90000;
int ismesti_pinigai=100000;

    if(zaidd>bosss)
    {
        cout << "Sveikiname, jus nugalejote bossa Kunigas, ir perejote zaidima!" << endl;
        val=1;
        cout << "Taipogi pakilo jusu lygis is antro i trecia!" << endl;
        zd.patirtis=zd.patirtis+1000;
        zd.lygis=zd.lygis+1;
        lygis3=1;
        cout << endl;
        goto pabaiga;
        break;
    }
    else
    {
        cout << endl;
        cout << "Jus pralaimejote. Bandykite apsipirkti stipresniais daiktais!" << endl;
        goto pradzia;
    }

            }
        }
    }
    }

    if(menu>2 || menu<0) cout << "Tokio pasirinkimo nera, bandykite dar karta" << endl;







    //Pasiekimai
    pabaiga:
    cout << "Sveikinimai perejus zaidima! Paspauskite bet kuri mygtuka kad pamatyti savo uzdirbtus pasiekimus!" << endl;
getch();

    if (apavas1==1) cout << "- Pasiekimas uz pirma batu patobulinima" << endl;
    if (apavas2==1) cout << "-- Pasiekimas uz antra batu patobulinima" << endl;
    if (apavas3==1) cout << "--- Pasiekimas uz trecia batu patobulinima" << endl;
    if (ginklai1==1) cout << "- Pasiekimas uz pirma ginklu patobulinima" << endl;
    if (ginklai2==1) cout << "-- Pasiekimas uz antra ginklu patobulinima" << endl;
    if (ginklai3==1) cout << "--- Pasiekimas uz trecia ginklu patobulinima" << endl;
    if (sarvai1==1) cout << "- Pasiekimas uz pirma sarvu patobulinima" << endl;
    if (sarvai2==1) cout << "-- Pasiekimas uz antra sarvu patobulinima" << endl;
    if (sarvai3==1) cout << "--- Pasiekimas uz trecia sarvu patobulinima" << endl;
    if (skydai1==1) cout << "- Pasiekimas uz pirma skydo patobulinima" << endl;
    if (skydai2==1) cout << "-- Pasiekimas uz antra skydo patobulinima" << endl;
    if (skydai3==1) cout << "--- Pasiekimas uz trecia skydo patobulinima" << endl;
    if (parduoti==1) cout << "- Pasiekimas uz kristalu pardavima patobulinima" << endl;
    if (ant==1) cout << "--- Pasiekimas uz pergale pries Goblina" << endl;
    if (val==1) cout << "--- Pasiekimas uz pergale pries Kuniga" << endl;
    if (lygis2==1) cout << "-- Pasiekimas uz antro lygio pasiekima" << endl;
    if (lygis3==1) cout << "--- Pasiekimas uz trecio lygio pasiekima" << endl;






    return 0;
}
