//  header block begin
// /usr/include/qt/QtCore/qstringlist.h
#include <qstringlist.h>
#include <QtCore>

// QStringList is pure virtual: false
//  header block end

//  main block begin

class MyQStringList : public QStringList {
public:
MyQStringList() : QStringList() {}
MyQStringList(const QString & i) : QStringList(i) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:105
// [-2] void QStringList()
extern "C"
void* C_ZN11QStringListC1Ev() {
  (MyQStringList*)(0);
  return  new MyQStringList();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:106
// [-2] void QStringList(const class QString &)
extern "C"
void* C_ZN11QStringListC1ERK7QString(const QString & i) {
  (MyQStringList*)(0);
  return  new MyQStringList(i);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:122
// [1] bool contains(const class QString &, Qt::CaseSensitivity)
extern "C"
bool C_ZNK11QStringList8containsERK7QStringN2Qt15CaseSensitivityE(void *this_, const QString & str, Qt::CaseSensitivity cs) {
  return (bool)((QStringList*)this_)->contains(str, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:123
// [1] bool contains(class QLatin1String, Qt::CaseSensitivity)
extern "C"
bool C_ZNK11QStringList8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *this_, QLatin1String str, Qt::CaseSensitivity cs) {
  return (bool)((QStringList*)this_)->contains(str, cs);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:135
// [4] int indexOf(const class QRegExp &, int)
extern "C"
int C_ZNK11QStringList7indexOfERK7QRegExpi(void *this_, const QRegExp & rx, int from) {
  return (int)((QStringList*)this_)->indexOf(rx, from);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:136
// [4] int lastIndexOf(const class QRegExp &, int)
extern "C"
int C_ZNK11QStringList11lastIndexOfERK7QRegExpi(void *this_, const QRegExp & rx, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(rx, from);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:137
// [4] int indexOf(class QRegExp &, int)
extern "C"
int C_ZNK11QStringList7indexOfER7QRegExpi(void *this_, QRegExp & rx, int from) {
  return (int)((QStringList*)this_)->indexOf(rx, from);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:138
// [4] int lastIndexOf(class QRegExp &, int)
extern "C"
int C_ZNK11QStringList11lastIndexOfER7QRegExpi(void *this_, QRegExp & rx, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(rx, from);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:143
// [4] int indexOf(const class QRegularExpression &, int)
extern "C"
int C_ZNK11QStringList7indexOfERK18QRegularExpressioni(void *this_, const QRegularExpression & re, int from) {
  return (int)((QStringList*)this_)->indexOf(re, from);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:144
// [4] int lastIndexOf(const class QRegularExpression &, int)
extern "C"
int C_ZNK11QStringList11lastIndexOfERK18QRegularExpressioni(void *this_, const QRegularExpression & re, int from) {
  return (int)((QStringList*)this_)->lastIndexOf(re, from);
}
//  main block end
