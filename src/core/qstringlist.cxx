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
void* C_ZN11QStringListC2ERK5QListI7QStringE(const QList<QString> & l) {
  return  new QStringList(l);
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
void* C_ZN11QStringListaSERK5QListI7QStringE(void *this_, const QList<QString> & other) {
  auto& rv = ((QStringList*)this_)->operator=(other);
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
// since 5.10
// /usr/include/qt/QtCore/qstringlist.h:123
// [1] bool contains(QLatin1String, Qt::CaseSensitivity)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStringList8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String* str, Qt::CaseSensitivity cs) {
  return (bool)((QStringList*)this_)->contains(*str, cs);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:125
// [8] QStringList operator+(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStringListplERKS_(void *this_, QStringList* other) {
  auto rv = ((QStringList*)this_)->operator+(*other);
return new QStringList(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:127
// [8] QStringList & operator<<(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListlsERK7QString(void *this_, QString* str) {
  auto& rv = ((QStringList*)this_)->operator<<(*str);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:129
// [8] QStringList & operator<<(const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListlsERKS_(void *this_, QStringList* l) {
  auto& rv = ((QStringList*)this_)->operator<<(*l);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:131
// [8] QStringList & operator<<(const QList<QString> &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStringListlsERK5QListI7QStringE(void *this_, const QList<QString> & l) {
  auto& rv = ((QStringList*)this_)->operator<<(l);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:135
// [4] int indexOf(const QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfERK7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->indexOf(*rx, from);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:136
// [4] int lastIndexOf(const QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList11lastIndexOfERK7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(*rx, from);
}

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstringlist.h:137
// [4] int indexOf(QRegExp &, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfER7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->indexOf(*rx, from);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtCore/qstringlist.h:138
// [4] int lastIndexOf(QRegExp &, int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList11lastIndexOfER7QRegExpi(void *this_, QRegExp* rx, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(*rx, from);
}
#endif // QT_VERSION >= 0x040500

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstringlist.h:143
// [4] int indexOf(const QRegularExpression &, int)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
int C_ZNK11QStringList7indexOfERK18QRegularExpressioni(void *this_, QRegularExpression* re, int from) {
  return (int)((QStringList*)this_)->indexOf(*re, from);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qstringlist.h:144
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
