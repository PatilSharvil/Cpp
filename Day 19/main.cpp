#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string email;

public:
    Person(const string& n = "", int a = 0, const string& e = "")
        : name(n), age(a), email(e) {}

    virtual ~Person() = default;

    string getName() const { return name; }
    int getAge() const { return age; }
    string getEmail() const { return email; }

    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }
    void setEmail(const string& e) { email = e; }

    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Email: " << email;
    }
};

class Employee : public Person {
protected:
    static int nextEmployeeId;
    static double totalSalary;
    static int employeeCount;

    int employeeId;
    double salary;
    string designation;

public:
    Employee(const string& n = "", int a = 0, const string& e = "",
             double s = 0, const string& desig = "")
        : Person(n, a, e), salary(s), designation(desig) {
        employeeId = ++nextEmployeeId;
        totalSalary += salary;
        employeeCount++;
    }

    virtual ~Employee() {
        totalSalary -= salary;
        employeeCount--;
    }

    int getEmployeeId() const { return employeeId; }
    double getSalary() const { return salary; }
    string getDesignation() const { return designation; }

    static int getTotalEmployees() { return employeeCount; }
    static double getTotalSalary() { return totalSalary; }
    static double getAverageSalary() {
        return employeeCount > 0 ? totalSalary / employeeCount : 0;
    }

    void display() const override {
        Person::display();
        cout << ", ID: " << employeeId
             << ", Designation: " << designation
             << ", Salary: $" << salary;
    }
};

int Employee::nextEmployeeId = 0;
double Employee::totalSalary = 0.0;
int Employee::employeeCount = 0;

class Department {
protected:
    string deptName;
    string managerName;

public:
    Department(const string& dn = "", const string& mn = "")
        : deptName(dn), managerName(mn) {}

    virtual ~Department() = default;

    string getDeptName() const { return deptName; }
    string getManagerName() const { return managerName; }

    virtual void displayDeptInfo() const {
        cout << "Department: " << deptName
             << ", Manager: " << managerName;
    }
};

class ITDepartment : public Department {
protected:
    int teamSize;
    string techStack;

public:
    ITDepartment(const string& mn = "", int ts = 0, const string& tech = "")
        : Department("IT", mn), teamSize(ts), techStack(tech) {}

    void displayDeptInfo() const override {
        Department::displayDeptInfo();
        cout << ", Team Size: " << teamSize
             << ", Tech Stack: " << techStack;
    }
};

class HRDepartment : public Department {
protected:
    int employeeHeadcount;
    string recruitmentStatus;

public:
    HRDepartment(const string& mn = "", int eh = 0, const string& rs = "")
        : Department("HR", mn), employeeHeadcount(eh), recruitmentStatus(rs) {}

    void displayDeptInfo() const override {
        Department::displayDeptInfo();
        cout << ", Headcount: " << employeeHeadcount
             << ", Recruitment: " << recruitmentStatus;
    }
};

class ProjectTeam : public Employee, public ITDepartment {
private:
    string projectName;
    int projectDuration;

public:
    ProjectTeam(const string& n = "", int a = 0, const string& e = "",
                double s = 0, const string& desig = "",
                const string& mn = "", int ts = 0, const string& tech = "",
                const string& pn = "", int pd = 0)
        : Employee(n, a, e, s, desig),
          ITDepartment(mn, ts, tech),
          projectName(pn), projectDuration(pd) {}

    void displayTeamInfo() const {
        cout << "\n=== Project Team Member ===\n";
        Employee::display();
        cout << "\n";
        ITDepartment::displayDeptInfo();
        cout << "\nProject: " << projectName
             << ", Duration: " << projectDuration << " months\n";
    }
};

class EmployeeManager {
private:
    vector<shared_ptr<Employee>> employees;

public:
    void addEmployee(const string& name, int age, const string& email,
                     double salary, const string& designation) {
        auto emp = make_shared<Employee>(name, age, email, salary, designation);
        employees.push_back(emp);
        cout << "Employee added with ID: " << emp->getEmployeeId() << "\n";
    }

    void displayAllEmployees() const {
        if (employees.empty()) {
            cout << "No employees to display.\n";
            return;
        }

        cout << "\n=== All Employees ===\n";
        for (const auto& emp : employees) {
            emp->display();
            cout << "\n";
        }
    }

    void displayStatistics() const {
        cout << "\n=== Employee Statistics ===\n";
        cout << "Total Employees: " << Employee::getTotalEmployees() << "\n";
        cout << "Total Salary Budget: $" << Employee::getTotalSalary() << "\n";
        cout << "Average Salary: $" << Employee::getAverageSalary() << "\n";
    }

    Employee* getEmployeeById(int id) const {
        for (const auto& emp : employees) {
            if (emp->getEmployeeId() == id) {
                return emp.get();
            }
        }
        return nullptr;
    }
};

void demonstrateTypeCasting() {
    cout << "\n=== Type Casting Demonstration ===\n";

    Person* personPtr = new Employee("John", 35, "john@company.com", 85000, "Developer");

    Employee* empPtr = dynamic_cast<Employee*>(personPtr);
    if (empPtr) {
        cout << "dynamic_cast successful: ";
        empPtr->display();
        cout << "\n";
    }

    Person* basePtr = static_cast<Person*>(empPtr);
    cout << "static_cast upcast to Person: ";
    basePtr->display();
    cout << "\n";

    const Employee* constEmp = new Employee("Jane", 28, "jane@company.com", 90000, "Senior Dev");
    Employee* mutableEmp = const_cast<Employee*>(constEmp);
    cout << "const_cast removed const, can now modify mutableEmp\n";

    uintptr_t addr = reinterpret_cast<uintptr_t>(empPtr);
    cout << "reinterpret_cast: Employee pointer as integer: " << hex << addr << dec << "\n";

    delete personPtr;
    delete constEmp;
}

int main() {
    EmployeeManager manager;
    int choice;

    do {
        cout << "\n=== Employee Management System ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Display Statistics\n";
        cout << "4. Get Employee by ID\n";
        cout << "5. Create Project Team Member (Multiple Inheritance)\n";
        cout << "6. Demonstrate Type Casting\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, email, designation;
                int age;
                double salary;

                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Email: ";
                cin >> email;
                cout << "Enter Salary: ";
                cin >> salary;
                cout << "Enter Designation: ";
                cin >> designation;

                manager.addEmployee(name, age, email, salary, designation);
                break;
            }

            case 2:
                manager.displayAllEmployees();
                break;

            case 3:
                manager.displayStatistics();
                break;

            case 4: {
                int id;
                cout << "Enter Employee ID: ";
                cin >> id;

                Employee* emp = manager.getEmployeeById(id);
                if (emp) {
                    emp->display();
                    cout << "\n";
                } else {
                    cout << "Employee not found.\n";
                }
                break;
            }

            case 5: {
                string name, email, designation, managerName, techStack, projectName;
                int age, teamSize, projectDuration;
                double salary;

                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Email: ";
                cin >> email;
                cout << "Enter Salary: ";
                cin >> salary;
                cout << "Enter Designation: ";
                cin >> designation;
                cout << "Enter Manager Name: ";
                cin >> managerName;
                cout << "Enter Team Size: ";
                cin >> teamSize;
                cout << "Enter Tech Stack: ";
                cin >> techStack;
                cout << "Enter Project Name: ";
                cin >> projectName;
                cout << "Enter Project Duration (months): ";
                cin >> projectDuration;

                ProjectTeam teamMember(name, age, email, salary, designation,
                                       managerName, teamSize, techStack,
                                       projectName, projectDuration);
                teamMember.displayTeamInfo();
                break;
            }

            case 6:
                demonstrateTypeCasting();
                break;

            case 7:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}
