/****************************************************************************
** Meta object code from reading C++ file 'database.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../database.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_database_t {
    QByteArrayData data[20];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_database_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_database_t qt_meta_stringdata_database = {
    {
QT_MOC_LITERAL(0, 0, 8), // "database"
QT_MOC_LITERAL(1, 9, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 56, 10), // "insertData"
QT_MOC_LITERAL(5, 67, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(6, 90, 17), // "trayiconActivated"
QT_MOC_LITERAL(7, 108, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(8, 142, 6), // "reason"
QT_MOC_LITERAL(9, 149, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(10, 173, 4), // "arg1"
QT_MOC_LITERAL(11, 178, 25), // "on_lineEdit_2_textChanged"
QT_MOC_LITERAL(12, 204, 25), // "on_lineEdit_3_textChanged"
QT_MOC_LITERAL(13, 230, 25), // "on_lineEdit_4_textChanged"
QT_MOC_LITERAL(14, 256, 10), // "encryption"
QT_MOC_LITERAL(15, 267, 23), // "on_btn_AllClear_clicked"
QT_MOC_LITERAL(16, 291, 17), // "clearDatabaseSlot"
QT_MOC_LITERAL(17, 309, 27), // "on_btn_encrypteFile_clicked"
QT_MOC_LITERAL(18, 337, 24), // "on_closeButton_2_clicked"
QT_MOC_LITERAL(19, 362, 11) // "windowShake"

    },
    "database\0on_pushButton_2_clicked\0\0"
    "on_pushButton_clicked\0insertData\0"
    "on_closeButton_clicked\0trayiconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0on_lineEdit_textChanged\0arg1\0"
    "on_lineEdit_2_textChanged\0"
    "on_lineEdit_3_textChanged\0"
    "on_lineEdit_4_textChanged\0encryption\0"
    "on_btn_AllClear_clicked\0clearDatabaseSlot\0"
    "on_btn_encrypteFile_clicked\0"
    "on_closeButton_2_clicked\0windowShake"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_database[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       9,    1,   96,    2, 0x08 /* Private */,
      11,    1,   99,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x08 /* Private */,
      13,    1,  105,    2, 0x08 /* Private */,
      14,    0,  108,    2, 0x08 /* Private */,
      15,    0,  109,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        database *_t = static_cast<database *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->insertData(); break;
        case 3: _t->on_closeButton_clicked(); break;
        case 4: _t->trayiconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 5: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_lineEdit_3_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_4_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->encryption(); break;
        case 10: _t->on_btn_AllClear_clicked(); break;
        case 11: _t->clearDatabaseSlot(); break;
        case 12: _t->on_btn_encrypteFile_clicked(); break;
        case 13: _t->on_closeButton_2_clicked(); break;
        case 14: _t->windowShake(); break;
        default: ;
        }
    }
}

const QMetaObject database::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_database.data,
      qt_meta_data_database,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *database::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_database.stringdata0))
        return static_cast<void*>(const_cast< database*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
