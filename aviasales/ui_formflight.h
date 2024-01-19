/********************************************************************************
** Form generated from reading UI file 'formflight.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMFLIGHT_H
#define UI_FORMFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormFlight
{
public:
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_name_company;
    QLabel *label_5;
    QLineEdit *lineEdit_to_port;
    QLabel *label_2;
    QLineEdit *lineEdit_num_flight;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLineEdit *lineEdit_from_port;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QLabel *label_7;
    QSpinBox *spinBox_seats;
    QSpinBox *spinBox_2;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *FormFlight)
    {
        if (FormFlight->objectName().isEmpty())
            FormFlight->setObjectName(QString::fromUtf8("FormFlight"));
        FormFlight->resize(511, 452);
        dateEdit = new QDateEdit(FormFlight);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(300, 220, 110, 26));
        lineEdit_name_company = new QLineEdit(FormFlight);
        lineEdit_name_company->setObjectName(QString::fromUtf8("lineEdit_name_company"));
        lineEdit_name_company->setGeometry(QRect(120, 180, 281, 25));
        label_5 = new QLabel(FormFlight);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 230, 201, 17));
        lineEdit_to_port = new QLineEdit(FormFlight);
        lineEdit_to_port->setObjectName(QString::fromUtf8("lineEdit_to_port"));
        lineEdit_to_port->setGeometry(QRect(120, 100, 121, 25));
        label_2 = new QLabel(FormFlight);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 10, 201, 17));
        lineEdit_num_flight = new QLineEdit(FormFlight);
        lineEdit_num_flight->setObjectName(QString::fromUtf8("lineEdit_num_flight"));
        lineEdit_num_flight->setGeometry(QRect(120, 40, 281, 25));
        label_3 = new QLabel(FormFlight);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 70, 201, 17));
        buttonBox = new QDialogButtonBox(FormFlight);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(170, 410, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(FormFlight);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 140, 231, 20));
        lineEdit_from_port = new QLineEdit(FormFlight);
        lineEdit_from_port->setObjectName(QString::fromUtf8("lineEdit_from_port"));
        lineEdit_from_port->setGeometry(QRect(280, 100, 121, 25));
        label_6 = new QLabel(FormFlight);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(270, 70, 201, 17));
        timeEdit = new QTimeEdit(FormFlight);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(300, 270, 118, 26));
        label_7 = new QLabel(FormFlight);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 270, 201, 17));
        spinBox_seats = new QSpinBox(FormFlight);
        spinBox_seats->setObjectName(QString::fromUtf8("spinBox_seats"));
        spinBox_seats->setGeometry(QRect(300, 320, 42, 26));
        spinBox_2 = new QSpinBox(FormFlight);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(300, 370, 42, 26));
        label_8 = new QLabel(FormFlight);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 370, 201, 17));
        label_9 = new QLabel(FormFlight);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(80, 330, 201, 17));

        retranslateUi(FormFlight);

        QMetaObject::connectSlotsByName(FormFlight);
    } // setupUi

    void retranslateUi(QWidget *FormFlight)
    {
        FormFlight->setWindowTitle(QCoreApplication::translate("FormFlight", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("FormFlight", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\276\321\202\321\200\320\277\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("FormFlight", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\260\320\262\320\270\320\260\321\200\320\265\320\271\321\201\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("FormFlight", "\320\220\321\215\321\200\320\276\320\277\320\276\321\200\321\202 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("FormFlight", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\260\320\262\320\270\320\260\320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        lineEdit_from_port->setText(QString());
        label_6->setText(QCoreApplication::translate("FormFlight", "\320\220\321\215\321\200\320\276\320\277\320\276\321\200\321\202 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("FormFlight", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\321\200\320\265\320\274\321\217 \320\276\321\202\321\200\320\277\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("FormFlight", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\213\321\205", nullptr));
        label_9->setText(QCoreApplication::translate("FormFlight", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\201\321\202 \320\262\321\201\320\265\320\263\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormFlight: public Ui_FormFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMFLIGHT_H
