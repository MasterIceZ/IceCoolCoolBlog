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
        fp = fopen("C:\Users\User\Desktop\data.txt","a"); // change your file path here
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
        fp = fopen("C:\Users\User\Desktop\data.txt","r"); // change you file path here
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
int main () {
        int mode;
        cout << "Enter Mode : ";
        cin >> mode ; //1 for Input 0 for Output
        if(mode){
                input();
        }
        else {
                output();
        }
        return 0;
}
