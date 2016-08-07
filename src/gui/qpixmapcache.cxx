// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qpixmapcache.h
// dst-file: /src/gui/qpixmapcache.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpixmapcache.h>


// <= header block end

// main block begin =>
void __keep_qpixmapcache_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPixmapCache_Class_Size()
{
  return sizeof(QPixmapCache);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 86, column 17>
//   // proto: static void QPixmapCache::remove(const QPixmapCache::Key & key);
// _ZN12QPixmapCache6removeERKNS_3KeyE remove(const class QPixmapCache::Key &)
extern "C"
void
C_ZN12QPixmapCache6removeERKNS_3KeyE(const QPixmapCache::Key* arg1) {
  QPixmapCache::remove(*((const QPixmapCache::Key*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 76, column 16>
//   // proto: static int QPixmapCache::cacheLimit();
// _ZN12QPixmapCache10cacheLimitEv cacheLimit()
extern "C"
int
C_ZN12QPixmapCache10cacheLimitEv() {
  auto ret =
  QPixmapCache::cacheLimit();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 87, column 17>
//   // proto: static void QPixmapCache::clear();
// _ZN12QPixmapCache5clearEv clear()
extern "C"
void
C_ZN12QPixmapCache5clearEv() {
  QPixmapCache::clear();
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 84, column 17>
//   // proto: static bool QPixmapCache::replace(const QPixmapCache::Key & key, const QPixmap & pixmap);
// _ZN12QPixmapCache7replaceERKNS_3KeyERK7QPixmap replace(const class QPixmapCache::Key &, const class QPixmap &)
extern "C"
bool
C_ZN12QPixmapCache7replaceERKNS_3KeyERK7QPixmap(const QPixmapCache::Key* arg1,
const QPixmap* arg2) {
  auto ret =
  QPixmapCache::replace(*((const QPixmapCache::Key*)arg1),
*((const QPixmap*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 79, column 17>
//   // proto: static bool QPixmapCache::find(const QString & key, QPixmap & pixmap);
// _ZN12QPixmapCache4findERK7QStringR7QPixmap find(const class QString &, class QPixmap &)
extern "C"
bool
C_ZN12QPixmapCache4findERK7QStringR7QPixmap(const QString* arg1,
QPixmap* arg2) {
  auto ret =
  QPixmapCache::find(*((const QString*)arg1),
*((QPixmap*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 81, column 17>
//   // proto: static bool QPixmapCache::find(const QPixmapCache::Key & key, QPixmap * pixmap);
// _ZN12QPixmapCache4findERKNS_3KeyEP7QPixmap find(const class QPixmapCache::Key &, class QPixmap *)
extern "C"
bool
C_ZN12QPixmapCache4findERKNS_3KeyEP7QPixmap(const QPixmapCache::Key* arg1,
QPixmap * arg2) {
  auto ret =
  QPixmapCache::find(*((const QPixmapCache::Key*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 78, column 21>
//   // proto: static QPixmap * QPixmapCache::find(const QString & key);
// _ZN12QPixmapCache4findERK7QString find(const class QString &)
extern "C"
void*
C_ZN12QPixmapCache4findERK7QString(const QString* arg1) {
  auto ret =
  QPixmapCache::find(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 80, column 17>
//   // proto: static bool QPixmapCache::find(const QString & key, QPixmap * pixmap);
// _ZN12QPixmapCache4findERK7QStringP7QPixmap find(const class QString &, class QPixmap *)
extern "C"
bool
C_ZN12QPixmapCache4findERK7QStringP7QPixmap(const QString* arg1,
QPixmap * arg2) {
  auto ret =
  QPixmapCache::find(*((const QString*)arg1),
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 85, column 17>
//   // proto: static void QPixmapCache::remove(const QString & key);
// _ZN12QPixmapCache6removeERK7QString remove(const class QString &)
extern "C"
void
C_ZN12QPixmapCache6removeERK7QString(const QString* arg1) {
  QPixmapCache::remove(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpixmapcache.h', line 77, column 17>
//   // proto: static void QPixmapCache::setCacheLimit(int );
// _ZN12QPixmapCache13setCacheLimitEi setCacheLimit(int)
extern "C"
void
C_ZN12QPixmapCache13setCacheLimitEi(int arg1) {
  QPixmapCache::setCacheLimit(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

