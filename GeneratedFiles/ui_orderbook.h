/********************************************************************************
** Form generated from reading UI file 'orderbook.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERBOOK_H
#define UI_ORDERBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderBookClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QTableView *tableView;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBoxOrderTypeL;
    QLabel *label_3;
    QSpinBox *spinBoxNoSharesL;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxSharePriceL;
    QPushButton *pushButtonAddOrderL;
    QGroupBox *groupBox_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QSpinBox *spinBoxOrderIdR;
    QLabel *label_8;
    QSpinBox *spinBoxNoSharesR;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBoxSharePriceR;
    QLabel *label_10;
    QComboBox *comboBoxOrderTypeR;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OrderBookClass)
    {
        if (OrderBookClass->objectName().isEmpty())
            OrderBookClass->setObjectName(QStringLiteral("OrderBookClass"));
        OrderBookClass->resize(729, 555);
        centralWidget = new QWidget(OrderBookClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 681, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        horizontalLayout->addWidget(tableView_2);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 300, 681, 201));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 311, 131));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBoxOrderTypeL = new QComboBox(formLayoutWidget);
        comboBoxOrderTypeL->setObjectName(QStringLiteral("comboBoxOrderTypeL"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxOrderTypeL);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        spinBoxNoSharesL = new QSpinBox(formLayoutWidget);
        spinBoxNoSharesL->setObjectName(QStringLiteral("spinBoxNoSharesL"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxNoSharesL);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        doubleSpinBoxSharePriceL = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBoxSharePriceL->setObjectName(QStringLiteral("doubleSpinBoxSharePriceL"));

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBoxSharePriceL);

        pushButtonAddOrderL = new QPushButton(groupBox);
        pushButtonAddOrderL->setObjectName(QStringLiteral("pushButtonAddOrderL"));
        pushButtonAddOrderL->setGeometry(QRect(100, 160, 134, 23));

        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayoutWidget_2 = new QWidget(groupBox_2);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(10, 20, 311, 131));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        spinBoxOrderIdR = new QSpinBox(formLayoutWidget_2);
        spinBoxOrderIdR->setObjectName(QStringLiteral("spinBoxOrderIdR"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBoxOrderIdR);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        spinBoxNoSharesR = new QSpinBox(formLayoutWidget_2);
        spinBoxNoSharesR->setObjectName(QStringLiteral("spinBoxNoSharesR"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spinBoxNoSharesR);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        doubleSpinBoxSharePriceR = new QDoubleSpinBox(formLayoutWidget_2);
        doubleSpinBoxSharePriceR->setObjectName(QStringLiteral("doubleSpinBoxSharePriceR"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, doubleSpinBoxSharePriceR);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        comboBoxOrderTypeR = new QComboBox(formLayoutWidget_2);
        comboBoxOrderTypeR->setObjectName(QStringLiteral("comboBoxOrderTypeR"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBoxOrderTypeR);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 160, 91, 23));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 160, 91, 23));

        horizontalLayout_3->addWidget(groupBox_2);

        OrderBookClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OrderBookClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 729, 21));
        OrderBookClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OrderBookClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OrderBookClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OrderBookClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OrderBookClass->setStatusBar(statusBar);

        retranslateUi(OrderBookClass);
        QObject::connect(pushButtonAddOrderL, SIGNAL(clicked()), OrderBookClass, SLOT(addOrder()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), spinBoxOrderIdR, SLOT(clear()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), spinBoxNoSharesR, SLOT(clear()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), doubleSpinBoxSharePriceR, SLOT(clear()));

        QMetaObject::connectSlotsByName(OrderBookClass);
    } // setupUi

    void retranslateUi(QMainWindow *OrderBookClass)
    {
        OrderBookClass->setWindowTitle(QApplication::translate("OrderBookClass", "OrderBook", 0));
        label->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">XXX Instrument Order Book</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Buy Orders</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Sell Orders</span></p></body></html>", 0));
        groupBox->setTitle(QApplication::translate("OrderBookClass", "Add Order", 0));
        label_2->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p><span style=\" font-size:14pt;\">Order Type</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p><span style=\" font-size:14pt;\">No of Shares</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p><span style=\" font-size:14pt;\">Price per Share</span></p></body></html>", 0));
        pushButtonAddOrderL->setText(QApplication::translate("OrderBookClass", "Add Order", 0));
        groupBox_2->setTitle(QApplication::translate("OrderBookClass", "Edit Orders", 0));
        label_7->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p><span style=\" font-size:14pt;\">Order Id</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p><span style=\" font-size:14pt;\">No of Shares</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p><span style=\" font-size:14pt;\">Price per Share</span></p></body></html>", 0));
        label_10->setText(QApplication::translate("OrderBookClass", "<html><head/><body><p><span style=\" font-size:14pt;\">Order Type</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("OrderBookClass", "Save", 0));
        pushButton_2->setText(QApplication::translate("OrderBookClass", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class OrderBookClass: public Ui_OrderBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERBOOK_H
