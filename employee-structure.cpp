// Enter the data for employee in struct using udf

// empno,empnm,basicsalary
// da =20% 0f bs
// hra =20% of bs
// med =1000 rs
// pf=25% of bs
// loan= 8% of bs;

// cal gross sal and netslaray and display salary slip

#include<iostream>
using namespace std;
 
struct employee{
    int empno,basic_sal;
    char empnm[25];
}emp;

void getData(){
    cout<<"Enter the name of the emmployee :- ";
    // gets(emp.empnm);
    cin.getline(emp.empnm,25);
    cout<<"Enter the employee number :- ";
    cin>>emp.empno;
    cout<<"Enter the basic salary of the employee :- ";
    cin>>emp.basic_sal;
}

int  calSal(){

    double da,hra,pf,loan,net_sal;
    int med = 1000;

    // cout<<endl<<"basic_sal : "<<emp.basic_sal;
    da =  emp.basic_sal * 20 / 100;
    hra = emp.basic_sal * 20 / 100;
    pf = emp.basic_sal * 25 / 100;
    loan = emp.basic_sal * 8 / 100;

    // cout<<endl<<"da : "<<da;
    // cout<<endl<<"hra : "<<hra;
    // cout<<endl<<"pd : "<<pf;
    // cout<<endl<<"loan : "<<loan;
    net_sal = emp.basic_sal + da + hra + med - pf - loan;
    cout<<endl<<"netsal"<<net_sal;

    return net_sal;
}


void showData(){
    cout<<"\nEmployee Name :- "<<emp.empnm;
    cout<<"\nEmployee Number :- "<<emp.empno;
    cout<<"\nEmployee Salary :- "<<calSal();
}

int main(){

    getData();
    showData();

    return 0;
}