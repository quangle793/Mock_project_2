/****************************************************************************
** Meta object code from reading C++ file 'Audiomanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Mock_project/Audiomanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Audiomanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioManager_t {
    QByteArrayData data[18];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioManager_t qt_meta_stringdata_AudioManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AudioManager"
QT_MOC_LITERAL(1, 13, 12), // "filePathSent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "filePath"
QT_MOC_LITERAL(4, 36, 13), // "songUIChanged"
QT_MOC_LITERAL(5, 50, 6), // "songUI"
QT_MOC_LITERAL(6, 57, 9), // "setSongUI"
QT_MOC_LITERAL(7, 67, 17), // "onDurationChanged"
QT_MOC_LITERAL(8, 85, 8), // "duration"
QT_MOC_LITERAL(9, 94, 9), // "playMusic"
QT_MOC_LITERAL(10, 104, 10), // "pauseMusic"
QT_MOC_LITERAL(11, 115, 9), // "stopMusic"
QT_MOC_LITERAL(12, 125, 9), // "nextMusic"
QT_MOC_LITERAL(13, 135, 13), // "previousMusic"
QT_MOC_LITERAL(14, 149, 10), // "openFolder"
QT_MOC_LITERAL(15, 160, 14), // "addSongToModel"
QT_MOC_LITERAL(16, 175, 11), // "getDuration"
QT_MOC_LITERAL(17, 187, 11) // "getFileName"

    },
    "AudioManager\0filePathSent\0\0filePath\0"
    "songUIChanged\0songUI\0setSongUI\0"
    "onDurationChanged\0duration\0playMusic\0"
    "pauseMusic\0stopMusic\0nextMusic\0"
    "previousMusic\0openFolder\0addSongToModel\0"
    "getDuration\0getFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   85,    2, 0x0a /* Public */,
       7,    1,   88,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x02 /* Public */,
      10,    0,   92,    2, 0x02 /* Public */,
      11,    0,   93,    2, 0x02 /* Public */,
      12,    0,   94,    2, 0x02 /* Public */,
      13,    0,   95,    2, 0x02 /* Public */,
      14,    1,   96,    2, 0x02 /* Public */,
      15,    1,   99,    2, 0x02 /* Public */,
      16,    0,  102,    2, 0x02 /* Public */,
      17,    1,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::LongLong,    8,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Int,
    QMetaType::QString, QMetaType::QString,    3,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void AudioManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filePathSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->songUIChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setSongUI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->playMusic(); break;
        case 5: _t->pauseMusic(); break;
        case 6: _t->stopMusic(); break;
        case 7: _t->nextMusic(); break;
        case 8: _t->previousMusic(); break;
        case 9: _t->openFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->addSongToModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: { int _r = _t->getDuration();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->getFileName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioManager::filePathSent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioManager::songUIChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->songUI(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSongUI(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AudioManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AudioManager.data,
    qt_meta_data_AudioManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AudioManager::filePathSent(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AudioManager::songUIChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
