/****************************************************************************
** Meta object code from reading C++ file 'newprojectvalidator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/newprojectvalidator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newprojectvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewProjectValidator_t {
    QByteArrayData data[18];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewProjectValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewProjectValidator_t qt_meta_stringdata_NewProjectValidator = {
    {
QT_MOC_LITERAL(0, 0, 19), // "NewProjectValidator"
QT_MOC_LITERAL(1, 20, 26), // "calculatedTilesWideChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 26), // "calculatedTilesHighChanged"
QT_MOC_LITERAL(4, 75, 16), // "tileWidthChanged"
QT_MOC_LITERAL(5, 92, 17), // "tileHeightChanged"
QT_MOC_LITERAL(6, 110, 28), // "tileWidthErrorMessageChanged"
QT_MOC_LITERAL(7, 139, 29), // "tileHeightErrorMessageChanged"
QT_MOC_LITERAL(8, 169, 21), // "tileWidthValidChanged"
QT_MOC_LITERAL(9, 191, 22), // "tileHeightValidChanged"
QT_MOC_LITERAL(10, 214, 19), // "calculatedTilesWide"
QT_MOC_LITERAL(11, 234, 19), // "calculatedTilesHigh"
QT_MOC_LITERAL(12, 254, 9), // "tileWidth"
QT_MOC_LITERAL(13, 264, 10), // "tileHeight"
QT_MOC_LITERAL(14, 275, 21), // "tileWidthErrorMessage"
QT_MOC_LITERAL(15, 297, 22), // "tileHeightErrorMessage"
QT_MOC_LITERAL(16, 320, 14), // "tileWidthValid"
QT_MOC_LITERAL(17, 335, 15) // "tileHeightValid"

    },
    "NewProjectValidator\0calculatedTilesWideChanged\0"
    "\0calculatedTilesHighChanged\0"
    "tileWidthChanged\0tileHeightChanged\0"
    "tileWidthErrorMessageChanged\0"
    "tileHeightErrorMessageChanged\0"
    "tileWidthValidChanged\0tileHeightValidChanged\0"
    "calculatedTilesWide\0calculatedTilesHigh\0"
    "tileWidth\0tileHeight\0tileWidthErrorMessage\0"
    "tileHeightErrorMessage\0tileWidthValid\0"
    "tileHeightValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewProjectValidator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495001,
      11, QMetaType::Int, 0x00495001,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::QString, 0x00495001,
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void NewProjectValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewProjectValidator *_t = static_cast<NewProjectValidator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calculatedTilesWideChanged(); break;
        case 1: _t->calculatedTilesHighChanged(); break;
        case 2: _t->tileWidthChanged(); break;
        case 3: _t->tileHeightChanged(); break;
        case 4: _t->tileWidthErrorMessageChanged(); break;
        case 5: _t->tileHeightErrorMessageChanged(); break;
        case 6: _t->tileWidthValidChanged(); break;
        case 7: _t->tileHeightValidChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewProjectValidator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProjectValidator::calculatedTilesWideChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NewProjectValidator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProjectValidator::calculatedTilesHighChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NewProjectValidator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProjectValidator::tileWidthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NewProjectValidator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProjectValidator::tileHeightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NewProjectValidator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProjectValidator::tileWidthErrorMessageChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NewProjectValidator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProjectValidator::tileHeightErrorMessageChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NewProjectValidator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProjectValidator::tileWidthValidChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NewProjectValidator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewProjectValidator::tileHeightValidChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        NewProjectValidator *_t = static_cast<NewProjectValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->calculatedTilesWide(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->calculatedTilesHigh(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->tileWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->tileHeight(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->tileWidthErrorMessage(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->tileHeightErrorMessage(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isTileWidthValid(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isTileHeightValid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        NewProjectValidator *_t = static_cast<NewProjectValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setTileWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setTileHeight(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject NewProjectValidator::staticMetaObject = { {
    &FileValidator::staticMetaObject,
    qt_meta_stringdata_NewProjectValidator.data,
    qt_meta_data_NewProjectValidator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NewProjectValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewProjectValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewProjectValidator.stringdata0))
        return static_cast<void*>(this);
    return FileValidator::qt_metacast(_clname);
}

int NewProjectValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NewProjectValidator::calculatedTilesWideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NewProjectValidator::calculatedTilesHighChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NewProjectValidator::tileWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NewProjectValidator::tileHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NewProjectValidator::tileWidthErrorMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void NewProjectValidator::tileHeightErrorMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void NewProjectValidator::tileWidthValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void NewProjectValidator::tileHeightValidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
