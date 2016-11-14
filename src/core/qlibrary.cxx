// /usr/include/qt/QtCore/qlibrary.h
#include <qlibrary.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qlibrary.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK8QLibrary10metaObjectEv(void *this_) {
  /*return*/ ((QLibrary*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qlibrary.h:68
// void QLibrary(class QObject *)
extern "C"
void* C_ZN8QLibraryC1EP7QObject(QObject * parent) {
  return new QLibrary(parent);
}
// /usr/include/qt/QtCore/qlibrary.h:69
// void QLibrary(const class QString &, class QObject *)
extern "C"
void* C_ZN8QLibraryC1ERK7QStringP7QObject(const QString & fileName, QObject * parent) {
  return new QLibrary(fileName, parent);
}
// /usr/include/qt/QtCore/qlibrary.h:70
// void QLibrary(const class QString &, int, class QObject *)
extern "C"
void* C_ZN8QLibraryC1ERK7QStringiP7QObject(const QString & fileName, int verNum, QObject * parent) {
  return new QLibrary(fileName, verNum, parent);
}
// /usr/include/qt/QtCore/qlibrary.h:71
// void QLibrary(const class QString &, const class QString &, class QObject *)
extern "C"
void* C_ZN8QLibraryC1ERK7QStringS2_P7QObject(const QString & fileName, const QString & version, QObject * parent) {
  return new QLibrary(fileName, version, parent);
}
// virtual
// /usr/include/qt/QtCore/qlibrary.h:72
// void ~QLibrary()
extern "C"
void C_ZN8QLibraryD1Ev(void *this_) {
  delete (QLibrary*)(this_);
}
// /usr/include/qt/QtCore/qlibrary.h:74
// QFunctionPointer resolve(const char *)
extern "C"
void C_ZN8QLibrary7resolveEPKc(void *this_, const char * symbol) {
  /*return*/ ((QLibrary*)this_)->resolve(symbol);
}
// static
// /usr/include/qt/QtCore/qlibrary.h:75
// QFunctionPointer resolve(const class QString &, const char *)
extern "C"
void C_ZN8QLibrary7resolveERK7QStringPKc(const QString & fileName, const char * symbol) {
  /*return*/ QLibrary::resolve(fileName, symbol);
}
// static
// /usr/include/qt/QtCore/qlibrary.h:76
// QFunctionPointer resolve(const class QString &, int, const char *)
extern "C"
void C_ZN8QLibrary7resolveERK7QStringiPKc(const QString & fileName, int verNum, const char * symbol) {
  /*return*/ QLibrary::resolve(fileName, verNum, symbol);
}
// static
// /usr/include/qt/QtCore/qlibrary.h:77
// QFunctionPointer resolve(const class QString &, const class QString &, const char *)
extern "C"
void C_ZN8QLibrary7resolveERK7QStringS2_PKc(const QString & fileName, const QString & version, const char * symbol) {
  /*return*/ QLibrary::resolve(fileName, version, symbol);
}
// /usr/include/qt/QtCore/qlibrary.h:79
// bool load()
extern "C"
void C_ZN8QLibrary4loadEv(void *this_) {
  /*return*/ ((QLibrary*)this_)->load();
}
// /usr/include/qt/QtCore/qlibrary.h:80
// bool unload()
extern "C"
void C_ZN8QLibrary6unloadEv(void *this_) {
  /*return*/ ((QLibrary*)this_)->unload();
}
// /usr/include/qt/QtCore/qlibrary.h:81
// bool isLoaded()
extern "C"
void C_ZNK8QLibrary8isLoadedEv(void *this_) {
  /*return*/ ((QLibrary*)this_)->isLoaded();
}
// static
// /usr/include/qt/QtCore/qlibrary.h:83
// bool isLibrary(const class QString &)
extern "C"
void C_ZN8QLibrary9isLibraryERK7QString(const QString & fileName) {
  /*return*/ QLibrary::isLibrary(fileName);
}
// /usr/include/qt/QtCore/qlibrary.h:85
// void setFileName(const class QString &)
extern "C"
void C_ZN8QLibrary11setFileNameERK7QString(void *this_, const QString & fileName) {
  ((QLibrary*)this_)->setFileName(fileName);
}
// /usr/include/qt/QtCore/qlibrary.h:86
// QString fileName()
extern "C"
void C_ZNK8QLibrary8fileNameEv(void *this_) {
  /*return*/ ((QLibrary*)this_)->fileName();
}
// /usr/include/qt/QtCore/qlibrary.h:88
// void setFileNameAndVersion(const class QString &, int)
extern "C"
void C_ZN8QLibrary21setFileNameAndVersionERK7QStringi(void *this_, const QString & fileName, int verNum) {
  ((QLibrary*)this_)->setFileNameAndVersion(fileName, verNum);
}
// /usr/include/qt/QtCore/qlibrary.h:89
// void setFileNameAndVersion(const class QString &, const class QString &)
extern "C"
void C_ZN8QLibrary21setFileNameAndVersionERK7QStringS2_(void *this_, const QString & fileName, const QString & version) {
  ((QLibrary*)this_)->setFileNameAndVersion(fileName, version);
}
// /usr/include/qt/QtCore/qlibrary.h:90
// QString errorString()
extern "C"
void C_ZNK8QLibrary11errorStringEv(void *this_) {
  /*return*/ ((QLibrary*)this_)->errorString();
}
// /usr/include/qt/QtCore/qlibrary.h:92
// void setLoadHints(LoadHints)
extern "C"
void C_ZN8QLibrary12setLoadHintsE6QFlagsINS_8LoadHintEE(void *this_, QFlags<QLibrary::LoadHint> hints) {
  ((QLibrary*)this_)->setLoadHints(hints);
}
// /usr/include/qt/QtCore/qlibrary.h:93
// LoadHints loadHints()
extern "C"
void C_ZNK8QLibrary9loadHintsEv(void *this_) {
  /*return*/ ((QLibrary*)this_)->loadHints();
}