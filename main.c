#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void flush() // funkcja czyszcąca bufor
{char c;
while((c=getchar())!='\n');
return;}


float Farenheit_na_Celsjusz (float F) // Deklaruje funkcje przeliczajaca F na C
{   if(F<-459.67) // Warunek na zabezpieczenie przed wpisaniem niektorych liczb do funkcji
        {printf("Wpisz liczbe wieksza lub rowna  -459.67F");}
    else
        {F =(F-32.0)*5.0/9.0; //rownanie
        printf("Wartosc temperatury w Celsjuszach wynosi %f", F); // Wyswietla moja wartosc F
        return F;}} // Zwraca F


float Farenheit_na_Kelvin (float F)
{   if(F<-459.67)
        {printf("Wpisz liczbe wieksza lub rowna  -459.67F");}
    else
        {F = (F+459.69)*5.0/9.0;
        printf("Wartosc temperatury w Kelvinach wynosi %f", F);
        return F;}}

float Celsjusz_na_Farenheit (float C)
{   if(C<-273.15)
        {printf("Wpisz liczbe wieksza lub rowna -273.15C");}
    else
        {C = C*9.0/5.0+32.0;
        printf("Wartosc temperatury w Farenheitach wynosi %f", C);
        return C;}}

float Celsjusz_na_Kelvin (float C)
{   if(C<-273.15)
        {printf("Wpisz liczbe wieksza lub rowna -273.15C");}
    else
        {C = C+273.15;
        printf("Wartosc temperatury w Kelvinach wynosi %f", C);
        return C;}}

float Kelvin_na_Farenheit (float K)
{   if(K<0)
        {printf("Wpisz liczbe wieksza lub rowna 0K");}
    else
        {K = K*9.0/5.0-459.67;
        printf("Wartosc temperatury w Farenheitach wynosi %f", K);
        return K;}}

float Kelvin_na_Celsjusz (float K)
{   if(K<0)
        {printf("Wpisz liczbe wieksza lub rowna 0K");}
    else
        {K = K-273.15;
        printf("Wartosc temperatury w Celsjuszach wynosi %f", K);
        return K;}}



int main()
{
int modyfikuj=0;
srand(time(NULL));

int index = 0; // deklaracja indeksu globalnego potrzebnego do tabeli z danymi
int remove1 = 0; // deklaracja do usuwania wierszy potem
float wprowadzonatemperatura[20] = {}; // tabela 20elementowa na wprowadzona temperature
char wprowadzonaliterka[20] = {}; // tabela 20elementowa na wprowadzona literke
float otrzymanatemperatura[20] = {}; // tabela 20elementowa na otrzymana temperature
char otrzymanaliterka[20] = {}; // tabela 20elementowa na otrzymana literke

while(1){
printf("\r\n\nKALKULATOR TEMPERATUR\r\n\n"); // menu z roznymi opcjami
printf("Wybierz jedna z opcji ponizej, wpisujac cyfre jej odpowiadajaca:\r\n");
printf("1. Farenheity na Celsjusze\r\n");
printf("2. Farenheity na Kelviny\r\n");
printf("3. Celsjusze na Fahrenheity\r\n");
printf("4. Celsjusze na Kelviny\r\n");
printf("5. Kelviny na Farenheity\r\n");
printf("6. Kelviny na Celsjusze\r\n");
printf("7. Zamknij program\r\n");
printf("8. Tablica danych\r\n");
printf("9. Usuwanie wierszy\r\n");
printf("10. Wypelnij wiersz losowymi wartosciami\r\n");
printf("11. Wypelnij tablice wierszy losowymi wartosciami\r\n");
printf("12. Zmodyfikuj/ podmien dane w wierszu\r\n");
printf("13. Usun wszystkie dane w tabeli\r\n");
printf("14. Wyswietl dane dla podanego zakresu wierszy\r\n");

float F; // deklaruje w srodku funkcji moje F, C, K potrzebne do obliczania temperatur
float C;
float K;


int opcja; // deklaruje x i wpisuje do niego cyfre odpowiadajaca ze opcje w menu
while(!scanf("%d", &opcja))
{printf("Wpisz cyfre\r\n");
flush();}

switch(opcja){ //switch-case rozne opcje
    case 1: // farenhaity na celsjusze
        printf("Przeliczanie temperatury z Farenheitow na Celsjusze\r\n");
        printf("Wpisz wartosc tempreatury w Farenheitach:\r\n");

        while(!scanf("%f", &F)){
        {printf("Wpisz cyfre\r\n");
        flush();}}// podaje wartosc tempertury ktora chce przeliczyc

        wprowadzonatemperatura[index] = F; // wprowadza do tabeli z danymi temperature ktor wybralam
        wprowadzonaliterka[index] = 'F'; // wprowadza do tabeli z danymi literke odpowiadajaca jednostce temperatury ktora wybralam
        otrzymanatemperatura[index] = Farenheit_na_Celsjusz(F); // wprowadza do tabeli z danymi obliczona wartosc temperatury
        otrzymanaliterka[index] = 'C'; // wprowadza do tabeli z danymi odpowiadajaca wynikowi jednostke temperatury
        index++; // indeks jest zwiekszany o 1 zeby zajac nastepne miejsce w tabeli przy obliczaniu innej temperatury

        break;
    case 2: // farenhaity na kelviny
        printf("Przeliczanie temperatury z Farenheitów na Kelviny\r\n");
        printf("Wpisz wartosc temperatury w Farenheitach:\r\n");
        while(!scanf("%f", &F))
        {printf("Wpisz cyfre\r\n");
        flush();}

        wprowadzonatemperatura[index] = F;
        wprowadzonaliterka[index] = 'F';
        otrzymanatemperatura[index] = Farenheit_na_Kelvin(F);
        otrzymanaliterka[index] = 'K';
        index++;

        break;
    case 3: // celsjusze na farenhaity
        printf("Przeliczanie temperatury z Celsjuszy na Farenheity\r\n");
        printf("Wpisz wartosc temperatury w Celsjuszach:\r\n");
        while(!scanf("%f", &C))
        {printf("Wpisz cyfre\r\n");
        flush();}

        wprowadzonatemperatura[index] = C;
        wprowadzonaliterka[index] = 'C';
        otrzymanatemperatura[index] = Celsjusz_na_Farenheit(C);
        otrzymanaliterka[index] = 'F';
        index++;

        break;
    case 4: // celsjusze na kelviny
        printf("Przeliczanie temperatury z Celsjuszy na Kelviny\r\n");
        printf("Wpisz wartosc temperatury w Celsjuszach:\r\n");
        while(!scanf("%f", &C))
        {printf("Wpisz cyfre\r\n");
        flush();}

        wprowadzonatemperatura[index] = C;
        wprowadzonaliterka[index] = 'C';
        otrzymanatemperatura[index] = Celsjusz_na_Kelvin(C);
        otrzymanaliterka[index] = 'K';
        index++;

        break;
    case 5: // kelviny na farenheity
        printf("Przeliczanie temperatury z Kelvinow na Farenheity\r\n");
        printf("Wpisz wartosc temperatury w Kelvinach:\r\n");
        while(!scanf("%f", &K))
        {printf("Wpisz cyfre\r\n");
        flush();}

        wprowadzonatemperatura[index] = K;
        wprowadzonaliterka[index] = 'K';
        otrzymanatemperatura[index] = Kelvin_na_Farenheit(K);
        otrzymanaliterka[index] = 'F';
        index++;

        break;
    case 6: // kelviny na celsjusze
        printf("Przeliczanie temperatury z Kelvinow na Celsjusze\r\n");
        printf("Wpisz wartosc temperatury w Kelvinach:\r\n");
        while(!scanf("%f", &K))
        {printf("Wpisz cyfre\r\n");
        flush();}

        wprowadzonatemperatura[index] = K;
        wprowadzonaliterka[index] = 'K';
        otrzymanatemperatura[index] = Kelvin_na_Celsjusz(K);
        otrzymanaliterka[index] = 'C';
        index++;

        break;
    case 7: // konczy program
        break;
    case 8: // wyswietla tabele danych ktore do tej pory otrzymalam
        for(int i = 0; i < index; i++) // dla indeksu od 0 czyli od pierwszej temperatury ktora obliczylam
        {printf("%d. %f\t%c\t%f\t%c\n", i+1 ,wprowadzonatemperatura[i], wprowadzonaliterka[i], otrzymanatemperatura[i], otrzymanaliterka[i]);}
        break;
    case 9: // usuwanie wierszy
        while(1){printf("Wpisz wiersz, ktory chcesz usunac.\r\n");
        while(!scanf("%d", &remove1)) // wpisuje numer wiersza ktory chce usunac
        {printf("Wpisz cyfre\r\n");
        flush();}
        if(remove1-1<=index){
        printf("Czy na pewno chcesz usunac ten wiersz\r\n");
        printf("Wpisz 't' jesli tak lub 'n' jesli nie\r\n");
        char usuwanie;
        scanf("%s", &usuwanie);
        if(usuwanie == 't')
        {remove1=remove1-1; // tablice liczymy od 0 a nie od 1, czyli jak wpisze pierwszy wiersz '1' to liczy od 0
        wprowadzonatemperatura[remove1]='0'; // zeruje wiersz tablicy
        wprowadzonaliterka[remove1]='-'; // to samo
        otrzymanatemperatura[remove1]='0'; // to samo
        otrzymanaliterka[remove1]='-'; // to samo
            for(int i=remove1;i<index;i++) // dla numeru wiersza-1 ktory wybralam
            {wprowadzonatemperatura[i]= wprowadzonatemperatura[i+1]; //dane z wiersza ktore wybralam nadpisywane sa przez dane z wiersza+1
            wprowadzonaliterka[i]= wprowadzonaliterka[i+1]; //to samo
            otrzymanatemperatura[i]= otrzymanatemperatura[i+1]; // to samo
            otrzymanaliterka[i]=otrzymanaliterka[i+1];}; // to samo
            index--;}// index zmniejsza sie o 1, bo redukuje liczbe miejsc w tabelce o 1
        else if(usuwanie == 'n')
        {printf("powrot");}
        else if(usuwanie!= 't' && usuwanie!= 'n')
        {printf("To nie jest 'tak' lub 'nie'");}
        break;}
        else
        {printf("nie ma takiego wiersza\r\n");}};
        break;
     case 10: // wypelnianie wierszy losowymi wartosciami
        printf("Funkcja zostala wybrana losowo.\r\n");
        int numer =(rand()%6+1);
        if(numer == 1)
        {printf("wpisz wiersz, ktory chcesz wypelnic losowymi wartosciami\r\n");
        while(!scanf("%d", &modyfikuj))
        {printf("Wpisz cyfre\r\n");
        flush();}
        modyfikuj=modyfikuj-1;
        float r =(rand());
        wprowadzonatemperatura[modyfikuj]=(rand());
        wprowadzonaliterka[modyfikuj]='F';
        otrzymanatemperatura[modyfikuj]= Farenheit_na_Celsjusz(wprowadzonatemperatura[modyfikuj]=(rand()));
        otrzymanaliterka[modyfikuj]='C';}
        else if (numer == 2)
        {printf("wpisz wiersz, ktory chcesz wypelnic losowymi wartosciami\r\n");
        while(!scanf("%d", &modyfikuj))
        {printf("Wpisz cyfre\r\n");
        flush();}
        modyfikuj=modyfikuj-1;
        float r =(rand());
        wprowadzonatemperatura[modyfikuj]=(rand());
        wprowadzonaliterka[modyfikuj]='F';
        otrzymanatemperatura[modyfikuj]= Farenheit_na_Kelvin(wprowadzonatemperatura[modyfikuj]=(rand()));
        otrzymanaliterka[modyfikuj]='K';}
        else if (numer == 3)
        {printf("wpisz wiersz, ktory chcesz wypelnic losowymi wartosciami\r\n");
        while(!scanf("%d", &modyfikuj))
        {printf("Wpisz cyfre\r\n");
        flush();}
        modyfikuj=modyfikuj-1;
        float r =(rand());
        wprowadzonatemperatura[modyfikuj]=(rand());
        wprowadzonaliterka[modyfikuj]='C';
        otrzymanatemperatura[modyfikuj]= Celsjusz_na_Farenheit(wprowadzonatemperatura[modyfikuj]=(rand()));
        otrzymanaliterka[modyfikuj]='F';}
        else if (numer == 4)
        {printf("wpisz wiersz, ktory chcesz wypelnic losowymi wartosciami\r\n");
        while(!scanf("%d", &modyfikuj))
        {printf("Wpisz cyfre\r\n");
        flush();}
        modyfikuj=modyfikuj-1;
        float r =(rand());
        wprowadzonatemperatura[modyfikuj]=(rand());
        wprowadzonaliterka[modyfikuj]='C';
        otrzymanatemperatura[modyfikuj]= Celsjusz_na_Kelvin(wprowadzonatemperatura[modyfikuj]=(rand()));
        otrzymanaliterka[modyfikuj]='K';}
        else if (numer == 5)
        {printf("wpisz wiersz, ktory chcesz wypelnic losowymi wartosciami\r\n");
        while(!scanf("%d", &modyfikuj))
        {printf("Wpisz cyfre\r\n");
        flush();}
        modyfikuj=modyfikuj-1;
        float r =(rand());
        wprowadzonatemperatura[modyfikuj]=(rand());
        wprowadzonaliterka[modyfikuj]='K';
        otrzymanatemperatura[modyfikuj]= Kelvin_na_Farenheit(wprowadzonatemperatura[modyfikuj]=(rand()));
        otrzymanaliterka[modyfikuj]='F';}
        else if (numer == 6)
        {printf("wpisz wiersz, ktory chcesz wypelnic losowymi wartosciami\r\n");
        while(!scanf("%d", &modyfikuj))
        {printf("Wpisz cyfre\r\n");
        flush();}
        modyfikuj=modyfikuj-1;
        float r =(rand());
        wprowadzonatemperatura[modyfikuj]=(rand());
        wprowadzonaliterka[modyfikuj]='K';
        otrzymanatemperatura[modyfikuj]= Kelvin_na_Celsjusz(wprowadzonatemperatura[modyfikuj]=(rand()));
        otrzymanaliterka[modyfikuj]='C';}
        else
        {printf(" Podaj cyfre od 1 do 6 odpowiadajace funkcjom przeliczania z menu\r\n");}
        break;
     case 11: // wypelnianie zakresu wierszy losowymi wartosciami
        printf("Podaj numer wiersza od ktorego chcesz wpisac losowe wartosci.\r\n");
            int los1;
            while(!scanf("%d", &los1))
            {printf("Wpisz cyfre\r\n");
            flush();};
        los1 = los1-1;

        printf("Podaj numer wiersza do ktorego chcesz wpisac losowe wartosci.\r\n");
            int los2;
            while(!scanf("%d", &los2))
            {printf("Wpisz cyfre\r\n");
            flush();};
        los2 = los2-1;
    if(los1 < index && los2 < index) //sprawdzamy czy jest o prawidlowy zakres wierszy
        {
        if(los1<=los2) // jesli ktos wpisal od mniejszego do wiekszego wiersza lub równe wiersze
            {for(int n=los1; n<=los2; n++)
                {int numer =(rand()%6+1); //losuje opcje przeliczania
    if (numer ==1) //Farenheit_na_Celsjusz
        {wprowadzonatemperatura[n]=(rand());
        wprowadzonaliterka[n]='F';
        otrzymanatemperatura[n]=Farenheit_na_Celsjusz(wprowadzonatemperatura[n]);
        otrzymanaliterka[n]='C';}
    else if (numer ==2) //Farenheit_na_Kelvin
        {wprowadzonatemperatura[n]=(rand());
        wprowadzonaliterka[n]='F';
        otrzymanatemperatura[n]=Farenheit_na_Kelvin(wprowadzonatemperatura[n]);
        otrzymanaliterka[n]='K';}
    else if (numer ==3) //Celsjusz_na_Farenheit
        {wprowadzonatemperatura[n]=(rand());
        wprowadzonaliterka[n]='C';
        otrzymanatemperatura[n]=Celsjusz_na_Farenheit(wprowadzonatemperatura[n]);
        otrzymanaliterka[n]='F';}
    else if (numer ==4) //Celsjusz_na_Kelvin
        {wprowadzonatemperatura[n]=(rand());
        wprowadzonaliterka[n]='C';
        otrzymanatemperatura[n]=Celsjusz_na_Kelvin(wprowadzonatemperatura[n]);
        otrzymanaliterka[n]='K';}
    else if (numer ==5) //Kelvin_na_Farenheit
        {wprowadzonatemperatura[n]=(rand());
        wprowadzonaliterka[n]='K';
        otrzymanatemperatura[n]=Kelvin_na_Farenheit(wprowadzonatemperatura[n]);
        otrzymanaliterka[n]='F';}
    else if (numer ==6) //Kelvin_na_Celsjusz
        {wprowadzonatemperatura[n]=(rand());
        wprowadzonaliterka[n]='K';
        otrzymanatemperatura[n]=Kelvin_na_Celsjusz(wprowadzonatemperatura[n]);
        otrzymanaliterka[n]='F';}}}
        else // jesli ktos wpisal od wiekszego do mniejszego wersu
            {for(int f=los1; f>=los2; f--)
                {int numer1=(rand()%6+1); //losuje opcje przeliczania
    if (numer1 ==1) //Farenheit_na_Celsjusz
        {wprowadzonatemperatura[f]=(rand());
        wprowadzonaliterka[f]='F';
        otrzymanatemperatura[f]=Farenheit_na_Celsjusz(wprowadzonatemperatura[f]);
        otrzymanaliterka[f]='C';}
    else if (numer1 ==2) //Farenheit_na_Kelvin
        {wprowadzonatemperatura[f]=(rand());
        wprowadzonaliterka[f]='F';
        otrzymanatemperatura[f]=Farenheit_na_Kelvin(wprowadzonatemperatura[f]);
        otrzymanaliterka[f]='K';}
    else if (numer1 ==3) //Celsjusz_na_Farenheit
        {wprowadzonatemperatura[f]=(rand());
        wprowadzonaliterka[f]='C';
        otrzymanatemperatura[f]=Celsjusz_na_Farenheit(wprowadzonatemperatura[f]);
        otrzymanaliterka[f]='F';}
    else if (numer1 ==4) //Celsjusz_na_Kelvin
        {wprowadzonatemperatura[f]=(rand());
        wprowadzonaliterka[f]='C';
        otrzymanatemperatura[f]=Celsjusz_na_Kelvin(wprowadzonatemperatura[f]);
        otrzymanaliterka[f]='K';}
    else if (numer1 ==5) //Kelvin_na_Farenheit
        {wprowadzonatemperatura[f]=(rand()+1);
        wprowadzonaliterka[f]='K';
        otrzymanatemperatura[f]=Kelvin_na_Farenheit(wprowadzonatemperatura[f]);
        otrzymanaliterka[f]='F';}
    else if (numer1 ==6) //Kelvin_na_Celsjusz
        {wprowadzonatemperatura[f]=(rand()+1);
        wprowadzonaliterka[f]='K';
        otrzymanatemperatura[f]=Kelvin_na_Celsjusz(wprowadzonatemperatura[f]);
        otrzymanaliterka[f]='F';}}}}
    else //jesli podano wiekszy wiersz niz 20
        {printf("Podano zly zakres wierszy.\r\n");}
        break;
     case 12: // modyfikowanie wierszy
        printf("Wpisz wiersz, ktory chcesz zmodyfikowac.\r\n"); //zabezpieczenie przed wierszami ktorych nie ma
        int zmien;
        while(!scanf("%d", &zmien))
        {printf("Wpisz cyfre\r\n");
        flush();}

        float zmien_temp_1;
        float zmien_temp_2;
        char zmien_lit_1;
        char zmien_lit_2;

        printf("Wybierz funkcje (wybierz numer od 1 do 6 odpowiadajacy numerom w menu):\r\n");
        int numer2;
        while(!scanf("%d", &numer2))
        {printf("Wpisz cyfre\r\n");
        flush();}

        if(numer2 ==1)
            {if(zmien-1<=index)
                {zmien = zmien-1; //bo tabelka zaczyna sie od 0 indeksu,a uzytkownik nie musi o tym wiedziec
            printf("Wpisz temperature poczatkowa, ktora chcesz podmienic zamiast poprzedniej.\r\n");
                    while(!scanf("%f", &zmien_temp_1))
                    {printf("Wpisz cyfre\r\n");
                    flush();}
                    wprowadzonatemperatura[zmien]= zmien_temp_1;
                    otrzymanatemperatura[zmien]= Farenheit_na_Celsjusz(zmien_temp_1);
                    wprowadzonaliterka[zmien]= 'F';
                    otrzymanaliterka[zmien]= 'C';}
            else
                {printf("Nie ma takiego wiersza.\r\n");
                break;}}

        else if (numer2 ==2)
            {if(zmien-1<=index)
                {zmien = zmien-1; //bo tabelka zaczyna sie od 0 indeksu,a uzytkownik nie musi o tym wiedziec
            printf("Wpisz temperature poczatkowa, ktora chcesz podmienic zamiast poprzedniej.\r\n");
                    while(!scanf("%f", &zmien_temp_1))
                    {printf("Wpisz cyfre\r\n");
                    flush();}
                    wprowadzonatemperatura[zmien]= zmien_temp_1;
                    otrzymanatemperatura[zmien]= Farenheit_na_Kelvin(zmien_temp_1);
                    wprowadzonaliterka[zmien]= 'F';
                    otrzymanaliterka[zmien]= 'K';}
            else
                {printf("Nie ma takiego wiersza.\r\n");
                break;}}

        else if(numer2 ==3)
            {if(zmien-1<=index)
                {zmien = zmien-1; //bo tabelka zaczyna sie od 0 indeksu,a uzytkownik nie musi o tym wiedziec
            printf("Wpisz temperature poczatkowa, ktora chcesz podmienic zamiast poprzedniej.\r\n");
                    while(!scanf("%f", &zmien_temp_1))
                    {printf("Wpisz cyfre\r\n");
                    flush();}
                    wprowadzonatemperatura[zmien]= zmien_temp_1;
                    otrzymanatemperatura[zmien]= Celsjusz_na_Farenheit(zmien_temp_1);
                    wprowadzonaliterka[zmien]= 'C';
                    otrzymanaliterka[zmien]= 'F';}
            else
                {printf("Nie ma takiego wiersza.\r\n");
                break;}}

        else if(numer2 == 4)
            {if(zmien-1<=index)
                {zmien = zmien-1; //bo tabelka zaczyna sie od 0 indeksu,a uzytkownik nie musi o tym wiedziec
            printf("Wpisz temperature poczatkowa, ktora chcesz podmienic zamiast poprzedniej.\r\n");
                    while(!scanf("%f", &zmien_temp_1))
                    {printf("Wpisz cyfre\r\n");
                    flush();}
                    wprowadzonatemperatura[zmien]= zmien_temp_1;
                    otrzymanatemperatura[zmien]= Celsjusz_na_Kelvin(zmien_temp_1);
                    wprowadzonaliterka[zmien]= 'C';
                    otrzymanaliterka[zmien]= 'K';}
            else
                {printf("Nie ma takiego wiersza.\r\n");
                break;}}

        else if(numer2 == 5)
            {if(zmien-1<=index)
                {zmien = zmien-1; //bo tabelka zaczyna sie od 0 indeksu,a uzytkownik nie musi o tym wiedziec
            printf("Wpisz temperature poczatkowa, ktora chcesz podmienic zamiast poprzedniej.\r\n");
                    while(!scanf("%f", &zmien_temp_1))
                    {printf("Wpisz cyfre\r\n");
                    flush();}
                    wprowadzonatemperatura[zmien]= zmien_temp_1;
                    otrzymanatemperatura[zmien]= Kelvin_na_Farenheit(zmien_temp_1);
                    wprowadzonaliterka[zmien]= 'K';
                    otrzymanaliterka[zmien]= 'F';}
            else
                {printf("Nie ma takiego wiersza.\r\n");
                break;}}

        else if(numer2 == 6)
            {if(zmien-1<=index)
                {zmien = zmien-1; //bo tabelka zaczyna sie od 0 indeksu,a uzytkownik nie musi o tym wiedziec
            printf("Wpisz temperature poczatkowa, ktora chcesz podmienic zamiast poprzedniej.\r\n");
                    while(!scanf("%f", &zmien_temp_1))
                    {printf("Wpisz cyfre\r\n");
                    flush();}
                    wprowadzonatemperatura[zmien]= zmien_temp_1;
                    otrzymanatemperatura[zmien]= Kelvin_na_Celsjusz(zmien_temp_1);
                    wprowadzonaliterka[zmien]= 'K';
                    otrzymanaliterka[zmien]= 'C';}
            else
                {printf("Nie ma takiego wiersza.\r\n");
                break;}}
        break;
     case 13: // usuwanie calej tablicy
         printf("Czy na pewno chcesz usunac wszystkie dane z tabeli?\r\n");
         printf("Wpisz 't' jesli tak, lub 'n' jesli nie");
         char usuwanie2;
         scanf ("%s", &usuwanie2);
         if( usuwanie2 == 't')
        {int ind = index;
        for(int z=0; z<ind; z++)
        {wprowadzonatemperatura[z]=0;
        otrzymanatemperatura[z]=0;
        wprowadzonaliterka[z]= '-';
        otrzymanaliterka[z]= '-';
        index--;}}
        else if( usuwanie2 == 'n')
        {printf("powrot");}
        else if( usuwanie2 !='t' && usuwanie2 != 'n')
        {printf("to nie jest tak lub nie");}
        break;
     case 14: // wyswietlanie danych dla podaneog zakresu wierszy
        printf("podaj numer wiersza od ktorego chcesz wyswietlic dane\n");
        int nwiersza1;
        while(!scanf("%d", &nwiersza1))
        {printf("Wpisz cyfre\r\n");
        flush();}
        printf("podaj numer wiersza do ktorego chcesz wyswietlic dane\n");
        int nwiersza2;
        while(!scanf("%d", &nwiersza2))
        {printf("Wpisz cyfre\r\n");
        flush();}
        if(nwiersza1<=20 && nwiersza2<=20)
        {if( nwiersza1<nwiersza2 )
        {for(int n1=nwiersza1 ;n1<=nwiersza2 ;n1++)
        {printf("%d. %f\t%c\t%f\t%c\n",n1 ,wprowadzonatemperatura[n1-1],wprowadzonaliterka[n1-1],otrzymanatemperatura[n1-1],otrzymanaliterka[n1-1]);}}
        else
        {for(int n2=nwiersza1; n2>=nwiersza2; n2--)
        {printf("%d. %f\t%c\t%f\t%c\n",n2 ,wprowadzonatemperatura[n2],wprowadzonaliterka[n2],otrzymanatemperatura[n2],otrzymanaliterka[n2]);}}}
        else
        {printf("podano zly zakres wierszy\n");}
        break;

    default: // jesli nie wybiore nic to da komunikat ze nie ma opcji
        printf("Nie wybrano zadnej z opcji.");}
}
    return 0;
}

