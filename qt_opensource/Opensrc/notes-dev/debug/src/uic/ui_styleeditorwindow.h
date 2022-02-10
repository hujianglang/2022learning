/********************************************************************************
** Form generated from reading UI file 'styleeditorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYLEEDITORWINDOW_H
#define UI_STYLEEDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "editorsettingsbutton.h"

QT_BEGIN_NAMESPACE

class Ui_StyleEditorWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    EditorSettingsButton *serifButton;
    QFrame *line_5;
    EditorSettingsButton *sansSerifButton;
    QFrame *line_6;
    EditorSettingsButton *monoButton;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *decreaseButton;
    QFrame *line_7;
    QPushButton *increaseButton;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *fullWidthButton;
    QFrame *line_8;
    QPushButton *increaseWidthButton;
    QFrame *line_9;
    QPushButton *decreaseWidthButton;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *lightButton;
    QFrame *line_10;
    QPushButton *darkButton;
    QFrame *line_11;
    QPushButton *sepiaButton;
    QFrame *line;
    QPushButton *resetDefaultButton;

    void setupUi(QWidget *StyleEditorWindow)
    {
        if (StyleEditorWindow->objectName().isEmpty())
            StyleEditorWindow->setObjectName(QString::fromUtf8("StyleEditorWindow"));
        StyleEditorWindow->resize(380, 309);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StyleEditorWindow->sizePolicy().hasHeightForWidth());
        StyleEditorWindow->setSizePolicy(sizePolicy);
        StyleEditorWindow->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(StyleEditorWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        serifButton = new EditorSettingsButton(StyleEditorWindow);
        serifButton->setObjectName(QString::fromUtf8("serifButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(serifButton->sizePolicy().hasHeightForWidth());
        serifButton->setSizePolicy(sizePolicy1);
        serifButton->setMinimumSize(QSize(130, 100));

        horizontalLayout->addWidget(serifButton);

        line_5 = new QFrame(StyleEditorWindow);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_5->sizePolicy().hasHeightForWidth());
        line_5->setSizePolicy(sizePolicy2);
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        sansSerifButton = new EditorSettingsButton(StyleEditorWindow);
        sansSerifButton->setObjectName(QString::fromUtf8("sansSerifButton"));
        sizePolicy1.setHeightForWidth(sansSerifButton->sizePolicy().hasHeightForWidth());
        sansSerifButton->setSizePolicy(sizePolicy1);
        sansSerifButton->setMinimumSize(QSize(130, 100));

        horizontalLayout->addWidget(sansSerifButton);

        line_6 = new QFrame(StyleEditorWindow);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        sizePolicy2.setHeightForWidth(line_6->sizePolicy().hasHeightForWidth());
        line_6->setSizePolicy(sizePolicy2);
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_6);

        monoButton = new EditorSettingsButton(StyleEditorWindow);
        monoButton->setObjectName(QString::fromUtf8("monoButton"));
        sizePolicy1.setHeightForWidth(monoButton->sizePolicy().hasHeightForWidth());
        monoButton->setSizePolicy(sizePolicy1);
        monoButton->setMinimumSize(QSize(130, 100));

        horizontalLayout->addWidget(monoButton);


        verticalLayout->addLayout(horizontalLayout);

        line_4 = new QFrame(StyleEditorWindow);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy3);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        decreaseButton = new QPushButton(StyleEditorWindow);
        decreaseButton->setObjectName(QString::fromUtf8("decreaseButton"));
        sizePolicy1.setHeightForWidth(decreaseButton->sizePolicy().hasHeightForWidth());
        decreaseButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(decreaseButton);

        line_7 = new QFrame(StyleEditorWindow);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        sizePolicy2.setHeightForWidth(line_7->sizePolicy().hasHeightForWidth());
        line_7->setSizePolicy(sizePolicy2);
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_7);

        increaseButton = new QPushButton(StyleEditorWindow);
        increaseButton->setObjectName(QString::fromUtf8("increaseButton"));
        sizePolicy1.setHeightForWidth(increaseButton->sizePolicy().hasHeightForWidth());
        increaseButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(increaseButton);


        verticalLayout->addLayout(horizontalLayout_2);

        line_3 = new QFrame(StyleEditorWindow);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        sizePolicy3.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy3);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        fullWidthButton = new QPushButton(StyleEditorWindow);
        fullWidthButton->setObjectName(QString::fromUtf8("fullWidthButton"));
        sizePolicy1.setHeightForWidth(fullWidthButton->sizePolicy().hasHeightForWidth());
        fullWidthButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(fullWidthButton);

        line_8 = new QFrame(StyleEditorWindow);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        sizePolicy2.setHeightForWidth(line_8->sizePolicy().hasHeightForWidth());
        line_8->setSizePolicy(sizePolicy2);
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_8);

        increaseWidthButton = new QPushButton(StyleEditorWindow);
        increaseWidthButton->setObjectName(QString::fromUtf8("increaseWidthButton"));
        sizePolicy1.setHeightForWidth(increaseWidthButton->sizePolicy().hasHeightForWidth());
        increaseWidthButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(increaseWidthButton);

        line_9 = new QFrame(StyleEditorWindow);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        sizePolicy2.setHeightForWidth(line_9->sizePolicy().hasHeightForWidth());
        line_9->setSizePolicy(sizePolicy2);
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_9);

        decreaseWidthButton = new QPushButton(StyleEditorWindow);
        decreaseWidthButton->setObjectName(QString::fromUtf8("decreaseWidthButton"));
        sizePolicy1.setHeightForWidth(decreaseWidthButton->sizePolicy().hasHeightForWidth());
        decreaseWidthButton->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(decreaseWidthButton);


        verticalLayout->addLayout(horizontalLayout_3);

        line_2 = new QFrame(StyleEditorWindow);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        sizePolicy3.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy3);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lightButton = new QPushButton(StyleEditorWindow);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        sizePolicy1.setHeightForWidth(lightButton->sizePolicy().hasHeightForWidth());
        lightButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lightButton);

        line_10 = new QFrame(StyleEditorWindow);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        sizePolicy2.setHeightForWidth(line_10->sizePolicy().hasHeightForWidth());
        line_10->setSizePolicy(sizePolicy2);
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_10);

        darkButton = new QPushButton(StyleEditorWindow);
        darkButton->setObjectName(QString::fromUtf8("darkButton"));
        sizePolicy1.setHeightForWidth(darkButton->sizePolicy().hasHeightForWidth());
        darkButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(darkButton);

        line_11 = new QFrame(StyleEditorWindow);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        sizePolicy2.setHeightForWidth(line_11->sizePolicy().hasHeightForWidth());
        line_11->setSizePolicy(sizePolicy2);
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_11);

        sepiaButton = new QPushButton(StyleEditorWindow);
        sepiaButton->setObjectName(QString::fromUtf8("sepiaButton"));
        sizePolicy1.setHeightForWidth(sepiaButton->sizePolicy().hasHeightForWidth());
        sepiaButton->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(sepiaButton);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(StyleEditorWindow);
        line->setObjectName(QString::fromUtf8("line"));
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        resetDefaultButton = new QPushButton(StyleEditorWindow);
        resetDefaultButton->setObjectName(QString::fromUtf8("resetDefaultButton"));
        sizePolicy1.setHeightForWidth(resetDefaultButton->sizePolicy().hasHeightForWidth());
        resetDefaultButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(resetDefaultButton);


        retranslateUi(StyleEditorWindow);

        QMetaObject::connectSlotsByName(StyleEditorWindow);
    } // setupUi

    void retranslateUi(QWidget *StyleEditorWindow)
    {
        StyleEditorWindow->setWindowTitle(QCoreApplication::translate("StyleEditorWindow", "Style", nullptr));
        serifButton->setText(QString());
        sansSerifButton->setText(QString());
        monoButton->setText(QString());
        decreaseButton->setText(QString());
        increaseButton->setText(QString());
        fullWidthButton->setText(QCoreApplication::translate("StyleEditorWindow", "Full Width", nullptr));
        increaseWidthButton->setText(QString());
        decreaseWidthButton->setText(QString());
        lightButton->setText(QCoreApplication::translate("StyleEditorWindow", "Light", nullptr));
        darkButton->setText(QCoreApplication::translate("StyleEditorWindow", "Dark", nullptr));
        sepiaButton->setText(QCoreApplication::translate("StyleEditorWindow", "Sepia", nullptr));
        resetDefaultButton->setText(QCoreApplication::translate("StyleEditorWindow", "Reset to default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StyleEditorWindow: public Ui_StyleEditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLEEDITORWINDOW_H
