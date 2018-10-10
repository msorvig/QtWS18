/****************************************************************************
** Meta object code from reading C++ file 'undostack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../qt-webassembly-examples/slate/3rdparty/qt-undo/src/undo/undostack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'undostack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UndoStack_t {
    QByteArrayData data[20];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoStack_t qt_meta_stringdata_UndoStack = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UndoStack"
QT_MOC_LITERAL(1, 10, 12), // "indexChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "idx"
QT_MOC_LITERAL(4, 28, 12), // "cleanChanged"
QT_MOC_LITERAL(5, 41, 5), // "clean"
QT_MOC_LITERAL(6, 47, 14), // "canUndoChanged"
QT_MOC_LITERAL(7, 62, 7), // "canUndo"
QT_MOC_LITERAL(8, 70, 14), // "canRedoChanged"
QT_MOC_LITERAL(9, 85, 7), // "canRedo"
QT_MOC_LITERAL(10, 93, 15), // "undoTextChanged"
QT_MOC_LITERAL(11, 109, 8), // "undoText"
QT_MOC_LITERAL(12, 118, 15), // "redoTextChanged"
QT_MOC_LITERAL(13, 134, 8), // "redoText"
QT_MOC_LITERAL(14, 143, 8), // "setClean"
QT_MOC_LITERAL(15, 152, 8), // "setIndex"
QT_MOC_LITERAL(16, 161, 4), // "undo"
QT_MOC_LITERAL(17, 166, 4), // "redo"
QT_MOC_LITERAL(18, 171, 9), // "setActive"
QT_MOC_LITERAL(19, 181, 6) // "active"

    },
    "UndoStack\0indexChanged\0\0idx\0cleanChanged\0"
    "clean\0canUndoChanged\0canUndo\0"
    "canRedoChanged\0canRedo\0undoTextChanged\0"
    "undoText\0redoTextChanged\0redoText\0"
    "setClean\0setIndex\0undo\0redo\0setActive\0"
    "active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoStack[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    1,   86,    2, 0x06 /* Public */,
      12,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   92,    2, 0x0a /* Public */,
      15,    1,   93,    2, 0x0a /* Public */,
      16,    0,   96,    2, 0x0a /* Public */,
      17,    0,   97,    2, 0x0a /* Public */,
      18,    1,   98,    2, 0x0a /* Public */,
      18,    0,  101,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00495001,
       5, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       1,

       0        // eod
};

void UndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UndoStack *_t = static_cast<UndoStack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->undoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->redoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setClean(); break;
        case 7: _t->setIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->undo(); break;
        case 9: _t->redo(); break;
        case 10: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setActive(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UndoStack::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoStack::indexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UndoStack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoStack::cleanChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UndoStack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoStack::canUndoChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UndoStack::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoStack::canRedoChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UndoStack::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoStack::undoTextChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UndoStack::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoStack::redoTextChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UndoStack *_t = static_cast<UndoStack *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canUndo(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canRedo(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->undoText(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->redoText(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isClean(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UndoStack::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UndoStack.data,
    qt_meta_data_UndoStack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UndoStack.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UndoStack::indexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoStack::cleanChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UndoStack::canUndoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UndoStack::canRedoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UndoStack::undoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UndoStack::redoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
