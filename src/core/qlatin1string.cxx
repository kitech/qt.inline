//  header block begin
// /usr/include/qt/QtCore/qstring.h
#include <qstring.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qstring.h:93
// void QLatin1String()
extern "C"
void* C_ZN13QLatin1StringC1Ev() {
  return new QLatin1String();
}
// inline
// /usr/include/qt/QtCore/qstring.h:94
// void QLatin1String(const char *)
extern "C"
void* C_ZN13QLatin1StringC1EPKc(const char * s) {
  return new QLatin1String(s);
}
// inline
// /usr/include/qt/QtCore/qstring.h:95
// void QLatin1String(const char *, int)
extern "C"
void* C_ZN13QLatin1StringC1EPKci(const char * s, int sz) {
  return new QLatin1String(s, sz);
}
// inline
// /usr/include/qt/QtCore/qstring.h:96
// void QLatin1String(const class QByteArray &)
extern "C"
void* C_ZN13QLatin1StringC1ERK10QByteArray(const QByteArray & s) {
  return new QLatin1String(s);
}
// inline
// /usr/include/qt/QtCore/qstring.h:98
// const char * latin1()
extern "C"
void C_ZNK13QLatin1String6latin1Ev(void *this_) {
  /*return*/ ((QLatin1String*)this_)->latin1();
}
// inline
// /usr/include/qt/QtCore/qstring.h:99
// int size()
extern "C"
void C_ZNK13QLatin1String4sizeEv(void *this_) {
  /*return*/ ((QLatin1String*)this_)->size();
}
// inline
// /usr/include/qt/QtCore/qstring.h:100
// const char * data()
extern "C"
void C_ZNK13QLatin1String4dataEv(void *this_) {
  /*return*/ ((QLatin1String*)this_)->data();
}
//  main block end
