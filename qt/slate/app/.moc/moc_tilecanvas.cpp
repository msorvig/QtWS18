/****************************************************************************
** Meta object code from reading C++ file 'tilecanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/tilecanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilecanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TileCanvas_t {
    QByteArrayData data[23];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TileCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TileCanvas_t qt_meta_stringdata_TileCanvas = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TileCanvas"
QT_MOC_LITERAL(1, 11, 23), // "cursorTilePixelXChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "cursorTilePixelYChanged"
QT_MOC_LITERAL(4, 60, 11), // "modeChanged"
QT_MOC_LITERAL(5, 72, 14), // "penTileChanged"
QT_MOC_LITERAL(6, 87, 10), // "swatchLeft"
QT_MOC_LITERAL(7, 98, 11), // "swatchRight"
QT_MOC_LITERAL(8, 110, 8), // "swatchUp"
QT_MOC_LITERAL(9, 119, 10), // "swatchDown"
QT_MOC_LITERAL(10, 130, 16), // "onTilesetChanged"
QT_MOC_LITERAL(11, 147, 8), // "Tileset*"
QT_MOC_LITERAL(12, 156, 10), // "oldTileset"
QT_MOC_LITERAL(13, 167, 10), // "newTileset"
QT_MOC_LITERAL(14, 178, 5), // "reset"
QT_MOC_LITERAL(15, 184, 16), // "cursorTilePixelX"
QT_MOC_LITERAL(16, 201, 16), // "cursorTilePixelY"
QT_MOC_LITERAL(17, 218, 4), // "mode"
QT_MOC_LITERAL(18, 223, 4), // "Mode"
QT_MOC_LITERAL(19, 228, 7), // "penTile"
QT_MOC_LITERAL(20, 236, 5), // "Tile*"
QT_MOC_LITERAL(21, 242, 9), // "PixelMode"
QT_MOC_LITERAL(22, 252, 8) // "TileMode"

    },
    "TileCanvas\0cursorTilePixelXChanged\0\0"
    "cursorTilePixelYChanged\0modeChanged\0"
    "penTileChanged\0swatchLeft\0swatchRight\0"
    "swatchUp\0swatchDown\0onTilesetChanged\0"
    "Tileset*\0oldTileset\0newTileset\0reset\0"
    "cursorTilePixelX\0cursorTilePixelY\0"
    "mode\0Mode\0penTile\0Tile*\0PixelMode\0"
    "TileMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TileCanvas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   78, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    2,   72,    2, 0x0a /* Public */,
      14,    0,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Int, 0x00495001,
      16, QMetaType::Int, 0x00495001,
      17, 0x80000000 | 18, 0x0049510b,
      19, 0x80000000 | 20, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, alias, flags, count, data
      18,   18, 0x0,    2,   99,

 // enum data: key, value
      21, uint(TileCanvas::PixelMode),
      22, uint(TileCanvas::TileMode),

       0        // eod
};

void TileCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TileCanvas *_t = static_cast<TileCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorTilePixelXChanged(); break;
        case 1: _t->cursorTilePixelYChanged(); break;
        case 2: _t->modeChanged(); break;
        case 3: _t->penTileChanged(); break;
        case 4: _t->swatchLeft(); break;
        case 5: _t->swatchRight(); break;
        case 6: _t->swatchUp(); break;
        case 7: _t->swatchDown(); break;
        case 8: _t->onTilesetChanged((*reinterpret_cast< Tileset*(*)>(_a[1])),(*reinterpret_cast< Tileset*(*)>(_a[2]))); break;
        case 9: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TileCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileCanvas::cursorTilePixelXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TileCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileCanvas::cursorTilePixelYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TileCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileCanvas::modeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TileCanvas::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileCanvas::penTileChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TileCanvas *_t = static_cast<TileCanvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->cursorTilePixelX(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->cursorTilePixelY(); break;
        case 2: *reinterpret_cast< Mode*>(_v) = _t->mode(); break;
        case 3: *reinterpret_cast< Tile**>(_v) = _t->penTile(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TileCanvas *_t = static_cast<TileCanvas *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 3: _t->setPenTile(*reinterpret_cast< Tile**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TileCanvas::staticMetaObject = { {
    &ImageCanvas::staticMetaObject,
    qt_meta_stringdata_TileCanvas.data,
    qt_meta_data_TileCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TileCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TileCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TileCanvas.stringdata0))
        return static_cast<void*>(this);
    return ImageCanvas::qt_metacast(_clname);
}

int TileCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ImageCanvas::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void TileCanvas::cursorTilePixelXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TileCanvas::cursorTilePixelYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TileCanvas::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TileCanvas::penTileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
