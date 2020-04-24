#include <iostream>     //включение основной библиотеки языка програрования С++, не важно крч

using namespace std;    //добавление пространства имен, тоже не особо важно

int main()      // обьявление осовной части кода
{
    int RodPump = 0;        // 
    int HydraulicPump = 0;  // обьявление переменных типа integer(целое число)
    int ESP = 0;            // для каждого вида бурения
    int GasLift = 0;        // они нужны чтобы считать
    int PlungerLift = 0;    // сколько совпадений будет
    int PCP = 0;            // в каждом условии
    int a = 0;              // 

    {       // просто скобки чтобы отделить части кода для каждого условия бурения - НАЧАЛО скобок
        cout << "Write 'Operating Depth': ";   // вывод на экран командной строки
        a = 0;                                          // каждый раз вот так обнуляю 'a', чтобы значение с предыдущих условий не оставалась в памяти ОЗУ
        cin >> a;                                       // ввод данных через ком.строку
        if (a>=100 && a<=16000){                        // дословно -> если(а больше или равно 100, и также а меньше или равно 16000)
            RodPump++;                                  // действие при выполнении условия, значит добавить 1 в RodPump
        }if (a>=7500 && a<=17000){                      // проверка следующего условия, уже для HydraulicPump
            HydraulicPump++;                            // если писать полностью то будет так, HydraulicPump = HydraulicPump + 1, то есть HydraulicPump будет равнятся себе и + 1
        }if (a>=1000 && a<=15000){
            ESP++;
        }if (a>=5000 && a<=15000){
            GasLift++;
        }if (a>=8000 && a<=19000){
            PlungerLift++;
        }if (a>=2000 && a<=6000){
            PCP++;
        }
    }       // КОНЕЦ скобок

    {
        cout << "Write 'Wellbore deviation': ";
        a = 0;
        cin >> a;
        if (a>=0 && a<=20){
            RodPump++;
            HydraulicPump++;            
        }if (a>=10){
            ESP++;
        }if (a>=0 && a<=50){
            GasLift++;
        }if (a==10){
            PCP++;
        }
    }

    {
        cout << "Write 'Operating Temperature': ";
        a = 0;
        cin >> a;
        if (a>=100 && a<=500){
            RodPump++;
            HydraulicPump++;
        }if (a>=100 && a<=400){
            ESP++;
            GasLift++;
        }if (a>=130 && a<=500){
            PlungerLift++;
        }if (a>=75 && a<=250){
            PCP++;
        }
    }

    {
        cout << "Write 'Operating Volume': ";
        a = 0;
        cin >> a;
        if (a>=5 && a<=5000){
            RodPump++;
        }if (a>=50 && a<=4000){
            HydraulicPump++;
        }if (a>=200 && a<=30000){
            ESP++;
            GasLift++;
        }if (a>=1 && a<=5){
            PlungerLift++;
        }if (a>=5 && a<=4500){
            PCP++;
        }
    }

    {
        cout << "Choose 'Corrosion Handling': 1-Good, 2-Excellent, 3-Fair. write number: ";
        a = 0;
        cin >> a;               // к примеру в ком.строке ввели значение 1(good)
        if (a==1){              // проверяется условие, и оно совпадает, а == 1(знак сравнения в с++ пишется через двойной знак равно), а оди знак равно(=) это присваивание
            RodPump++;
            HydraulicPump++;
            ESP++;
            GasLift++;
        }else if (a==2){        // так как условие первого уже выполнено, то все что начинается на else(перевод-в ином случае) или else if не проверяется и идет к следующей скобке
            PlungerLift++;
        }else if (a==3){        //то следуюая скобка, она тоже не проверяется и комп идет к след скобке
            PCP++;
        }
    }

    {                           // тут все проверяется по той же логике, суть та же
        cout << "Chose Solids Handling: 1-Poor, 2-Good, 3-Excellent, 4-Fair. write number: ";
        a = 0;
        cin >> a;
        if (a==1){
            HydraulicPump++;
            ESP++;
        }else if (a==2){
            GasLift++;
        }else if (a==3){
            PCP++;
        }else if (a==4){
            RodPump++;
            PlungerLift++;
        }
    }

    {
        cout << "Write 'Fluid Gravity (API)': ";
        a = 0;
        cin >> a;
        if (a<8){
            RodPump++;
            HydraulicPump++;
        }if (a<10){
            ESP++;
        }if (a<15){
            GasLift++;
            PlungerLift++;
        }if (a<35){
            PCP++;
        }
    }

    {
        cout << "Choose 'Servicing': 1-Workover, 2-Pulling rig, 3-Hydraulic, 4-Wireline, 5-Workover Rig, 6-Welhead Catcher. write number: ";
        a = 0;
        cin >> a;
        if (a<=2){
            RodPump++;
            ESP++;
            PCP++;
        }else if (a==3){
            HydraulicPump++;
        }else if (a==4){
            GasLift++;
            HydraulicPump++;
            PlungerLift++;
        }else if (a==5){
            GasLift++;
        }else if (a==6){
            PlungerLift++;
        }
    }

    {
        cout << "Choose 'Prime Mover Type': 1-Gas, 2-Electric, 3-Multicylinder, 4-Compressor, 5-Well's Natural Energy. write number: ";
        a = 0;
        cin >> a;
        if (a==1){
            RodPump++;
            PCP++;
        }else if (a==2){
            RodPump++;
            HydraulicPump++;
            ESP++;
            PCP++;
        }else if (a==3){
            HydraulicPump++;
        }else if (a==4){
            GasLift++;
        }else if (a==5){
            PlungerLift++;
        }
    }

    {
        cout << "Choose 'Offshore Application': 1-Good, 2-Excellent, 3-Limited. write number: ";
        a = 0;
        cin >> a;
        if (a==1){
            HydraulicPump++;
            PCP++;
        }else if (a==2){
            ESP++;
            GasLift++;
        }else if (a==3){
            RodPump++;
        }
    }

    {
        cout << "Write 'System Efficiency' (%): ";
        a = 0;
        cin >> a;
        if (a>=45 && a<=60){
            RodPump++;
        }if (a>=45 && a<=55){
            HydraulicPump++;
        }if (a>=35 && a<=60){
            ESP++;
        }if (a>=10 && a<=30){
            GasLift++;
        }if (a>=40 && a<=70){
            PCP++;
        }
    }

    {
        cout << "Choose 'Capital cost': 1-Moderate, 2-Low. write number: ";
        a = 0;
        cin >> a;
        if (a==1){
            RodPump++;
            HydraulicPump++;
            ESP++;
            GasLift++;
            PlungerLift++;
        }else if (a==2){
            PCP++;
        }
    }

    {
        cout << "Choose 'Operating cost': 1-High, 2-Moderate, 3-Low. write number: ";
        a = 0;
        cin >> a;
        if (a==3){
            RodPump++;
            GasLift++;
            PlungerLift++;
            PCP++;
        }else if (a==2){
            HydraulicPump++;
        }else if (a==1){
            ESP++;
        }
    }
                                // тут мы уже закончили все проверки условий и переодим к нахождению самого подходящего вида бурения


    int max = 0;                // обьявление переменной max равную 0 с помощью которой будем сравнивать все переменные друг с другом
    string variant;             // обьявление переменной variant которая выведет текст с названием вида бурения на командную строку

    if (RodPump > max){         // сравниваем все переменные между собой и в конце находим самый большой
        max = RodPump;
        variant = "RodPump";
    }if (HydraulicPump > max){
        max = HydraulicPump;
        variant = "HydraulicPump";
    }if (ESP > max){
        max = ESP;
        variant = "ESP";
    }if (GasLift > max){
        max = GasLift;
        variant = "GasLift";
    }if (PlungerLift > max){
        max = PlungerLift;
        variant = "PlungerLift";
    }if (PCP > max){
        max = PCP;
        variant = "PCP";
    }

    cout << endl;                                           // вывод пустой строки, все равно что нажать enter в ворде
    cout << "Best variant: " << variant << endl;            // вывод нужного вида бурения

    cout << "-------ALL-------" << endl;                    // просто вывод все значений в виде таблички
    cout << "RodPump       - " << RodPump << endl;
    cout << "HydraulicPump - " << HydraulicPump << endl;
    cout << "ESP           - " << ESP << endl;
    cout << "GasLift       - " << GasLift << endl;
    cout << "PlungerLift   - " << PlungerLift << endl;
    cout << "PCP           - " << PCP << endl;
    cin >> a;                                               // просто чтобы командная строка не закрылась сразу после завершения программы

    return 0;                                               // не особо важно, просто очищает память компьютера после программы, хотя по сути, меняет все значения в ОЗУ с этой программы на нули
}