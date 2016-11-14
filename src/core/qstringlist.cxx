// /usr/include/qt/QtCore/qstringlist.h
#include <qstringlist.h>
#include <QtCore>

// inline
// /usr/include/qt/QtCore/qstringlist.h:104
// void QStringList()
extern "C"
void* C_ZN11QStringListC1Ev() {
  return new QStringList();
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:105
// void QStringList(const class QString &)
extern "C"
void* C_ZN11QStringListC1ERK7QString(const QString & i) {
  return new QStringList(i);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:106
// void QStringList(const QList<class QString> &)
extern "C"
void* C_ZN11QStringListC1ERK5QListI7QStringE(const QList<QString> & l) {
  return new QStringList(l);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:108
// void QStringList(QList<class QString> &&)
extern "C"
void* C_ZN11QStringListC1EO5QListI7QStringE(QList<QString> && l) {
  return new QStringList(l);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:111
// void QStringList(std::initializer_list<QString>)
extern "C"
void* C_ZN11QStringListC1ESt16initializer_listI7QStringE(std::initializer_list<QString> args) {
  return new QStringList(args);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:121
// bool contains(const class QString &, Qt::CaseSensitivity)
extern "C"
void C_ZNK11QStringList8containsERK7QStringN2Qt15CaseSensitivityE(void *this_, const QString & str, Qt::CaseSensitivity cs) {
  /*return*/ ((QStringList*)this_)->contains(str, cs);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:133
// int indexOf(const class QRegExp &, int)
extern "C"
void C_ZNK11QStringList7indexOfERK7QRegExpi(void *this_, const QRegExp & rx, int from) {
  /*return*/ ((QStringList*)this_)->indexOf(rx, from);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:134
// int lastIndexOf(const class QRegExp &, int)
extern "C"
void C_ZNK11QStringList11lastIndexOfERK7QRegExpi(void *this_, const QRegExp & rx, int from) {
  /*return*/ ((QStringList*)this_)->lastIndexOf(rx, from);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:135
// int indexOf(class QRegExp &, int)
extern "C"
void C_ZNK11QStringList7indexOfER7QRegExpi(void *this_, QRegExp & rx, int from) {
  /*return*/ ((QStringList*)this_)->indexOf(rx, from);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:136
// int lastIndexOf(class QRegExp &, int)
extern "C"
void C_ZNK11QStringList11lastIndexOfER7QRegExpi(void *this_, QRegExp & rx, int from) {
  /*return*/ ((QStringList*)this_)->lastIndexOf(rx, from);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:141
// int indexOf(const class QRegularExpression &, int)
extern "C"
void C_ZNK11QStringList7indexOfERK18QRegularExpressioni(void *this_, const QRegularExpression & re, int from) {
  /*return*/ ((QStringList*)this_)->indexOf(re, from);
}
// inline
// /usr/include/qt/QtCore/qstringlist.h:142
// int lastIndexOf(const class QRegularExpression &, int)
extern "C"
void C_ZNK11QStringList11lastIndexOfERK18QRegularExpressioni(void *this_, const QRegularExpression & re, int from) {
  /*return*/ ((QStringList*)this_)->lastIndexOf(re, from);
}