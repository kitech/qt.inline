// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qopenglbuffer.h
// dst-file: /src/gui/qopenglbuffer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglbuffer.h>


// <= header block end

// main block begin =>
void __keep_qopenglbuffer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 121, column 17>
//   // proto:  void QOpenGLBuffer::allocate(int count);
if (true) {
  auto f = [](QOpenGLBuffer flythis, int arg1) {
    ((QOpenGLBuffer*)0)->allocate(arg1);
    flythis.allocate(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QOpenGLBuffer8allocateEi allocate(int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLBuffer_Class_Size()
{
  return sizeof(QOpenGLBuffer);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 117, column 10>
//   // proto:  bool QOpenGLBuffer::read(int offset, void * data, int count);
// _ZN13QOpenGLBuffer4readEiPvi read(int, void *, int)
extern "C"
bool
C_ZN13QOpenGLBuffer4readEiPvi(void *qthis,
int arg1,
void * arg2,
int arg3) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->read(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 108, column 10>
//   // proto:  bool QOpenGLBuffer::bind();
// _ZN13QOpenGLBuffer4bindEv bind()
extern "C"
bool
C_ZN13QOpenGLBuffer4bindEv(void *qthis) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->bind();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 106, column 10>
//   // proto:  void QOpenGLBuffer::destroy();
// _ZN13QOpenGLBuffer7destroyEv destroy()
extern "C"
void
C_ZN13QOpenGLBuffer7destroyEv(void *qthis) {
  ((QOpenGLBuffer*)qthis)->destroy();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 121, column 17>
//   // proto:  void QOpenGLBuffer::allocate(int count);
// _ZN13QOpenGLBuffer8allocateEi allocate(int)
extern "C"
void
C_ZN13QOpenGLBuffer8allocateEi(void *qthis,
int arg1) {
  ((QOpenGLBuffer*)qthis)->allocate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 111, column 17>
//   // proto: static void QOpenGLBuffer::release(QOpenGLBuffer::Type type);
// _ZN13QOpenGLBuffer7releaseENS_4TypeE release(class QOpenGLBuffer::Type)
extern "C"
void
C_ZN13QOpenGLBuffer7releaseENS_4TypeE(QOpenGLBuffer::Type* arg1) {
  QOpenGLBuffer::release(*((QOpenGLBuffer::Type*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 101, column 10>
//   // proto:  void QOpenGLBuffer::setUsagePattern(QOpenGLBuffer::UsagePattern value);
// _ZN13QOpenGLBuffer15setUsagePatternENS_12UsagePatternE setUsagePattern(class QOpenGLBuffer::UsagePattern)
extern "C"
void
C_ZN13QOpenGLBuffer15setUsagePatternENS_12UsagePatternE(void *qthis,
QOpenGLBuffer::UsagePattern* arg1) {
  ((QOpenGLBuffer*)qthis)->setUsagePattern(*((QOpenGLBuffer::UsagePattern*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 125, column 10>
//   // proto:  bool QOpenGLBuffer::unmap();
// _ZN13QOpenGLBuffer5unmapEv unmap()
extern "C"
bool
C_ZN13QOpenGLBuffer5unmapEv(void *qthis) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->unmap();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 123, column 11>
//   // proto:  void * QOpenGLBuffer::map(QOpenGLBuffer::Access access);
// _ZN13QOpenGLBuffer3mapENS_6AccessE map(class QOpenGLBuffer::Access)
extern "C"
void*
C_ZN13QOpenGLBuffer3mapENS_6AccessE(void *qthis,
QOpenGLBuffer::Access* arg1) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->map(*((QOpenGLBuffer::Access*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 62, column 5>
//   // proto:  void QOpenGLBuffer::QOpenGLBuffer(const QOpenGLBuffer & other);
extern "C"
QOpenGLBuffer*
C_ZN13QOpenGLBufferC2ERKS_(const QOpenGLBuffer* arg1) {
  auto ret = new QOpenGLBuffer(*((const QOpenGLBuffer*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 115, column 9>
//   // proto:  int QOpenGLBuffer::size();
// _ZNK13QOpenGLBuffer4sizeEv size()
extern "C"
int
C_ZNK13QOpenGLBuffer4sizeEv(void *qthis) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->size();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 100, column 33>
//   // proto:  QOpenGLBuffer::UsagePattern QOpenGLBuffer::usagePattern();
// _ZNK13QOpenGLBuffer12usagePatternEv usagePattern()
extern "C"
QOpenGLBuffer::UsagePattern
C_ZNK13QOpenGLBuffer12usagePatternEv(void *qthis) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->usagePattern();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 120, column 10>
//   // proto:  void QOpenGLBuffer::allocate(const void * data, int count);
// _ZN13QOpenGLBuffer8allocateEPKvi allocate(const void *, int)
extern "C"
void
C_ZN13QOpenGLBuffer8allocateEPKvi(void *qthis,
const void * arg1,
int arg2) {
  ((QOpenGLBuffer*)qthis)->allocate(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 113, column 12>
//   // proto:  GLuint QOpenGLBuffer::bufferId();
// _ZNK13QOpenGLBuffer8bufferIdEv bufferId()
extern "C"
unsigned int
C_ZNK13QOpenGLBuffer8bufferIdEv(void *qthis) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->bufferId();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 124, column 11>
//   // proto:  void * QOpenGLBuffer::mapRange(int offset, int count, QOpenGLBuffer::RangeAccessFlags access);
// _ZN13QOpenGLBuffer8mapRangeEii6QFlagsINS_15RangeAccessFlagEE mapRange(int, int, class QOpenGLBuffer::RangeAccessFlags)
extern "C"
void*
C_ZN13QOpenGLBuffer8mapRangeEii6QFlagsINS_15RangeAccessFlagEE(void *qthis,
int arg1,
int arg2,
QOpenGLBuffer::RangeAccessFlags* arg3) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->mapRange(arg1,
arg2,
*((QOpenGLBuffer::RangeAccessFlags*)arg3));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 60, column 5>
//   // proto:  void QOpenGLBuffer::QOpenGLBuffer();
extern "C"
QOpenGLBuffer*
C_ZN13QOpenGLBufferC2Ev() {
  auto ret = new QOpenGLBuffer();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 103, column 10>
//   // proto:  bool QOpenGLBuffer::create();
// _ZN13QOpenGLBuffer6createEv create()
extern "C"
bool
C_ZN13QOpenGLBuffer6createEv(void *qthis) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->create();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QOpenGLBuffer::~QOpenGLBuffer();
extern "C"
void C_ZN13QOpenGLBufferD2Ev(void *qthis) {
  delete (QOpenGLBuffer*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 61, column 14>
//   // proto:  void QOpenGLBuffer::QOpenGLBuffer(QOpenGLBuffer::Type type);
extern "C"
QOpenGLBuffer*
C_ZN13QOpenGLBufferC2ENS_4TypeE(QOpenGLBuffer::Type* arg1) {
  auto ret = new QOpenGLBuffer(*((QOpenGLBuffer::Type*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 109, column 10>
//   // proto:  void QOpenGLBuffer::release();
// _ZN13QOpenGLBuffer7releaseEv release()
extern "C"
void
C_ZN13QOpenGLBuffer7releaseEv(void *qthis) {
  ((QOpenGLBuffer*)qthis)->release();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 104, column 10>
//   // proto:  bool QOpenGLBuffer::isCreated();
// _ZNK13QOpenGLBuffer9isCreatedEv isCreated()
extern "C"
bool
C_ZNK13QOpenGLBuffer9isCreatedEv(void *qthis) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->isCreated();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 118, column 10>
//   // proto:  void QOpenGLBuffer::write(int offset, const void * data, int count);
// _ZN13QOpenGLBuffer5writeEiPKvi write(int, const void *, int)
extern "C"
void
C_ZN13QOpenGLBuffer5writeEiPKvi(void *qthis,
int arg1,
const void * arg2,
int arg3) {
  ((QOpenGLBuffer*)qthis)->write(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglbuffer.h', line 98, column 25>
//   // proto:  QOpenGLBuffer::Type QOpenGLBuffer::type();
// _ZNK13QOpenGLBuffer4typeEv type()
extern "C"
QOpenGLBuffer::Type
C_ZNK13QOpenGLBuffer4typeEv(void *qthis) {
  auto ret =
  ((QOpenGLBuffer*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// <= body block end

