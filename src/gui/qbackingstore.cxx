// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qbackingstore.h
// dst-file: /src/gui/qbackingstore.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qbackingstore.h>


#include <qsize.h>
#include <qregion.h>
// <= header block end

// main block begin =>
void __keep_qbackingstore_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QBackingStore_Class_Size()
{
  return sizeof(QBackingStore);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 66, column 19>
//   // proto:  QPaintDevice * QBackingStore::paintDevice();
// _ZN13QBackingStore11paintDeviceEv paintDevice()
extern "C"
void*
C_ZN13QBackingStore11paintDeviceEv(void *qthis) {
  auto ret =
  ((QBackingStore*)qthis)->paintDevice();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 64, column 14>
//   // proto:  QWindow * QBackingStore::window();
// _ZNK13QBackingStore6windowEv window()
extern "C"
void*
C_ZNK13QBackingStore6windowEv(void *qthis) {
  auto ret =
  ((QBackingStore*)qthis)->window();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 73, column 11>
//   // proto:  QSize QBackingStore::size();
// _ZNK13QBackingStore4sizeEv size()
extern "C"
QSize*
C_ZNK13QBackingStore4sizeEv(void *qthis) {
  auto ret =
  ((QBackingStore*)qthis)->size();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 81, column 13>
//   // proto:  QRegion QBackingStore::staticContents();
// _ZNK13QBackingStore14staticContentsEv staticContents()
extern "C"
QRegion*
C_ZNK13QBackingStore14staticContentsEv(void *qthis) {
  auto ret =
  ((QBackingStore*)qthis)->staticContents();
  return new QRegion(ret); // 5
}
//   // proto:  void QBackingStore::~QBackingStore();
extern "C"
void C_ZN13QBackingStoreD2Ev(void *qthis) {
  delete (QBackingStore*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 80, column 10>
//   // proto:  void QBackingStore::setStaticContents(const QRegion & region);
// _ZN13QBackingStore17setStaticContentsERK7QRegion setStaticContents(const class QRegion &)
extern "C"
void
C_ZN13QBackingStore17setStaticContentsERK7QRegion(void *qthis,
const QRegion* arg1) {
  ((QBackingStore*)qthis)->setStaticContents(*((const QRegion*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 72, column 10>
//   // proto:  void QBackingStore::resize(const QSize & size);
// _ZN13QBackingStore6resizeERK5QSize resize(const class QSize &)
extern "C"
void
C_ZN13QBackingStore6resizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QBackingStore*)qthis)->resize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 70, column 10>
//   // proto:  void QBackingStore::flush(const QRegion & region, QWindow * window, const QPoint & offset);
// _ZN13QBackingStore5flushERK7QRegionP7QWindowRK6QPoint flush(const class QRegion &, class QWindow *, const class QPoint &)
extern "C"
void
C_ZN13QBackingStore5flushERK7QRegionP7QWindowRK6QPoint(void *qthis,
const QRegion* arg1,
QWindow * arg2,
const QPoint* arg3) {
  ((QBackingStore*)qthis)->flush(*((const QRegion*)arg1),
arg2,
*((const QPoint*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 77, column 10>
//   // proto:  void QBackingStore::beginPaint(const QRegion & );
// _ZN13QBackingStore10beginPaintERK7QRegion beginPaint(const class QRegion &)
extern "C"
void
C_ZN13QBackingStore10beginPaintERK7QRegion(void *qthis,
const QRegion* arg1) {
  ((QBackingStore*)qthis)->beginPaint(*((const QRegion*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 82, column 10>
//   // proto:  bool QBackingStore::hasStaticContents();
// _ZNK13QBackingStore17hasStaticContentsEv hasStaticContents()
extern "C"
bool
C_ZNK13QBackingStore17hasStaticContentsEv(void *qthis) {
  auto ret =
  ((QBackingStore*)qthis)->hasStaticContents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 78, column 10>
//   // proto:  void QBackingStore::endPaint();
// _ZN13QBackingStore8endPaintEv endPaint()
extern "C"
void
C_ZN13QBackingStore8endPaintEv(void *qthis) {
  ((QBackingStore*)qthis)->endPaint();
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 75, column 10>
//   // proto:  bool QBackingStore::scroll(const QRegion & area, int dx, int dy);
// _ZN13QBackingStore6scrollERK7QRegionii scroll(const class QRegion &, int, int)
extern "C"
bool
C_ZN13QBackingStore6scrollERK7QRegionii(void *qthis,
const QRegion* arg1,
int arg2,
int arg3) {
  auto ret =
  ((QBackingStore*)qthis)->scroll(*((const QRegion*)arg1),
arg2,
arg3);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 84, column 28>
//   // proto:  QPlatformBackingStore * QBackingStore::handle();
// _ZNK13QBackingStore6handleEv handle()
extern "C"
void*
C_ZNK13QBackingStore6handleEv(void *qthis) {
  auto ret =
  ((QBackingStore*)qthis)->handle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qbackingstore.h', line 61, column 14>
//   // proto:  void QBackingStore::QBackingStore(QWindow * window);
extern "C"
QBackingStore*
C_ZN13QBackingStoreC2EP7QWindow(QWindow * arg1) {
  auto ret = new QBackingStore(arg1);
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

