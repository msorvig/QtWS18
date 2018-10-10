/****************************************************************************
** Meta object code from reading C++ file 'undogroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../qt-webassembly-examples/slate/3rdparty/qt-undo/src/undo/undogroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'undogroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UndoGroup_t {
    QByteArrayData data[20];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoGroup_t qt_meta_stringdata_UndoGroup = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UndoGroup"
QT_MOC_LITERAL(1, 10, 18), // "activeStackChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "UndoStack*"
QT_MOC_LITERAL(4, 41, 5), // "stack"
QT_MOC_LITERAL(5, 47, 12), // "indexChanged"
QT_MOC_LITERAL(6, 60, 3), // "idx"
QT_MOC_LITERAL(7, 64, 12), // "cleanChanged"
QT_MOC_LITERAL(8, 77, 5), // "clean"
QT_MOC_LITERAL(9, 83, 14), // "canUndoChanged"
QT_MOC_LITERAL(10, 98, 7), // "canUndo"
QT_MOC_LITERAL(11, 106, 14), // "canRedoChanged"
QT_MOC_LITERAL(12, 121, 7), // "canRedo"
QT_MOC_LITERAL(13, 129, 15), // "undoTextChanged"
QT_MOC_LITERAL(14, 145, 8), // "undoText"
QT_MOC_LITERAL(15, 154, 15), // "redoTextChanged"
QT_MOC_LITERAL(16, 170, 8), // "redoText"
QT_MOC_LITERAL(17, 179, 4), // "undo"
QT_MOC_LITERAL(18, 184, 4), // "redo"
QT_MOC_LITERAL(19, 189, 14) // "setActiveStack"

    },
    "UndoGroup\0activeStackChanged\0\0UndoStack*\0"
    "stack\0indexChanged\0idx\0cleanChanged\0"
    "clean\0canUndoChanged\0canUndo\0"
    "canRedoChanged\0canRedo\0undoTextChanged\0"
    "undoText\0redoTextChanged\0redoText\0"
    "undo\0redo\0setActiveStack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,
      13,    1,   79,    2, 0x06 /* Public */,
      15,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   85,    2, 0x0a /* Public */,
      18,    0,   86,    2, 0x0a /* Public */,
      19,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void UndoGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UndoGroup *_t = static_cast<UndoGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeStackChanged((*reinterpret_cast< UndoStack*(*)>(_a[1]))); break;
        case 1: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->undoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->redoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->undo(); break;
        case 8: _t->redo(); break;
        case 9: _t->setActiveStack((*reinterpret_cast< UndoStack*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UndoGroup::*)(UndoStack * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoGroup::activeStackChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UndoGroup::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoGroup::indexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UndoGroup::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoGroup::cleanChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UndoGroup::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoGroup::canUndoChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UndoGroup::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoGroup::canRedoChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UndoGroup::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoGroup::undoTextChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (UndoGroup::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoGroup::redoTextChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UndoGroup::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UndoGroup.data,
    qt_meta_data_UndoGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UndoGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UndoGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UndoGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void UndoGroup::activeStackChanged(UndoStack * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoGroup::indexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UndoGroup::cleanChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UndoGroup::canUndoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UndoGroup::canRedoChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UndoGroup::undoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UndoGroup::redoTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
