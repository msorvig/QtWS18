/****************************************************************************
** Meta object code from reading C++ file 'websocketiodevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt-webassembly-examples/mqtt_simpleclient/websocketiodevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'websocketiodevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebSocketIODevice_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebSocketIODevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebSocketIODevice_t qt_meta_stringdata_WebSocketIODevice = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WebSocketIODevice"
QT_MOC_LITERAL(1, 18, 15), // "socketConnected"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "handleBinaryMessage"
QT_MOC_LITERAL(4, 55, 3), // "msg"
QT_MOC_LITERAL(5, 59, 17) // "onSocketConnected"

    },
    "WebSocketIODevice\0socketConnected\0\0"
    "handleBinaryMessage\0msg\0onSocketConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebSocketIODevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void,

       0        // eod
};

void WebSocketIODevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebSocketIODevice *_t = static_cast<WebSocketIODevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->socketConnected(); break;
        case 1: _t->handleBinaryMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->onSocketConnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebSocketIODevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebSocketIODevice::socketConnected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebSocketIODevice::staticMetaObject = { {
    &QIODevice::staticMetaObject,
    qt_meta_stringdata_WebSocketIODevice.data,
    qt_meta_data_WebSocketIODevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WebSocketIODevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebSocketIODevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebSocketIODevice.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int WebSocketIODevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WebSocketIODevice::socketConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
