//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtCore/qxmlstream.h:336
// void ~QXmlStreamEntityResolver()
extern "C"
void C_ZN24QXmlStreamEntityResolverD1Ev(void *this_) {
  delete (QXmlStreamEntityResolver*)(this_);
}
// virtual
// /usr/include/qt/QtCore/qxmlstream.h:337
// QString resolveEntity(const class QString &, const class QString &)
extern "C"
void C_ZN24QXmlStreamEntityResolver13resolveEntityERK7QStringS2_(void *this_, const QString & publicId, const QString & systemId) {
  /*return*/ ((QXmlStreamEntityResolver*)this_)->resolveEntity(publicId, systemId);
}
// virtual
// /usr/include/qt/QtCore/qxmlstream.h:338
// QString resolveUndeclaredEntity(const class QString &)
extern "C"
void C_ZN24QXmlStreamEntityResolver23resolveUndeclaredEntityERK7QString(void *this_, const QString & name) {
  /*return*/ ((QXmlStreamEntityResolver*)this_)->resolveUndeclaredEntity(name);
}
//  main block end
