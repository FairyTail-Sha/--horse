/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit_Q;
    QAction *actionAbout;
    QAction *actionHorse;
    QAction *actionS_2;
    QAction *actionClear;
    QWidget *centralWidget;
    QPushButton *_ButtonStart;
    QLineEdit *_EditX;
    QLineEdit *_EditY;
    QWidget *widget;
    QWidget *widget_ChessBoard;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_67;
    QLabel *label_68;
    QLabel *label_69;
    QLabel *label_70;
    QLabel *label_71;
    QLabel *label_72;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_73;
    QLabel *label_74;
    QLabel *label_75;
    QLabel *label_76;
    QLabel *label_77;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *label_80;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_81;
    QLabel *label_82;
    QLabel *label_83;
    QLabel *label_84;
    QLabel *label_85;
    QLabel *label_86;
    QLabel *label_87;
    QLabel *label_88;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_97;
    QLabel *label_98;
    QLabel *label_99;
    QLabel *label_100;
    QLabel *label_101;
    QLabel *label_102;
    QLabel *label_103;
    QLabel *label_104;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_105;
    QLabel *label_106;
    QLabel *label_107;
    QLabel *label_108;
    QLabel *label_109;
    QLabel *label_110;
    QLabel *label_111;
    QLabel *label_112;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_113;
    QLabel *label_114;
    QLabel *label_115;
    QLabel *label_116;
    QLabel *label_117;
    QLabel *label_118;
    QLabel *label_119;
    QLabel *label_120;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_121;
    QLabel *label_122;
    QLabel *label_123;
    QLabel *label_124;
    QLabel *label_125;
    QLabel *label_126;
    QLabel *label_127;
    QLabel *label_128;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_129;
    QLabel *horseWord;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_21;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_17;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_20;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_13;
    QMenuBar *menuBar;
    QMenu *menu_S;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(706, 682);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(706, 682));
        MainWindow->setMaximumSize(QSize(706, 682));
        QIcon icon;
        icon.addFile(QStringLiteral(":/horse.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionQuit_Q = new QAction(MainWindow);
        actionQuit_Q->setObjectName(QStringLiteral("actionQuit_Q"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit_Q->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHorse = new QAction(MainWindow);
        actionHorse->setObjectName(QStringLiteral("actionHorse"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/smallhorse.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHorse->setIcon(icon2);
        actionS_2 = new QAction(MainWindow);
        actionS_2->setObjectName(QStringLiteral("actionS_2"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        _ButtonStart = new QPushButton(centralWidget);
        _ButtonStart->setObjectName(QStringLiteral("_ButtonStart"));
        _ButtonStart->setGeometry(QRect(570, 140, 41, 41));
        _ButtonStart->setContextMenuPolicy(Qt::CustomContextMenu);
        _ButtonStart->setAutoFillBackground(false);
        _ButtonStart->setStyleSheet(QStringLiteral("border-top-color: rgb(70, 255, 209);"));
        _ButtonStart->setIconSize(QSize(40, 40));
        _ButtonStart->setCheckable(false);
        _ButtonStart->setAutoRepeat(false);
        _ButtonStart->setAutoRepeatDelay(300);
        _EditX = new QLineEdit(centralWidget);
        _EditX->setObjectName(QStringLiteral("_EditX"));
        _EditX->setGeometry(QRect(20, 40, 110, 21));
        _EditY = new QLineEdit(centralWidget);
        _EditY->setObjectName(QStringLiteral("_EditY"));
        _EditY->setGeometry(QRect(140, 40, 110, 21));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(540, 360, 151, 211));
        widget->setAutoFillBackground(false);
        widget->setStyleSheet(QStringLiteral("border-image: url(:/horse.png);"));
        widget_ChessBoard = new QWidget(centralWidget);
        widget_ChessBoard->setObjectName(QStringLiteral("widget_ChessBoard"));
        widget_ChessBoard->setEnabled(false);
        widget_ChessBoard->setGeometry(QRect(40, 110, 499, 514));
        widget_ChessBoard->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(widget_ChessBoard);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_9->setContentsMargins(-1, 0, -1, -1);
        label_65 = new QLabel(widget_ChessBoard);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setMaximumSize(QSize(60, 61));

        horizontalLayout_9->addWidget(label_65);

        label_66 = new QLabel(widget_ChessBoard);
        label_66->setObjectName(QStringLiteral("label_66"));

        horizontalLayout_9->addWidget(label_66);

        label_67 = new QLabel(widget_ChessBoard);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setMinimumSize(QSize(60, 0));

        horizontalLayout_9->addWidget(label_67);

        label_68 = new QLabel(widget_ChessBoard);
        label_68->setObjectName(QStringLiteral("label_68"));

        horizontalLayout_9->addWidget(label_68);

        label_69 = new QLabel(widget_ChessBoard);
        label_69->setObjectName(QStringLiteral("label_69"));

        horizontalLayout_9->addWidget(label_69);

        label_70 = new QLabel(widget_ChessBoard);
        label_70->setObjectName(QStringLiteral("label_70"));

        horizontalLayout_9->addWidget(label_70);

        label_71 = new QLabel(widget_ChessBoard);
        label_71->setObjectName(QStringLiteral("label_71"));

        horizontalLayout_9->addWidget(label_71);

        label_72 = new QLabel(widget_ChessBoard);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setMinimumSize(QSize(0, 60));

        horizontalLayout_9->addWidget(label_72);


        gridLayout->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_73 = new QLabel(widget_ChessBoard);
        label_73->setObjectName(QStringLiteral("label_73"));

        horizontalLayout_10->addWidget(label_73);

        label_74 = new QLabel(widget_ChessBoard);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setMinimumSize(QSize(60, 0));

        horizontalLayout_10->addWidget(label_74);

        label_75 = new QLabel(widget_ChessBoard);
        label_75->setObjectName(QStringLiteral("label_75"));

        horizontalLayout_10->addWidget(label_75);

        label_76 = new QLabel(widget_ChessBoard);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setMinimumSize(QSize(60, 0));

        horizontalLayout_10->addWidget(label_76);

        label_77 = new QLabel(widget_ChessBoard);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setMinimumSize(QSize(60, 0));

        horizontalLayout_10->addWidget(label_77);

        label_78 = new QLabel(widget_ChessBoard);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setMinimumSize(QSize(60, 0));

        horizontalLayout_10->addWidget(label_78);

        label_79 = new QLabel(widget_ChessBoard);
        label_79->setObjectName(QStringLiteral("label_79"));
        label_79->setMinimumSize(QSize(60, 0));

        horizontalLayout_10->addWidget(label_79);

        label_80 = new QLabel(widget_ChessBoard);
        label_80->setObjectName(QStringLiteral("label_80"));
        label_80->setMinimumSize(QSize(0, 60));

        horizontalLayout_10->addWidget(label_80);


        gridLayout->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_81 = new QLabel(widget_ChessBoard);
        label_81->setObjectName(QStringLiteral("label_81"));

        horizontalLayout_11->addWidget(label_81);

        label_82 = new QLabel(widget_ChessBoard);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setMinimumSize(QSize(60, 0));

        horizontalLayout_11->addWidget(label_82);

        label_83 = new QLabel(widget_ChessBoard);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setMinimumSize(QSize(60, 0));

        horizontalLayout_11->addWidget(label_83);

        label_84 = new QLabel(widget_ChessBoard);
        label_84->setObjectName(QStringLiteral("label_84"));
        label_84->setMinimumSize(QSize(60, 0));

        horizontalLayout_11->addWidget(label_84);

        label_85 = new QLabel(widget_ChessBoard);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setMinimumSize(QSize(60, 0));

        horizontalLayout_11->addWidget(label_85);

        label_86 = new QLabel(widget_ChessBoard);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setMinimumSize(QSize(60, 0));

        horizontalLayout_11->addWidget(label_86);

        label_87 = new QLabel(widget_ChessBoard);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setMinimumSize(QSize(60, 0));

        horizontalLayout_11->addWidget(label_87);

        label_88 = new QLabel(widget_ChessBoard);
        label_88->setObjectName(QStringLiteral("label_88"));
        label_88->setMinimumSize(QSize(0, 60));

        horizontalLayout_11->addWidget(label_88);


        gridLayout->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_97 = new QLabel(widget_ChessBoard);
        label_97->setObjectName(QStringLiteral("label_97"));

        horizontalLayout_13->addWidget(label_97);

        label_98 = new QLabel(widget_ChessBoard);
        label_98->setObjectName(QStringLiteral("label_98"));

        horizontalLayout_13->addWidget(label_98);

        label_99 = new QLabel(widget_ChessBoard);
        label_99->setObjectName(QStringLiteral("label_99"));

        horizontalLayout_13->addWidget(label_99);

        label_100 = new QLabel(widget_ChessBoard);
        label_100->setObjectName(QStringLiteral("label_100"));

        horizontalLayout_13->addWidget(label_100);

        label_101 = new QLabel(widget_ChessBoard);
        label_101->setObjectName(QStringLiteral("label_101"));
        label_101->setMinimumSize(QSize(60, 0));

        horizontalLayout_13->addWidget(label_101);

        label_102 = new QLabel(widget_ChessBoard);
        label_102->setObjectName(QStringLiteral("label_102"));

        horizontalLayout_13->addWidget(label_102);

        label_103 = new QLabel(widget_ChessBoard);
        label_103->setObjectName(QStringLiteral("label_103"));

        horizontalLayout_13->addWidget(label_103);

        label_104 = new QLabel(widget_ChessBoard);
        label_104->setObjectName(QStringLiteral("label_104"));
        label_104->setMinimumSize(QSize(0, 60));

        horizontalLayout_13->addWidget(label_104);


        gridLayout->addLayout(horizontalLayout_13, 3, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_105 = new QLabel(widget_ChessBoard);
        label_105->setObjectName(QStringLiteral("label_105"));

        horizontalLayout_14->addWidget(label_105);

        label_106 = new QLabel(widget_ChessBoard);
        label_106->setObjectName(QStringLiteral("label_106"));

        horizontalLayout_14->addWidget(label_106);

        label_107 = new QLabel(widget_ChessBoard);
        label_107->setObjectName(QStringLiteral("label_107"));

        horizontalLayout_14->addWidget(label_107);

        label_108 = new QLabel(widget_ChessBoard);
        label_108->setObjectName(QStringLiteral("label_108"));

        horizontalLayout_14->addWidget(label_108);

        label_109 = new QLabel(widget_ChessBoard);
        label_109->setObjectName(QStringLiteral("label_109"));
        label_109->setMinimumSize(QSize(60, 0));

        horizontalLayout_14->addWidget(label_109);

        label_110 = new QLabel(widget_ChessBoard);
        label_110->setObjectName(QStringLiteral("label_110"));

        horizontalLayout_14->addWidget(label_110);

        label_111 = new QLabel(widget_ChessBoard);
        label_111->setObjectName(QStringLiteral("label_111"));
        label_111->setMinimumSize(QSize(0, 60));
        label_111->setMaximumSize(QSize(16777215, 61));

        horizontalLayout_14->addWidget(label_111);

        label_112 = new QLabel(widget_ChessBoard);
        label_112->setObjectName(QStringLiteral("label_112"));

        horizontalLayout_14->addWidget(label_112);


        gridLayout->addLayout(horizontalLayout_14, 4, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_113 = new QLabel(widget_ChessBoard);
        label_113->setObjectName(QStringLiteral("label_113"));

        horizontalLayout_15->addWidget(label_113);

        label_114 = new QLabel(widget_ChessBoard);
        label_114->setObjectName(QStringLiteral("label_114"));

        horizontalLayout_15->addWidget(label_114);

        label_115 = new QLabel(widget_ChessBoard);
        label_115->setObjectName(QStringLiteral("label_115"));
        label_115->setMinimumSize(QSize(60, 0));

        horizontalLayout_15->addWidget(label_115);

        label_116 = new QLabel(widget_ChessBoard);
        label_116->setObjectName(QStringLiteral("label_116"));
        label_116->setMinimumSize(QSize(60, 0));

        horizontalLayout_15->addWidget(label_116);

        label_117 = new QLabel(widget_ChessBoard);
        label_117->setObjectName(QStringLiteral("label_117"));
        label_117->setMinimumSize(QSize(60, 0));

        horizontalLayout_15->addWidget(label_117);

        label_118 = new QLabel(widget_ChessBoard);
        label_118->setObjectName(QStringLiteral("label_118"));

        horizontalLayout_15->addWidget(label_118);

        label_119 = new QLabel(widget_ChessBoard);
        label_119->setObjectName(QStringLiteral("label_119"));
        label_119->setMinimumSize(QSize(0, 60));

        horizontalLayout_15->addWidget(label_119);

        label_120 = new QLabel(widget_ChessBoard);
        label_120->setObjectName(QStringLiteral("label_120"));

        horizontalLayout_15->addWidget(label_120);


        gridLayout->addLayout(horizontalLayout_15, 5, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_121 = new QLabel(widget_ChessBoard);
        label_121->setObjectName(QStringLiteral("label_121"));

        horizontalLayout_16->addWidget(label_121);

        label_122 = new QLabel(widget_ChessBoard);
        label_122->setObjectName(QStringLiteral("label_122"));

        horizontalLayout_16->addWidget(label_122);

        label_123 = new QLabel(widget_ChessBoard);
        label_123->setObjectName(QStringLiteral("label_123"));

        horizontalLayout_16->addWidget(label_123);

        label_124 = new QLabel(widget_ChessBoard);
        label_124->setObjectName(QStringLiteral("label_124"));

        horizontalLayout_16->addWidget(label_124);

        label_125 = new QLabel(widget_ChessBoard);
        label_125->setObjectName(QStringLiteral("label_125"));
        label_125->setMinimumSize(QSize(60, 0));

        horizontalLayout_16->addWidget(label_125);

        label_126 = new QLabel(widget_ChessBoard);
        label_126->setObjectName(QStringLiteral("label_126"));

        horizontalLayout_16->addWidget(label_126);

        label_127 = new QLabel(widget_ChessBoard);
        label_127->setObjectName(QStringLiteral("label_127"));
        label_127->setMinimumSize(QSize(0, 60));

        horizontalLayout_16->addWidget(label_127);

        label_128 = new QLabel(widget_ChessBoard);
        label_128->setObjectName(QStringLiteral("label_128"));

        horizontalLayout_16->addWidget(label_128);


        gridLayout->addLayout(horizontalLayout_16, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget_ChessBoard);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget_ChessBoard);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(widget_ChessBoard);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(widget_ChessBoard);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(widget_ChessBoard);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(60, 0));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(widget_ChessBoard);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(widget_ChessBoard);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 60));

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(widget_ChessBoard);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 1);

        label_129 = new QLabel(centralWidget);
        label_129->setObjectName(QStringLiteral("label_129"));
        label_129->setGeometry(QRect(10, 10, 361, 21));
        label_129->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        horseWord = new QLabel(centralWidget);
        horseWord->setObjectName(QStringLiteral("horseWord"));
        horseWord->setGeometry(QRect(530, 210, 161, 131));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 110, 16, 491));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 11, 0, 0);
        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_21);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_18);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_19);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_17);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_22);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_23);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_24);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_20);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 90, 491, 20));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(8);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_10);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_11);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_12);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_16);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_14);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_15);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_13);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        widget_ChessBoard->raise();
        _ButtonStart->raise();
        _EditX->raise();
        _EditY->raise();
        widget->raise();
        label_129->raise();
        horseWord->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 706, 23));
        menuBar->setStyleSheet(QStringLiteral("background-color: rgb(90, 164, 255);"));
        menu_S = new QMenu(menuBar);
        menu_S->setObjectName(QStringLiteral("menu_S"));
        menu_S->setToolTipsVisible(false);
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_S->menuAction());
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu_S->addAction(actionClear);
        menu_S->addSeparator();
        menu_S->addAction(actionQuit_Q);
        menu->addAction(actionHorse);
        menu_2->addAction(actionS_2);
        menu_2->addSeparator();
        menu_2->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit_Q, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Chess board traversal", 0));
        actionQuit_Q->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&Q)", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
        actionHorse->setText(QApplication::translate("MainWindow", "\351\251\254", 0));
        actionS_2->setText(QApplication::translate("MainWindow", "\346\212\245\345\221\212bug", 0));
        actionClear->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\243\213\347\233\230", 0));
#ifndef QT_NO_STATUSTIP
        _ButtonStart->setStatusTip(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\267\263\350\267\203", 0));
#endif // QT_NO_STATUSTIP
        _ButtonStart->setText(QString());
        _EditX->setPlaceholderText(QApplication::translate("MainWindow", "Input PointX", 0));
        _EditY->setPlaceholderText(QApplication::translate("MainWindow", "Input PointY", 0));
        label_65->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_66->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_67->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_68->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_69->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_70->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_71->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_72->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_73->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_74->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_75->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_76->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_77->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_78->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_79->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_80->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_81->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_82->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_83->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_84->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_85->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_86->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_87->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_88->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_97->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_98->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_99->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_100->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_101->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_102->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_103->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_104->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_105->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_106->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_107->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_108->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_109->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_110->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_111->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_112->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_113->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_114->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_115->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_116->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_117->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_118->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_119->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_120->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_121->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_122->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_123->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_124->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_125->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_126->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_127->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_128->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_7->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_129->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\350\257\267\345\274\200\345\247\213\344\275\240\347\232\204\350\241\250\346\274\224\347\233\264\346\216\245\347\202\271\345\207\273\344\271\237\345\217\257\344\273\245\345\223\246</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", 0));
        horseWord->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "1", 0));
        label_18->setText(QApplication::translate("MainWindow", "2", 0));
        label_19->setText(QApplication::translate("MainWindow", "3", 0));
        label_17->setText(QApplication::translate("MainWindow", "4", 0));
        label_22->setText(QApplication::translate("MainWindow", "5", 0));
        label_23->setText(QApplication::translate("MainWindow", "6", 0));
        label_24->setText(QApplication::translate("MainWindow", "7", 0));
        label_20->setText(QApplication::translate("MainWindow", "8", 0));
        label_9->setText(QApplication::translate("MainWindow", "1", 0));
        label_10->setText(QApplication::translate("MainWindow", "2", 0));
        label_11->setText(QApplication::translate("MainWindow", "3", 0));
        label_12->setText(QApplication::translate("MainWindow", "4", 0));
        label_16->setText(QApplication::translate("MainWindow", "5", 0));
        label_14->setText(QApplication::translate("MainWindow", "6", 0));
        label_15->setText(QApplication::translate("MainWindow", "7", 0));
        label_13->setText(QApplication::translate("MainWindow", "8", 0));
        menu_S->setTitle(QApplication::translate("MainWindow", "\345\274\200\345\247\213(&S)", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234\351\200\211\351\241\271", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
