
#include<bits/stdc++.h>
#include<iostream>    
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include <vector>
#include<cmath>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
//by : Amr Eid

char a1='1',a2='2',a3='3',a4='4',a5='5',a6='6',a7='7',a8='8',a9='9',s='X';

void includ() {
        a1='1',a2='2',a3='3',a4='4',a5='5',a6='6',a7='7',a8='8',a9='9';
}

void drow (){
    cout<<"|-----------------------------------------------|"<<endl;
    cout<<"|       "<<a1<<"       |       "<<a2<<"       |       "<<a3<<"       |"<<endl;
    cout<<"|---------------|---------------|---------------|"<<endl;
    cout<<"|       "<<a4<<"       |       "<<a5<<"       |       "<<a6<<"       |"<<endl;
    cout<<"|---------------|---------------|---------------|"<<endl;
    cout<<"|       "<<a7<<"       |       "<<a8<<"       |       "<<a9<<"       |"<<endl;
    cout<<"|-----------------------------------------------|\n"<<endl;
}

int input (int i,char a){
    switch (i){                         
    case 1:
        a1 = a;
        break;
    case 2:
        a2 = a;
        break;
    case 3:
        a3 = a;
        break;
    case 4:
        a4 = a;
        break;
    case 5:
        a5 = a;
        break;
    case 6:
        a6 = a;
        break;
    case 7:
        a7 = a;
        break;
    case 8:
        a8 = a;
        break;
    case 9:
        a9 = a;
        break;
    }
}

bool check (int x){
    if(x>9 || x<1)
        return false;
    
    switch (x){                         
        case 1:
            if(a1=='1')
                return true;
            break;
        case 2:
            if(a2 == '2')
                return true;
            break;
        case 3:
            if(a3 == '3')
                return true;
            break;
        case 4:
            if(a4 == '4')
                return true;
            break;
        case 5:
            if(a5 == '5')
                return true;
            break;
        case 6:
            if(a6 == '6')
                return true;
            break;
        case 7:
            if(a7 == '7')
                return true;
            break;
        case 8:
            if(a8 == '8')
                return true;
            break;
        case 9:
            if(a9 == '9')
                return true;
            break;
    }

    return false;
}


bool end(char d){
    bool r1 = ( a1==d && a2==d && a3==d );
    bool r2 = ( a4==d && a5==d && a6==d );
    bool r3 = ( a7==d && a8==d && a9==d );

    bool r4 = ( a1==d && a4==d && a7==d );
    bool r5 = ( a2==d && a5==d && a8==d );
    bool r6 = ( a3==d && a6==d && a9==d );
    
    bool r7 = ( a1==d && a5==d && a9==d );
    bool r8 = ( a3==d && a5==d && a7==d );

    if( r1 || r2 || r3 || r4 || r5 || r6 || r7 || r8 ){
        cout<<"( "<<d<<" ) in owner "<<endl;
        return true;
    }
    return false;
}


int main (){    
    cout<<"Welcome to the game x o \n\n";
    while (1){
        int x,counter=0;
        includ();
        drow();
        while (1){  
            cout<<"player ( "<<s<<" ) Enter your number : ";
            cin>>x;
            while (!check(x)){
                cout<<"plz Enter number from 1 to 9 and Never used before : ";
                cin>>x;
            }
            if(counter%2==0){
                input(x,s);
                s='O';
            }
            else{
                input(x,s);
                s='X';
            }
            counter++;
            drow();
            if( end('X') || end('O') ){
                cout<<"Do you want to play again ? "<<endl;
                break;
            }
            else if(counter==9){
                cout<<"Equality  : Do you want to play again ? "<<endl;
                break;
            }
        }
        cout<<"1 - continue\n2 - exit\n";
        cin>>x;
        if(x==1)
            continue;
        else
            exit(0);
        cout<<"Welcome to X O again\n";
    }
    return 0;
}
