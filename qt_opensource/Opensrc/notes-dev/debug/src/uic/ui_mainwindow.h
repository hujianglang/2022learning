/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "customDocument.h"
#include "noteview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QFrame *frameLeft;
    QHBoxLayout *horizontalLayout_scrollArea;
    QVBoxLayout *verticalLayout_scrollArea;
    QSpacerItem *verticalSpacer_upSearchEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_scrollArea_3;
    QSpacerItem *horizontalSpacer_leftSearchEdit;
    QLineEdit *searchEdit;
    QSpacerItem *horizontalSpacer_rightSearchEdit;
    QSpacerItem *verticalSpacer_upScrollArea;
    NoteView *listView;
    QFrame *line;
    QFrame *frameRight;
    QVBoxLayout *verticalLayout_textEdit;
    QFrame *frameRightTop;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_upEditorDateLabel;
    QHBoxLayout *horizontalLayout_textEdit;
    QSpacerItem *horizontalSpacer_leftNewNoteButton;
    QPushButton *newNoteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *styleEditorButton;
    QSpacerItem *horizontalSpacer_rightNewNoteButton;
    QLabel *editorDateLabel;
    QSpacerItem *horizontalSpacer_leftTrashBUtton;
    QPushButton *trashButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *dotsButton;
    QSpacerItem *horizontalSpacer_rightTrashButton;
    QSpacerItem *verticalSpacer_upTextEdit;
    CustomDocument *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(400, 200));
        MainWindow->setStyleSheet(QString::fromUtf8("#frameLeft{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"NoteData #container {\n"
"  border: none;\n"
"  background-color: rgb(255, 255, 255);\n"
"}\n"
"NoteData #titleLabel{\n"
"  margin-left:8px;\n"
"  padding:0px;\n"
"  color: black;\n"
"}\n"
"\n"
"NoteData #dateLabel{\n"
"  padding:0px;\n"
"  margin-left:7px;\n"
"  color: rgb(132, 132, 132);\n"
"}\n"
"\n"
"#textEdit{\n"
"	color : rgb(47, 47, 47);\n"
"}"));
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(frame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setMinimumSize(QSize(0, 0));
        splitter->setLineWidth(0);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(0);
        frameLeft = new QFrame(splitter);
        frameLeft->setObjectName(QString::fromUtf8("frameLeft"));
        frameLeft->setMinimumSize(QSize(185, 0));
        horizontalLayout_scrollArea = new QHBoxLayout(frameLeft);
        horizontalLayout_scrollArea->setSpacing(0);
        horizontalLayout_scrollArea->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_scrollArea->setObjectName(QString::fromUtf8("horizontalLayout_scrollArea"));
        horizontalLayout_scrollArea->setContentsMargins(0, 0, 0, 0);
        verticalLayout_scrollArea = new QVBoxLayout();
        verticalLayout_scrollArea->setSpacing(0);
        verticalLayout_scrollArea->setObjectName(QString::fromUtf8("verticalLayout_scrollArea"));
        verticalLayout_scrollArea->setSizeConstraint(QLayout::SetNoConstraint);
        verticalSpacer_upSearchEdit = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_scrollArea->addItem(verticalSpacer_upSearchEdit);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_scrollArea->addItem(verticalSpacer);

        horizontalLayout_scrollArea_3 = new QHBoxLayout();
        horizontalLayout_scrollArea_3->setSpacing(0);
        horizontalLayout_scrollArea_3->setObjectName(QString::fromUtf8("horizontalLayout_scrollArea_3"));
        horizontalLayout_scrollArea_3->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer_leftSearchEdit = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_scrollArea_3->addItem(horizontalSpacer_leftSearchEdit);

        searchEdit = new QLineEdit(frameLeft);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchEdit->sizePolicy().hasHeightForWidth());
        searchEdit->setSizePolicy(sizePolicy2);
        searchEdit->setMinimumSize(QSize(0, 22));
        searchEdit->setMaximumSize(QSize(16777215, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setItalic(false);
        searchEdit->setFont(font);
        searchEdit->setFocusPolicy(Qt::StrongFocus);
        searchEdit->setAutoFillBackground(false);
        searchEdit->setStyleSheet(QString::fromUtf8(""));
        searchEdit->setFrame(true);
        searchEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);
        searchEdit->setClearButtonEnabled(false);

        horizontalLayout_scrollArea_3->addWidget(searchEdit);

        horizontalSpacer_rightSearchEdit = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_scrollArea_3->addItem(horizontalSpacer_rightSearchEdit);


        verticalLayout_scrollArea->addLayout(horizontalLayout_scrollArea_3);

        verticalSpacer_upScrollArea = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_scrollArea->addItem(verticalSpacer_upScrollArea);

        listView = new NoteView(frameLeft);
        listView->setObjectName(QString::fromUtf8("listView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy3);
        listView->setMinimumSize(QSize(0, 0));
        listView->setBaseSize(QSize(20, 0));
        listView->setFrameShape(QFrame::NoFrame);
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_scrollArea->addWidget(listView);


        horizontalLayout_scrollArea->addLayout(verticalLayout_scrollArea);

        line = new QFrame(frameLeft);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy4);
        line->setMinimumSize(QSize(1, 0));
        line->setMaximumSize(QSize(1, 16777215));
        line->setSizeIncrement(QSize(0, 0));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_scrollArea->addWidget(line);

        splitter->addWidget(frameLeft);
        frameRight = new QFrame(splitter);
        frameRight->setObjectName(QString::fromUtf8("frameRight"));
        verticalLayout_textEdit = new QVBoxLayout(frameRight);
        verticalLayout_textEdit->setSpacing(0);
        verticalLayout_textEdit->setContentsMargins(11, 11, 11, 11);
        verticalLayout_textEdit->setObjectName(QString::fromUtf8("verticalLayout_textEdit"));
        verticalLayout_textEdit->setContentsMargins(0, 0, 0, 0);
        frameRightTop = new QFrame(frameRight);
        frameRightTop->setObjectName(QString::fromUtf8("frameRightTop"));
        frameRightTop->setMinimumSize(QSize(0, 0));
        frameRightTop->setFrameShape(QFrame::StyledPanel);
        frameRightTop->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameRightTop);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_upEditorDateLabel = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_upEditorDateLabel);

        horizontalLayout_textEdit = new QHBoxLayout();
        horizontalLayout_textEdit->setSpacing(0);
        horizontalLayout_textEdit->setObjectName(QString::fromUtf8("horizontalLayout_textEdit"));
        horizontalSpacer_leftNewNoteButton = new QSpacerItem(24, 25, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_textEdit->addItem(horizontalSpacer_leftNewNoteButton);

        newNoteButton = new QPushButton(frameRightTop);
        newNoteButton->setObjectName(QString::fromUtf8("newNoteButton"));
        newNoteButton->setMinimumSize(QSize(33, 25));
        newNoteButton->setMaximumSize(QSize(33, 25));
        newNoteButton->setCursor(QCursor(Qt::PointingHandCursor));
        newNoteButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/newNote_Regular.png"), QSize(), QIcon::Normal, QIcon::Off);
        newNoteButton->setIcon(icon);
        newNoteButton->setIconSize(QSize(16, 16));

        horizontalLayout_textEdit->addWidget(newNoteButton);

        horizontalSpacer = new QSpacerItem(24, 25, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_textEdit->addItem(horizontalSpacer);

        styleEditorButton = new QPushButton(frameRightTop);
        styleEditorButton->setObjectName(QString::fromUtf8("styleEditorButton"));
        styleEditorButton->setMinimumSize(QSize(33, 25));
        styleEditorButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_textEdit->addWidget(styleEditorButton);

        horizontalSpacer_rightNewNoteButton = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_textEdit->addItem(horizontalSpacer_rightNewNoteButton);

        editorDateLabel = new QLabel(frameRightTop);
        editorDateLabel->setObjectName(QString::fromUtf8("editorDateLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(editorDateLabel->sizePolicy().hasHeightForWidth());
        editorDateLabel->setSizePolicy(sizePolicy5);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        editorDateLabel->setFont(font1);
        editorDateLabel->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"color: rgb(132, 132, 132);\n"
"}"));
        editorDateLabel->setScaledContents(false);
        editorDateLabel->setWordWrap(false);

        horizontalLayout_textEdit->addWidget(editorDateLabel);

        horizontalSpacer_leftTrashBUtton = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_textEdit->addItem(horizontalSpacer_leftTrashBUtton);

        trashButton = new QPushButton(frameRightTop);
        trashButton->setObjectName(QString::fromUtf8("trashButton"));
        trashButton->setMinimumSize(QSize(33, 25));
        trashButton->setMaximumSize(QSize(33, 25));
        trashButton->setCursor(QCursor(Qt::PointingHandCursor));
        trashButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/trashCan_Regular.png"), QSize(), QIcon::Normal, QIcon::Off);
        trashButton->setIcon(icon1);
        trashButton->setIconSize(QSize(14, 18));

        horizontalLayout_textEdit->addWidget(trashButton);

        horizontalSpacer_2 = new QSpacerItem(24, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_textEdit->addItem(horizontalSpacer_2);

        dotsButton = new QPushButton(frameRightTop);
        dotsButton->setObjectName(QString::fromUtf8("dotsButton"));
        dotsButton->setMinimumSize(QSize(33, 25));
        dotsButton->setMaximumSize(QSize(33, 25));
        dotsButton->setCursor(QCursor(Qt::PointingHandCursor));
        dotsButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/3dots_Regular.png"), QSize(), QIcon::Normal, QIcon::Off);
        dotsButton->setIcon(icon2);

        horizontalLayout_textEdit->addWidget(dotsButton);

        horizontalSpacer_rightTrashButton = new QSpacerItem(24, 25, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_textEdit->addItem(horizontalSpacer_rightTrashButton);


        verticalLayout->addLayout(horizontalLayout_textEdit);

        verticalSpacer_upTextEdit = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_upTextEdit);


        verticalLayout_textEdit->addWidget(frameRightTop);

        textEdit = new CustomDocument(frameRight);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy6);
        textEdit->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        textEdit->setFont(font2);
        textEdit->setFocusPolicy(Qt::StrongFocus);
        textEdit->setAcceptDrops(true);
        textEdit->setStyleSheet(QString::fromUtf8(""));
        textEdit->setFrameShape(QFrame::NoFrame);
        textEdit->setTabChangesFocus(false);
        textEdit->setUndoRedoEnabled(true);
        textEdit->setLineWrapColumnOrWidth(0);

        verticalLayout_textEdit->addWidget(textEdit);

        splitter->addWidget(frameRight);

        verticalLayout_2->addWidget(splitter);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Notes", nullptr));
        searchEdit->setInputMask(QString());
        searchEdit->setText(QString());
        searchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        newNoteButton->setText(QString());
        styleEditorButton->setText(QString());
        editorDateLabel->setText(QString());
        trashButton->setText(QString());
        dotsButton->setText(QString());
        textEdit->setDocumentTitle(QString());
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:14pt;\"><br /></p></body></html>", nullptr));
        textEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
