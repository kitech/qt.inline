//  header block begin

// /usr/include/qt/QtCore/qstringlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringlist.h>
#include <QtCore>
#include "callback_inherit.h"

// QListSpecialMethods is pure virtual: false
// QListSpecialMethods has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQListSpecialMethods_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQListSpecialMethods_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQListSpecialMethods_t qt_meta_stringdata_MyQListSpecialMethods = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQListSpecialMethods"
  },
  "MyQListSpecialMethods"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQListSpecialMethods[] = {
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
class Q_DECL_EXPORT MyQListSpecialMethods : public QListSpecialMethods<QString> {
public:
  virtual ~MyQListSpecialMethods() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:72
// [-2] void sort(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN19QListSpecialMethodsI7QStringE4sortEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QListSpecialMethods<QString>*)this_)->sort(cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:73
// [4] int removeDuplicates()
extern "C" Q_DECL_EXPORT
int C_ZN19QListSpecialMethodsI7QStringE16removeDuplicatesEv(void *this_) {
  return (int)((QListSpecialMethods<QString>*)this_)->removeDuplicates();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:75
// [8] QString join(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QListSpecialMethodsI7QStringE4joinERKS0_(void *this_, QString* sep) {
  auto rv = ((QListSpecialMethods<QString>*)this_)->join(*sep);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:76
// [8] QString join(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QListSpecialMethodsI7QStringE4joinE13QLatin1String(void *this_, QLatin1String* sep) {
  auto rv = ((QListSpecialMethods<QString>*)this_)->join(*sep);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:77
// [8] QString join(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QListSpecialMethodsI7QStringE4joinE5QChar(void *this_, QChar* sep) {
  auto rv = ((QListSpecialMethods<QString>*)this_)->join(*sep);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:79
// [8] QStringList filter(const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QListSpecialMethodsI7QStringE6filterERKS0_N2Qt15CaseSensitivityE(void *this_, QString* str, Qt::CaseSensitivity cs) {
  auto rv = ((QListSpecialMethods<QString>*)this_)->filter(*str, cs);
return new QStringList(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:80
// [8] QStringList & replaceInStrings(const QString &, const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN19QListSpecialMethodsI7QStringE16replaceInStringsERKS0_S3_N2Qt15CaseSensitivityE(void *this_, QString* before, QString* after, Qt::CaseSensitivity cs) {
  auto& rv = ((QListSpecialMethods<QString>*)this_)->replaceInStrings(*before, *after, cs);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:83
// [8] QStringList filter(const QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QListSpecialMethodsI7QStringE6filterERK7QRegExp(void *this_, QRegExp* rx) {
  auto rv = ((QListSpecialMethods<QString>*)this_)->filter(*rx);
return new QStringList(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:84
// [8] QStringList & replaceInStrings(const QRegExp &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QListSpecialMethodsI7QStringE16replaceInStringsERK7QRegExpRKS0_(void *this_, QRegExp* rx, QString* after) {
  auto& rv = ((QListSpecialMethods<QString>*)this_)->replaceInStrings(*rx, *after);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:88
// [8] QStringList filter(const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QListSpecialMethodsI7QStringE6filterERK18QRegularExpression(void *this_, QRegularExpression* re) {
  auto rv = ((QListSpecialMethods<QString>*)this_)->filter(*re);
return new QStringList(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:89
// [8] QStringList & replaceInStrings(const QRegularExpression &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QListSpecialMethodsI7QStringE16replaceInStringsERK18QRegularExpressionRKS0_(void *this_, QRegularExpression* re, QString* after) {
  auto& rv = ((QListSpecialMethods<QString>*)this_)->replaceInStrings(*re, *after);
return &rv;
}


extern "C" Q_DECL_EXPORT
void C_ZN19QListSpecialMethodsD2Ev(void *this_) {
  delete (QListSpecialMethods<QString>*)(this_);
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
