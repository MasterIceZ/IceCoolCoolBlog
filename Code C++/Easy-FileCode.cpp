/*
  TASK   : FileCode
  AUTHOR : IceBorworntat
  SCHOOL : RYW
*/
#include<bits/stdc++.h>
using namespace std;
char name[100100],sur [100100];
void input () {
        int id,money;
        FILE *fp;
        fp = fopen("DataBase.txt","a"); //filepath
        cout << "Enter Your ID : " ;
        cin >> id;
        cout << "Enter Your Name-Surname : ";
        cin >> name >> sur;
        cout << "Enter Your Salary : ";
        cin >> money;
        fprintf(fp,"%d %s %s %d\n",id,name,sur,money);
        fclose(fp);
}
void output() {
        int id,want ,money;
        FILE *fp;
        fp = fopen("DataBase.txt","r"); //filepath
        cout << "Enter your ID : ";
        cin >> want;
        while(!feof(fp)){
                fscanf(fp,"%d %s %s %d",&id,name,sur,&money);
                if(id==want){
                cout << "Name-Surname : " << name << " " << sur << endl;
                cout << "Salary : " << money << endl;
                break;
                }
        }
        fclose(fp);
}
void all(){
        int id,money,cnt=0;
         FILE *fp;
        fp = fopen("DataBase.txt","r"); //filepath
        while(!feof(fp)){
                cnt++;
                cout << "== #" << cnt << " ==" << endl;
                fscanf(fp,"%d %s %s %d",&id,name,sur,&money);
                cout << "ID           : " << id << endl;
                cout << "Name-Surname : " << name << " " << sur <<endl;
                cout << "Salary       : " << money << endl;
        }
}
char mode[10];
int main () {
        cout << "Enter Mode : ";
        cin >> mode ;
        if(!strcmp("input",mode)){
                input();
        }
        else if(!strcmp("output",mode)){
                output();
        }
        else{
                all();
        }
        return 0;
}
                  
