#include <stdio.h>
struct employees
{
    unsigned int emp_code;
    int basic_sal;
    float hra, pf, bonus;
};

int main()
{
    struct employees evar;
    float get_netsalary(struct employees);                  // function prototype
    float net_sal;
    printf("Enter the employee code , basic salary, hra, pf and bonus:");
    scanf("%u%d%f%f%f",&evar.emp_code,&evar.basic_sal,&evar.hra,&evar.pf,&evar.bonus);
    net_sal = get_netsalary(evar);
    printf("Net Salary = %8.2f",net_sal);
}

float get_netsalary(struct employees fvar)
{
    float net_sal;
    net_sal=fvar.basic_sal+fvar.hra+fvar.bonus-fvar.pf;
    return net_sal;
}

// using call by refernce method

int main()
{
    struct employees evar;
    float net_netsalary(struct employees *);                  // function prototype
    float net_sal;
    printf("Enter the employee code , basic salary, hra, pf and bonus:");
    scanf("%u%d%f%f%f",&evar.emp_code,&evar.basic_sal,&evar.hra,&evar.pf,&evar.bonus);
    net_sal = get_netsalary(evar);
    printf("Net Salary = %8.2f",net_sal);
}

float net_netsalary(struct employees *fvar)
{
    float net_sal;
    net_sal=fvar->basic_sal+fvar->hra+fvar->bonus-fvar->pf;             // we have to use arrow operator here
    return net_sal;                                                         // since we are using call by reference
}