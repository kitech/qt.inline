//  header block begin
// /usr/include/qt/QtQuick/qsgrendererinterface.h
#include <qsgrendererinterface.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRendererInterface is pure virtual: true
// QSGRendererInterface has virtual projected: false
//  header block end

//  main block begin

class MyQSGRendererInterface : public QSGRendererInterface {
public:
  virtual ~MyQSGRendererInterface() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:86
// [-2] void ~QSGRendererInterface()
extern "C"
void C_ZN20QSGRendererInterfaceD2Ev(void *this_) {
  delete (QSGRendererInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:88
// [4] QSGRendererInterface::GraphicsApi graphicsApi()
extern "C"
QSGRendererInterface::GraphicsApi C_ZNK20QSGRendererInterface11graphicsApiEv(void *this_) {
  return (QSGRendererInterface::GraphicsApi)((QSGRendererInterface*)this_)->graphicsApi();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:90
// [8] void * getResource(class QQuickWindow *, enum QSGRendererInterface::Resource)
extern "C"
void* C_ZNK20QSGRendererInterface11getResourceEP12QQuickWindowNS_8ResourceE(void *this_, QQuickWindow * window, QSGRendererInterface::Resource resource) {
  return (void*)((QSGRendererInterface*)this_)->getResource(window, resource);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:91
// [8] void * getResource(class QQuickWindow *, const char *)
extern "C"
void* C_ZNK20QSGRendererInterface11getResourceEP12QQuickWindowPKc(void *this_, QQuickWindow * window, const char * resource) {
  return (void*)((QSGRendererInterface*)this_)->getResource(window, resource);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:93
// [4] QSGRendererInterface::ShaderType shaderType()
extern "C"
QSGRendererInterface::ShaderType C_ZNK20QSGRendererInterface10shaderTypeEv(void *this_) {
  return (QSGRendererInterface::ShaderType)((QSGRendererInterface*)this_)->shaderType();
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:94
// [4] QSGRendererInterface::ShaderCompilationTypes shaderCompilationType()
extern "C"
void C_ZNK20QSGRendererInterface21shaderCompilationTypeEv(void *this_) {
  auto rv = ((QSGRendererInterface*)this_)->shaderCompilationType();
/*return rv;*/
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:95
// [4] QSGRendererInterface::ShaderSourceTypes shaderSourceType()
extern "C"
void C_ZNK20QSGRendererInterface16shaderSourceTypeEv(void *this_) {
  auto rv = ((QSGRendererInterface*)this_)->shaderSourceType();
/*return rv;*/
}
//  main block end
