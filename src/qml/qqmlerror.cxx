// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQml/qqmlerror.h
// dst-file: /src/qml/qqmlerror.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qqmlerror.h>


#include <qstring.h>
#include <qurl.h>
// <= header block end

// main block begin =>
void __keep_qqmlerror_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQmlError_Class_Size()
{
  return sizeof(QQmlError);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 58, column 13>
//   // proto:  QString QQmlError::description();
// _ZNK9QQmlError11descriptionEv description()
extern "C"
QString*
C_ZNK9QQmlError11descriptionEv(void *qthis) {
  auto ret =
  ((QQmlError*)qthis)->description();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 50, column 5>
//   // proto:  void QQmlError::QQmlError(const QQmlError & );
extern "C"
QQmlError*
C_ZN9QQmlErrorC2ERKS_(const QQmlError* arg1) {
  auto ret = new QQmlError(*((const QQmlError*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 60, column 9>
//   // proto:  int QQmlError::line();
// _ZNK9QQmlError4lineEv line()
extern "C"
int
C_ZNK9QQmlError4lineEv(void *qthis) {
  auto ret =
  ((QQmlError*)qthis)->line();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 67, column 13>
//   // proto:  QString QQmlError::toString();
// _ZNK9QQmlError8toStringEv toString()
extern "C"
QString*
C_ZNK9QQmlError8toStringEv(void *qthis) {
  auto ret =
  ((QQmlError*)qthis)->toString();
  return new QString(ret); // 5
}
//   // proto:  void QQmlError::~QQmlError();
extern "C"
void C_ZN9QQmlErrorD2Ev(void *qthis) {
  delete (QQmlError*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 49, column 5>
//   // proto:  void QQmlError::QQmlError();
extern "C"
QQmlError*
C_ZN9QQmlErrorC2Ev() {
  auto ret = new QQmlError();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 61, column 10>
//   // proto:  void QQmlError::setLine(int );
// _ZN9QQmlError7setLineEi setLine(int)
extern "C"
void
C_ZN9QQmlError7setLineEi(void *qthis,
int arg1) {
  ((QQmlError*)qthis)->setLine(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 57, column 10>
//   // proto:  void QQmlError::setUrl(const QUrl & );
// _ZN9QQmlError6setUrlERK4QUrl setUrl(const class QUrl &)
extern "C"
void
C_ZN9QQmlError6setUrlERK4QUrl(void *qthis,
const QUrl* arg1) {
  ((QQmlError*)qthis)->setUrl(*((const QUrl*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 62, column 9>
//   // proto:  int QQmlError::column();
// _ZNK9QQmlError6columnEv column()
extern "C"
int
C_ZNK9QQmlError6columnEv(void *qthis) {
  auto ret =
  ((QQmlError*)qthis)->column();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 63, column 10>
//   // proto:  void QQmlError::setColumn(int );
// _ZN9QQmlError9setColumnEi setColumn(int)
extern "C"
void
C_ZN9QQmlError9setColumnEi(void *qthis,
int arg1) {
  ((QQmlError*)qthis)->setColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 54, column 10>
//   // proto:  bool QQmlError::isValid();
// _ZNK9QQmlError7isValidEv isValid()
extern "C"
bool
C_ZNK9QQmlError7isValidEv(void *qthis) {
  auto ret =
  ((QQmlError*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 64, column 14>
//   // proto:  QObject * QQmlError::object();
// _ZNK9QQmlError6objectEv object()
extern "C"
void*
C_ZNK9QQmlError6objectEv(void *qthis) {
  auto ret =
  ((QQmlError*)qthis)->object();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 59, column 10>
//   // proto:  void QQmlError::setDescription(const QString & );
// _ZN9QQmlError14setDescriptionERK7QString setDescription(const class QString &)
extern "C"
void
C_ZN9QQmlError14setDescriptionERK7QString(void *qthis,
const QString* arg1) {
  ((QQmlError*)qthis)->setDescription(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 65, column 10>
//   // proto:  void QQmlError::setObject(QObject * );
// _ZN9QQmlError9setObjectEP7QObject setObject(class QObject *)
extern "C"
void
C_ZN9QQmlError9setObjectEP7QObject(void *qthis,
QObject * arg1) {
  ((QQmlError*)qthis)->setObject(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQml/qqmlerror.h', line 56, column 10>
//   // proto:  QUrl QQmlError::url();
// _ZNK9QQmlError3urlEv url()
extern "C"
QUrl*
C_ZNK9QQmlError3urlEv(void *qthis) {
  auto ret =
  ((QQmlError*)qthis)->url();
  return new QUrl(ret); // 5
}
// <= ext block end

// body block begin =>
// <= body block end

