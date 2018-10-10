/****************************************************************************
** Meta object code from reading C++ file 'texturedfillparameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/texturedfillparameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'texturedfillparameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TexturedFillParameter_t {
    QByteArrayData data[8];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TexturedFillParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TexturedFillParameter_t qt_meta_stringdata_TexturedFillParameter = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TexturedFillParameter"
QT_MOC_LITERAL(1, 22, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "varianceLowerBoundChanged"
QT_MOC_LITERAL(4, 64, 25), // "varianceUpperBoundChanged"
QT_MOC_LITERAL(5, 90, 7), // "enabled"
QT_MOC_LITERAL(6, 98, 18), // "varianceLowerBound"
QT_MOC_LITERAL(7, 117, 18) // "varianceUpperBound"

    },
    "TexturedFillParameter\0enabledChanged\0"
    "\0varianceLowerBoundChanged\0"
    "varianceUpperBoundChanged\0enabled\0"
    "varianceLowerBound\0varianceUpperBound"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TexturedFillParameter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
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
       5, QMetaType::Bool, 0x00495103,
       6, QMetaType::QReal, 0x00495103,
       7, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void TexturedFillParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TexturedFillParameter *_t = static_cast<TexturedFillParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->varianceLowerBoundChanged(); break;
        case 2: _t->varianceUpperBoundChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TexturedFillParameter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TexturedFillParameter::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TexturedFillParameter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TexturedFillParameter::varianceLowerBoundChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TexturedFillParameter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TexturedFillParameter::varianceUpperBoundChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TexturedFillParameter *_t = static_cast<TexturedFillParameter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->varianceLowerBound(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->varianceUpperBound(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TexturedFillParameter *_t = static_cast<TexturedFillParameter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setVarianceLowerBound(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setVarianceUpperBound(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TexturedFillParameter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TexturedFillParameter.data,
    qt_meta_data_TexturedFillParameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TexturedFillParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TexturedFillParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TexturedFillParameter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TexturedFillParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TexturedFillParameter::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TexturedFillParameter::varianceLowerBoundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TexturedFillParameter::varianceUpperBoundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_TexturedFillParameters_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TexturedFillParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TexturedFillParameters_t qt_meta_stringdata_TexturedFillParameters = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TexturedFillParameters"
QT_MOC_LITERAL(1, 23, 4), // "copy"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 23), // "TexturedFillParameters*"
QT_MOC_LITERAL(4, 53, 5), // "other"
QT_MOC_LITERAL(5, 59, 3), // "hue"
QT_MOC_LITERAL(6, 63, 22), // "TexturedFillParameter*"
QT_MOC_LITERAL(7, 86, 10), // "saturation"
QT_MOC_LITERAL(8, 97, 9) // "lightness"

    },
    "TexturedFillParameters\0copy\0\0"
    "TexturedFillParameters*\0other\0hue\0"
    "TexturedFillParameter*\0saturation\0"
    "lightness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TexturedFillParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095c09,
       7, 0x80000000 | 6, 0x00095c09,
       8, 0x80000000 | 6, 0x00095c09,

       0        // eod
};

void TexturedFillParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TexturedFillParameters *_t = static_cast<TexturedFillParameters *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copy((*reinterpret_cast< TexturedFillParameters*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TexturedFillParameters* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TexturedFillParameter* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TexturedFillParameters *_t = static_cast<TexturedFillParameters *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TexturedFillParameter**>(_v) = _t->hue(); break;
        case 1: *reinterpret_cast< TexturedFillParameter**>(_v) = _t->saturation(); break;
        case 2: *reinterpret_cast< TexturedFillParameter**>(_v) = _t->lightness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TexturedFillParameters::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TexturedFillParameters.data,
    qt_meta_data_TexturedFillParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TexturedFillParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TexturedFillParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TexturedFillParameters.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TexturedFillParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
