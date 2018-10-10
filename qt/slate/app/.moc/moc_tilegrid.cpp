/****************************************************************************
** Meta object code from reading C++ file 'tilegrid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/tilegrid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilegrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TileGrid_t {
    QByteArrayData data[16];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TileGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TileGrid_t qt_meta_stringdata_TileGrid = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TileGrid"
QT_MOC_LITERAL(1, 9, 16), // "tilesWideChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "tilesHighChanged"
QT_MOC_LITERAL(4, 44, 16), // "tileWidthChanged"
QT_MOC_LITERAL(5, 61, 17), // "tileHeightChanged"
QT_MOC_LITERAL(6, 79, 23), // "highlightedIndexChanged"
QT_MOC_LITERAL(7, 103, 13), // "colourChanged"
QT_MOC_LITERAL(8, 117, 22), // "highlightColourChanged"
QT_MOC_LITERAL(9, 140, 9), // "tileWidth"
QT_MOC_LITERAL(10, 150, 10), // "tileHeight"
QT_MOC_LITERAL(11, 161, 9), // "tilesWide"
QT_MOC_LITERAL(12, 171, 9), // "tilesHigh"
QT_MOC_LITERAL(13, 181, 16), // "highlightedIndex"
QT_MOC_LITERAL(14, 198, 6), // "colour"
QT_MOC_LITERAL(15, 205, 15) // "highlightColour"

    },
    "TileGrid\0tilesWideChanged\0\0tilesHighChanged\0"
    "tileWidthChanged\0tileHeightChanged\0"
    "highlightedIndexChanged\0colourChanged\0"
    "highlightColourChanged\0tileWidth\0"
    "tileHeight\0tilesWide\0tilesHigh\0"
    "highlightedIndex\0colour\0highlightColour"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TileGrid[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::QColor, 0x00495103,
      15, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       0,
       1,
       4,
       5,
       6,

       0        // eod
};

void TileGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TileGrid *_t = static_cast<TileGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tilesWideChanged(); break;
        case 1: _t->tilesHighChanged(); break;
        case 2: _t->tileWidthChanged(); break;
        case 3: _t->tileHeightChanged(); break;
        case 4: _t->highlightedIndexChanged(); break;
        case 5: _t->colourChanged(); break;
        case 6: _t->highlightColourChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TileGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileGrid::tilesWideChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TileGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileGrid::tilesHighChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TileGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileGrid::tileWidthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TileGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileGrid::tileHeightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TileGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileGrid::highlightedIndexChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TileGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileGrid::colourChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TileGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileGrid::highlightColourChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TileGrid *_t = static_cast<TileGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->tileWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->tileHeight(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->tilesWide(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->tilesHigh(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->highlightedIndex(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->colour(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->highlightColour(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TileGrid *_t = static_cast<TileGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTileWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTileHeight(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setTilesWide(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setTilesHigh(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setHighlightedIndex(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setColour(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setHighlightColour(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TileGrid::staticMetaObject = { {
    &QQuickPaintedItem::staticMetaObject,
    qt_meta_stringdata_TileGrid.data,
    qt_meta_data_TileGrid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TileGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TileGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TileGrid.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int TileGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TileGrid::tilesWideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TileGrid::tilesHighChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TileGrid::tileWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TileGrid::tileHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TileGrid::highlightedIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TileGrid::colourChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TileGrid::highlightColourChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
