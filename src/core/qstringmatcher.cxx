//  header block begin

// /usr/include/qt/QtCore/qstringmatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringmatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringMatcher is pure virtual: false
// QStringMatcher has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStringMatcher_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStringMatcher_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStringMatcher_t qt_meta_stringdata_MyQStringMatcher = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQStringMatcher"
  },
  "MyQStringMatcher"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStringMatcher[] = {
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
class Q_DECL_EXPORT MyQStringMatcher : public QStringMatcher {
public:
  virtual ~MyQStringMatcher() {}
// void QStringMatcher()
MyQStringMatcher() : QStringMatcher() {}
// void QStringMatcher(const QString &, Qt::CaseSensitivity)
MyQStringMatcher(const QString & pattern, Qt::CaseSensitivity cs) : QStringMatcher(pattern, cs) {}
// void QStringMatcher(const QChar *, int, Qt::CaseSensitivity)
MyQStringMatcher(const QChar * uc, int len_, Qt::CaseSensitivity cs) : QStringMatcher(uc, len_, cs) {}
// void QStringMatcher(const QStringMatcher &)
MyQStringMatcher(const QStringMatcher & other) : QStringMatcher(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:53
// [-2] void QStringMatcher()
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringMatcherC2Ev() {
  return  new QStringMatcher();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:54
// [-2] void QStringMatcher(const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringMatcherC2ERK7QStringN2Qt15CaseSensitivityE(QString* pattern, Qt::CaseSensitivity cs) {
  return  new QStringMatcher(*pattern, cs);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstringmatcher.h:56
// [-2] void QStringMatcher(const QChar *, int, Qt::CaseSensitivity)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringMatcherC2EPK5QChariN2Qt15CaseSensitivityE(const QChar * uc, int len_, Qt::CaseSensitivity cs) {
  return  new QStringMatcher(uc, len_, cs);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:58
// [-2] void QStringMatcher(const QStringMatcher &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringMatcherC2ERKS_(QStringMatcher* other) {
  return  new QStringMatcher(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:59
// [-2] void ~QStringMatcher()
extern "C" Q_DECL_EXPORT
void C_ZN14QStringMatcherD2Ev(void *this_) {
  delete (QStringMatcher*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:61
// [1048] QStringMatcher & operator=(const QStringMatcher &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringMatcheraSERKS_(void *this_, QStringMatcher* other) {
  auto& rv = ((QStringMatcher*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:63
// [-2] void setPattern(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QStringMatcher10setPatternERK7QString(void *this_, QString* pattern) {
  ((QStringMatcher*)this_)->setPattern(*pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:64
// [-2] void setCaseSensitivity(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN14QStringMatcher18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QStringMatcher*)this_)->setCaseSensitivity(cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:66
// [4] int indexIn(const QString &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK14QStringMatcher7indexInERK7QStringi(void *this_, QString* str, int from) {
  return (int)((QStringMatcher*)this_)->indexIn(*str, from);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstringmatcher.h:67
// [4] int indexIn(const QChar *, int, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK14QStringMatcher7indexInEPK5QCharii(void *this_, const QChar * str, int length, int from) {
  return (int)((QStringMatcher*)this_)->indexIn(str, length, from);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:68
// [8] QString pattern()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStringMatcher7patternEv(void *this_) {
  auto rv = ((QStringMatcher*)this_)->pattern();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringmatcher.h:69
// [4] Qt::CaseSensitivity caseSensitivity()
extern "C" Q_DECL_EXPORT
Qt::CaseSensitivity C_ZNK14QStringMatcher15caseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QStringMatcher*)this_)->caseSensitivity();
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
