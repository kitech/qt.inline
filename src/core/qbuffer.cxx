//  header block begin
// /usr/include/qt/QtCore/qbuffer.h
#include <qbuffer.h>
#include <QtCore>

// QBuffer is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:87
// [-2] void connectNotify(const class QMetaMethod &)
extern "C"
void* callback_ZN7QBuffer13connectNotifyERK11QMetaMethod = 0;
extern "C" void set_callback_ZN7QBuffer13connectNotifyERK11QMetaMethod(void*cbfn)
{ callback_ZN7QBuffer13connectNotifyERK11QMetaMethod = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:88
// [-2] void disconnectNotify(const class QMetaMethod &)
extern "C"
void* callback_ZN7QBuffer16disconnectNotifyERK11QMetaMethod = 0;
extern "C" void set_callback_ZN7QBuffer16disconnectNotifyERK11QMetaMethod(void*cbfn)
{ callback_ZN7QBuffer16disconnectNotifyERK11QMetaMethod = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:90
// [8] qint64 readData(char *, qint64)
extern "C"
void* callback_ZN7QBuffer8readDataEPcx = 0;
extern "C" void set_callback_ZN7QBuffer8readDataEPcx(void*cbfn)
{ callback_ZN7QBuffer8readDataEPcx = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:91
// [8] qint64 writeData(const char *, qint64)
extern "C"
void* callback_ZN7QBuffer9writeDataEPKcx = 0;
extern "C" void set_callback_ZN7QBuffer9writeDataEPKcx(void*cbfn)
{ callback_ZN7QBuffer9writeDataEPKcx = cbfn; }

class MyQBuffer : public QBuffer {
public:
MyQBuffer(QObject * parent) : QBuffer(parent) {}
MyQBuffer(QByteArray * buf, QObject * parent) : QBuffer(buf, parent) {}
// void connectNotify(const class QMetaMethod &)
// void connectNotify(const class QMetaMethod &)
virtual void connectNotify(const QMetaMethod & arg0) {
  if (callback_ZN7QBuffer13connectNotifyERK11QMetaMethod != 0) {
  // callback_ZN7QBuffer13connectNotifyERK11QMetaMethod(arg0);
}}
// void disconnectNotify(const class QMetaMethod &)
// void disconnectNotify(const class QMetaMethod &)
virtual void disconnectNotify(const QMetaMethod & arg0) {
  if (callback_ZN7QBuffer16disconnectNotifyERK11QMetaMethod != 0) {
  // callback_ZN7QBuffer16disconnectNotifyERK11QMetaMethod(arg0);
}}
// qint64 readData(char *, qint64)
// qint64 readData(char *, qint64)
virtual qint64 readData(char * data, qint64 maxlen) {
  if (callback_ZN7QBuffer8readDataEPcx != 0) {
  // callback_ZN7QBuffer8readDataEPcx(data, maxlen);
}}
// qint64 writeData(const char *, qint64)
// qint64 writeData(const char *, qint64)
virtual qint64 writeData(const char * data, qint64 len) {
  if (callback_ZN7QBuffer9writeDataEPKcx != 0) {
  // callback_ZN7QBuffer9writeDataEPKcx(data, len);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK7QBuffer10metaObjectEv(void *this_) {
  return (void*)((QBuffer*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:60
// [-2] void QBuffer(class QObject *)
extern "C"
void* C_ZN7QBufferC1EP7QObject(QObject * parent) {
  (MyQBuffer*)(0);
  return  new MyQBuffer(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:61
// [-2] void QBuffer(class QByteArray *, class QObject *)
extern "C"
void* C_ZN7QBufferC1EP10QByteArrayP7QObject(QByteArray * buf, QObject * parent) {
  (MyQBuffer*)(0);
  return  new MyQBuffer(buf, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:66
// [-2] void ~QBuffer()
extern "C"
void C_ZN7QBufferD1Ev(void *this_) {
  delete (QBuffer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:68
// [8] QByteArray & buffer()
extern "C"
void* C_ZN7QBuffer6bufferEv(void *this_) {
  auto& rv = ((QBuffer*)this_)->buffer();
return &rv;
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:69
// [8] const QByteArray & buffer()
extern "C"
void* C_ZNK7QBuffer6bufferEv(void *this_) {
  auto& rv = ((QBuffer*)this_)->buffer();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:70
// [-2] void setBuffer(class QByteArray *)
extern "C"
void C_ZN7QBuffer9setBufferEP10QByteArray(void *this_, QByteArray * a) {
  ((QBuffer*)this_)->setBuffer(a);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:72
// [-2] void setData(const class QByteArray &)
extern "C"
void C_ZN7QBuffer7setDataERK10QByteArray(void *this_, const QByteArray & data) {
  ((QBuffer*)this_)->setData(data);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:73
// [-2] void setData(const char *, int)
extern "C"
void C_ZN7QBuffer7setDataEPKci(void *this_, const char * data, int len) {
  ((QBuffer*)this_)->setData(data, len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:74
// [8] const QByteArray & data()
extern "C"
void* C_ZNK7QBuffer4dataEv(void *this_) {
  auto& rv = ((QBuffer*)this_)->data();
return new QByteArray(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:78
// [-2] void close()
extern "C"
void C_ZN7QBuffer5closeEv(void *this_) {
  ((QBuffer*)this_)->close();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:79
// [8] qint64 size()
extern "C"
qint64 C_ZNK7QBuffer4sizeEv(void *this_) {
  return (qint64)((QBuffer*)this_)->size();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:80
// [8] qint64 pos()
extern "C"
qint64 C_ZNK7QBuffer3posEv(void *this_) {
  return (qint64)((QBuffer*)this_)->pos();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:81
// [1] bool seek(qint64)
extern "C"
bool C_ZN7QBuffer4seekEx(void *this_, qint64 off) {
  return (bool)((QBuffer*)this_)->seek(off);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:82
// [1] bool atEnd()
extern "C"
bool C_ZNK7QBuffer5atEndEv(void *this_) {
  return (bool)((QBuffer*)this_)->atEnd();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbuffer.h:83
// [1] bool canReadLine()
extern "C"
bool C_ZNK7QBuffer11canReadLineEv(void *this_) {
  return (bool)((QBuffer*)this_)->canReadLine();
}
//  main block end
