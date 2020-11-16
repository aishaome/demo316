/********************************************************************************
** Form generated from reading UI file 'frmlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLOGIN_H
#define UI_FRMLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmLogin
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QWidget *widget;
    QLabel *label_4;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_6;
    QPushButton *pushButton;
    QWidget *widgetTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labLogo;
    QLabel *label_5;
    QLabel *labTitle;
    QSpacerItem *horizontalSpacer;
    QWidget *widgetMenu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Close;

    void setupUi(QWidget *frmLogin)
    {
        if (frmLogin->objectName().isEmpty())
            frmLogin->setObjectName(QString::fromUtf8("frmLogin"));
        frmLogin->resize(812, 572);
        gridLayout_2 = new QGridLayout(frmLogin);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(frmLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-80, 0, 981, 551));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/bg.png);"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(320, 50, 481, 431));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/image/login.png);"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(390, 190, 351, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid #107EFE"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(390, 280, 351, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: rgb(255, 255, 255);\n"
"border:1px solid #107EFE"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 100, 301, 51));
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 420, 461, 51));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 360, 271, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #107EFE;\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_4->raise();
        label_7->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label->raise();
        pushButton->raise();
        label_6->raise();

        gridLayout->addWidget(widget, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        widgetTitle = new QWidget(frmLogin);
        widgetTitle->setObjectName(QString::fromUtf8("widgetTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetTitle->sizePolicy().hasHeightForWidth());
        widgetTitle->setSizePolicy(sizePolicy);
        widgetTitle->setMinimumSize(QSize(0, 45));
        widgetTitle->setStyleSheet(QString::fromUtf8("QWidget#widgetTitle{background:qlineargradient(spread:pad,x1:0,y1:0,x2:1,y2:0,stop:0 #040D47,stop:1 #050D32);}"));
        horizontalLayout_2 = new QHBoxLayout(widgetTitle);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labLogo = new QLabel(widgetTitle);
        labLogo->setObjectName(QString::fromUtf8("labLogo"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labLogo->sizePolicy().hasHeightForWidth());
        labLogo->setSizePolicy(sizePolicy1);
        labLogo->setMinimumSize(QSize(0, 0));
        labLogo->setStyleSheet(QString::fromUtf8(""));
        labLogo->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labLogo);

        label_5 = new QLabel(widgetTitle);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        labTitle = new QLabel(widgetTitle);
        labTitle->setObjectName(QString::fromUtf8("labTitle"));
        labTitle->setMinimumSize(QSize(500, 0));
        labTitle->setStyleSheet(QString::fromUtf8("border-image:url(:/image/bg_title.png);\n"
"color: rgb(255,255,255);\n"
""));
        labTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widgetMenu = new QWidget(widgetTitle);
        widgetMenu->setObjectName(QString::fromUtf8("widgetMenu"));
        sizePolicy1.setHeightForWidth(widgetMenu->sizePolicy().hasHeightForWidth());
        widgetMenu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widgetMenu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMenu_Min = new QPushButton(widgetMenu);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy2);
        btnMenu_Min->setMinimumSize(QSize(40, 0));
        btnMenu_Min->setMaximumSize(QSize(40, 16777215));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\347\255\211\347\272\277\";"));
        btnMenu_Min->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Close = new QPushButton(widgetMenu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setMaximumSize(QSize(40, 16777215));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"\347\255\211\347\272\277\";"));
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widgetMenu);


        gridLayout_2->addWidget(widgetTitle, 0, 0, 1, 1);


        retranslateUi(frmLogin);

        QMetaObject::connectSlotsByName(frmLogin);
    } // setupUi

    void retranslateUi(QWidget *frmLogin)
    {
        frmLogin->setWindowTitle(QApplication::translate("frmLogin", "Form", nullptr));
        label_4->setText(QString());
        label_7->setText(QString());
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label->setText(QApplication::translate("frmLogin", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("frmLogin", "\347\231\273\345\275\225", nullptr));
        labLogo->setText(QString());
        label_5->setText(QString());
        labTitle->setText(QString());
        btnMenu_Min->setText(QApplication::translate("frmLogin", "-", nullptr));
        btnMenu_Close->setText(QApplication::translate("frmLogin", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmLogin: public Ui_frmLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLOGIN_H
