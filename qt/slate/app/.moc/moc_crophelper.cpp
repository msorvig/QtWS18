/****************************************************************************
** Meta object code from reading C++ file 'crophelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/crophelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crophelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CropHelper_t {
    QByteArrayData data[13];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CropHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CropHelper_t qt_meta_stringdata_CropHelper = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CropHelper"
QT_MOC_LITERAL(1, 11, 15), // "cropAreaChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "mousePressEvent"
QT_MOC_LITERAL(4, 44, 12), // "QMouseEvent*"
QT_MOC_LITERAL(5, 57, 5), // "event"
QT_MOC_LITERAL(6, 63, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(7, 78, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(8, 96, 15), // "hoverEnterEvent"
QT_MOC_LITERAL(9, 112, 12), // "QHoverEvent*"
QT_MOC_LITERAL(10, 125, 14), // "hoverMoveEvent"
QT_MOC_LITERAL(11, 140, 15), // "hoverLeaveEvent"
QT_MOC_LITERAL(12, 156, 8) // "cropArea"

    },
    "CropHelper\0cropAreaChanged\0\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseMoveEvent\0"
    "mouseReleaseEvent\0hoverEnterEvent\0"
    "QHoverEvent*\0hoverMoveEvent\0hoverLeaveEvent\0"
    "cropArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CropHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,
       8,    1,   59,    2, 0x06 /* Public */,
      10,    1,   62,    2, 0x06 /* Public */,
      11,    1,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,    5,
    QMetaType::Void, 0x80000000 | 9,    5,
    QMetaType::Void, 0x80000000 | 9,    5,

 // properties: name, type, flags
      12, QMetaType::QRect, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void CropHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CropHelper *_t = static_cast<CropHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cropAreaChanged(); break;
        case 1: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->hoverEnterEvent((*reinterpret_cast< QHoverEvent*(*)>(_a[1]))); break;
        case 5: _t->hoverMoveEvent((*reinterpret_cast< QHoverEvent*(*)>(_a[1]))); break;
        case 6: _t->hoverLeaveEvent((*reinterpret_cast< QHoverEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CropHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CropHelper::cropAreaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CropHelper::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CropHelper::mousePressEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CropHelper::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CropHelper::mouseMoveEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CropHelper::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CropHelper::mouseReleaseEvent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CropHelper::*)(QHoverEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CropHelper::hoverEnterEvent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CropHelper::*)(QHoverEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CropHelper::hoverMoveEvent)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CropHelper::*)(QHoverEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CropHelper::hoverLeaveEvent)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CropHelper *_t = static_cast<CropHelper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->cropArea(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CropHelper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CropHelper.data,
    qt_meta_data_CropHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CropHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CropHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CropHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CropHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CropHelper::cropAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CropHelper::mousePressEvent(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CropHelper::mouseMoveEvent(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CropHelper::mouseReleaseEvent(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CropHelper::hoverEnterEvent(QHoverEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CropHelper::hoverMoveEvent(QHoverEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CropHelper::hoverLeaveEvent(QHoverEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
