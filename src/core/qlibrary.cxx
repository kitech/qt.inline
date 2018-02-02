//  header block begin
// /usr/include/qt/QtCore/qlibrary.h
#include <qlibrary.h>
#include <QtCore>
#include "callback_inherit.h"

// QLibrary is pure virtual: false
// QLibrary has virtual projected: false
//  header block end

//  main block begin

class MyQLibrary : public QLibrary {
public:
  virtual ~MyQLibrary() {}
// void QLibrary(class QObject *)
MyQLibrary(QObject * parent) : QLibrary(parent) {}
// void QLibrary(const class QString &, class QObject *)
MyQLibrary(const QString & fileName, QObject * parent) : QLibrary(fileName, parent) {}
// void QLibrary(const class QString &, int, class QObject *)
MyQLibrary(const QString & fileName, int verNum, QObject * parent) : QLibrary(fileName, verNum, parent) {}
// void QLibrary(const class QString &, const class QString &, class QObject *)
MyQLibrary(const QString & fileName, const QString & version, QObject * parent) : QLibrary(fileName, version, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK8QLibrary10metaObjectEv(void *this_) {
  return (void*)((QLibrary*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:68
// [-2] void QLibrary(class QObject *)
extern "C"
void* C_ZN8QLibraryC2EP7QObject(QObject * parent) {
  return  new QLibrary(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:69
// [-2] void QLibrary(const class QString &, class QObject *)
extern "C"
void* C_ZN8QLibraryC2ERK7QStringP7QObject(QString* fileName, QObject * parent) {
  return  new QLibrary(*fileName, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:70
// [-2] void QLibrary(const class QString &, int, class QObject *)
extern "C"
void* C_ZN8QLibraryC2ERK7QStringiP7QObject(QString* fileName, int verNum, QObject * parent) {
  return  new QLibrary(*fileName, verNum, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:71
// [-2] void QLibrary(const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN8QLibraryC2ERK7QStringS2_P7QObject(QString* fileName, QString* version, QObject * parent) {
  return  new QLibrary(*fileName, *version, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:72
// [-2] void ~QLibrary()
extern "C"
void C_ZN8QLibraryD2Ev(void *this_) {
  delete (QLibrary*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:74
// [8] QFunctionPointer resolve(const char *)
extern "C"
void C_ZN8QLibrary7resolveEPKc(void *this_, const char * symbol) {
  auto rv = ((QLibrary*)this_)->resolve(symbol);
/*return rv;*/
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:75
// [8] QFunctionPointer resolve(const class QString &, const char *)
extern "C"
void C_ZN8QLibrary7resolveERK7QStringPKc(QString* fileName, const char * symbol) {
  auto rv = QLibrary::resolve(*fileName, symbol);
/*return rv;*/
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:76
// [8] QFunctionPointer resolve(const class QString &, int, const char *)
extern "C"
void C_ZN8QLibrary7resolveERK7QStringiPKc(QString* fileName, int verNum, const char * symbol) {
  auto rv = QLibrary::resolve(*fileName, verNum, symbol);
/*return rv;*/
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:77
// [8] QFunctionPointer resolve(const class QString &, const class QString &, const char *)
extern "C"
void C_ZN8QLibrary7resolveERK7QStringS2_PKc(QString* fileName, QString* version, const char * symbol) {
  auto rv = QLibrary::resolve(*fileName, *version, symbol);
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:79
// [1] bool load()
extern "C"
bool C_ZN8QLibrary4loadEv(void *this_) {
  return (bool)((QLibrary*)this_)->load();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:80
// [1] bool unload()
extern "C"
bool C_ZN8QLibrary6unloadEv(void *this_) {
  return (bool)((QLibrary*)this_)->unload();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:81
// [1] bool isLoaded()
extern "C"
bool C_ZNK8QLibrary8isLoadedEv(void *this_) {
  return (bool)((QLibrary*)this_)->isLoaded();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:83
// [1] bool isLibrary(const class QString &)
extern "C"
bool C_ZN8QLibrary9isLibraryERK7QString(QString* fileName) {
  return (bool)QLibrary::isLibrary(*fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:85
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN8QLibrary11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QLibrary*)this_)->setFileName(*fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:86
// [8] QString fileName()
extern "C"
void* C_ZNK8QLibrary8fileNameEv(void *this_) {
  auto rv = ((QLibrary*)this_)->fileName();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:88
// [-2] void setFileNameAndVersion(const class QString &, int)
extern "C"
void C_ZN8QLibrary21setFileNameAndVersionERK7QStringi(void *this_, QString* fileName, int verNum) {
  ((QLibrary*)this_)->setFileNameAndVersion(*fileName, verNum);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:89
// [-2] void setFileNameAndVersion(const class QString &, const class QString &)
extern "C"
void C_ZN8QLibrary21setFileNameAndVersionERK7QStringS2_(void *this_, QString* fileName, QString* version) {
  ((QLibrary*)this_)->setFileNameAndVersion(*fileName, *version);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:90
// [8] QString errorString()
extern "C"
void* C_ZNK8QLibrary11errorStringEv(void *this_) {
  auto rv = ((QLibrary*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:92
// [-2] void setLoadHints(QLibrary::LoadHints)
extern "C"
void C_ZN8QLibrary12setLoadHintsE6QFlagsINS_8LoadHintEE(void *this_, QFlags<QLibrary::LoadHint> hints) {
  ((QLibrary*)this_)->setLoadHints(hints);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:93
// [4] QLibrary::LoadHints loadHints()
extern "C"
void C_ZNK8QLibrary9loadHintsEv(void *this_) {
  auto rv = ((QLibrary*)this_)->loadHints();
/*return rv;*/
}
//  main block end
