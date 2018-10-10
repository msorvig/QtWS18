/****************************************************************************
** Meta object code from reading C++ file 'canvaspane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/canvaspane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvaspane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CanvasPane_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CanvasPane_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CanvasPane_t qt_meta_stringdata_CanvasPane = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CanvasPane"
QT_MOC_LITERAL(1, 11, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "sizeChanged"
QT_MOC_LITERAL(4, 41, 13), // "offsetChanged"
QT_MOC_LITERAL(5, 55, 4), // "size"
QT_MOC_LITERAL(6, 60, 16), // "integerZoomLevel"
QT_MOC_LITERAL(7, 77, 12), // "maxZoomLevel"
QT_MOC_LITERAL(8, 90, 6) // "offset"

    },
    "CanvasPane\0zoomLevelChanged\0\0sizeChanged\0"
    "offsetChanged\0size\0integerZoomLevel\0"
    "maxZoomLevel\0offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CanvasPane[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00495103,
       6, QMetaType::Int, 0x00495001,
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::QPoint, 0x00495103,

 // properties: notify_signal_id
       1,
       0,
       0,
       2,

       0        // eod
};

void CanvasPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasPane *_t = static_cast<CanvasPane *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomLevelChanged(); break;
        case 1: _t->sizeChanged(); break;
        case 2: _t->offsetChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CanvasPane::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasPane::zoomLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CanvasPane::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasPane::sizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CanvasPane::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasPane::offsetChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CanvasPane *_t = static_cast<CanvasPane *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->size(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->integerZoomLevel(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->maxZoomLevel(); break;
        case 3: *reinterpret_cast< QPoint*>(_v) = _t->offset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CanvasPane *_t = static_cast<CanvasPane *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSize(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setOffset(*reinterpret_cast< QPoint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CanvasPane::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CanvasPane.data,
    qt_meta_data_CanvasPane,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CanvasPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanvasPane::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CanvasPane.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CanvasPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CanvasPane::zoomLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CanvasPane::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CanvasPane::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
