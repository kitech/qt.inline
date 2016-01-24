// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qlibrary.h
// dst-file: /src/core/qlibrary.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qlibrary.h>


#include <qglobal.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qlibrary_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QLibrary_Class_Size()
{
  return sizeof(QLibrary);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 71, column 29>
//   // proto: static QFunctionPointer QLibrary::resolve(const QString & fileName, const QString & version, const char * symbol);
// _ZN8QLibrary7resolveERK7QStringS2_PKc resolve(const class QString &, const class QString &, const char *)
extern "C"
void*
C_ZN8QLibrary7resolveERK7QStringS2_PKc(const QString* arg1,
const QString* arg2,
const char * arg3) {
  auto ret =
  QLibrary::resolve(*((const QString*)arg1),
*((const QString*)arg2),
arg3);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 65, column 14>
//   // proto:  void QLibrary::QLibrary(const QString & fileName, const QString & version, QObject * parent);
extern "C"
QLibrary*
C_ZN8QLibraryC2ERK7QStringS2_P7QObject(const QString* arg1,
const QString* arg2,
QObject * arg3) {
  auto ret = new QLibrary(*((const QString*)arg1),
*((const QString*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 47, column 5>
//   // proto:  const QMetaObject * QLibrary::metaObject();
// _ZNK8QLibrary10metaObjectEv metaObject()
extern "C"
void*
C_ZNK8QLibrary10metaObjectEv(void *qthis) {
  auto ret =
  ((QLibrary*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 69, column 29>
//   // proto: static QFunctionPointer QLibrary::resolve(const QString & fileName, const char * symbol);
// _ZN8QLibrary7resolveERK7QStringPKc resolve(const class QString &, const char *)
extern "C"
void*
C_ZN8QLibrary7resolveERK7QStringPKc(const QString* arg1,
const char * arg2) {
  auto ret =
  QLibrary::resolve(*((const QString*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 62, column 14>
//   // proto:  void QLibrary::QLibrary(QObject * parent);
extern "C"
QLibrary*
C_ZN8QLibraryC2EP7QObject(QObject * arg1) {
  auto ret = new QLibrary(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 75, column 10>
//   // proto:  bool QLibrary::isLoaded();
// _ZNK8QLibrary8isLoadedEv isLoaded()
extern "C"
bool
C_ZNK8QLibrary8isLoadedEv(void *qthis) {
  auto ret =
  ((QLibrary*)qthis)->isLoaded();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 73, column 10>
//   // proto:  bool QLibrary::load();
// _ZN8QLibrary4loadEv load()
extern "C"
bool
C_ZN8QLibrary4loadEv(void *qthis) {
  auto ret =
  ((QLibrary*)qthis)->load();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 63, column 14>
//   // proto:  void QLibrary::QLibrary(const QString & fileName, QObject * parent);
extern "C"
QLibrary*
C_ZN8QLibraryC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QLibrary(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 80, column 13>
//   // proto:  QString QLibrary::fileName();
// _ZNK8QLibrary8fileNameEv fileName()
extern "C"
QString*
C_ZNK8QLibrary8fileNameEv(void *qthis) {
  auto ret =
  ((QLibrary*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 79, column 10>
//   // proto:  void QLibrary::setFileName(const QString & fileName);
// _ZN8QLibrary11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN8QLibrary11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QLibrary*)qthis)->setFileName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 77, column 17>
//   // proto: static bool QLibrary::isLibrary(const QString & fileName);
// _ZN8QLibrary9isLibraryERK7QString isLibrary(const class QString &)
extern "C"
bool
C_ZN8QLibrary9isLibraryERK7QString(const QString* arg1) {
  auto ret =
  QLibrary::isLibrary(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 74, column 10>
//   // proto:  bool QLibrary::unload();
// _ZN8QLibrary6unloadEv unload()
extern "C"
bool
C_ZN8QLibrary6unloadEv(void *qthis) {
  auto ret =
  ((QLibrary*)qthis)->unload();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 68, column 22>
//   // proto:  QFunctionPointer QLibrary::resolve(const char * symbol);
// _ZN8QLibrary7resolveEPKc resolve(const char *)
extern "C"
void*
C_ZN8QLibrary7resolveEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QLibrary*)qthis)->resolve(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 86, column 10>
//   // proto:  void QLibrary::setLoadHints(LoadHints hints);
// _ZN8QLibrary12setLoadHintsE6QFlagsINS_8LoadHintEE setLoadHints(LoadHints)
extern "C"
void
C_ZN8QLibrary12setLoadHintsE6QFlagsINS_8LoadHintEE(void *qthis,
QLibrary::LoadHints arg1) {
  ((QLibrary*)qthis)->setLoadHints(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 83, column 10>
//   // proto:  void QLibrary::setFileNameAndVersion(const QString & fileName, const QString & version);
// _ZN8QLibrary21setFileNameAndVersionERK7QStringS2_ setFileNameAndVersion(const class QString &, const class QString &)
extern "C"
void
C_ZN8QLibrary21setFileNameAndVersionERK7QStringS2_(void *qthis,
const QString* arg1,
const QString* arg2) {
  ((QLibrary*)qthis)->setFileNameAndVersion(*((const QString*)arg1),
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 82, column 10>
//   // proto:  void QLibrary::setFileNameAndVersion(const QString & fileName, int verNum);
// _ZN8QLibrary21setFileNameAndVersionERK7QStringi setFileNameAndVersion(const class QString &, int)
extern "C"
void
C_ZN8QLibrary21setFileNameAndVersionERK7QStringi(void *qthis,
const QString* arg1,
int arg2) {
  ((QLibrary*)qthis)->setFileNameAndVersion(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 64, column 14>
//   // proto:  void QLibrary::QLibrary(const QString & fileName, int verNum, QObject * parent);
extern "C"
QLibrary*
C_ZN8QLibraryC2ERK7QStringiP7QObject(const QString* arg1,
int arg2,
QObject * arg3) {
  auto ret = new QLibrary(*((const QString*)arg1),
arg2,
arg3);
  return ret;
}
//   // proto:  void QLibrary::~QLibrary();
extern "C"
void C_ZN8QLibraryD2Ev(void *qthis) {
  delete (QLibrary*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 84, column 13>
//   // proto:  QString QLibrary::errorString();
// _ZNK8QLibrary11errorStringEv errorString()
extern "C"
QString*
C_ZNK8QLibrary11errorStringEv(void *qthis) {
  auto ret =
  ((QLibrary*)qthis)->errorString();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 87, column 15>
//   // proto:  LoadHints QLibrary::loadHints();
// _ZNK8QLibrary9loadHintsEv loadHints()
extern "C"
QFlags<QLibrary::LoadHint>*
C_ZNK8QLibrary9loadHintsEv(void *qthis) {
  auto ret =
  ((QLibrary*)qthis)->loadHints();
  return new QFlags<QLibrary::LoadHint>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qlibrary.h', line 70, column 29>
//   // proto: static QFunctionPointer QLibrary::resolve(const QString & fileName, int verNum, const char * symbol);
// _ZN8QLibrary7resolveERK7QStringiPKc resolve(const class QString &, int, const char *)
extern "C"
void*
C_ZN8QLibrary7resolveERK7QStringiPKc(const QString* arg1,
int arg2,
const char * arg3) {
  auto ret =
  QLibrary::resolve(*((const QString*)arg1),
arg2,
arg3);
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QLibrary_SlotProxy here
class QLibrary_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QLibrary_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qlibrary.moc"

extern "C" {
  QLibrary_SlotProxy* QLibrary_SlotProxy_new()
  {
    return new QLibrary_SlotProxy();
  }
};

// <= body block end

