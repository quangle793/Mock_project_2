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
    QByteArrayData data[31];
    char stringdata0[389];
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
QT_MOC_LITERAL(6, 57, 15), // "durationChanged"
QT_MOC_LITERAL(7, 73, 8), // "duration"
QT_MOC_LITERAL(8, 82, 19), // "durationSongChanged"
QT_MOC_LITERAL(9, 102, 12), // "durationSong"
QT_MOC_LITERAL(10, 115, 18), // "currentTimeChanged"
QT_MOC_LITERAL(11, 134, 20), // "remainingTimeChanged"
QT_MOC_LITERAL(12, 155, 9), // "setSongUI"
QT_MOC_LITERAL(13, 165, 17), // "onDurationChanged"
QT_MOC_LITERAL(14, 183, 15), // "setDurationSong"
QT_MOC_LITERAL(15, 199, 17), // "onPositionChanged"
QT_MOC_LITERAL(16, 217, 8), // "position"
QT_MOC_LITERAL(17, 226, 9), // "playMusic"
QT_MOC_LITERAL(18, 236, 10), // "pauseMusic"
QT_MOC_LITERAL(19, 247, 9), // "stopMusic"
QT_MOC_LITERAL(20, 257, 9), // "nextMusic"
QT_MOC_LITERAL(21, 267, 13), // "previousMusic"
QT_MOC_LITERAL(22, 281, 10), // "openFolder"
QT_MOC_LITERAL(23, 292, 14), // "addSongToModel"
QT_MOC_LITERAL(24, 307, 11), // "getDuration"
QT_MOC_LITERAL(25, 319, 14), // "handleDuration"
QT_MOC_LITERAL(26, 334, 11), // "getFileName"
QT_MOC_LITERAL(27, 346, 9), // "setVolume"
QT_MOC_LITERAL(28, 356, 6), // "volume"
QT_MOC_LITERAL(29, 363, 11), // "currentTime"
QT_MOC_LITERAL(30, 375, 13) // "remainingTime"

    },
    "AudioManager\0filePathSent\0\0filePath\0"
    "songUIChanged\0songUI\0durationChanged\0"
    "duration\0durationSongChanged\0durationSong\0"
    "currentTimeChanged\0remainingTimeChanged\0"
    "setSongUI\0onDurationChanged\0setDurationSong\0"
    "onPositionChanged\0position\0playMusic\0"
    "pauseMusic\0stopMusic\0nextMusic\0"
    "previousMusic\0openFolder\0addSongToModel\0"
    "getDuration\0handleDuration\0getFileName\0"
    "setVolume\0volume\0currentTime\0remainingTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       4,  166, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       6,    1,  125,    2, 0x06 /* Public */,
       8,    1,  128,    2, 0x06 /* Public */,
      10,    0,  131,    2, 0x06 /* Public */,
      11,    0,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  133,    2, 0x0a /* Public */,
      13,    1,  136,    2, 0x0a /* Public */,
      14,    1,  139,    2, 0x0a /* Public */,
      15,    1,  142,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      17,    0,  145,    2, 0x02 /* Public */,
      18,    0,  146,    2, 0x02 /* Public */,
      19,    0,  147,    2, 0x02 /* Public */,
      20,    0,  148,    2, 0x02 /* Public */,
      21,    0,  149,    2, 0x02 /* Public */,
      22,    1,  150,    2, 0x02 /* Public */,
      23,    1,  153,    2, 0x02 /* Public */,
      24,    0,  156,    2, 0x02 /* Public */,
      25,    1,  157,    2, 0x02 /* Public */,
      26,    1,  160,    2, 0x02 /* Public */,
      27,    1,  163,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::LongLong,   16,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Int,
    QMetaType::QString, QMetaType::Int,    7,
    QMetaType::QString, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QReal,   28,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      29, QMetaType::Int, 0x00495001,
      30, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       1,
       3,
       4,
       5,

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
        case 2: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->durationSongChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->currentTimeChanged(); break;
        case 5: _t->remainingTimeChanged(); break;
        case 6: _t->setSongUI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->setDurationSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->playMusic(); break;
        case 11: _t->pauseMusic(); break;
        case 12: _t->stopMusic(); break;
        case 13: _t->nextMusic(); break;
        case 14: _t->previousMusic(); break;
        case 15: _t->openFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->addSongToModel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: { int _r = _t->getDuration();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->handleDuration((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { QString _r = _t->getFileName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setVolume((*reinterpret_cast< qreal(*)>(_a[1]))); break;
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
        {
            using _t = void (AudioManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioManager::durationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AudioManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioManager::durationSongChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AudioManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioManager::currentTimeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AudioManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioManager::remainingTimeChanged)) {
                *result = 5;
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
        case 1: *reinterpret_cast< int*>(_v) = _t->durationSong(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentTime(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->remainingTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AudioManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSongUI(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDurationSong(*reinterpret_cast< int*>(_v)); break;
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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
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

// SIGNAL 2
void AudioManager::durationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AudioManager::durationSongChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AudioManager::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AudioManager::remainingTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
