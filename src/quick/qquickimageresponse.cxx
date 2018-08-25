//  header block begin
// since 0x050600
// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickImageResponse is pure virtual: true
// QQuickImageResponse has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickImageResponse : public QQuickImageResponse {
public:
  virtual ~MyQQuickImageResponse() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QQuickTextureFactory * textureFactory()
  virtual QQuickTextureFactory * textureFactory() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textureFactory", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QQuickTextureFactory *)(irv);
      // Pointer Pointer QQuickTextureFactory *
    } else {
    return (QQuickTextureFactory *){};
  }
  }

// void QQuickImageResponse()
MyQQuickImageResponse() : QQuickImageResponse() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:78
// [8] QQuickTextureFactory * textureFactory()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:73
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQuickImageResponse10metaObjectEv(void *this_) {
  return (void*)((QQuickImageResponse*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:73
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageResponse11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickImageResponse*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:73
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN19QQuickImageResponse11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickImageResponse*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:73
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageResponse2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickImageResponse::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:73
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageResponse6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickImageResponse::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:75
// [-2] void QQuickImageResponse()
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageResponseC2Ev() {
  return  new MyQQuickImageResponse();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:76
// [-2] void ~QQuickImageResponse()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickImageResponseD2Ev(void *this_) {
  delete (QQuickImageResponse*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:78
// [8] QQuickTextureFactory * textureFactory()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQuickImageResponse14textureFactoryEv(void *this_) {
  return (void*)((QQuickImageResponse*)this_)->textureFactory();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:79
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQuickImageResponse11errorStringEv(void *this_) {
  auto rv = ((QQuickImageResponse*)this_)->errorString();
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:82
// [-2] void cancel()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickImageResponse6cancelEv(void *this_) {
  ((QQuickImageResponse*)this_)->cancel();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:85
// [-2] void finished()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickImageResponse8finishedEv(void *this_) {
  ((QQuickImageResponse*)this_)->finished();
}

//  main block end
