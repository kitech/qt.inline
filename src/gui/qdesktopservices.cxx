// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qdesktopservices.h
// dst-file: /src/gui/qdesktopservices.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdesktopservices.h>


// <= header block end

// main block begin =>
void __keep_qdesktopservices_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDesktopServices_Class_Size()
{
  return sizeof(QDesktopServices);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qdesktopservices.h', line 54, column 17>
//   // proto: static void QDesktopServices::unsetUrlHandler(const QString & scheme);
// _ZN16QDesktopServices15unsetUrlHandlerERK7QString unsetUrlHandler(const class QString &)
extern "C"
void
C_ZN16QDesktopServices15unsetUrlHandlerERK7QString(const QString* arg1) {
  QDesktopServices::unsetUrlHandler(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qdesktopservices.h', line 52, column 17>
//   // proto: static bool QDesktopServices::openUrl(const QUrl & url);
// _ZN16QDesktopServices7openUrlERK4QUrl openUrl(const class QUrl &)
extern "C"
bool
C_ZN16QDesktopServices7openUrlERK4QUrl(const QUrl* arg1) {
  auto ret =
  QDesktopServices::openUrl(*((const QUrl*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qdesktopservices.h', line 53, column 17>
//   // proto: static void QDesktopServices::setUrlHandler(const QString & scheme, QObject * receiver, const char * method);
// _ZN16QDesktopServices13setUrlHandlerERK7QStringP7QObjectPKc setUrlHandler(const class QString &, class QObject *, const char *)
extern "C"
void
C_ZN16QDesktopServices13setUrlHandlerERK7QStringP7QObjectPKc(const QString* arg1,
QObject * arg2,
const char * arg3) {
  QDesktopServices::setUrlHandler(*((const QString*)arg1),
arg2,
arg3);
}
// <= ext block end

// body block begin =>
// <= body block end

