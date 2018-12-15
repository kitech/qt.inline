//  header block begin

// since 0x050c00
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlscheme.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlScheme is pure virtual: false
// QWebEngineUrlScheme has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineUrlScheme_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineUrlScheme_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineUrlScheme_t qt_meta_stringdata_MyQWebEngineUrlScheme = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQWebEngineUrlScheme"
  },
  "MyQWebEngineUrlScheme"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineUrlScheme[] = {
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
class Q_DECL_EXPORT MyQWebEngineUrlScheme : public QWebEngineUrlScheme {
public:
  virtual ~MyQWebEngineUrlScheme() {}
// void QWebEngineUrlScheme()
MyQWebEngineUrlScheme() : QWebEngineUrlScheme() {}
// void QWebEngineUrlScheme(const QByteArray &)
MyQWebEngineUrlScheme(const QByteArray & name) : QWebEngineUrlScheme(name) {}
// void QWebEngineUrlScheme(const QWebEngineUrlScheme &)
MyQWebEngineUrlScheme(const QWebEngineUrlScheme & that) : QWebEngineUrlScheme(that) {}
// void QWebEngineUrlScheme(QWebEngineUrlScheme &&)
MyQWebEngineUrlScheme(QWebEngineUrlScheme && that) : QWebEngineUrlScheme(that) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:79
// [-2] void QWebEngineUrlScheme()
extern "C" Q_DECL_EXPORT
void* C_ZN19QWebEngineUrlSchemeC2Ev() {
  return  new QWebEngineUrlScheme();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:80
// [-2] void QWebEngineUrlScheme(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QWebEngineUrlSchemeC2ERK10QByteArray(QByteArray* name) {
  return  new QWebEngineUrlScheme(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:82
// [-2] void QWebEngineUrlScheme(const QWebEngineUrlScheme &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QWebEngineUrlSchemeC2ERKS_(QWebEngineUrlScheme* that) {
  return  new QWebEngineUrlScheme(*that);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:83
// [8] QWebEngineUrlScheme & operator=(const QWebEngineUrlScheme &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QWebEngineUrlSchemeaSERKS_(void *this_, QWebEngineUrlScheme* that) {
  auto& rv = ((QWebEngineUrlScheme*)this_)->operator=(*that);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:85
// [-2] void QWebEngineUrlScheme(QWebEngineUrlScheme &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QWebEngineUrlSchemeC2EOS_(QWebEngineUrlScheme && that) {
  return  new QWebEngineUrlScheme(that);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:86
// [8] QWebEngineUrlScheme & operator=(QWebEngineUrlScheme &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QWebEngineUrlSchemeaSEOS_(void *this_, QWebEngineUrlScheme && that) {
  auto& rv = ((QWebEngineUrlScheme*)this_)->operator=(that);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:88
// [-2] void ~QWebEngineUrlScheme()
extern "C" Q_DECL_EXPORT
void C_ZN19QWebEngineUrlSchemeD2Ev(void *this_) {
  delete (QWebEngineUrlScheme*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:90
// [1] bool operator==(const QWebEngineUrlScheme &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QWebEngineUrlSchemeeqERKS_(void *this_, QWebEngineUrlScheme* that) {
  return (bool)((QWebEngineUrlScheme*)this_)->operator==(*that);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:91
// [1] bool operator!=(const QWebEngineUrlScheme &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QWebEngineUrlSchemeneERKS_(void *this_, QWebEngineUrlScheme* that) {
  return (bool)((QWebEngineUrlScheme*)this_)->operator!=(*that);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:93
// [8] QByteArray name()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QWebEngineUrlScheme4nameEv(void *this_) {
  auto rv = ((QWebEngineUrlScheme*)this_)->name();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:94
// [-2] void setName(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN19QWebEngineUrlScheme7setNameERK10QByteArray(void *this_, QByteArray* newValue) {
  ((QWebEngineUrlScheme*)this_)->setName(*newValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:96
// [4] QWebEngineUrlScheme::Syntax syntax()
extern "C" Q_DECL_EXPORT
QWebEngineUrlScheme::Syntax C_ZNK19QWebEngineUrlScheme6syntaxEv(void *this_) {
  return (QWebEngineUrlScheme::Syntax)((QWebEngineUrlScheme*)this_)->syntax();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:97
// [-2] void setSyntax(QWebEngineUrlScheme::Syntax)
extern "C" Q_DECL_EXPORT
void C_ZN19QWebEngineUrlScheme9setSyntaxENS_6SyntaxE(void *this_, QWebEngineUrlScheme::Syntax newValue) {
  ((QWebEngineUrlScheme*)this_)->setSyntax(newValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:99
// [4] int defaultPort()
extern "C" Q_DECL_EXPORT
int C_ZNK19QWebEngineUrlScheme11defaultPortEv(void *this_) {
  return (int)((QWebEngineUrlScheme*)this_)->defaultPort();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:100
// [-2] void setDefaultPort(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QWebEngineUrlScheme14setDefaultPortEi(void *this_, int newValue) {
  ((QWebEngineUrlScheme*)this_)->setDefaultPort(newValue);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:102
// [4] QWebEngineUrlScheme::Flags flags()
extern "C" Q_DECL_EXPORT
QWebEngineUrlScheme::Flags* C_ZNK19QWebEngineUrlScheme5flagsEv(void *this_) {
  auto rv = ((QWebEngineUrlScheme*)this_)->flags();
return new QWebEngineUrlScheme::Flags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:103
// [-2] void setFlags(QWebEngineUrlScheme::Flags)
extern "C" Q_DECL_EXPORT
void C_ZN19QWebEngineUrlScheme8setFlagsE6QFlagsINS_4FlagEE(void *this_, QFlags<QWebEngineUrlScheme::Flag> newValue) {
  ((QWebEngineUrlScheme*)this_)->setFlags(newValue);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:105
// [-2] void registerScheme(const QWebEngineUrlScheme &)
extern "C" Q_DECL_EXPORT
void C_ZN19QWebEngineUrlScheme14registerSchemeERKS_(QWebEngineUrlScheme* scheme) {
  QWebEngineUrlScheme::registerScheme(*scheme);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:106
// [8] QWebEngineUrlScheme schemeByName(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QWebEngineUrlScheme12schemeByNameERK10QByteArray(QByteArray* name) {
  auto rv = QWebEngineUrlScheme::schemeByName(*name);
return new QWebEngineUrlScheme(rv);
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
