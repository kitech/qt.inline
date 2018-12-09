//  header block begin

// since 0x050500
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginescript.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineScript is pure virtual: false
// QWebEngineScript has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineScript_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineScript_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineScript_t qt_meta_stringdata_MyQWebEngineScript = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQWebEngineScript"
  },
  "MyQWebEngineScript"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineScript[] = {
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
class Q_DECL_EXPORT MyQWebEngineScript : public QWebEngineScript {
public:
  virtual ~MyQWebEngineScript() {}
// void QWebEngineScript()
MyQWebEngineScript() : QWebEngineScript() {}
// void QWebEngineScript(const QWebEngineScript &)
MyQWebEngineScript(const QWebEngineScript & other) : QWebEngineScript(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:68
// [-2] void QWebEngineScript()
extern "C" Q_DECL_EXPORT
void* C_ZN16QWebEngineScriptC2Ev() {
  return  new QWebEngineScript();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:69
// [-2] void QWebEngineScript(const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QWebEngineScriptC2ERKS_(QWebEngineScript* other) {
  return  new QWebEngineScript(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:70
// [-2] void ~QWebEngineScript()
extern "C" Q_DECL_EXPORT
void C_ZN16QWebEngineScriptD2Ev(void *this_) {
  delete (QWebEngineScript*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:72
// [8] QWebEngineScript & operator=(const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QWebEngineScriptaSERKS_(void *this_, QWebEngineScript* other) {
  auto& rv = ((QWebEngineScript*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:74
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QWebEngineScript6isNullEv(void *this_) {
  return (bool)((QWebEngineScript*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:76
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QWebEngineScript4nameEv(void *this_) {
  auto rv = ((QWebEngineScript*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:77
// [-2] void setName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QWebEngineScript7setNameERK7QString(void *this_, QString* arg0) {
  ((QWebEngineScript*)this_)->setName(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:79
// [8] QString sourceCode()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QWebEngineScript10sourceCodeEv(void *this_) {
  auto rv = ((QWebEngineScript*)this_)->sourceCode();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:80
// [-2] void setSourceCode(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QWebEngineScript13setSourceCodeERK7QString(void *this_, QString* arg0) {
  ((QWebEngineScript*)this_)->setSourceCode(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:82
// [4] QWebEngineScript::InjectionPoint injectionPoint()
extern "C" Q_DECL_EXPORT
QWebEngineScript::InjectionPoint C_ZNK16QWebEngineScript14injectionPointEv(void *this_) {
  return (QWebEngineScript::InjectionPoint)((QWebEngineScript*)this_)->injectionPoint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:83
// [-2] void setInjectionPoint(QWebEngineScript::InjectionPoint)
extern "C" Q_DECL_EXPORT
void C_ZN16QWebEngineScript17setInjectionPointENS_14InjectionPointE(void *this_, QWebEngineScript::InjectionPoint arg0) {
  ((QWebEngineScript*)this_)->setInjectionPoint(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:85
// [4] quint32 worldId()
extern "C" Q_DECL_EXPORT
quint32 C_ZNK16QWebEngineScript7worldIdEv(void *this_) {
  return (quint32)((QWebEngineScript*)this_)->worldId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:86
// [-2] void setWorldId(quint32)
extern "C" Q_DECL_EXPORT
void C_ZN16QWebEngineScript10setWorldIdEj(void *this_, quint32 arg0) {
  ((QWebEngineScript*)this_)->setWorldId(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:88
// [1] bool runsOnSubFrames()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QWebEngineScript15runsOnSubFramesEv(void *this_) {
  return (bool)((QWebEngineScript*)this_)->runsOnSubFrames();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:89
// [-2] void setRunsOnSubFrames(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QWebEngineScript18setRunsOnSubFramesEb(void *this_, bool on) {
  ((QWebEngineScript*)this_)->setRunsOnSubFrames(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:91
// [1] bool operator==(const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QWebEngineScripteqERKS_(void *this_, QWebEngineScript* other) {
  return (bool)((QWebEngineScript*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:92
// [1] bool operator!=(const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QWebEngineScriptneERKS_(void *this_, QWebEngineScript* other) {
  return (bool)((QWebEngineScript*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:94
// [-2] void swap(QWebEngineScript &)
extern "C" Q_DECL_EXPORT
void C_ZN16QWebEngineScript4swapERS_(void *this_, QWebEngineScript* other) {
  ((QWebEngineScript*)this_)->swap(*other);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
