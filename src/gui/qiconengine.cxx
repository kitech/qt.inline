// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qiconengine.h
// dst-file: /src/gui/qiconengine.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qiconengine.h>


#include <qstring.h>
#include <qlist.h>
#include <qimage.h>
#include <qsize.h>
#include <qpixmap.h>
// <= header block end

// main block begin =>
void __keep_qiconengine_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QIconEngine_Class_Size()
{
  return sizeof(QIconEngine);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 53, column 18>
//   // proto:  void QIconEngine::addFile(const QString & fileName, const QSize & size, QIcon::Mode mode, QIcon::State state);
// _ZN11QIconEngine7addFileERK7QStringRK5QSizeN5QIcon4ModeENS6_5StateE addFile(const class QString &, const class QSize &, class QIcon::Mode, class QIcon::State)
extern "C"
void
C_ZN11QIconEngine7addFileERK7QStringRK5QSizeN5QIcon4ModeENS6_5StateE(void *qthis,
const QString* arg1,
const QSize* arg2,
QIcon::Mode* arg3,
QIcon::State* arg4) {
  ((QIconEngine*)qthis)->addFile(*((const QString*)arg1),
*((const QSize*)arg2),
*((QIcon::Mode*)arg3),
*((QIcon::State*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 57, column 18>
//   // proto:  bool QIconEngine::read(QDataStream & in);
// _ZN11QIconEngine4readER11QDataStream read(class QDataStream &)
extern "C"
bool
C_ZN11QIconEngine4readER11QDataStream(void *qthis,
QDataStream* arg1) {
  auto ret =
  ((QIconEngine*)qthis)->read(*((QDataStream*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 48, column 18>
//   // proto:  void QIconEngine::paint(QPainter * painter, const QRect & rect, QIcon::Mode mode, QIcon::State state);
// _ZN11QIconEngine5paintEP8QPainterRK5QRectN5QIcon4ModeENS5_5StateE paint(class QPainter *, const class QRect &, class QIcon::Mode, class QIcon::State)
extern "C"
void
C_ZN11QIconEngine5paintEP8QPainterRK5QRectN5QIcon4ModeENS5_5StateE(void *qthis,
QPainter * arg1,
const QRect* arg2,
QIcon::Mode* arg3,
QIcon::State* arg4) {
  ((QIconEngine*)qthis)->paint(arg1,
*((const QRect*)arg2),
*((QIcon::Mode*)arg3),
*((QIcon::State*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 72, column 21>
//   // proto:  QString QIconEngine::iconName();
// _ZNK11QIconEngine8iconNameEv iconName()
extern "C"
QString*
C_ZNK11QIconEngine8iconNameEv(void *qthis) {
  auto ret =
  ((QIconEngine*)qthis)->iconName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 58, column 18>
//   // proto:  bool QIconEngine::write(QDataStream & out);
// _ZNK11QIconEngine5writeER11QDataStream write(class QDataStream &)
extern "C"
bool
C_ZNK11QIconEngine5writeER11QDataStream(void *qthis,
QDataStream* arg1) {
  auto ret =
  ((QIconEngine*)qthis)->write(*((QDataStream*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 74, column 18>
//   // proto:  void QIconEngine::virtual_hook(int id, void * data);
// _ZN11QIconEngine12virtual_hookEiPv virtual_hook(int, void *)
extern "C"
void
C_ZN11QIconEngine12virtual_hookEiPv(void *qthis,
int arg1,
void * arg2) {
  ((QIconEngine*)qthis)->virtual_hook(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 56, column 26>
//   // proto:  QIconEngine * QIconEngine::clone();
// _ZNK11QIconEngine5cloneEv clone()
extern "C"
void*
C_ZNK11QIconEngine5cloneEv(void *qthis) {
  auto ret =
  ((QIconEngine*)qthis)->clone();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 69, column 26>
//   // proto:  QList<QSize> QIconEngine::availableSizes(QIcon::Mode mode, QIcon::State state);
// _ZNK11QIconEngine14availableSizesEN5QIcon4ModeENS0_5StateE availableSizes(class QIcon::Mode, class QIcon::State)
extern "C"
QList<QSize>*
C_ZNK11QIconEngine14availableSizesEN5QIcon4ModeENS0_5StateE(void *qthis,
QIcon::Mode* arg1,
QIcon::State* arg2) {
  auto ret =
  ((QIconEngine*)qthis)->availableSizes(*((QIcon::Mode*)arg1),
*((QIcon::State*)arg2));
  return new QList<QSize>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 55, column 21>
//   // proto:  QString QIconEngine::key();
// _ZNK11QIconEngine3keyEv key()
extern "C"
QString*
C_ZNK11QIconEngine3keyEv(void *qthis) {
  auto ret =
  ((QIconEngine*)qthis)->key();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 52, column 18>
//   // proto:  void QIconEngine::addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state);
// _ZN11QIconEngine9addPixmapERK7QPixmapN5QIcon4ModeENS3_5StateE addPixmap(const class QPixmap &, class QIcon::Mode, class QIcon::State)
extern "C"
void
C_ZN11QIconEngine9addPixmapERK7QPixmapN5QIcon4ModeENS3_5StateE(void *qthis,
const QPixmap* arg1,
QIcon::Mode* arg2,
QIcon::State* arg3) {
  ((QIconEngine*)qthis)->addPixmap(*((const QPixmap*)arg1),
*((QIcon::Mode*)arg2),
*((QIcon::State*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 49, column 19>
//   // proto:  QSize QIconEngine::actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state);
// _ZN11QIconEngine10actualSizeERK5QSizeN5QIcon4ModeENS3_5StateE actualSize(const class QSize &, class QIcon::Mode, class QIcon::State)
extern "C"
QSize*
C_ZN11QIconEngine10actualSizeERK5QSizeN5QIcon4ModeENS3_5StateE(void *qthis,
const QSize* arg1,
QIcon::Mode* arg2,
QIcon::State* arg3) {
  auto ret =
  ((QIconEngine*)qthis)->actualSize(*((const QSize*)arg1),
*((QIcon::Mode*)arg2),
*((QIcon::State*)arg3));
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qiconengine.h', line 50, column 21>
//   // proto:  QPixmap QIconEngine::pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state);
// _ZN11QIconEngine6pixmapERK5QSizeN5QIcon4ModeENS3_5StateE pixmap(const class QSize &, class QIcon::Mode, class QIcon::State)
extern "C"
QPixmap*
C_ZN11QIconEngine6pixmapERK5QSizeN5QIcon4ModeENS3_5StateE(void *qthis,
const QSize* arg1,
QIcon::Mode* arg2,
QIcon::State* arg3) {
  auto ret =
  ((QIconEngine*)qthis)->pixmap(*((const QSize*)arg1),
*((QIcon::Mode*)arg2),
*((QIcon::State*)arg3));
  return new QPixmap(ret); // 5
}
//   // proto:  void QIconEngine::~QIconEngine();
extern "C"
void C_ZN11QIconEngineD2Ev(void *qthis) {
  delete (QIconEngine*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

