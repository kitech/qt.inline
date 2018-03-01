//  header block begin
// /usr/include/qt/QtCore/qstringlist.h
#ifndef protected
#define protected public
#endif
#include <qstringlist.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringList is pure virtual: false
// QStringList has virtual projected: false
//  header block end

//  main block begin

class MyQStringList : public QStringList {
public:
  virtual ~MyQStringList() {}
// void QStringList()
MyQStringList() : QStringList() {}
// void QStringList(const class QString &)
MyQStringList(const QString & i) : QStringList(i) {}
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
// [-2] void QStringList(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListC2ERK7QString(QString* i) {
  return  new QStringList(*i);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:122
// [1] bool contains(const class QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringList8containsERK7QStringN2Qt15CaseSensitivityE(void *this_, QString* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringList*)this_)->contains(*str, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:123
// [1] bool contains(class QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringList8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringList*)this_)->contains(*str, cs);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:125
// [8] QStringList operator+(const class QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringListplERKS_(void *this_, QStringList* other) {
  auto rv = ((QStringList*)this_)->operator+(*other);
return new QStringList(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:127
// [8] QStringList & operator<<(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListlsERK7QString(void *this_, QString* str) {
  auto& rv = ((QStringList*)this_)->operator<<(*str);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:129
// [8] QStringList & operator<<(const class QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListlsERKS_(void *this_, QStringList* l) {
  auto& rv = ((QStringList*)this_)->operator<<(*l);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:135
// [4] int indexOf(const class QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfERK7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->indexOf(*rx, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:136
// [4] int lastIndexOf(const class QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList11lastIndexOfERK7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(*rx, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:137
// [4] int indexOf(class QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfER7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->indexOf(*rx, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:138
// [4] int lastIndexOf(class QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList11lastIndexOfER7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(*rx, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:143
// [4] int indexOf(const class QRegularExpression &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfERK18QRegularExpressioni(void *this_, QRegularExpression* re, int from) {
  return (int)((QStringList*)this_)->indexOf(*re, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:144
// [4] int lastIndexOf(const class QRegularExpression &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList11lastIndexOfERK18QRegularExpressioni(void *this_, QRegularExpression* re, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(*re, from);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QStringListD2Ev(void *this_) {
  delete (QStringList*)(this_);
}
//  main block end
