//  header block begin
// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickImageResponse is pure virtual: true
// QQuickImageResponse has virtual projected: false
//  header block end

//  main block begin

class MyQQuickImageResponse : public QQuickImageResponse {
public:
  virtual ~MyQQuickImageResponse() {}
// void QQuickImageResponse()
MyQQuickImageResponse() : QQuickImageResponse() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:73
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QQuickImageResponse10metaObjectEv(void *this_) {
  return (void*)((QQuickImageResponse*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:75
// [-2] void QQuickImageResponse()
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageResponseC2Ev() {
  return 0; // new QQuickImageResponse();
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
