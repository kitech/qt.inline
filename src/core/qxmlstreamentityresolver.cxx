//  header block begin
// /usr/include/qt/QtCore/qxmlstream.h
#include <qxmlstream.h>
#include <QtCore>

// QXmlStreamEntityResolver is pure virtual: false
//  header block end

//  main block begin

class MyQXmlStreamEntityResolver : public QXmlStreamEntityResolver {
public:
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:336
// [-2] void ~QXmlStreamEntityResolver()
extern "C"
void C_ZN24QXmlStreamEntityResolverD1Ev(void *this_) {
  delete (QXmlStreamEntityResolver*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:337
// [8] QString resolveEntity(const class QString &, const class QString &)
extern "C"
void* C_ZN24QXmlStreamEntityResolver13resolveEntityERK7QStringS2_(void *this_, const QString & publicId, const QString & systemId) {
  auto rv = ((QXmlStreamEntityResolver*)this_)->resolveEntity(publicId, systemId);
return new QString(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:338
// [8] QString resolveUndeclaredEntity(const class QString &)
extern "C"
void* C_ZN24QXmlStreamEntityResolver23resolveUndeclaredEntityERK7QString(void *this_, const QString & name) {
  auto rv = ((QXmlStreamEntityResolver*)this_)->resolveUndeclaredEntity(name);
return new QString(rv);
}
//  main block end
