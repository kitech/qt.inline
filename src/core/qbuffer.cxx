//  header block begin
// /usr/include/qt/QtCore/qbuffer.h
#include <qbuffer.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qbuffer.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK7QBuffer10metaObjectEv(void *this_) {
  /*return*/ ((QBuffer*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qbuffer.h:60
// void QBuffer(class QObject *)
extern "C"
void* C_ZN7QBufferC1EP7QObject(QObject * parent) {
  return new QBuffer(parent);
}
// /usr/include/qt/QtCore/qbuffer.h:61
// void QBuffer(class QByteArray *, class QObject *)
extern "C"
void* C_ZN7QBufferC1EP10QByteArrayP7QObject(QByteArray * buf, QObject * parent) {
  return new QBuffer(buf, parent);
}
// virtual
// /usr/include/qt/QtCore/qbuffer.h:66
// void ~QBuffer()
extern "C"
void C_ZN7QBufferD1Ev(void *this_) {
  delete (QBuffer*)(this_);
}
// /usr/include/qt/QtCore/qbuffer.h:68
// QByteArray & buffer()
extern "C"
void C_ZN7QBuffer6bufferEv(void *this_) {
  /*return*/ ((QBuffer*)this_)->buffer();
}
// /usr/include/qt/QtCore/qbuffer.h:69
// const QByteArray & buffer()
extern "C"
void C_ZNK7QBuffer6bufferEv(void *this_) {
  /*return*/ ((QBuffer*)this_)->buffer();
}
// /usr/include/qt/QtCore/qbuffer.h:70
// void setBuffer(class QByteArray *)
extern "C"
void C_ZN7QBuffer9setBufferEP10QByteArray(void *this_, QByteArray * a) {
  ((QBuffer*)this_)->setBuffer(a);
}
// /usr/include/qt/QtCore/qbuffer.h:72
// void setData(const class QByteArray &)
extern "C"
void C_ZN7QBuffer7setDataERK10QByteArray(void *this_, const QByteArray & data) {
  ((QBuffer*)this_)->setData(data);
}
// inline
// /usr/include/qt/QtCore/qbuffer.h:73
// void setData(const char *, int)
extern "C"
void C_ZN7QBuffer7setDataEPKci(void *this_, const char * data, int len) {
  ((QBuffer*)this_)->setData(data, len);
}
// /usr/include/qt/QtCore/qbuffer.h:74
// const QByteArray & data()
extern "C"
void C_ZNK7QBuffer4dataEv(void *this_) {
  /*return*/ ((QBuffer*)this_)->data();
}
// virtual
// /usr/include/qt/QtCore/qbuffer.h:76
// bool open(OpenMode)
extern "C"
void C_ZN7QBuffer4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> openMode) {
  /*return*/ ((QBuffer*)this_)->open(openMode);
}
// virtual
// /usr/include/qt/QtCore/qbuffer.h:78
// void close()
extern "C"
void C_ZN7QBuffer5closeEv(void *this_) {
  ((QBuffer*)this_)->close();
}
// virtual
// /usr/include/qt/QtCore/qbuffer.h:79
// qint64 size()
extern "C"
void C_ZNK7QBuffer4sizeEv(void *this_) {
  /*return*/ ((QBuffer*)this_)->size();
}
// virtual
// /usr/include/qt/QtCore/qbuffer.h:80
// qint64 pos()
extern "C"
void C_ZNK7QBuffer3posEv(void *this_) {
  /*return*/ ((QBuffer*)this_)->pos();
}
// virtual
// /usr/include/qt/QtCore/qbuffer.h:81
// bool seek(qint64)
extern "C"
void C_ZN7QBuffer4seekEx(void *this_, qint64 off) {
  /*return*/ ((QBuffer*)this_)->seek(off);
}
// virtual
// /usr/include/qt/QtCore/qbuffer.h:82
// bool atEnd()
extern "C"
void C_ZNK7QBuffer5atEndEv(void *this_) {
  /*return*/ ((QBuffer*)this_)->atEnd();
}
// virtual
// /usr/include/qt/QtCore/qbuffer.h:83
// bool canReadLine()
extern "C"
void C_ZNK7QBuffer11canReadLineEv(void *this_) {
  /*return*/ ((QBuffer*)this_)->canReadLine();
}
//  main block end
