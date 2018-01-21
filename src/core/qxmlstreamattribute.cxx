//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qxmlstream.h:109
// void QXmlStreamAttribute()
extern "C"
void* C_ZN19QXmlStreamAttributeC1Ev() {
  return new QXmlStreamAttribute();
}
// /usr/include/qt/QtCore/qxmlstream.h:110
// void QXmlStreamAttribute(const class QString &, const class QString &)
extern "C"
void* C_ZN19QXmlStreamAttributeC1ERK7QStringS2_(const QString & qualifiedName, const QString & value) {
  return new QXmlStreamAttribute(qualifiedName, value);
}
// /usr/include/qt/QtCore/qxmlstream.h:112
// void QXmlStreamAttribute(const class QString &, const class QString &, const class QString &)
extern "C"
void* C_ZN19QXmlStreamAttributeC1ERK7QStringS2_S2_(const QString & namespaceUri, const QString & name, const QString & value) {
  return new QXmlStreamAttribute(namespaceUri, name, value);
}
// /usr/include/qt/QtCore/qxmlstream.h:137
// void ~QXmlStreamAttribute()
extern "C"
void C_ZN19QXmlStreamAttributeD1Ev(void *this_) {
  delete (QXmlStreamAttribute*)(this_);
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:140
// QStringRef namespaceUri()
extern "C"
void C_ZNK19QXmlStreamAttribute12namespaceUriEv(void *this_) {
  /*return*/ ((QXmlStreamAttribute*)this_)->namespaceUri();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:141
// QStringRef name()
extern "C"
void C_ZNK19QXmlStreamAttribute4nameEv(void *this_) {
  /*return*/ ((QXmlStreamAttribute*)this_)->name();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:142
// QStringRef qualifiedName()
extern "C"
void C_ZNK19QXmlStreamAttribute13qualifiedNameEv(void *this_) {
  /*return*/ ((QXmlStreamAttribute*)this_)->qualifiedName();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:143
// QStringRef prefix()
extern "C"
void C_ZNK19QXmlStreamAttribute6prefixEv(void *this_) {
  /*return*/ ((QXmlStreamAttribute*)this_)->prefix();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:148
// QStringRef value()
extern "C"
void C_ZNK19QXmlStreamAttribute5valueEv(void *this_) {
  /*return*/ ((QXmlStreamAttribute*)this_)->value();
}
// inline
// /usr/include/qt/QtCore/qxmlstream.h:149
// bool isDefault()
extern "C"
void C_ZNK19QXmlStreamAttribute9isDefaultEv(void *this_) {
  /*return*/ ((QXmlStreamAttribute*)this_)->isDefault();
}
//  main block end
