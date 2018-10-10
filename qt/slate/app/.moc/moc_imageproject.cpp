/****************************************************************************
** Meta object code from reading C++ file 'imageproject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/imageproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageProject_t {
    QByteArrayData data[18];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageProject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageProject_t qt_meta_stringdata_ImageProject = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ImageProject"
QT_MOC_LITERAL(1, 13, 21), // "usingAnimationChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "createNew"
QT_MOC_LITERAL(4, 46, 10), // "imageWidth"
QT_MOC_LITERAL(5, 57, 11), // "imageHeight"
QT_MOC_LITERAL(6, 69, 21), // "transparentBackground"
QT_MOC_LITERAL(7, 91, 4), // "load"
QT_MOC_LITERAL(8, 96, 3), // "url"
QT_MOC_LITERAL(9, 100, 5), // "close"
QT_MOC_LITERAL(10, 106, 6), // "saveAs"
QT_MOC_LITERAL(11, 113, 6), // "resize"
QT_MOC_LITERAL(12, 120, 5), // "width"
QT_MOC_LITERAL(13, 126, 6), // "height"
QT_MOC_LITERAL(14, 133, 6), // "smooth"
QT_MOC_LITERAL(15, 140, 14), // "usingAnimation"
QT_MOC_LITERAL(16, 155, 17), // "animationPlayback"
QT_MOC_LITERAL(17, 173, 18) // "AnimationPlayback*"

    },
    "ImageProject\0usingAnimationChanged\0\0"
    "createNew\0imageWidth\0imageHeight\0"
    "transparentBackground\0load\0url\0close\0"
    "saveAs\0resize\0width\0height\0smooth\0"
    "usingAnimation\0animationPlayback\0"
    "AnimationPlayback*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageProject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    3,   45,    2, 0x0a /* Public */,
       7,    1,   52,    2, 0x0a /* Public */,
       9,    0,   55,    2, 0x0a /* Public */,
      10,    1,   56,    2, 0x0a /* Public */,
      11,    3,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   12,   13,   14,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495903,
      16, 0x80000000 | 17, 0x00095c09,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void ImageProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ImageProject *_t = static_cast<ImageProject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->usingAnimationChanged(); break;
        case 1: _t->createNew((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->load((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->close(); break;
        case 4: _t->saveAs((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageProject::usingAnimationChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AnimationPlayback* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ImageProject *_t = static_cast<ImageProject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isUsingAnimation(); break;
        case 1: *reinterpret_cast< AnimationPlayback**>(_v) = _t->animationPlayback(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ImageProject *_t = static_cast<ImageProject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUsingAnimation(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ImageProject::staticMetaObject = { {
    &Project::staticMetaObject,
    qt_meta_stringdata_ImageProject.data,
    qt_meta_data_ImageProject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageProject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageProject.stringdata0))
        return static_cast<void*>(this);
    return Project::qt_metacast(_clname);
}

int ImageProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Project::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageProject::usingAnimationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
