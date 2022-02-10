/****************************************************************************
** Meta object code from reading C++ file 'qmarkdowntextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../3rdParty/qmarkdowntextedit/qmarkdowntextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmarkdowntextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMarkdownTextEdit_t {
    QByteArrayData data[16];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMarkdownTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMarkdownTextEdit_t qt_meta_stringdata_QMarkdownTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QMarkdownTextEdit"
QT_MOC_LITERAL(1, 18, 10), // "urlClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "url"
QT_MOC_LITERAL(4, 34, 13), // "duplicateText"
QT_MOC_LITERAL(5, 48, 7), // "setText"
QT_MOC_LITERAL(6, 56, 4), // "text"
QT_MOC_LITERAL(7, 61, 12), // "setPlainText"
QT_MOC_LITERAL(8, 74, 17), // "adjustRightMargin"
QT_MOC_LITERAL(9, 92, 4), // "hide"
QT_MOC_LITERAL(10, 97, 24), // "openLinkAtCursorPosition"
QT_MOC_LITERAL(11, 122, 20), // "handleBracketRemoval"
QT_MOC_LITERAL(12, 143, 15), // "centerTheCursor"
QT_MOC_LITERAL(13, 159, 4), // "undo"
QT_MOC_LITERAL(14, 164, 14), // "moveTextUpDown"
QT_MOC_LITERAL(15, 179, 2) // "up"

    },
    "QMarkdownTextEdit\0urlClicked\0\0url\0"
    "duplicateText\0setText\0text\0setPlainText\0"
    "adjustRightMargin\0hide\0openLinkAtCursorPosition\0"
    "handleBracketRemoval\0centerTheCursor\0"
    "undo\0moveTextUpDown\0up"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMarkdownTextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       7,    1,   76,    2, 0x0a /* Public */,
       8,    0,   79,    2, 0x0a /* Public */,
       9,    0,   80,    2, 0x0a /* Public */,
      10,    0,   81,    2, 0x0a /* Public */,
      11,    0,   82,    2, 0x0a /* Public */,
      12,    0,   83,    2, 0x0a /* Public */,
      13,    0,   84,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void QMarkdownTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMarkdownTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->duplicateText(); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setPlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->adjustRightMargin(); break;
        case 5: _t->hide(); break;
        case 6: { bool _r = _t->openLinkAtCursorPosition();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->handleBracketRemoval();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->centerTheCursor(); break;
        case 9: _t->undo(); break;
        case 10: _t->moveTextUpDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMarkdownTextEdit::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMarkdownTextEdit::urlClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QMarkdownTextEdit::staticMetaObject = { {
    &QPlainTextEdit::staticMetaObject,
    qt_meta_stringdata_QMarkdownTextEdit.data,
    qt_meta_data_QMarkdownTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QMarkdownTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMarkdownTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMarkdownTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int QMarkdownTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QMarkdownTextEdit::urlClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
