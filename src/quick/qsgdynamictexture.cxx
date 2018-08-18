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

class Q_DECL_EXPORT MyQSGDynamicTexture : public QSGDynamicTexture {
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGDynamicTexture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSGDynamicTexture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QSGDynamicTexture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSGDynamicTexture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGDynamicTexture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGDynamicTexture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGDynamicTexture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGDynamicTexture::trUtf8(s, c, n);
return new QString(rv);
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
