//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qxmlstream.h:58
// void QXmlStreamStringRef()
extern "C"
void* C_ZN19QXmlStreamStringRefC1Ev() {
  return new QXmlStreamStringRef();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:59
// void QXmlStreamStringRef(const class QStringRef &)
extern "C"
void* C_ZN19QXmlStreamStringRefC1ERK10QStringRef(const QStringRef & aString) {
  return new QXmlStreamStringRef(aString);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:61
// void QXmlStreamStringRef(const class QString &)
extern "C"
void* C_ZN19QXmlStreamStringRefC1ERK7QString(const QString & aString) {
  return new QXmlStreamStringRef(aString);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:63
// void QXmlStreamStringRef(class QString &&)
extern "C"
void* C_ZN19QXmlStreamStringRefC1EO7QString(QString && aString) {
  return new QXmlStreamStringRef(aString);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:77
// void ~QXmlStreamStringRef()
extern "C"
void C_ZN19QXmlStreamStringRefD1Ev(void *this_) {
  delete (QXmlStreamStringRef*)(this_);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:82
// void swap(class QXmlStreamStringRef &)
extern "C"
void C_ZN19QXmlStreamStringRef4swapERS_(void *this_, QXmlStreamStringRef & other) {
  ((QXmlStreamStringRef*)this_)->swap(other);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:89
// void clear()
extern "C"
void C_ZN19QXmlStreamStringRef5clearEv(void *this_) {
  ((QXmlStreamStringRef*)this_)->clear();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:91
// const QString * string()
extern "C"
void C_ZNK19QXmlStreamStringRef6stringEv(void *this_) {
  /*return*/ ((QXmlStreamStringRef*)this_)->string();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:92
// int position()
extern "C"
void C_ZNK19QXmlStreamStringRef8positionEv(void *this_) {
  /*return*/ ((QXmlStreamStringRef*)this_)->position();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:93
// int size()
extern "C"
void C_ZNK19QXmlStreamStringRef4sizeEv(void *this_) {
  /*return*/ ((QXmlStreamStringRef*)this_)->size();
}
//  main block end
