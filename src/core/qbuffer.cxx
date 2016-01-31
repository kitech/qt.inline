// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qbuffer.h
// dst-file: /src/core/qbuffer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qbuffer.h>


#include <qbytearray.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qbuffer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 67, column 17>
//   // proto:  void QBuffer::setData(const char * data, int len);
if (true) {
  auto f = [](QBuffer flythis, const char * arg1, int arg2) {
    ((QBuffer*)0)->setData(arg1, arg2);
    flythis.setData(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN7QBuffer7setDataEPKci setData(const char *, int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QBuffer_Class_Size()
{
  return sizeof(QBuffer);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 75, column 10>
//   // proto:  bool QBuffer::seek(qint64 off);
// _ZN7QBuffer4seekEx seek(qint64)
extern "C"
bool
C_ZN7QBuffer4seekEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QBuffer*)qthis)->seek(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 77, column 10>
//   // proto:  bool QBuffer::canReadLine();
// _ZNK7QBuffer11canReadLineEv canReadLine()
extern "C"
bool
C_ZNK7QBuffer11canReadLineEv(void *qthis) {
  auto ret =
  ((QBuffer*)qthis)->canReadLine();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QBuffer::~QBuffer();
extern "C"
void C_ZN7QBufferD2Ev(void *qthis) {
  delete (QBuffer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 70, column 10>
//   // proto:  bool QBuffer::open(OpenMode openMode);
// _ZN7QBuffer4openE6QFlagsIN9QIODevice12OpenModeFlagEE open(OpenMode)
extern "C"
bool
C_ZN7QBuffer4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
QIODevice::OpenMode arg1) {
  auto ret =
  ((QBuffer*)qthis)->open(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 66, column 10>
//   // proto:  void QBuffer::setData(const QByteArray & data);
// _ZN7QBuffer7setDataERK10QByteArray setData(const class QByteArray &)
extern "C"
void
C_ZN7QBuffer7setDataERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QBuffer*)qthis)->setData(*((const QByteArray*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 68, column 23>
//   // proto:  const QByteArray & QBuffer::data();
// _ZNK7QBuffer4dataEv data()
extern "C"
QByteArray*
C_ZNK7QBuffer4dataEv(void *qthis) {
  auto& ret =
  ((QBuffer*)qthis)->data();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 63, column 23>
//   // proto:  const QByteArray & QBuffer::buffer();
// _ZNK7QBuffer6bufferEv buffer()
extern "C"
QByteArray*
C_ZNK7QBuffer6bufferEv(void *qthis) {
  auto& ret =
  ((QBuffer*)qthis)->buffer();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 54, column 15>
//   // proto:  void QBuffer::QBuffer(QObject * parent);
extern "C"
QBuffer*
C_ZN7QBufferC2EP7QObject(QObject * arg1) {
  auto ret = new QBuffer(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 64, column 10>
//   // proto:  void QBuffer::setBuffer(QByteArray * a);
// _ZN7QBuffer9setBufferEP10QByteArray setBuffer(class QByteArray *)
extern "C"
void
C_ZN7QBuffer9setBufferEP10QByteArray(void *qthis,
QByteArray * arg1) {
  ((QBuffer*)qthis)->setBuffer(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 62, column 17>
//   // proto:  QByteArray & QBuffer::buffer();
// _ZN7QBuffer6bufferEv buffer()
extern "C"
QByteArray*
C_ZN7QBuffer6bufferEv(void *qthis) {
  auto& ret =
  ((QBuffer*)qthis)->buffer();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 74, column 12>
//   // proto:  qint64 QBuffer::pos();
// _ZNK7QBuffer3posEv pos()
extern "C"
long long
C_ZNK7QBuffer3posEv(void *qthis) {
  auto ret =
  ((QBuffer*)qthis)->pos();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 72, column 10>
//   // proto:  void QBuffer::close();
// _ZN7QBuffer5closeEv close()
extern "C"
void
C_ZN7QBuffer5closeEv(void *qthis) {
  ((QBuffer*)qthis)->close();
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 49, column 5>
//   // proto:  const QMetaObject * QBuffer::metaObject();
// _ZNK7QBuffer10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QBuffer10metaObjectEv(void *qthis) {
  auto ret =
  ((QBuffer*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 73, column 12>
//   // proto:  qint64 QBuffer::size();
// _ZNK7QBuffer4sizeEv size()
extern "C"
long long
C_ZNK7QBuffer4sizeEv(void *qthis) {
  auto ret =
  ((QBuffer*)qthis)->size();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 55, column 6>
//   // proto:  void QBuffer::QBuffer(QByteArray * buf, QObject * parent);
extern "C"
QBuffer*
C_ZN7QBufferC2EP10QByteArrayP7QObject(QByteArray * arg1,
QObject * arg2) {
  auto ret = new QBuffer(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 76, column 10>
//   // proto:  bool QBuffer::atEnd();
// _ZNK7QBuffer5atEndEv atEnd()
extern "C"
bool
C_ZNK7QBuffer5atEndEv(void *qthis) {
  auto ret =
  ((QBuffer*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qbuffer.h', line 67, column 17>
//   // proto:  void QBuffer::setData(const char * data, int len);
// _ZN7QBuffer7setDataEPKci setData(const char *, int)
extern "C"
void
C_ZN7QBuffer7setDataEPKci(void *qthis,
const char * arg1,
int arg2) {
  ((QBuffer*)qthis)->setData(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// QBuffer_SlotProxy here
class QBuffer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QBuffer_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qbuffer.moc"

extern "C" {
  QBuffer_SlotProxy* QBuffer_SlotProxy_new()
  {
    return new QBuffer_SlotProxy();
  }
};

// <= body block end

