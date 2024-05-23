#include "Employee.h"

Employee::Employee(Employee &e) {
    if(validate(id)){
        this->salaryPerHour = e.salaryPerHour;
        this->address = e.address;
        this->id = e.id;
        this->name = e.name;
        this->workDone = e.workDone;
        this->workToDo = e.workToDo;
        this->hourWork = e.hourWork;
    } else{
        cout << "invalid id\n";
    }
}
Employee::Employee(string name,string id,Address address,int hourWork,int salaryPerHour,int workToDo,int workDone){
    if (validate(id)){
        this->salaryPerHour = salaryPerHour;
        this->address = address;
        this->id = id;
        this->name = name;
        this->workDone = workDone;
        this->workToDo = workToDo;
        this->hourWork = hourWork;
    }
    else{
        cout << "invalid id";
    }
}
Employee::Employee() {
    Address a;
    name = "Ali";
    address = a;
    id = "84*aka12323";
    hourWork = 40;
    salaryPerHour = 15;
    workToDo = 100;
    workDone = 84;
}
Employee Employee::operator=(const Employee& e) {
    this->salaryPerHour = e.salaryPerHour;
    this->address = e.address;
    this->id = e.id;
    this->name = e.name;
    this->workDone = e.workDone;
    this->workToDo = e.workToDo;
    this->hourWork = e.hourWork;
    return *this;
}

ostream& operator <<(ostream& strm,Employee& p){
    strm << "the name is: " << p.name << " with the id of " << p.id << "and the address of: " << p.address;
    strm << "\n the hourly salary is " << p.salaryPerHour;
    return strm;
}
istream& operator >>(istream& strm, Employee& p){
    cout << "please enter the name, id, address, workHour,salaryPerHour, workToDo and workDone: \n";
    strm >> p.name >> p.id >> p.address >> p.hourWork >> p.salaryPerHour >> p.workToDo >> p.workDone;
    return strm;
}
void Employee::set() {
    cout << "please enter the name, id, address, workHour,salaryPerHour, workToDo and workDone: \n";
    cin >> this->name >> this->id >> this->address >> this->hourWork >> this->salaryPerHour >> this->workToDo >> this->workDone;
}
void Employee::get() {
    cout << "the name is: " << name << " with the id of " << id << "and the address of: " << address;
    cout << "\n the hourly salary is " << salaryPerHour << "the workDone is: " << workDone << " and the hourWork is: " << hourWork;
}
bool Employee::validate(const string& str) {
    if (str.length() < 9 || str.length() > 11) {
        return false;
    }

    if (str.substr(0, 2) < "84" || str.substr(0, 2) > "99") {
        return false;
    }
    if (str[2] != '*'){
        return false;
    }

    for (int i = 3; i < str.length() - 5; i++) {
        if (!isalpha(str[i])) {
            return false;
        }
    }

    for (int i = str.length() - 5; i < str.length(); i++) {
        if (!isdigit(str[i]) || (str[i] < '0' || str[i] > '4') && (str[i] < '6' || str[i] > '9')) {
            return false;
        }
    }

    return true;
}
void Employee::calculateSalary() {
    double totalSalary = (salaryPerHour*hourWork)*(workDone/workToDo);
    cout << "the total salary will be: " << totalSalary;
}
void Employee::efficiency() {
    double efficiency = ((workDone/workToDo)*100)/hourWork;
    cout << "the efficiency of the employee is: " << efficiency << "%";
}