public class Employee {
    public
        int EmployeeID;
        String EmployeeName;
        String EmployeeDepartment;
        static String companyName;  // used static keyword

    public Employee(int EmployeeID, String EmployeeName, String EmployeeDepartment, String companyName) {
        this.EmployeeID = EmployeeID;
        this.EmployeeName = EmployeeName;
        this.EmployeeDepartment = EmployeeDepartment;
        Employee.companyName = companyName; 
    }

    // constructor with 2 attributes
    public Employee(int EmployeeID, String EmployeeName) {
        this(EmployeeID, EmployeeName, "General", "Amazon"); 
    }

    public void displayDetails() {
        System.out.println("Employee ID: " + EmployeeID);
        System.out.println("Employee Name: " + EmployeeName);
        System.out.println("Employee Department: " + EmployeeDepartment);
        System.out.println("Company Name: " + companyName); 
    }

    public static void main(String[] args) {
        Employee EmpUno = new Employee(69, "Shreyas Ladhe", "CSE", "Google");
        EmpUno.displayDetails();
        Employee EmpDuo = new Employee(420, "Yuvraj Chauhan");
        EmpDuo.displayDetails();
    }
}
