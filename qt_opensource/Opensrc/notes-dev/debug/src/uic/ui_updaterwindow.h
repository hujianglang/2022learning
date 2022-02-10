/********************************************************************************
** Form generated from reading UI file 'updaterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATERWINDOW_H
#define UI_UPDATERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdaterWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *headerWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *titleWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *title;
    QWidget *versionsWidget;
    QGridLayout *gridLayout;
    QLabel *availableVersion;
    QLabel *availableVersion_Label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *installedVersion;
    QSpacerItem *horizontalSpacer_2;
    QLabel *installedVersion_Label;
    QSpacerItem *verticalSpacer_2;
    QWidget *changesWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *whatsNewLabel;
    QTextBrowser *changelog;
    QSpacerItem *verticalSpacer;
    QWidget *progressControls;
    QVBoxLayout *verticalLayout_3;
    QLabel *downloadLabel;
    QSpacerItem *verticalSpacer_4;
    QProgressBar *progressBar;
    QLabel *timeLabel;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QWidget *buttonsWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *updateButton;

    void setupUi(QWidget *UpdaterWindow)
    {
        if (UpdaterWindow->objectName().isEmpty())
            UpdaterWindow->setObjectName(QString::fromUtf8("UpdaterWindow"));
        UpdaterWindow->resize(420, 514);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UpdaterWindow->sizePolicy().hasHeightForWidth());
        UpdaterWindow->setSizePolicy(sizePolicy);
        UpdaterWindow->setMinimumSize(QSize(420, 0));
        UpdaterWindow->setMaximumSize(QSize(420, 16777215));
        verticalLayout = new QVBoxLayout(UpdaterWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        headerWidget = new QWidget(UpdaterWindow);
        headerWidget->setObjectName(QString::fromUtf8("headerWidget"));
        horizontalLayout_2 = new QHBoxLayout(headerWidget);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(headerWidget);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        verticalLayout_4 = new QVBoxLayout(titleWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(titleWidget);
        title->setObjectName(QString::fromUtf8("title"));

        verticalLayout_4->addWidget(title);

        versionsWidget = new QWidget(titleWidget);
        versionsWidget->setObjectName(QString::fromUtf8("versionsWidget"));
        gridLayout = new QGridLayout(versionsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(8);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        availableVersion = new QLabel(versionsWidget);
        availableVersion->setObjectName(QString::fromUtf8("availableVersion"));
        availableVersion->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(availableVersion, 1, 1, 1, 1);

        availableVersion_Label = new QLabel(versionsWidget);
        availableVersion_Label->setObjectName(QString::fromUtf8("availableVersion_Label"));
        availableVersion_Label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(availableVersion_Label, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        installedVersion = new QLabel(versionsWidget);
        installedVersion->setObjectName(QString::fromUtf8("installedVersion"));
        installedVersion->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(installedVersion, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        installedVersion_Label = new QLabel(versionsWidget);
        installedVersion_Label->setObjectName(QString::fromUtf8("installedVersion_Label"));
        installedVersion_Label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(installedVersion_Label, 0, 0, 1, 1);


        verticalLayout_4->addWidget(versionsWidget);


        horizontalLayout_2->addWidget(titleWidget);


        verticalLayout->addWidget(headerWidget);

        verticalSpacer_2 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        changesWidget = new QWidget(UpdaterWindow);
        changesWidget->setObjectName(QString::fromUtf8("changesWidget"));
        verticalLayout_2 = new QVBoxLayout(changesWidget);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        whatsNewLabel = new QLabel(changesWidget);
        whatsNewLabel->setObjectName(QString::fromUtf8("whatsNewLabel"));

        verticalLayout_2->addWidget(whatsNewLabel);

        changelog = new QTextBrowser(changesWidget);
        changelog->setObjectName(QString::fromUtf8("changelog"));
        changelog->setMinimumSize(QSize(0, 128));
        changelog->setStyleSheet(QString::fromUtf8(""));
        changelog->setFrameShape(QFrame::NoFrame);
        changelog->setFrameShadow(QFrame::Plain);
        changelog->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(changelog);


        verticalLayout->addWidget(changesWidget);

        verticalSpacer = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        progressControls = new QWidget(UpdaterWindow);
        progressControls->setObjectName(QString::fromUtf8("progressControls"));
        verticalLayout_3 = new QVBoxLayout(progressControls);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        downloadLabel = new QLabel(progressControls);
        downloadLabel->setObjectName(QString::fromUtf8("downloadLabel"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        downloadLabel->setFont(font);

        verticalLayout_3->addWidget(downloadLabel);

        verticalSpacer_4 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        progressBar = new QProgressBar(progressControls);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(progressBar);

        timeLabel = new QLabel(progressControls);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        verticalLayout_3->addWidget(timeLabel);

        verticalSpacer_3 = new QSpacerItem(0, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout->addWidget(progressControls);

        frame = new QFrame(UpdaterWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(5);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 8);
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMaximumSize(QSize(20, 16777215));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 1, 1, 1);


        verticalLayout->addWidget(frame);

        buttonsWidget = new QWidget(UpdaterWindow);
        buttonsWidget->setObjectName(QString::fromUtf8("buttonsWidget"));
        horizontalLayout = new QHBoxLayout(buttonsWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(buttonsWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setFocusPolicy(Qt::TabFocus);
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	border: none; \n"
"	padding: 0px; \n"
"}"));
        closeButton->setFlat(true);

        horizontalLayout->addWidget(closeButton);

        horizontalSpacer_4 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        updateButton = new QPushButton(buttonsWidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setCursor(QCursor(Qt::PointingHandCursor));
        updateButton->setFocusPolicy(Qt::TabFocus);
        updateButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"	border: none; \n"
"	padding: 0px; \n"
"}"));
        updateButton->setFlat(true);

        horizontalLayout->addWidget(updateButton);


        verticalLayout->addWidget(buttonsWidget);


        retranslateUi(UpdaterWindow);

        QMetaObject::connectSlotsByName(UpdaterWindow);
    } // setupUi

    void retranslateUi(QWidget *UpdaterWindow)
    {
        UpdaterWindow->setWindowTitle(QString());
        title->setText(QCoreApplication::translate("UpdaterWindow", "Checking for updates....", nullptr));
        versionsWidget->setStyleSheet(QString());
        availableVersion->setText(QCoreApplication::translate("UpdaterWindow", "%1", nullptr));
        availableVersion_Label->setText(QCoreApplication::translate("UpdaterWindow", "Latest Version    :", nullptr));
        installedVersion->setText(QCoreApplication::translate("UpdaterWindow", "%1", nullptr));
        installedVersion_Label->setText(QCoreApplication::translate("UpdaterWindow", "Installed Version: ", nullptr));
        whatsNewLabel->setText(QCoreApplication::translate("UpdaterWindow", "What's New:", nullptr));
        changelog->setHtml(QCoreApplication::translate("UpdaterWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arimo Regular'; font-size:14pt;\"><br /></p></body></html>", nullptr));
        downloadLabel->setText(QCoreApplication::translate("UpdaterWindow", "Downloading Updates...", nullptr));
        timeLabel->setText(QCoreApplication::translate("UpdaterWindow", "%1 minutes remaining...", nullptr));
        checkBox->setText(QString());
        label->setText(QCoreApplication::translate("UpdaterWindow", "Don't notify me automatically every time there's a new update.", nullptr));
        closeButton->setText(QCoreApplication::translate("UpdaterWindow", "Close", nullptr));
        updateButton->setText(QCoreApplication::translate("UpdaterWindow", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdaterWindow: public Ui_UpdaterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATERWINDOW_H
