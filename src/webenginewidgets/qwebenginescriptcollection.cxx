//  header block begin
// since 0x050500
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginescriptcollection.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineScriptCollection is pure virtual: false
// QWebEngineScriptCollection has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWebEngineScriptCollection_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineScriptCollection_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineScriptCollection_t qt_meta_stringdata_MyQWebEngineScriptCollection = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQWebEngineScriptCollection"
  },
  "MyQWebEngineScriptCollection"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineScriptCollection[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:62
// [-2] QList<QWebEngineScript> findScripts(const QString &)
extern "C" Q_DECL_EXPORT
QList<QWebEngineScript>* C_ZNK26QWebEngineScriptCollection11findScriptsERK7QString(void *this_, QString* name) {
  auto rv = ((QWebEngineScriptCollection*)this_)->findScripts(*name);
return new QList<QWebEngineScript>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:64
// [-2] void insert(const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
void C_ZN26QWebEngineScriptCollection6insertERK16QWebEngineScript(void *this_, QWebEngineScript* arg0) {
  ((QWebEngineScriptCollection*)this_)->insert(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:65
// [-2] void insert(const QList<QWebEngineScript> &)
extern "C" Q_DECL_EXPORT
void C_ZN26QWebEngineScriptCollection6insertERK5QListI16QWebEngineScriptE(void *this_, QList<QWebEngineScript>* list) {
  ((QWebEngineScriptCollection*)this_)->insert(*list);
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:70
// [-2] QList<QWebEngineScript> toList()
extern "C" Q_DECL_EXPORT
QList<QWebEngineScript>* C_ZNK26QWebEngineScriptCollection6toListEv(void *this_) {
  auto rv = ((QWebEngineScriptCollection*)this_)->toList();
return new QList<QWebEngineScript>(rv);
}

//  main block end
