/****************************************************************************
** Meta object code from reading C++ file 'qdynslotobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qdynslotobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdynslotobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <cassert>
#include <QtCore>

void QDynSlotObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);

    QDynSlotObject* this_ = (QDynSlotObject*)_o;
    // qDebug()<<"calling:"<< _o << _c << _id << this_->fnptr_;
    if (this_->fnptr_ != 0) {
        this_->fnptr_(_o, _c, _id, _a, this_->name_,
                      this_->argc_, this_->argtys_, this_->cbptr_);
    }
    // qDebug()<<"called:"<< _o << _c << _id;
}

const QMetaObject *QDynSlotObject::metaObject() const
{
    // qDebug()<<"hehehhe"<< QObject::d_ptr->metaObject;
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDynSlotObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, this->qt_meta_stringdata.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDynSlotObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    // qDebug()<<"called:"<<_c << _id;
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}


/////////////////////
static bool QDynSlotObject_debug = false;
static QAtomicInt dyn_slot_obj_seq = 0;
QDynSlotObject::QDynSlotObject(void *fnptr, char* name, int argc, int*argtys, void*cbptr) : QObject()
{
    this->setCallbackSlot(fnptr, name, argc, argtys, cbptr);
}

QDynSlotObject::~QDynSlotObject() {
    memset(this->name_, 0, strlen(this->name_));
    free(this->name_);
}

void QDynSlotObject::setCallbackSlot(void *fnptr, char* name, int argc, int*argtys, void*cbptr)
{
    fnptr_ = (void(*)(QObject*, int, int, void*, char*, int, int*, void*))fnptr;
    name_ = name;
    argc_ = argc;
    argtys_ = argtys;
    cbptr_ = cbptr;

    // rewrite qt_meta_stringdata_ and qt_meta_data_ and staticMetaObject
    dyn_slot_obj_seq += 1;
    uint64_t rdseq = qrand(); rdseq |= uint64_t(qrand()) << 32;
    QByteArray rdseqbin((char*)&rdseq, 8);
    char* rdseqhex = rdseqbin.toHex().toUpper().data();
    // qDebug()<<rdseqbin.toHex().toUpper();
    assert(strlen(rdseqhex) == 16);
    strcpy(&this->qt_meta_stringdata.stringdata0[14], rdseqhex);

    this->staticMetaObject = {
         { &QObject::staticMetaObject, this->qt_meta_stringdata.data,
           this->qt_meta_data, qt_static_metacall, nullptr, nullptr},
    };
}

extern "C" Q_DECL_EXPORT
void callback_slot_test(void*_o, int _c, int _id, void*_a,
                                   char*name, int argc, int*argtys, void*cbptr) {
    if (QDynSlotObject_debug) {
        qDebug()<<"callback_slot called:"<<_o<<_c<<_id<<_a << ((QDynSlotObject*)_o)->name_;
    }
    void**ap = (void**)_a;
    const QString* newname = (const QString*)(ap[1]);
    if (QDynSlotObject_debug) {
        qDebug()<<"new object name from signal parameter 0:" << newname->toLatin1().data() << ap[1];
    }
}

// see mkuse/cffiqt/tsym/
int main_test(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    qsrand(time(NULL));

    // qDebug() << "Basic QObject class size: " << sizeof(QDemoObject); // 16
    qDebug() << "Deep Custom QObject class size: " << sizeof(QDynSlotObject);
    qDebug() << "QMetaObject class size: " << sizeof(QMetaObject);
    qDebug() << "meta stringdata class size: " << sizeof(struct QDynSlotObject::qt_meta_stringdata_QDynSlotObject_t);

    QDynSlotObject* dso = new QDynSlotObject((void*)&callback_slot_test, strdup("clicked123"), 0, 0, 0);
    QMetaObject* mto = (QMetaObject*)dso->metaObject();
    qDebug() << (void*)(mto->className())  << mto->methodCount();
    qDebug() << mto->className()  << mto->methodCount();
    for (int i = 0; i < mto->methodCount(); i ++) {
        qDebug()<<mto->method(i).name()<<mto->method(i).methodSignature();
    }

    QDynSlotObject* dso2 = new QDynSlotObject((void*)&callback_slot_test, strdup("released456"), 0, 0, 0);
    QObject::connect(dso, SIGNAL(objectNameChanged(const QString &)), dso2, SLOT(dumnyslot()), Qt::QueuedConnection);
    dso->setObjectName(QString("beginnotdso111"));
    dso->setObjectName(QString("beginnotdso222"));

    // app.exec();
    return 0;
}

/////
Q_DECL_EXPORT
QDynSlotObject* QDynSlotObject_new(void *fnptr, char* name, int argc, int*argtys, void* cbptr) {
    QCoreApplication::instance();
    return new QDynSlotObject(fnptr, name, argc, argtys, cbptr);
}

Q_DECL_EXPORT
void QDynSlotObject_delete(QDynSlotObject*o) { if (o != NULL) { delete o; } }

Q_DECL_EXPORT
void QDynSlotObject_connect_switch(QObject*src, char*signature, QDynSlotObject*me, int on) {
    if (QDynSlotObject_debug) {
        qDebug()<<src<<signature<<me<<on;
    }
    if (on == 0) {
        QObject::disconnect(src, signature, me, SLOT(dumnyslot()));
    } else {
        QObject::connect(src, signature, me, SLOT(dumnyslot()), Qt::QueuedConnection);
    }
}

Q_DECL_EXPORT
void QDynSlotObject_connect_test(QObject*ofrom, QObject*oto) {
    QObject::connect(ofrom, SIGNAL(objectNameChanged(const QString &)), oto, SLOT(dumnyslot()), Qt::QueuedConnection);
}

Q_DECL_EXPORT
void QDynSlotObject_trigger_test(QObject*osrc) {
    osrc->setObjectName(QString("rdobjname:")+QString::number(qrand()));
}

Q_DECL_EXPORT
void QDynSlotObject_set_debug(int on) {
    QDynSlotObject_debug = on == 1;
}

// return: 0:not exists, 1: not uniq, >1: signature string
Q_DECL_EXPORT
uint64_t QObject_get_meta_signature_by_name(void*qobjx, char* name) {
    QObject* qobj = (QObject*)qobjx;
    const QMetaObject* mobj = qobj->metaObject();
    QByteArray signature;
    int samecnt = 0;
    for (int i = 0; i < mobj->methodCount(); i ++) {
        QMetaMethod mtho = mobj->method(i);
        if (mtho.name() == QByteArray(name)) {
            samecnt += 1;
            signature = mtho.methodSignature();
        }
    }

    if (samecnt == 1) {
        return (uint64_t)strdup(signature.data());
    } else if (samecnt > 1) {
        return 1;
    } else { // == 0
        return 0;
    }
}
