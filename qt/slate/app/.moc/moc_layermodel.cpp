/****************************************************************************
** Meta object code from reading C++ file 'layermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/layermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LayerModel_t {
    QByteArrayData data[16];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerModel_t qt_meta_stringdata_LayerModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LayerModel"
QT_MOC_LITERAL(1, 11, 26), // "layeredImageProjectChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "onPreLayersCleared"
QT_MOC_LITERAL(4, 58, 19), // "onPostLayersCleared"
QT_MOC_LITERAL(5, 78, 15), // "onPreLayerAdded"
QT_MOC_LITERAL(6, 94, 5), // "index"
QT_MOC_LITERAL(7, 100, 16), // "onPostLayerAdded"
QT_MOC_LITERAL(8, 117, 17), // "onPreLayerRemoved"
QT_MOC_LITERAL(9, 135, 18), // "onPostLayerRemoved"
QT_MOC_LITERAL(10, 154, 15), // "onPreLayerMoved"
QT_MOC_LITERAL(11, 170, 9), // "fromIndex"
QT_MOC_LITERAL(12, 180, 7), // "toIndex"
QT_MOC_LITERAL(13, 188, 16), // "onPostLayerMoved"
QT_MOC_LITERAL(14, 205, 19), // "layeredImageProject"
QT_MOC_LITERAL(15, 225, 20) // "LayeredImageProject*"

    },
    "LayerModel\0layeredImageProjectChanged\0"
    "\0onPreLayersCleared\0onPostLayersCleared\0"
    "onPreLayerAdded\0index\0onPostLayerAdded\0"
    "onPreLayerRemoved\0onPostLayerRemoved\0"
    "onPreLayerMoved\0fromIndex\0toIndex\0"
    "onPostLayerMoved\0layeredImageProject\0"
    "LayeredImageProject*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      10,    2,   74,    2, 0x0a /* Public */,
      13,    2,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void LayerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayerModel *_t = static_cast<LayerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layeredImageProjectChanged(); break;
        case 1: _t->onPreLayersCleared(); break;
        case 2: _t->onPostLayersCleared(); break;
        case 3: _t->onPreLayerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onPostLayerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onPreLayerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onPostLayerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onPreLayerMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->onPostLayerMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LayerModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayerModel::layeredImageProjectChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LayerModel *_t = static_cast<LayerModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LayeredImageProject**>(_v) = _t->layeredImageProject(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LayerModel *_t = static_cast<LayerModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLayeredImageProject(*reinterpret_cast< LayeredImageProject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LayerModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_LayerModel.data,
    qt_meta_data_LayerModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayerModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int LayerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void LayerModel::layeredImageProjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
