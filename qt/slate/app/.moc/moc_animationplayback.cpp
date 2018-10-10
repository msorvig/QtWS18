/****************************************************************************
** Meta object code from reading C++ file 'animationplayback.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/animationplayback.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animationplayback.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnimationPlayback_t {
    QByteArrayData data[22];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimationPlayback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimationPlayback_t qt_meta_stringdata_AnimationPlayback = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AnimationPlayback"
QT_MOC_LITERAL(1, 18, 10), // "fpsChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "frameCountChanged"
QT_MOC_LITERAL(4, 48, 13), // "frameXChanged"
QT_MOC_LITERAL(5, 62, 13), // "frameYChanged"
QT_MOC_LITERAL(6, 76, 17), // "frameWidthChanged"
QT_MOC_LITERAL(7, 94, 18), // "frameHeightChanged"
QT_MOC_LITERAL(8, 113, 24), // "currentFrameIndexChanged"
QT_MOC_LITERAL(9, 138, 12), // "scaleChanged"
QT_MOC_LITERAL(10, 151, 11), // "loopChanged"
QT_MOC_LITERAL(11, 163, 14), // "playingChanged"
QT_MOC_LITERAL(12, 178, 3), // "fps"
QT_MOC_LITERAL(13, 182, 10), // "frameCount"
QT_MOC_LITERAL(14, 193, 6), // "frameX"
QT_MOC_LITERAL(15, 200, 6), // "frameY"
QT_MOC_LITERAL(16, 207, 10), // "frameWidth"
QT_MOC_LITERAL(17, 218, 11), // "frameHeight"
QT_MOC_LITERAL(18, 230, 17), // "currentFrameIndex"
QT_MOC_LITERAL(19, 248, 5), // "scale"
QT_MOC_LITERAL(20, 254, 4), // "loop"
QT_MOC_LITERAL(21, 259, 7) // "playing"

    },
    "AnimationPlayback\0fpsChanged\0\0"
    "frameCountChanged\0frameXChanged\0"
    "frameYChanged\0frameWidthChanged\0"
    "frameHeightChanged\0currentFrameIndexChanged\0"
    "scaleChanged\0loopChanged\0playingChanged\0"
    "fps\0frameCount\0frameX\0frameY\0frameWidth\0"
    "frameHeight\0currentFrameIndex\0scale\0"
    "loop\0playing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimationPlayback[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495903,
      13, QMetaType::Int, 0x00495903,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::Int, 0x00495903,
      17, QMetaType::Int, 0x00495903,
      18, QMetaType::Int, 0x00495801,
      19, QMetaType::QReal, 0x00495903,
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void AnimationPlayback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimationPlayback *_t = static_cast<AnimationPlayback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fpsChanged(); break;
        case 1: _t->frameCountChanged(); break;
        case 2: _t->frameXChanged(); break;
        case 3: _t->frameYChanged(); break;
        case 4: _t->frameWidthChanged(); break;
        case 5: _t->frameHeightChanged(); break;
        case 6: _t->currentFrameIndexChanged(); break;
        case 7: _t->scaleChanged(); break;
        case 8: _t->loopChanged(); break;
        case 9: _t->playingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::fpsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::frameCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::frameXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::frameYChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::frameWidthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::frameHeightChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::currentFrameIndexChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::scaleChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::loopChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AnimationPlayback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPlayback::playingChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AnimationPlayback *_t = static_cast<AnimationPlayback *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->fps(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->frameCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->frameX(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->frameY(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->frameWidth(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->frameHeight(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->currentFrameIndex(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->scale(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->shouldLoop(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isPlaying(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AnimationPlayback *_t = static_cast<AnimationPlayback *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFps(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFrameCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFrameX(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setFrameY(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFrameWidth(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setFrameHeight(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setLoop(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setPlaying(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AnimationPlayback::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AnimationPlayback.data,
    qt_meta_data_AnimationPlayback,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnimationPlayback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimationPlayback::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnimationPlayback.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AnimationPlayback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AnimationPlayback::fpsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AnimationPlayback::frameCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AnimationPlayback::frameXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AnimationPlayback::frameYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AnimationPlayback::frameWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AnimationPlayback::frameHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AnimationPlayback::currentFrameIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AnimationPlayback::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void AnimationPlayback::loopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void AnimationPlayback::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
