//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 
//gcc employeeMain.c employeeTable.c employeeTwo.c 
#include <string.h>
#include <stdlib.h>
#include "employee.h"
int main(void){
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);

    //defined in employeeTable.c 
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; //Declaration
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    //Example not found 
    if(matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");
    
    //Example found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else    
        printf("Employee Tony Bobcat is NOT found in the record\n");
    
       //Example found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-555-1212");
    if (matchPtr != NULL)
        printf("Employee Phone Number 213-555-1212 is in record %d\n", matchPtr - EmployeeTable);
    else    
        printf("Employee Phone Number is NOT found in the record\n");
    
           //Example not found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "951-555-1212");
    if (matchPtr != NULL)
        printf("Employee Phone Number 213-555-1212 is in record %d\n", matchPtr - EmployeeTable);
    else    
        printf("Employee Phone Number is NOT found in the record\n");
    
    //Example Found
       matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);
    if (matchPtr != NULL)
        printf("Employee salar 6.34 is in record %d\n", matchPtr - EmployeeTable);
    else    
        printf("Employee salary 6.34 is NOT found in the record\n");
    
       //Example Not Found
       matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 1.20);
    if (matchPtr != NULL)
        printf("Employee salary 1.20 is in record %d\n", matchPtr - EmployeeTable);
    else    
        printf("Employee salary 1.20 is NOT found in the record\n");
    
    return EXIT_SUCCESS;
}
