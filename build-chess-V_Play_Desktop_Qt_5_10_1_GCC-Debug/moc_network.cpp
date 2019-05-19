/****************************************************************************
** Meta object code from reading C++ file 'network.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chess2/network.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'network.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetWork_t {
    QByteArrayData data[11];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetWork_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetWork_t qt_meta_stringdata_NetWork = {
    {
QT_MOC_LITERAL(0, 0, 7), // "NetWork"
QT_MOC_LITERAL(1, 8, 15), // "sendInformation"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "str"
QT_MOC_LITERAL(4, 29, 18), // "server_New_Connect"
QT_MOC_LITERAL(5, 48, 10), // "getLocalIP"
QT_MOC_LITERAL(6, 59, 10), // "openServer"
QT_MOC_LITERAL(7, 70, 11), // "openClient1"
QT_MOC_LITERAL(8, 82, 9), // "ipaddress"
QT_MOC_LITERAL(9, 92, 11), // "openClient2"
QT_MOC_LITERAL(10, 104, 11) // "openClient3"

    },
    "NetWork\0sendInformation\0\0str\0"
    "server_New_Connect\0getLocalIP\0openServer\0"
    "openClient1\0ipaddress\0openClient2\0"
    "openClient3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetWork[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x02 /* Public */,
       6,    0,   54,    2, 0x02 /* Public */,
       7,    1,   55,    2, 0x02 /* Public */,
       9,    1,   58,    2, 0x02 /* Public */,
      10,    1,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void NetWork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetWork *_t = static_cast<NetWork *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendInformation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->server_New_Connect(); break;
        case 2: { QString _r = _t->getLocalIP();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->openServer(); break;
        case 4: _t->openClient1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->openClient2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->openClient3((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NetWork::*_t)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetWork::sendInformation)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetWork::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetWork.data,
      qt_meta_data_NetWork,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetWork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetWork::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetWork.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetWork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void NetWork::sendInformation(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
