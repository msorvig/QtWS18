/****************************************************************************
** Meta object code from reading C++ file 'layeredimagecanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/layeredimagecanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layeredimagecanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LayeredImageCanvas_t {
    QByteArrayData data[12];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayeredImageCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayeredImageCanvas_t qt_meta_stringdata_LayeredImageCanvas = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LayeredImageCanvas"
QT_MOC_LITERAL(1, 19, 16), // "onPostLayerAdded"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "index"
QT_MOC_LITERAL(4, 43, 17), // "onPreLayerRemoved"
QT_MOC_LITERAL(5, 61, 18), // "onPostLayerRemoved"
QT_MOC_LITERAL(6, 80, 16), // "onPostLayerMoved"
QT_MOC_LITERAL(7, 97, 23), // "onPostLayerImageChanged"
QT_MOC_LITERAL(8, 121, 21), // "onLayerVisibleChanged"
QT_MOC_LITERAL(9, 143, 21), // "onLayerOpacityChanged"
QT_MOC_LITERAL(10, 165, 24), // "onPreCurrentLayerChanged"
QT_MOC_LITERAL(11, 190, 25) // "onPostCurrentLayerChanged"

    },
    "LayeredImageCanvas\0onPostLayerAdded\0"
    "\0index\0onPreLayerRemoved\0onPostLayerRemoved\0"
    "onPostLayerMoved\0onPostLayerImageChanged\0"
    "onLayerVisibleChanged\0onLayerOpacityChanged\0"
    "onPreCurrentLayerChanged\0"
    "onPostCurrentLayerChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayeredImageCanvas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x09 /* Protected */,
       4,    1,   62,    2, 0x09 /* Protected */,
       5,    0,   65,    2, 0x09 /* Protected */,
       6,    0,   66,    2, 0x09 /* Protected */,
       7,    0,   67,    2, 0x09 /* Protected */,
       8,    0,   68,    2, 0x09 /* Protected */,
       9,    0,   69,    2, 0x09 /* Protected */,
      10,    0,   70,    2, 0x09 /* Protected */,
      11,    0,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LayeredImageCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayeredImageCanvas *_t = static_cast<LayeredImageCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPostLayerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onPreLayerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onPostLayerRemoved(); break;
        case 3: _t->onPostLayerMoved(); break;
        case 4: _t->onPostLayerImageChanged(); break;
        case 5: _t->onLayerVisibleChanged(); break;
        case 6: _t->onLayerOpacityChanged(); break;
        case 7: _t->onPreCurrentLayerChanged(); break;
        case 8: _t->onPostCurrentLayerChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LayeredImageCanvas::staticMetaObject = { {
    &ImageCanvas::staticMetaObject,
    qt_meta_stringdata_LayeredImageCanvas.data,
    qt_meta_data_LayeredImageCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayeredImageCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayeredImageCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayeredImageCanvas.stringdata0))
        return static_cast<void*>(this);
    return ImageCanvas::qt_metacast(_clname);
}

int LayeredImageCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ImageCanvas::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
