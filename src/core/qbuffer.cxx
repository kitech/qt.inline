//  header block begin

// /usr/include/qt/QtCore/qbuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbuffer.h>
#include <QtCore>
#include "callback_inherit.h"

// QBuffer is pure virtual: false
// QBuffer has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQBuffer_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBuffer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBuffer_t qt_meta_stringdata_MyQBuffer = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQBuffer"
  },
  "MyQBuffer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBuffer[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQBuffer : public QBuffer {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QBuffer::staticMetaObject,
  qt_meta_stringdata_MyQBuffer.data,
  qt_meta_data_MyQBuffer,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQBuffer.stringdata0))
      return static_cast<void*>(this);
  return QBuffer::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QBuffer::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQBuffer() {}
// void QBuffer(QObject *)
MyQBuffer(QObject * parent) : QBuffer(parent) {}
// void QBuffer(QByteArray *, QObject *)
MyQBuffer(QByteArray * buf, QObject * parent) : QBuffer(buf, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void connectNotify(const QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"connectNotify", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QBuffer::connectNotify(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void disconnectNotify(const QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"disconnectNotify", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QBuffer::disconnectNotify(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QBuffer::readData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QBuffer::writeData(data, len_);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QBuffer_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQBuffer* qo = (MyQBuffer*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:87
// [-2] void connectNotify(const QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN7QBuffer13connectNotifyERK11QMetaMethod(void *this_, QMetaMethod* arg0) {
  ((QBuffer*)this_)->QBuffer::connectNotify(*arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:88
// [-2] void disconnectNotify(const QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN7QBuffer16disconnectNotifyERK11QMetaMethod(void *this_, QMetaMethod* arg0) {
  ((QBuffer*)this_)->QBuffer::disconnectNotify(*arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:90
// [8] qint64 readData(char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN7QBuffer8readDataEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QBuffer*)this_)->QBuffer::readData(data, maxlen);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:91
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN7QBuffer9writeDataEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QBuffer*)this_)->QBuffer::writeData(data, len_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QBuffer10metaObjectEv(void *this_) {
  return (void*)((QBuffer*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBuffer11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QBuffer*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN7QBuffer11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QBuffer*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBuffer2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QBuffer::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBuffer6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QBuffer::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:60
// [-2] void QBuffer(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBufferC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQBuffer*)(0);
  return  new MyQBuffer(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:61
// [-2] void QBuffer(QByteArray *, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBufferC2EP10QByteArrayP7QObject(QByteArray * buf, QObject * parent) {
  auto _nilp = (MyQBuffer*)(0);
  return  new MyQBuffer(buf, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:66
// [-2] void ~QBuffer()
extern "C" Q_DECL_EXPORT
void C_ZN7QBufferD2Ev(void *this_) {
  delete (QBuffer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:68
// [8] QByteArray & buffer()
extern "C" Q_DECL_EXPORT
void* C_ZN7QBuffer6bufferEv(void *this_) {
  auto& rv = ((QBuffer*)this_)->buffer();
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:69
// [8] const QByteArray & buffer()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QBuffer6bufferEv(void *this_) {
  auto& rv = ((QBuffer*)this_)->buffer();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:70
// [-2] void setBuffer(QByteArray *)
extern "C" Q_DECL_EXPORT
void C_ZN7QBuffer9setBufferEP10QByteArray(void *this_, QByteArray * a) {
  ((QBuffer*)this_)->setBuffer(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:72
// [-2] void setData(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN7QBuffer7setDataERK10QByteArray(void *this_, QByteArray* data) {
  ((QBuffer*)this_)->setData(*data);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:73
// [-2] void setData(const char *, int)
extern "C" Q_DECL_EXPORT
void C_ZN7QBuffer7setDataEPKci(void *this_, const char * data, int len_) {
  ((QBuffer*)this_)->setData(data, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:74
// [8] const QByteArray & data()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QBuffer4dataEv(void *this_) {
  auto& rv = ((QBuffer*)this_)->data();
return new QByteArray(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:76
// [1] bool open(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN7QBuffer4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> openMode) {
  return (bool)((QBuffer*)this_)->open(openMode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:78
// [-2] void close()
extern "C" Q_DECL_EXPORT
void C_ZN7QBuffer5closeEv(void *this_) {
  ((QBuffer*)this_)->close();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:79
// [8] qint64 size()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK7QBuffer4sizeEv(void *this_) {
  return (qint64)((QBuffer*)this_)->size();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:80
// [8] qint64 pos()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK7QBuffer3posEv(void *this_) {
  return (qint64)((QBuffer*)this_)->pos();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:81
// [1] bool seek(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN7QBuffer4seekEx(void *this_, qint64 off) {
  return (bool)((QBuffer*)this_)->seek(off);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:82
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QBuffer5atEndEv(void *this_) {
  return (bool)((QBuffer*)this_)->atEnd();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:83
// [1] bool canReadLine()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QBuffer11canReadLineEv(void *this_) {
  return (bool)((QBuffer*)this_)->canReadLine();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
