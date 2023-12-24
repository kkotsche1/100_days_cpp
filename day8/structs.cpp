// Structs are used to predefine structures for objects

#include <iostream>

struct patient
{
    int patientID;
    int hospitalAdmissionID;
    std::string primaryDiagnosis;
    std::string secondaryDiagnosis;
    std::string medicationList[20];
    bool privateInsurance;

    void test()
    {
        std::cout << "Hello World!" << std::endl;
    }
};

int main()
{

    struct patient p1;
    p1.patientID = 2311241;
    p1.hospitalAdmissionID = 16;
    p1.primaryDiagnosis = "Appendicitis";

    p1.medicationList[0] = "Nadolol";
    p1.medicationList[1] = "Buprenorphine";
    p1.medicationList[2] = "Aspirin";
    p1.medicationList[3] = "Timolol";
    p1.medicationList[4] = "Metformin";

    p1.privateInsurance = true;

    std::cout << p1.medicationList[0] << std::endl;
    p1.test();

    return 0;
}