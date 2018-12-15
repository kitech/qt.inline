//  header block begin

// /usr/include/qt/QtCore/qstringlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringlist.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringList is pure virtual: false
// QStringList has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStringList_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStringList_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStringList_t qt_meta_stringdata_MyQStringList = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQStringList"
  },
  "MyQStringList"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStringList[] = {
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
class Q_DECL_EXPORT MyQStringList : public QStringList {
public:
  virtual ~MyQStringList() {}
// void QStringList()
MyQStringList() : QStringList() {}
// void QStringList(const QString &)
MyQStringList(const QString & i) : QStringList(i) {}
// void QStringList(const QList<QString> &)
MyQStringList(const QList<QString> & l) : QStringList(l) {}
// void QStringList(QList<QString> &&)
MyQStringList(QList<QString> && l) : QStringList(l) {}
// void QStringList(std::initializer_list<QString>)
MyQStringList(std::initializer_list<QString> args) : QStringList(args) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:105
// [-2] void QStringList()
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListC2Ev() {
  return  new QStringList();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:106
// [-2] void QStringList(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListC2ERK7QString(QString* i) {
  return  new QStringList(*i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:107
// [-2] void QStringList(const QList<QString> &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListC2ERK5QListI7QStringE(QList<QString>* l) {
  return  new QStringList(*l);
}

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qstringlist.h:109
// [-2] void QStringList(QList<QString> &&)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListC2EO5QListI7QStringE(QList<QString> && l) {
  return  new QStringList(l);
}
#endif // QT_VERSION >= 0x050400

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qstringlist.h:112
// [-2] void QStringList(std::initializer_list<QString>)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListC2ESt16initializer_listI7QStringE(std::initializer_list<QString> args) {
  return  new QStringList(args);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:115
// [8] QStringList & operator=(const QList<QString> &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListaSERK5QListI7QStringE(void *this_, QList<QString>* other) {
  auto& rv = ((QStringList*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:118
// [8] QStringList & operator=(QList<QString> &&)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListaSEO5QListI7QStringE(void *this_, QList<QString> && other) {
  auto& rv = ((QStringList*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:122
// [1] bool contains(const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringList8containsERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringList*)this_)->contains(*str, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:124
// [8] QStringList operator+(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringListplERKS_(void *this_, QStringList* other) {
  auto rv = ((QStringList*)this_)->operator+(*other);
return new QStringList(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:126
// [8] QStringList & operator<<(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListlsERK7QString(void *this_, QString* str) {
  auto& rv = ((QStringList*)this_)->operator<<(*str);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:128
// [8] QStringList & operator<<(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListlsERKS_(void *this_, QStringList* l) {
  auto& rv = ((QStringList*)this_)->operator<<(*l);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:130
// [8] QStringList & operator<<(const QList<QString> &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListlsERK5QListI7QStringE(void *this_, QList<QString>* l) {
  auto& rv = ((QStringList*)this_)->operator<<(*l);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:134
// [4] int indexOf(const QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfERK7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->indexOf(*rx, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:135
// [4] int lastIndexOf(const QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList11lastIndexOfERK7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(*rx, from);
}

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstringlist.h:136
// [4] int indexOf(QRegExp &, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfER7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->indexOf(*rx, from);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstringlist.h:137
// [4] int lastIndexOf(QRegExp &, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList11lastIndexOfER7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(*rx, from);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstringlist.h:142
// [4] int indexOf(const QRegularExpression &, int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfERK18QRegularExpressioni(void *this_, QRegularExpression* re, int from) {
  return (int)((QStringList*)this_)->indexOf(*re, from);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstringlist.h:143
// [4] int lastIndexOf(const QRegularExpression &, int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList11lastIndexOfERK18QRegularExpressioni(void *this_, QRegularExpression* re, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(*re, from);
}
#endif // QT_VERSION >= 0x050000


extern "C" Q_DECL_EXPORT
void C_ZN11QStringListD2Ev(void *this_) {
  delete (QStringList*)(this_);
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
