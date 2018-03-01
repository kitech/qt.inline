//  header block begin
// /usr/include/qt/QtQuick/qsgtexture.h
#ifndef protected
#define protected public
#endif
#include <qsgtexture.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGDynamicTexture is pure virtual: true
// QSGDynamicTexture has virtual projected: false
//  header block end

//  main block begin

class MyQSGDynamicTexture : public QSGDynamicTexture {
public:
  virtual ~MyQSGDynamicTexture() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGDynamicTexture10metaObjectEv(void *this_) {
  return (void*)((QSGDynamicTexture*)this_)->metaObject();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:133
// [1] bool updateTexture()
extern "C" Q_DECL_EXPORT
bool C_ZN17QSGDynamicTexture13updateTextureEv(void *this_) {
  return (bool)((QSGDynamicTexture*)this_)->updateTexture();
}


extern "C" Q_DECL_EXPORT
void C_ZN17QSGDynamicTextureD2Ev(void *this_) {
  delete (QSGDynamicTexture*)(this_);
}
//  main block end
