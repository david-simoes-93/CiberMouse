/****************************************************************************
** Meta object code from reading C++ file 'crqcomm.h'
**
** Created: Mon Sep 29 13:38:56 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Comm/crqcomm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crqcomm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CRQComm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,    8,    8,    8, 0x0a,
      47,    8,    8,    8, 0x0a,
      64,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CRQComm[] = {
    "CRQComm\0\0viewerConnected(bool)\0"
    "dataControler()\0replyControler()\0"
    "SendRequests()\0"
};

void CRQComm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CRQComm *_t = static_cast<CRQComm *>(_o);
        switch (_id) {
        case 0: _t->viewerConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->dataControler(); break;
        case 2: _t->replyControler(); break;
        case 3: _t->SendRequests(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CRQComm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CRQComm::staticMetaObject = {
    { &QUdpSocket::staticMetaObject, qt_meta_stringdata_CRQComm,
      qt_meta_data_CRQComm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CRQComm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CRQComm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CRQComm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CRQComm))
        return static_cast<void*>(const_cast< CRQComm*>(this));
    return QUdpSocket::qt_metacast(_clname);
}

int CRQComm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QUdpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CRQComm::viewerConnected(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE