//  header block begin
// /usr/include/qt/QtQuick/qsgtextureprovider.h
#ifndef protected
#define protected public
#define private public
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtextureprovider.h:50
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSGTextureProvider11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSGTextureProvider*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtextureprovider.h:50
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QSGTextureProvider11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSGTextureProvider*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtextureprovider.h:50
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSGTextureProvider2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGTextureProvider::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtextureprovider.h:50
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSGTextureProvider6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGTextureProvider::trUtf8(s, c, n);
return new QString(rv);
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
