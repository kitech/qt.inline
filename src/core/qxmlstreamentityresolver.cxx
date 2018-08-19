//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamEntityResolver is pure virtual: false
// QXmlStreamEntityResolver has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQXmlStreamEntityResolver : public QXmlStreamEntityResolver {
public:
  virtual ~MyQXmlStreamEntityResolver() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:336
// [-2] void ~QXmlStreamEntityResolver()
extern "C" Q_DECL_EXPORT
void C_ZN24QXmlStreamEntityResolverD2Ev(void *this_) {
  delete (QXmlStreamEntityResolver*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:337
// [8] QString resolveEntity(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QXmlStreamEntityResolver13resolveEntityERK7QStringS2_(void *this_, QString* publicId, QString* systemId) {
  auto rv = ((QXmlStreamEntityResolver*)this_)->resolveEntity(*publicId, *systemId);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:338
// [8] QString resolveUndeclaredEntity(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QXmlStreamEntityResolver23resolveUndeclaredEntityERK7QString(void *this_, QString* name) {
  auto rv = ((QXmlStreamEntityResolver*)this_)->resolveUndeclaredEntity(*name);
return new QString(rv);
}

//  main block end
