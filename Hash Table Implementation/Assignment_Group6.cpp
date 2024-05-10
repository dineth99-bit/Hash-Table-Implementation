
#include <iostream>
#include<string>
#include "Hash.h"

using namespace std;

int main()
{
    
    HashTable ht;

    //inserting data items ( vehicles ) to the hash table

    ht.insert("JH4KA8160NC005601","Acura","2000cc"); //1991 Acura Integra
    ht.insert("JH4DA3363HS017471","Acura","2000cc"); //1992 Acura Integra
    ht.insert("YV1MS672892447094", "Volvo", "2000cc");//Volvo Xc60
    ht.insert("1GTDK14K4JZ512094", "Sierra", "1500cc");//Sierra RX3
    ht.insert("5N3AA08D68N901917", "Infiniti", "1500cc");//2011 BMW M3
    ht.insert("1FMZU77E22UC18440", "Ford", "4000cc"); //2002 Ford Explorer Sport Trac
    ht.insert("JH4DB7640SS009074", "Acura", "2000cc");//1995 Acura Integra
    ht.insert("JT6HF10U3Y0133607", "Lexus", "2000cc");//2000 Lexus RX 300
    ht.insert("1GKEL19WXRB546238", "Safari", "4300cc");// 1994 GMC Safari
    ht.insert("1HTMSAZR66H200901", "International", "2400cc");//2006 International 4000
    ht.insert("JTHFF2C26B2515141", "Lexus", "2500cc");//2011 Lexus IS
    ht.insert("1G1JC1444PZ215071", "Chevrolet", "2000cc");//1993 Chevrolet CAVALIER VL RS
    ht.insert("1G6CD6988G4334344", "Cadillac", "4000cc");//1986 Cadillac DeVille
    ht.insert("WAULFAFR3DA006959", "Audi", "2000cc");//2013 Audi A5
    ht.insert("WP1AB29P99LA40680", "Porsche", "2500cc");//2009 Porsche Cayenne
    ht.insert("3GCRKSE34AG162050", "Chevrolet ", "2500cc");//2010 Chevrolet Silverado 1500
    ht.insert("JHMZA2H4XDT000050", "Honda", "2000cc");//2013 Honda Fit EV
    ht.insert("4V4NC9JH21N322086", "Volvo", "2000cc");//2001 Volvo VN
    ht.insert("3C8FY68B82T297664", "Chrysler", "2500cc");//2002 Chrysler PT Cruiser
    ht.insert("JH4DC4450RS002529", "Acura", "2000cc");//1994 Acura Integra
    ht.insert("5FNRL38489B006926", "Honda", "2000cc");// 2009 Honda Odyssey
    ht.insert("JH4DA344XGS004311", "Acura", "2000cc");//1986 Acura Integra
    ht.insert("WDBRF40J43F433102", "Mercedes", "2500cc"); //2003 Mercedes Benz C Class
    ht.insert("WBAHD5313MBF95736", "BMW", "2500CC");//1991 BMW 5 Series
    ht.insert("4T4BF1FK4CR236137", "Toyota", "1500cc");//2012 Toyota Camry
    ht.insert("JN1CA31D3YT717809", "Nissan", "2000cc");//2000 Nissan Maxima
    ht.insert("1C4BJWCG8DL501255", "Jeep", "2500cc");//2013 Jeep Wrangler
    ht.insert("4S3BK4252X7305536", "Subaru", "2000cc");//1999 Subaru Legacy
    ht.insert("JM3ER293490222369", "Mazda", "2000cc");//2009 Mazda CX 7
    ht.insert("WBSPM9C52BE202514", "BMW", "2500cc");//2011 BMW M3
    ht.print();
    cout << endl;
    cout << endl;


    //searching data items


    cout << "\t\t\t\t\t\t\t\t\t\t=========Implementing the searching operation=========" << endl;
    cout << "\n\n";
    ht.search("JTHFF2C26B2515141");
    ht.search("WBSPM9C52BE202514");
    ht.search("JH4KA8160NC005601");
    ht.search("JHMZA2H4XDT000050");
    ht.search("1GTDK14K4JZ512035");//not a entered key
    cout << "\n\n\n\n";

    //removing data items

    cout << "\t\t\t\t\t\t\t\t\t\t=========Implementing the Deletion operation=========" << endl;
    ht.remove("JTHFF2C26B2515141");
    ht.remove("WBSPM9C52BE202514");
    ht.remove("JH4KA8160NC005601");
    ht.remove("JHMZA2H4XDT000050");
    ht.remove("1GTDK14K4JZ512094");
  
    //printing  after removing
     
    ht.print();

    return 0;


}
