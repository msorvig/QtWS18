/****************************************************************************
** Meta object code from reading C++ file 'projectmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qt-webassembly-examples/slate/app/projectmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProjectManager_t {
    QByteArrayData data[22];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectManager_t qt_meta_stringdata_ProjectManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProjectManager"
QT_MOC_LITERAL(1, 15, 14), // "projectChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "temporaryProjectChanged"
QT_MOC_LITERAL(4, 55, 26), // "applicationSettingsChanged"
QT_MOC_LITERAL(5, 82, 12), // "readyChanged"
QT_MOC_LITERAL(6, 95, 14), // "creationFailed"
QT_MOC_LITERAL(7, 110, 12), // "errorMessage"
QT_MOC_LITERAL(8, 123, 16), // "onCreationFailed"
QT_MOC_LITERAL(9, 140, 17), // "projectUrlChanged"
QT_MOC_LITERAL(10, 158, 13), // "beginCreation"
QT_MOC_LITERAL(11, 172, 13), // "Project::Type"
QT_MOC_LITERAL(12, 186, 11), // "projectType"
QT_MOC_LITERAL(13, 198, 16), // "completeCreation"
QT_MOC_LITERAL(14, 215, 17), // "projectTypeForUrl"
QT_MOC_LITERAL(15, 233, 3), // "url"
QT_MOC_LITERAL(16, 237, 7), // "project"
QT_MOC_LITERAL(17, 245, 8), // "Project*"
QT_MOC_LITERAL(18, 254, 16), // "temporaryProject"
QT_MOC_LITERAL(19, 271, 19), // "applicationSettings"
QT_MOC_LITERAL(20, 291, 20), // "ApplicationSettings*"
QT_MOC_LITERAL(21, 312, 5) // "ready"

    },
    "ProjectManager\0projectChanged\0\0"
    "temporaryProjectChanged\0"
    "applicationSettingsChanged\0readyChanged\0"
    "creationFailed\0errorMessage\0"
    "onCreationFailed\0projectUrlChanged\0"
    "beginCreation\0Project::Type\0projectType\0"
    "completeCreation\0projectTypeForUrl\0"
    "url\0project\0Project*\0temporaryProject\0"
    "applicationSettings\0ApplicationSettings*\0"
    "ready"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   71,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   75,    2, 0x02 /* Public */,
      13,    0,   78,    2, 0x02 /* Public */,
      14,    1,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Bool,
    0x80000000 | 11, QMetaType::QUrl,   15,

 // properties: name, type, flags
      16, 0x80000000 | 17, 0x00495009,
      18, 0x80000000 | 17, 0x00495009,
      19, 0x80000000 | 20, 0x0049510b,
      21, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void ProjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProjectManager *_t = static_cast<ProjectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projectChanged(); break;
        case 1: _t->temporaryProjectChanged(); break;
        case 2: _t->applicationSettingsChanged(); break;
        case 3: _t->readyChanged(); break;
        case 4: _t->creationFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onCreationFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->projectUrlChanged(); break;
        case 7: _t->beginCreation((*reinterpret_cast< Project::Type(*)>(_a[1]))); break;
        case 8: { bool _r = _t->completeCreation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { Project::Type _r = _t->projectTypeForUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Project::Type*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::projectChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProjectManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::temporaryProjectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProjectManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::applicationSettingsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProjectManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::readyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProjectManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectManager::creationFailed)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Project* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ProjectManager *_t = static_cast<ProjectManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Project**>(_v) = _t->project(); break;
        case 1: *reinterpret_cast< Project**>(_v) = _t->temporaryProject(); break;
        case 2: *reinterpret_cast< ApplicationSettings**>(_v) = _t->applicationSettings(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isReady(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ProjectManager *_t = static_cast<ProjectManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setApplicationSettings(*reinterpret_cast< ApplicationSettings**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ProjectManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ProjectManager.data,
    qt_meta_data_ProjectManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ProjectManager::projectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProjectManager::temporaryProjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ProjectManager::applicationSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ProjectManager::readyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ProjectManager::creationFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
