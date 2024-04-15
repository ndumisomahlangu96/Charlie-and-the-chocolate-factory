#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QRegularExpression>
#include <QString>

QTextStream cin(stdin);
QTextStream cout(stdout);

// global variables.
int human_years_int = 0,dog_years_int = 0;

int Validated_human_years() {
    QString human_years_str;
    int integerValue;
    bool logic = false;

    while(!logic) {
        qDebug() << "\nEnter human years? ";
        cin.flush(); // Flush the buffer to ensure the prompt is displays;

        human_years_str = cin.readLine();

        bool conversionOk;
        integerValue = human_years_str.toInt(&conversionOk);

        if (conversionOk) {
            logic = true;   // Exit the loop if input is a valid integer
        }
        else {
            qDebug() << "Invalid input. Please enter an integer.\n";
        }

    }

    return integerValue;

}

int Convert_human_to_dog_years(int years) {
    int ans = 1;

    for (int icount = 1; icount <= years; icount++) {
        if (icount == 1) {
            ans+= 15;
        }
        else if (icount == 2) {
            ans += 9;
        }
        else {
            ans += 5;
        }
    }

    return ans;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Welcome to Calculate Dog Years to Human Years";

    qDebug() << "\nAs a general guideline, though, the American Veterinary Medical Association breaks it"
             <<"\ndown like this:" << endl;

    qDebug() << "-15 human years equals the first year of a medium-sized dog's life.";
    qDebug() << "-Year two for a dog equals about nine years for a human.";
    qDebug() << "-And after that, each human year would be approximately five years for a dog.";


    human_years_int = Validated_human_years();

    qDebug() << "\nHuman years: " << human_years_int;

    dog_years_int = Convert_human_to_dog_years(human_years_int);

    qDebug() << "Dog years: " << dog_years_int;

    return 0;
}
