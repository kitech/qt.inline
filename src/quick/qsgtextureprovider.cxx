//  header block begin
// /usr/include/qt/QtQuick/qsgtextureprovider.h
#ifndef protected
#define protected public
#endif
#include <qsgtextureprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTextureProvider is pure virtual: true
// QSGTextureProvider has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGTextureProvider : public QSGTextureProvider {
public:
  virtual ~MyQSGTextureProvider() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtextureprovider.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSGTextureProvider10metaObjectEv(void *this_) {
  return (void*)((QSGTextureProvider*)this_)->metaObject();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtextureprovider.h:52
// [8] QSGTexture * texture()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSGTextureProvider7textureEv(void *this_) {
  return (void*)((QSGTextureProvider*)this_)->texture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtextureprovider.h:55
// [-2] void textureChanged()
extern "C" Q_DECL_EXPORT
void C_ZN18QSGTextureProvider14textureChangedEv(void *this_) {
  ((QSGTextureProvider*)this_)->textureChanged();
}


extern "C" Q_DECL_EXPORT
void C_ZN18QSGTextureProviderD2Ev(void *this_) {
  delete (QSGTextureProvider*)(this_);
}
//  main block end
