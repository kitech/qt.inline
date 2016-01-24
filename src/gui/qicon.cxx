// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qicon.h
// dst-file: /src/gui/qicon.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qicon.h>


#include <qsize.h>
#include <qstringlist.h>
#include <qpixmap.h>
#include <qstring.h>
#include <qlist.h>
#include <qimage.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qicon_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 58, column 5>
//   // proto:  void QIcon::QIcon(QIcon && other);
if (true) {
  auto f = [](QIcon && arg1) {
    new QIcon(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 78, column 20>
//   // proto:  QPixmap QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state);
if (true) {
  auto f = [](QIcon flythis, int arg1, QIcon::Mode arg2, QIcon::State arg3) {
    ((QIcon*)0)->pixmap(arg1, arg2, arg3);
    flythis.pixmap(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE pixmap(int, enum QIcon::Mode, enum QIcon::State)
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 88, column 17>
//   // proto:  void QIcon::paint(QPainter * painter, int x, int y, int w, int h, Qt::Alignment alignment, QIcon::Mode mode, QIcon::State state);
if (true) {
  auto f = [](QIcon flythis, QPainter * arg1, int arg2, int arg3, int arg4, int arg5, Qt::Alignment arg6, QIcon::Mode arg7, QIcon::State arg8) {
    ((QIcon*)0)->paint(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    flythis.paint(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
  };
  if (f == nullptr){}
}
// _ZNK5QIcon5paintEP8QPainteriiii6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE paint(class QPainter *, int, int, int, int, Qt::Alignment, enum QIcon::Mode, enum QIcon::State)
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 76, column 20>
//   // proto:  QPixmap QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state);
if (true) {
  auto f = [](QIcon flythis, int arg1, int arg2, QIcon::Mode arg3, QIcon::State arg4) {
    ((QIcon*)0)->pixmap(arg1, arg2, arg3, arg4);
    flythis.pixmap(arg1, arg2, arg3, arg4);
  };
  if (f == nullptr){}
}
// _ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE pixmap(int, int, enum QIcon::Mode, enum QIcon::State)
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 70, column 17>
//   // proto:  void QIcon::swap(QIcon & other);
if (true) {
  auto f = [](QIcon flythis, QIcon & arg1) {
    ((QIcon*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN5QIcon4swapERS_ swap(class QIcon &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QIcon_Class_Size()
{
  return sizeof(QIcon);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 87, column 10>
//   // proto:  void QIcon::paint(QPainter * painter, const QRect & rect, Qt::Alignment alignment, QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon5paintEP8QPainterRK5QRect6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE paint(class QPainter *, const class QRect &, Qt::Alignment, enum QIcon::Mode, enum QIcon::State)
extern "C"
void
C_ZNK5QIcon5paintEP8QPainterRK5QRect6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void *qthis,
QPainter * arg1,
const QRect* arg2,
Qt::Alignment* arg3,
QIcon::Mode arg4,
QIcon::State arg5) {
  ((QIcon*)qthis)->paint(arg1,
*((const QRect*)arg2),
*((Qt::Alignment*)arg3),
arg4,
arg5);
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 101, column 10>
//   // proto:  void QIcon::addFile(const QString & fileName, const QSize & size, QIcon::Mode mode, QIcon::State state);
// _ZN5QIcon7addFileERK7QStringRK5QSizeNS_4ModeENS_5StateE addFile(const class QString &, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void
C_ZN5QIcon7addFileERK7QStringRK5QSizeNS_4ModeENS_5StateE(void *qthis,
const QString* arg1,
const QSize* arg2,
QIcon::Mode arg3,
QIcon::State arg4) {
  ((QIcon*)qthis)->addFile(*((const QString*)arg1),
*((const QSize*)arg2),
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 82, column 11>
//   // proto:  QSize QIcon::actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon10actualSizeERK5QSizeNS_4ModeENS_5StateE actualSize(const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
QSize*
C_ZNK5QIcon10actualSizeERK5QSizeNS_4ModeENS_5StateE(void *qthis,
const QSize* arg1,
QIcon::Mode arg2,
QIcon::State arg3) {
  auto ret =
  ((QIcon*)qthis)->actualSize(*((const QSize*)arg1),
arg2,
arg3);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 56, column 5>
//   // proto:  void QIcon::QIcon(const QIcon & other);
extern "C"
QIcon*
C_ZN5QIconC2ERKS_(const QIcon* arg1) {
  auto ret = new QIcon(*((const QIcon*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 108, column 24>
//   // proto: static QStringList QIcon::themeSearchPaths();
// _ZN5QIcon16themeSearchPathsEv themeSearchPaths()
extern "C"
QStringList*
C_ZN5QIcon16themeSearchPathsEv() {
  auto ret =
  QIcon::themeSearchPaths();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 80, column 13>
//   // proto:  QPixmap QIcon::pixmap(QWindow * window, const QSize & size, QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon6pixmapEP7QWindowRK5QSizeNS_4ModeENS_5StateE pixmap(class QWindow *, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
QPixmap*
C_ZNK5QIcon6pixmapEP7QWindowRK5QSizeNS_4ModeENS_5StateE(void *qthis,
QWindow * arg1,
const QSize* arg2,
QIcon::Mode arg3,
QIcon::State arg4) {
  auto ret =
  ((QIcon*)qthis)->pixmap(arg1,
*((const QSize*)arg2),
arg3,
arg4);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 93, column 10>
//   // proto:  void QIcon::detach();
// _ZN5QIcon6detachEv detach()
extern "C"
void
C_ZN5QIcon6detachEv(void *qthis) {
  ((QIcon*)qthis)->detach();
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 91, column 10>
//   // proto:  bool QIcon::isNull();
// _ZNK5QIcon6isNullEv isNull()
extern "C"
bool
C_ZNK5QIcon6isNullEv(void *qthis) {
  auto ret =
  ((QIcon*)qthis)->isNull();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 109, column 17>
//   // proto: static void QIcon::setThemeSearchPaths(const QStringList & searchpath);
// _ZN5QIcon19setThemeSearchPathsERK11QStringList setThemeSearchPaths(const class QStringList &)
extern "C"
void
C_ZN5QIcon19setThemeSearchPathsERK11QStringList(const QStringList* arg1) {
  QIcon::setThemeSearchPaths(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 106, column 17>
//   // proto: static bool QIcon::hasThemeIcon(const QString & name);
// _ZN5QIcon12hasThemeIconERK7QString hasThemeIcon(const class QString &)
extern "C"
bool
C_ZN5QIcon12hasThemeIconERK7QString(const QString* arg1) {
  auto ret =
  QIcon::hasThemeIcon(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 55, column 5>
//   // proto:  void QIcon::QIcon(const QPixmap & pixmap);
extern "C"
QIcon*
C_ZN5QIconC2ERK7QPixmap(const QPixmap* arg1) {
  auto ret = new QIcon(*((const QPixmap*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 105, column 18>
//   // proto: static QIcon QIcon::fromTheme(const QString & name, const QIcon & fallback);
// _ZN5QIcon9fromThemeERK7QStringRKS_ fromTheme(const class QString &, const class QIcon &)
extern "C"
QIcon*
C_ZN5QIcon9fromThemeERK7QStringRKS_(const QString* arg1,
const QIcon* arg2) {
  auto ret =
  QIcon::fromTheme(*((const QString*)arg1),
*((const QIcon*)arg2));
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 78, column 20>
//   // proto:  QPixmap QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE pixmap(int, enum QIcon::Mode, enum QIcon::State)
extern "C"
QPixmap*
C_ZNK5QIcon6pixmapEiNS_4ModeENS_5StateE(void *qthis,
int arg1,
QIcon::Mode arg2,
QIcon::State arg3) {
  auto ret =
  ((QIcon*)qthis)->pixmap(arg1,
arg2,
arg3);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 111, column 20>
//   // proto: static QString QIcon::themeName();
// _ZN5QIcon9themeNameEv themeName()
extern "C"
QString*
C_ZN5QIcon9themeNameEv() {
  auto ret =
  QIcon::themeName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 85, column 13>
//   // proto:  QString QIcon::name();
// _ZNK5QIcon4nameEv name()
extern "C"
QString*
C_ZNK5QIcon4nameEv(void *qthis) {
  auto ret =
  ((QIcon*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 54, column 5>
//   // proto:  void QIcon::QIcon();
extern "C"
QIcon*
C_ZN5QIconC2Ev() {
  auto ret = new QIcon();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 63, column 14>
//   // proto:  void QIcon::QIcon(QIconEngine * engine);
extern "C"
QIcon*
C_ZN5QIconC2EP11QIconEngine(QIconEngine * arg1) {
  auto ret = new QIcon(arg1);
  return ret;
}
//   // proto:  void QIcon::~QIcon();
extern "C"
void C_ZN5QIconD2Ev(void *qthis) {
  delete (QIcon*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 92, column 10>
//   // proto:  bool QIcon::isDetached();
// _ZNK5QIcon10isDetachedEv isDetached()
extern "C"
bool
C_ZNK5QIcon10isDetachedEv(void *qthis) {
  auto ret =
  ((QIcon*)qthis)->isDetached();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 88, column 17>
//   // proto:  void QIcon::paint(QPainter * painter, int x, int y, int w, int h, Qt::Alignment alignment, QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon5paintEP8QPainteriiii6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE paint(class QPainter *, int, int, int, int, Qt::Alignment, enum QIcon::Mode, enum QIcon::State)
extern "C"
void
C_ZNK5QIcon5paintEP8QPainteriiii6QFlagsIN2Qt13AlignmentFlagEENS_4ModeENS_5StateE(void *qthis,
QPainter * arg1,
int arg2,
int arg3,
int arg4,
int arg5,
Qt::Alignment* arg6,
QIcon::Mode arg7,
QIcon::State arg8) {
  ((QIcon*)qthis)->paint(arg1,
arg2,
arg3,
arg4,
arg5,
*((Qt::Alignment*)arg6),
arg7,
arg8);
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 75, column 13>
//   // proto:  QPixmap QIcon::pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon6pixmapERK5QSizeNS_4ModeENS_5StateE pixmap(const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
QPixmap*
C_ZNK5QIcon6pixmapERK5QSizeNS_4ModeENS_5StateE(void *qthis,
const QSize* arg1,
QIcon::Mode arg2,
QIcon::State arg3) {
  auto ret =
  ((QIcon*)qthis)->pixmap(*((const QSize*)arg1),
arg2,
arg3);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 83, column 11>
//   // proto:  QSize QIcon::actualSize(QWindow * window, const QSize & size, QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon10actualSizeEP7QWindowRK5QSizeNS_4ModeENS_5StateE actualSize(class QWindow *, const class QSize &, enum QIcon::Mode, enum QIcon::State)
extern "C"
QSize*
C_ZNK5QIcon10actualSizeEP7QWindowRK5QSizeNS_4ModeENS_5StateE(void *qthis,
QWindow * arg1,
const QSize* arg2,
QIcon::Mode arg3,
QIcon::State arg4) {
  auto ret =
  ((QIcon*)qthis)->actualSize(arg1,
*((const QSize*)arg2),
arg3,
arg4);
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 103, column 18>
//   // proto:  QList<QSize> QIcon::availableSizes(QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon14availableSizesENS_4ModeENS_5StateE availableSizes(enum QIcon::Mode, enum QIcon::State)
extern "C"
QList<QSize>*
C_ZNK5QIcon14availableSizesENS_4ModeENS_5StateE(void *qthis,
QIcon::Mode arg1,
QIcon::State arg2) {
  auto ret =
  ((QIcon*)qthis)->availableSizes(arg1,
arg2);
  return new QList<QSize>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 62, column 14>
//   // proto:  void QIcon::QIcon(const QString & fileName);
extern "C"
QIcon*
C_ZN5QIconC2ERK7QString(const QString* arg1) {
  auto ret = new QIcon(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 100, column 10>
//   // proto:  void QIcon::addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state);
// _ZN5QIcon9addPixmapERK7QPixmapNS_4ModeENS_5StateE addPixmap(const class QPixmap &, enum QIcon::Mode, enum QIcon::State)
extern "C"
void
C_ZN5QIcon9addPixmapERK7QPixmapNS_4ModeENS_5StateE(void *qthis,
const QPixmap* arg1,
QIcon::Mode arg2,
QIcon::State arg3) {
  ((QIcon*)qthis)->addPixmap(*((const QPixmap*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 76, column 20>
//   // proto:  QPixmap QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state);
// _ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE pixmap(int, int, enum QIcon::Mode, enum QIcon::State)
extern "C"
QPixmap*
C_ZNK5QIcon6pixmapEiiNS_4ModeENS_5StateE(void *qthis,
int arg1,
int arg2,
QIcon::Mode arg3,
QIcon::State arg4) {
  auto ret =
  ((QIcon*)qthis)->pixmap(arg1,
arg2,
arg3,
arg4);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 98, column 12>
//   // proto:  qint64 QIcon::cacheKey();
// _ZNK5QIcon8cacheKeyEv cacheKey()
extern "C"
long long
C_ZNK5QIcon8cacheKeyEv(void *qthis) {
  auto ret =
  ((QIcon*)qthis)->cacheKey();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 70, column 17>
//   // proto:  void QIcon::swap(QIcon & other);
// _ZN5QIcon4swapERS_ swap(class QIcon &)
extern "C"
void
C_ZN5QIcon4swapERS_(void *qthis,
QIcon* arg1) {
  ((QIcon*)qthis)->swap(*((QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qicon.h', line 112, column 17>
//   // proto: static void QIcon::setThemeName(const QString & path);
// _ZN5QIcon12setThemeNameERK7QString setThemeName(const class QString &)
extern "C"
void
C_ZN5QIcon12setThemeNameERK7QString(const QString* arg1) {
  QIcon::setThemeName(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// <= body block end

