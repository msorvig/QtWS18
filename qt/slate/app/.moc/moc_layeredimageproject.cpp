/****************************************************************************
** Meta object code from reading C++ file 'layeredimageproject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/layeredimageproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layeredimageproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LayeredImageProject_t {
    QByteArrayData data[58];
    char stringdata0[804];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayeredImageProject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayeredImageProject_t qt_meta_stringdata_LayeredImageProject = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LayeredImageProject"
QT_MOC_LITERAL(1, 20, 24), // "currentLayerIndexChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 22), // "preCurrentLayerChanged"
QT_MOC_LITERAL(4, 69, 23), // "postCurrentLayerChanged"
QT_MOC_LITERAL(5, 93, 17), // "layerCountChanged"
QT_MOC_LITERAL(6, 111, 24), // "autoExportEnabledChanged"
QT_MOC_LITERAL(7, 136, 21), // "usingAnimationChanged"
QT_MOC_LITERAL(8, 158, 16), // "preLayersCleared"
QT_MOC_LITERAL(9, 175, 17), // "postLayersCleared"
QT_MOC_LITERAL(10, 193, 13), // "preLayerAdded"
QT_MOC_LITERAL(11, 207, 5), // "index"
QT_MOC_LITERAL(12, 213, 14), // "postLayerAdded"
QT_MOC_LITERAL(13, 228, 15), // "preLayerRemoved"
QT_MOC_LITERAL(14, 244, 16), // "postLayerRemoved"
QT_MOC_LITERAL(15, 261, 13), // "preLayerMoved"
QT_MOC_LITERAL(16, 275, 9), // "fromIndex"
QT_MOC_LITERAL(17, 285, 7), // "toIndex"
QT_MOC_LITERAL(18, 293, 14), // "postLayerMoved"
QT_MOC_LITERAL(19, 308, 21), // "postLayerImageChanged"
QT_MOC_LITERAL(20, 330, 13), // "contentsMoved"
QT_MOC_LITERAL(21, 344, 9), // "createNew"
QT_MOC_LITERAL(22, 354, 10), // "imageWidth"
QT_MOC_LITERAL(23, 365, 11), // "imageHeight"
QT_MOC_LITERAL(24, 377, 21), // "transparentBackground"
QT_MOC_LITERAL(25, 399, 4), // "load"
QT_MOC_LITERAL(26, 404, 3), // "url"
QT_MOC_LITERAL(27, 408, 5), // "close"
QT_MOC_LITERAL(28, 414, 6), // "saveAs"
QT_MOC_LITERAL(29, 421, 11), // "exportImage"
QT_MOC_LITERAL(30, 433, 6), // "resize"
QT_MOC_LITERAL(31, 440, 5), // "width"
QT_MOC_LITERAL(32, 446, 6), // "height"
QT_MOC_LITERAL(33, 453, 12), // "moveContents"
QT_MOC_LITERAL(34, 466, 1), // "x"
QT_MOC_LITERAL(35, 468, 1), // "y"
QT_MOC_LITERAL(36, 470, 19), // "onlyVisibleContents"
QT_MOC_LITERAL(37, 490, 11), // "addNewLayer"
QT_MOC_LITERAL(38, 502, 18), // "deleteCurrentLayer"
QT_MOC_LITERAL(39, 521, 18), // "moveCurrentLayerUp"
QT_MOC_LITERAL(40, 540, 20), // "moveCurrentLayerDown"
QT_MOC_LITERAL(41, 561, 19), // "mergeCurrentLayerUp"
QT_MOC_LITERAL(42, 581, 21), // "mergeCurrentLayerDown"
QT_MOC_LITERAL(43, 603, 12), // "setLayerName"
QT_MOC_LITERAL(44, 616, 10), // "layerIndex"
QT_MOC_LITERAL(45, 627, 4), // "name"
QT_MOC_LITERAL(46, 632, 15), // "setLayerVisible"
QT_MOC_LITERAL(47, 648, 7), // "visible"
QT_MOC_LITERAL(48, 656, 15), // "setLayerOpacity"
QT_MOC_LITERAL(49, 672, 7), // "opacity"
QT_MOC_LITERAL(50, 680, 17), // "currentLayerIndex"
QT_MOC_LITERAL(51, 698, 12), // "currentLayer"
QT_MOC_LITERAL(52, 711, 11), // "ImageLayer*"
QT_MOC_LITERAL(53, 723, 10), // "layerCount"
QT_MOC_LITERAL(54, 734, 17), // "autoExportEnabled"
QT_MOC_LITERAL(55, 752, 14), // "usingAnimation"
QT_MOC_LITERAL(56, 767, 17), // "animationPlayback"
QT_MOC_LITERAL(57, 785, 18) // "AnimationPlayback*"

    },
    "LayeredImageProject\0currentLayerIndexChanged\0"
    "\0preCurrentLayerChanged\0postCurrentLayerChanged\0"
    "layerCountChanged\0autoExportEnabledChanged\0"
    "usingAnimationChanged\0preLayersCleared\0"
    "postLayersCleared\0preLayerAdded\0index\0"
    "postLayerAdded\0preLayerRemoved\0"
    "postLayerRemoved\0preLayerMoved\0fromIndex\0"
    "toIndex\0postLayerMoved\0postLayerImageChanged\0"
    "contentsMoved\0createNew\0imageWidth\0"
    "imageHeight\0transparentBackground\0"
    "load\0url\0close\0saveAs\0exportImage\0"
    "resize\0width\0height\0moveContents\0x\0y\0"
    "onlyVisibleContents\0addNewLayer\0"
    "deleteCurrentLayer\0moveCurrentLayerUp\0"
    "moveCurrentLayerDown\0mergeCurrentLayerUp\0"
    "mergeCurrentLayerDown\0setLayerName\0"
    "layerIndex\0name\0setLayerVisible\0visible\0"
    "setLayerOpacity\0opacity\0currentLayerIndex\0"
    "currentLayer\0ImageLayer*\0layerCount\0"
    "autoExportEnabled\0usingAnimation\0"
    "animationPlayback\0AnimationPlayback*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayeredImageProject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       6,  256, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       4,    0,  176,    2, 0x06 /* Public */,
       5,    0,  177,    2, 0x06 /* Public */,
       6,    0,  178,    2, 0x06 /* Public */,
       7,    0,  179,    2, 0x06 /* Public */,
       8,    0,  180,    2, 0x06 /* Public */,
       9,    0,  181,    2, 0x06 /* Public */,
      10,    1,  182,    2, 0x06 /* Public */,
      12,    1,  185,    2, 0x06 /* Public */,
      13,    1,  188,    2, 0x06 /* Public */,
      14,    1,  191,    2, 0x06 /* Public */,
      15,    2,  194,    2, 0x06 /* Public */,
      18,    2,  199,    2, 0x06 /* Public */,
      19,    0,  204,    2, 0x06 /* Public */,
      20,    0,  205,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    3,  206,    2, 0x0a /* Public */,
      25,    1,  213,    2, 0x0a /* Public */,
      27,    0,  216,    2, 0x0a /* Public */,
      28,    1,  217,    2, 0x0a /* Public */,
      29,    1,  220,    2, 0x0a /* Public */,
      30,    2,  223,    2, 0x0a /* Public */,
      33,    3,  228,    2, 0x0a /* Public */,
      37,    0,  235,    2, 0x0a /* Public */,
      38,    0,  236,    2, 0x0a /* Public */,
      39,    0,  237,    2, 0x0a /* Public */,
      40,    0,  238,    2, 0x0a /* Public */,
      41,    0,  239,    2, 0x0a /* Public */,
      42,    0,  240,    2, 0x0a /* Public */,
      43,    2,  241,    2, 0x0a /* Public */,
      46,    2,  246,    2, 0x0a /* Public */,
      48,    2,  251,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   16,   17,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   22,   23,   24,
    QMetaType::Void, QMetaType::QUrl,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   26,
    QMetaType::Bool, QMetaType::QUrl,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   34,   35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   44,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   44,   47,
    QMetaType::Void, QMetaType::Int, QMetaType::QReal,   44,   49,

 // properties: name, type, flags
      50, QMetaType::Int, 0x00495103,
      51, 0x80000000 | 52, 0x00495009,
      53, QMetaType::Int, 0x00495001,
      54, QMetaType::Bool, 0x00495103,
      55, QMetaType::Bool, 0x00495103,
      56, 0x80000000 | 57, 0x00095c09,

 // properties: notify_signal_id
       0,
       2,
       3,
       4,
       5,
       0,

       0        // eod
};

void LayeredImageProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayeredImageProject *_t = static_cast<LayeredImageProject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentLayerIndexChanged(); break;
        case 1: _t->preCurrentLayerChanged(); break;
        case 2: _t->postCurrentLayerChanged(); break;
        case 3: _t->layerCountChanged(); break;
        case 4: _t->autoExportEnabledChanged(); break;
        case 5: _t->usingAnimationChanged(); break;
        case 6: _t->preLayersCleared(); break;
        case 7: _t->postLayersCleared(); break;
        case 8: _t->preLayerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->postLayerAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->preLayerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->postLayerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->preLayerMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->postLayerMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->postLayerImageChanged(); break;
        case 15: _t->contentsMoved(); break;
        case 16: _t->createNew((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->load((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 18: _t->close(); break;
        case 19: _t->saveAs((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 20: { bool _r = _t->exportImage((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->moveContents((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->addNewLayer(); break;
        case 24: _t->deleteCurrentLayer(); break;
        case 25: _t->moveCurrentLayerUp(); break;
        case 26: _t->moveCurrentLayerDown(); break;
        case 27: _t->mergeCurrentLayerUp(); break;
        case 28: _t->mergeCurrentLayerDown(); break;
        case 29: _t->setLayerName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->setLayerVisible((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->setLayerOpacity((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::currentLayerIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::preCurrentLayerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::postCurrentLayerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::layerCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::autoExportEnabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::usingAnimationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::preLayersCleared)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::postLayersCleared)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::preLayerAdded)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::postLayerAdded)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::preLayerRemoved)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::postLayerRemoved)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::preLayerMoved)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::postLayerMoved)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::postLayerImageChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (LayeredImageProject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayeredImageProject::contentsMoved)) {
                *result = 15;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AnimationPlayback* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LayeredImageProject *_t = static_cast<LayeredImageProject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentLayerIndex(); break;
        case 1: *reinterpret_cast< ImageLayer**>(_v) = _t->currentLayer(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->layerCount(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAutoExportEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isUsingAnimation(); break;
        case 5: *reinterpret_cast< AnimationPlayback**>(_v) = _t->animationPlayback(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LayeredImageProject *_t = static_cast<LayeredImageProject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentLayerIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setAutoExportEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setUsingAnimation(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LayeredImageProject::staticMetaObject = { {
    &Project::staticMetaObject,
    qt_meta_stringdata_LayeredImageProject.data,
    qt_meta_data_LayeredImageProject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayeredImageProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayeredImageProject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayeredImageProject.stringdata0))
        return static_cast<void*>(this);
    return Project::qt_metacast(_clname);
}

int LayeredImageProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Project::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LayeredImageProject::currentLayerIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LayeredImageProject::preCurrentLayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LayeredImageProject::postCurrentLayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LayeredImageProject::layerCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LayeredImageProject::autoExportEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LayeredImageProject::usingAnimationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LayeredImageProject::preLayersCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LayeredImageProject::postLayersCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LayeredImageProject::preLayerAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LayeredImageProject::postLayerAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void LayeredImageProject::preLayerRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LayeredImageProject::postLayerRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void LayeredImageProject::preLayerMoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void LayeredImageProject::postLayerMoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void LayeredImageProject::postLayerImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void LayeredImageProject::contentsMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
