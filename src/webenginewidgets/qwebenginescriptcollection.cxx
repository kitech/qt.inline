//  header block begin
// since 0x050500
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h
#ifndef protected
#define protected public
#endif
#include <qwebenginescriptcollection.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineScriptCollection is pure virtual: false
// QWebEngineScriptCollection has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWebEngineScriptCollection : public QWebEngineScriptCollection {
public:
  virtual ~MyQWebEngineScriptCollection() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:55
// [-2] void ~QWebEngineScriptCollection()
extern "C" Q_DECL_EXPORT
void C_ZN26QWebEngineScriptCollectionD2Ev(void *this_) {
  delete (QWebEngineScriptCollection*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:56
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK26QWebEngineScriptCollection7isEmptyEv(void *this_) {
  return (bool)((QWebEngineScriptCollection*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:57
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK26QWebEngineScriptCollection5countEv(void *this_) {
  return (int)((QWebEngineScriptCollection*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:58
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK26QWebEngineScriptCollection4sizeEv(void *this_) {
  return (int)((QWebEngineScriptCollection*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:59
// [1] bool contains(const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
bool C_ZNK26QWebEngineScriptCollection8containsERK16QWebEngineScript(void *this_, QWebEngineScript* value) {
  return (bool)((QWebEngineScriptCollection*)this_)->contains(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:61
// [8] QWebEngineScript findScript(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK26QWebEngineScriptCollection10findScriptERK7QString(void *this_, QString* name) {
  auto rv = ((QWebEngineScriptCollection*)this_)->findScript(*name);
return new QWebEngineScript(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:67
// [1] bool remove(const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
bool C_ZN26QWebEngineScriptCollection6removeERK16QWebEngineScript(void *this_, QWebEngineScript* arg0) {
  return (bool)((QWebEngineScriptCollection*)this_)->remove(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:68
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN26QWebEngineScriptCollection5clearEv(void *this_) {
  ((QWebEngineScriptCollection*)this_)->clear();
}

//  main block end
