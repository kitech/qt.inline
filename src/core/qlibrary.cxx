//  header block begin
// /usr/include/qt/QtCore/qlibrary.h
#include <qlibrary.h>
#include <QtCore>

// QLibrary is pure virtual: false
//  header block end

//  main block begin

class MyQLibrary : public QLibrary {
public:
MyQLibrary(QObject * parent) : QLibrary(parent) {}
MyQLibrary(const QString & fileName, QObject * parent) : QLibrary(fileName, parent) {}
MyQLibrary(const QString & fileName, int verNum, QObject * parent) : QLibrary(fileName, verNum, parent) {}
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
void* C_ZN8QLibraryC1EP7QObject(QObject * parent) {
  (MyQLibrary*)(0);
  return  new MyQLibrary(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:69
// [-2] void QLibrary(const class QString &, class QObject *)
extern "C"
void* C_ZN8QLibraryC1ERK7QStringP7QObject(const QString & fileName, QObject * parent) {
  (MyQLibrary*)(0);
  return  new MyQLibrary(fileName, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:70
// [-2] void QLibrary(const class QString &, int, class QObject *)
extern "C"
void* C_ZN8QLibraryC1ERK7QStringiP7QObject(const QString & fileName, int verNum, QObject * parent) {
  (MyQLibrary*)(0);
  return  new MyQLibrary(fileName, verNum, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:71
// [-2] void QLibrary(const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN8QLibraryC1ERK7QStringS2_P7QObject(const QString & fileName, const QString & version, QObject * parent) {
  (MyQLibrary*)(0);
  return  new MyQLibrary(fileName, version, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:72
// [-2] void ~QLibrary()
extern "C"
void C_ZN8QLibraryD1Ev(void *this_) {
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
void C_ZN8QLibrary7resolveERK7QStringPKc(const QString & fileName, const char * symbol) {
  auto rv = QLibrary::resolve(fileName, symbol);
/*return rv;*/
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:76
// [8] QFunctionPointer resolve(const class QString &, int, const char *)
extern "C"
void C_ZN8QLibrary7resolveERK7QStringiPKc(const QString & fileName, int verNum, const char * symbol) {
  auto rv = QLibrary::resolve(fileName, verNum, symbol);
/*return rv;*/
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:77
// [8] QFunctionPointer resolve(const class QString &, const class QString &, const char *)
extern "C"
void C_ZN8QLibrary7resolveERK7QStringS2_PKc(const QString & fileName, const QString & version, const char * symbol) {
  auto rv = QLibrary::resolve(fileName, version, symbol);
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
bool C_ZN8QLibrary9isLibraryERK7QString(const QString & fileName) {
  return (bool)QLibrary::isLibrary(fileName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:85
// [-2] void setFileName(const class QString &)
extern "C"
void C_ZN8QLibrary11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QLibrary*)this_)->setFileName(fileName);
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
void C_ZN8QLibrary21setFileNameAndVersionERK7QStringi(void *this_, const QString & fileName, int verNum) {
  ((QLibrary*)this_)->setFileNameAndVersion(fileName, verNum);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:89
// [-2] void setFileNameAndVersion(const class QString &, const class QString &)
extern "C"
void C_ZN8QLibrary21setFileNameAndVersionERK7QStringS2_(void *this_, const QString & fileName, const QString & version) {
  ((QLibrary*)this_)->setFileNameAndVersion(fileName, version);
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
// /usr/include/qt/QtCore/qlibrary.h:93
// [4] QLibrary::LoadHints loadHints()
extern "C"
void C_ZNK8QLibrary9loadHintsEv(void *this_) {
  auto rv = ((QLibrary*)this_)->loadHints();
/*return rv;*/
}
//  main block end
