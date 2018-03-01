//  header block begin
// /usr/include/qt/QtCore/qbuffer.h
#ifndef protected
#define protected public
#endif
#include <qbuffer.h>
#include <QtCore>
#include "callback_inherit.h"

// QBuffer is pure virtual: false
// QBuffer has virtual projected: true
//  header block end

//  main block begin

class MyQBuffer : public QBuffer {
public:
  virtual ~MyQBuffer() {}
// void QBuffer(class QObject *)
MyQBuffer(QObject * parent) : QBuffer(parent) {}
// void QBuffer(class QByteArray *, class QObject *)
MyQBuffer(QByteArray * buf, QObject * parent) : QBuffer(buf, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void connectNotify(const class QMetaMethod &)
  virtual void connectNotify(const QMetaMethod & arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"connectNotify", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QBuffer::connectNotify(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void disconnectNotify(const class QMetaMethod &)
  virtual void disconnectNotify(const QMetaMethod & arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"disconnectNotify", &handled, 1, (uint64_t)&arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QBuffer::disconnectNotify(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QBuffer::readData(data, maxlen);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // TypedefLongLonglong long
    } else {
    return QBuffer::writeData(data, len_);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:87
// [-2] void connectNotify(const class QMetaMethod &)
extern "C" Q_DECL_EXPORT
void C_ZN7QBuffer13connectNotifyERK11QMetaMethod(void *this_, QMetaMethod* arg0) {
  ((QBuffer*)this_)->QBuffer::connectNotify(*arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:88
// [-2] void disconnectNotify(const class QMetaMethod &)
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:60
// [-2] void QBuffer(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN7QBufferC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQBuffer*)(0);
  return  new MyQBuffer(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:61
// [-2] void QBuffer(class QByteArray *, class QObject *)
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
// [-2] void setBuffer(class QByteArray *)
extern "C" Q_DECL_EXPORT
void C_ZN7QBuffer9setBufferEP10QByteArray(void *this_, QByteArray * a) {
  ((QBuffer*)this_)->setBuffer(a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:72
// [-2] void setData(const class QByteArray &)
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
