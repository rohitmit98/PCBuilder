/****************************************************************************
** Meta object code from reading C++ file 'initdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PCBuilderApp/initdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'initdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InitDialog_t {
    QByteArrayData data[11];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InitDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InitDialog_t qt_meta_stringdata_InitDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "InitDialog"
QT_MOC_LITERAL(1, 11, 20), // "onStartButtonClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "onNextButtonClicked"
QT_MOC_LITERAL(4, 53, 17), // "updateProgressBar"
QT_MOC_LITERAL(5, 71, 18), // "displayLoadingPage"
QT_MOC_LITERAL(6, 90, 22), // "displayRandomBuildPage"
QT_MOC_LITERAL(7, 113, 28), // "handleImageSavedSuccessfully"
QT_MOC_LITERAL(8, 142, 6), // "PCPart"
QT_MOC_LITERAL(9, 149, 4), // "part"
QT_MOC_LITERAL(10, 154, 11) // "displayPart"

    },
    "InitDialog\0onStartButtonClicked\0\0"
    "onNextButtonClicked\0updateProgressBar\0"
    "displayLoadingPage\0displayRandomBuildPage\0"
    "handleImageSavedSuccessfully\0PCPart\0"
    "part\0displayPart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InitDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
      10,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void InitDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InitDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onStartButtonClicked(); break;
        case 1: _t->onNextButtonClicked(); break;
        case 2: _t->updateProgressBar(); break;
        case 3: _t->displayLoadingPage(); break;
        case 4: _t->displayRandomBuildPage(); break;
        case 5: _t->handleImageSavedSuccessfully((*reinterpret_cast< const PCPart(*)>(_a[1]))); break;
        case 6: _t->displayPart((*reinterpret_cast< const PCPart(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InitDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_InitDialog.data,
    qt_meta_data_InitDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InitDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InitDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InitDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int InitDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
