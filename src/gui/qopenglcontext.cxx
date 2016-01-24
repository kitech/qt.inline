// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qopenglcontext.h
// dst-file: /src/gui/qopenglcontext.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglcontext.h>


#include <qsurfaceformat.h>
#include <qpair.h>
#include <qset.h>
#include <qwindowdefs.h>
#include <qvariant.h>
#include <qglobal.h>
#include <qlist.h>
#include <qstandarditemmodel.h>
// <= header block end

// main block begin =>
void __keep_qopenglcontext_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLVersionProfile_Class_Size()
{
  return sizeof(QOpenGLVersionProfile);
}

extern "C"
int QOpenGLContext_Class_Size()
{
  return sizeof(QOpenGLContext);
}

extern "C"
int QOpenGLContextGroup_Class_Size()
{
  return sizeof(QOpenGLContextGroup);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 90, column 10>
//   // proto:  bool QOpenGLVersionProfile::isLegacyVersion();
// _ZNK21QOpenGLVersionProfile15isLegacyVersionEv isLegacyVersion()
extern "C"
bool
C_ZNK21QOpenGLVersionProfile15isLegacyVersionEv(void *qthis) {
  auto ret =
  ((QOpenGLVersionProfile*)qthis)->isLegacyVersion();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QOpenGLVersionProfile::~QOpenGLVersionProfile();
extern "C"
void C_ZN21QOpenGLVersionProfileD2Ev(void *qthis) {
  delete (QOpenGLVersionProfile*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 89, column 10>
//   // proto:  bool QOpenGLVersionProfile::hasProfiles();
// _ZNK21QOpenGLVersionProfile11hasProfilesEv hasProfiles()
extern "C"
bool
C_ZNK21QOpenGLVersionProfile11hasProfilesEv(void *qthis) {
  auto ret =
  ((QOpenGLVersionProfile*)qthis)->hasProfiles();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 77, column 14>
//   // proto:  void QOpenGLVersionProfile::QOpenGLVersionProfile(const QSurfaceFormat & format);
extern "C"
QOpenGLVersionProfile*
C_ZN21QOpenGLVersionProfileC2ERK14QSurfaceFormat(const QSurfaceFormat* arg1) {
  auto ret = new QOpenGLVersionProfile(*((const QSurfaceFormat*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 78, column 5>
//   // proto:  void QOpenGLVersionProfile::QOpenGLVersionProfile(const QOpenGLVersionProfile & other);
extern "C"
QOpenGLVersionProfile*
C_ZN21QOpenGLVersionProfileC2ERKS_(const QOpenGLVersionProfile* arg1) {
  auto ret = new QOpenGLVersionProfile(*((const QOpenGLVersionProfile*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 76, column 5>
//   // proto:  void QOpenGLVersionProfile::QOpenGLVersionProfile();
extern "C"
QOpenGLVersionProfile*
C_ZN21QOpenGLVersionProfileC2Ev() {
  auto ret = new QOpenGLVersionProfile();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 86, column 42>
//   // proto:  QSurfaceFormat::OpenGLContextProfile QOpenGLVersionProfile::profile();
// _ZNK21QOpenGLVersionProfile7profileEv profile()
extern "C"
QSurfaceFormat::OpenGLContextProfile
C_ZNK21QOpenGLVersionProfile7profileEv(void *qthis) {
  auto ret =
  ((QOpenGLVersionProfile*)qthis)->profile();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 83, column 21>
//   // proto:  QPair<int, int> QOpenGLVersionProfile::version();
// _ZNK21QOpenGLVersionProfile7versionEv version()
extern "C"
QPair<int, int>*
C_ZNK21QOpenGLVersionProfile7versionEv(void *qthis) {
  auto ret =
  ((QOpenGLVersionProfile*)qthis)->version();
  return new QPair<int, int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 84, column 10>
//   // proto:  void QOpenGLVersionProfile::setVersion(int majorVersion, int minorVersion);
// _ZN21QOpenGLVersionProfile10setVersionEii setVersion(int, int)
extern "C"
void
C_ZN21QOpenGLVersionProfile10setVersionEii(void *qthis,
int arg1,
int arg2) {
  ((QOpenGLVersionProfile*)qthis)->setVersion(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 91, column 10>
//   // proto:  bool QOpenGLVersionProfile::isValid();
// _ZNK21QOpenGLVersionProfile7isValidEv isValid()
extern "C"
bool
C_ZNK21QOpenGLVersionProfile7isValidEv(void *qthis) {
  auto ret =
  ((QOpenGLVersionProfile*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 87, column 10>
//   // proto:  void QOpenGLVersionProfile::setProfile(QSurfaceFormat::OpenGLContextProfile profile);
// _ZN21QOpenGLVersionProfile10setProfileEN14QSurfaceFormat20OpenGLContextProfileE setProfile(class QSurfaceFormat::OpenGLContextProfile)
extern "C"
void
C_ZN21QOpenGLVersionProfile10setProfileEN14QSurfaceFormat20OpenGLContextProfileE(void *qthis,
QSurfaceFormat::OpenGLContextProfile* arg1) {
  ((QOpenGLVersionProfile*)qthis)->setProfile(*((QSurfaceFormat::OpenGLContextProfile*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 152, column 10>
//   // proto:  bool QOpenGLContext::isValid();
// _ZNK14QOpenGLContext7isValidEv isValid()
extern "C"
bool
C_ZNK14QOpenGLContext7isValidEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 148, column 10>
//   // proto:  void QOpenGLContext::setScreen(QScreen * screen);
// _ZN14QOpenGLContext9setScreenEP7QScreen setScreen(class QScreen *)
extern "C"
void
C_ZN14QOpenGLContext9setScreenEP7QScreen(void *qthis,
QScreen * arg1) {
  ((QOpenGLContext*)qthis)->setScreen(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 143, column 14>
//   // proto:  void QOpenGLContext::QOpenGLContext(QObject * parent);
extern "C"
QOpenGLContext*
C_ZN14QOpenGLContextC2EP7QObject(QObject * arg1) {
  auto ret = new QOpenGLContext(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 176, column 23>
//   // proto:  QOpenGLFunctions * QOpenGLContext::functions();
// _ZNK14QOpenGLContext9functionsEv functions()
extern "C"
void*
C_ZNK14QOpenGLContext9functionsEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->functions();
  return (void*)ret;
}
//   // proto:  void QOpenGLContext::~QOpenGLContext();
extern "C"
void C_ZN14QOpenGLContextD2Ev(void *qthis) {
  delete (QOpenGLContext*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 146, column 10>
//   // proto:  void QOpenGLContext::setFormat(const QSurfaceFormat & format);
// _ZN14QOpenGLContext9setFormatERK14QSurfaceFormat setFormat(const class QSurfaceFormat &)
extern "C"
void
C_ZN14QOpenGLContext9setFormatERK14QSurfaceFormat(void *qthis,
const QSurfaceFormat* arg1) {
  ((QOpenGLContext*)qthis)->setFormat(*((const QSurfaceFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 140, column 5>
//   // proto:  const QMetaObject * QOpenGLContext::metaObject();
// _ZNK14QOpenGLContext10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QOpenGLContext10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 188, column 10>
//   // proto:  bool QOpenGLContext::hasExtension(const QByteArray & extension);
// _ZNK14QOpenGLContext12hasExtensionERK10QByteArray hasExtension(const class QByteArray &)
extern "C"
bool
C_ZNK14QOpenGLContext12hasExtensionERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QOpenGLContext*)qthis)->hasExtension(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 187, column 22>
//   // proto:  QSet<QByteArray> QOpenGLContext::extensions();
// _ZNK14QOpenGLContext10extensionsEv extensions()
extern "C"
QSet<QByteArray>*
C_ZNK14QOpenGLContext10extensionsEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->extensions();
  return new QSet<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 168, column 15>
//   // proto:  QSurface * QOpenGLContext::surface();
// _ZNK14QOpenGLContext7surfaceEv surface()
extern "C"
void*
C_ZNK14QOpenGLContext7surfaceEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->surface();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 178, column 31>
//   // proto:  QAbstractOpenGLFunctions * QOpenGLContext::versionFunctions(const QOpenGLVersionProfile & versionProfile);
// _ZNK14QOpenGLContext16versionFunctionsERK21QOpenGLVersionProfile versionFunctions(const class QOpenGLVersionProfile &)
extern "C"
void*
C_ZNK14QOpenGLContext16versionFunctionsERK21QOpenGLVersionProfile(void *qthis,
const QOpenGLVersionProfile* arg1) {
  auto ret =
  ((QOpenGLContext*)qthis)->versionFunctions(*((const QOpenGLVersionProfile*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 147, column 10>
//   // proto:  void QOpenGLContext::setShareContext(QOpenGLContext * shareContext);
// _ZN14QOpenGLContext15setShareContextEPS_ setShareContext(class QOpenGLContext *)
extern "C"
void
C_ZN14QOpenGLContext15setShareContextEPS_(void *qthis,
QOpenGLContext * arg1) {
  ((QOpenGLContext*)qthis)->setShareContext(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 171, column 17>
//   // proto: static bool QOpenGLContext::areSharing(QOpenGLContext * first, QOpenGLContext * second);
// _ZN14QOpenGLContext10areSharingEPS_S0_ areSharing(class QOpenGLContext *, class QOpenGLContext *)
extern "C"
bool
C_ZN14QOpenGLContext10areSharingEPS_S0_(QOpenGLContext * arg1,
QOpenGLContext * arg2) {
  auto ret =
  QOpenGLContext::areSharing(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 157, column 14>
//   // proto:  QScreen * QOpenGLContext::screen();
// _ZNK14QOpenGLContext6screenEv screen()
extern "C"
void*
C_ZNK14QOpenGLContext6screenEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->screen();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 158, column 14>
//   // proto:  QVariant QOpenGLContext::nativeHandle();
// _ZNK14QOpenGLContext12nativeHandleEv nativeHandle()
extern "C"
QVariant*
C_ZNK14QOpenGLContext12nativeHandleEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->nativeHandle();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 205, column 10>
//   // proto:  void QOpenGLContext::aboutToBeDestroyed();
// _ZN14QOpenGLContext18aboutToBeDestroyedEv aboutToBeDestroyed()
extern "C"
void
C_ZN14QOpenGLContext18aboutToBeDestroyedEv(void *qthis) {
  ((QOpenGLContext*)qthis)->aboutToBeDestroyed();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 199, column 10>
//   // proto:  bool QOpenGLContext::isOpenGLES();
// _ZNK14QOpenGLContext10isOpenGLESEv isOpenGLES()
extern "C"
bool
C_ZNK14QOpenGLContext10isOpenGLESEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->isOpenGLES();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 173, column 29>
//   // proto:  QPlatformOpenGLContext * QOpenGLContext::handle();
// _ZNK14QOpenGLContext6handleEv handle()
extern "C"
void*
C_ZNK14QOpenGLContext6handleEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->handle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 202, column 28>
//   // proto: static QOpenGLContext * QOpenGLContext::globalShareContext();
// _ZN14QOpenGLContext18globalShareContextEv globalShareContext()
extern "C"
void*
C_ZN14QOpenGLContext18globalShareContextEv() {
  auto ret =
  QOpenGLContext::globalShareContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 162, column 10>
//   // proto:  bool QOpenGLContext::makeCurrent(QSurface * surface);
// _ZN14QOpenGLContext11makeCurrentEP8QSurface makeCurrent(class QSurface *)
extern "C"
bool
C_ZN14QOpenGLContext11makeCurrentEP8QSurface(void *qthis,
QSurface * arg1) {
  auto ret =
  ((QOpenGLContext*)qthis)->makeCurrent(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 174, column 29>
//   // proto:  QPlatformOpenGLContext * QOpenGLContext::shareHandle();
// _ZNK14QOpenGLContext11shareHandleEv shareHandle()
extern "C"
void*
C_ZNK14QOpenGLContext11shareHandleEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->shareHandle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 151, column 10>
//   // proto:  bool QOpenGLContext::create();
// _ZN14QOpenGLContext6createEv create()
extern "C"
bool
C_ZN14QOpenGLContext6createEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->create();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 155, column 21>
//   // proto:  QOpenGLContext * QOpenGLContext::shareContext();
// _ZNK14QOpenGLContext12shareContextEv shareContext()
extern "C"
void*
C_ZNK14QOpenGLContext12shareContextEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->shareContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 197, column 29>
//   // proto: static QOpenGLContext::OpenGLModuleType QOpenGLContext::openGLModuleType();
// _ZN14QOpenGLContext16openGLModuleTypeEv openGLModuleType()
extern "C"
QOpenGLContext::OpenGLModuleType
C_ZN14QOpenGLContext16openGLModuleTypeEv() {
  auto ret =
  QOpenGLContext::openGLModuleType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 170, column 28>
//   // proto: static QOpenGLContext * QOpenGLContext::currentContext();
// _ZN14QOpenGLContext14currentContextEv currentContext()
extern "C"
void*
C_ZN14QOpenGLContext14currentContextEv() {
  auto ret =
  QOpenGLContext::currentContext();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 160, column 12>
//   // proto:  GLuint QOpenGLContext::defaultFramebufferObject();
// _ZNK14QOpenGLContext24defaultFramebufferObjectEv defaultFramebufferObject()
extern "C"
unsigned int
C_ZNK14QOpenGLContext24defaultFramebufferObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->defaultFramebufferObject();
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 201, column 17>
//   // proto: static bool QOpenGLContext::supportsThreadedOpenGL();
// _ZN14QOpenGLContext22supportsThreadedOpenGLEv supportsThreadedOpenGL()
extern "C"
bool
C_ZN14QOpenGLContext22supportsThreadedOpenGLEv() {
  auto ret =
  QOpenGLContext::supportsThreadedOpenGL();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 163, column 10>
//   // proto:  void QOpenGLContext::doneCurrent();
// _ZN14QOpenGLContext11doneCurrentEv doneCurrent()
extern "C"
void
C_ZN14QOpenGLContext11doneCurrentEv(void *qthis) {
  ((QOpenGLContext*)qthis)->doneCurrent();
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 156, column 26>
//   // proto:  QOpenGLContextGroup * QOpenGLContext::shareGroup();
// _ZNK14QOpenGLContext10shareGroupEv shareGroup()
extern "C"
void*
C_ZNK14QOpenGLContext10shareGroupEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->shareGroup();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 154, column 20>
//   // proto:  QSurfaceFormat QOpenGLContext::format();
// _ZNK14QOpenGLContext6formatEv format()
extern "C"
QSurfaceFormat*
C_ZNK14QOpenGLContext6formatEv(void *qthis) {
  auto ret =
  ((QOpenGLContext*)qthis)->format();
  return new QSurfaceFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 190, column 18>
//   // proto: static void * QOpenGLContext::openGLModuleHandle();
// _ZN14QOpenGLContext18openGLModuleHandleEv openGLModuleHandle()
extern "C"
void*
C_ZN14QOpenGLContext18openGLModuleHandleEv() {
  auto ret =
  QOpenGLContext::openGLModuleHandle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 149, column 10>
//   // proto:  void QOpenGLContext::setNativeHandle(const QVariant & handle);
// _ZN14QOpenGLContext15setNativeHandleERK8QVariant setNativeHandle(const class QVariant &)
extern "C"
void
C_ZN14QOpenGLContext15setNativeHandleERK8QVariant(void *qthis,
const QVariant* arg1) {
  ((QOpenGLContext*)qthis)->setNativeHandle(*((const QVariant*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 166, column 22>
//   // proto:  QFunctionPointer QOpenGLContext::getProcAddress(const QByteArray & procName);
// _ZNK14QOpenGLContext14getProcAddressERK10QByteArray getProcAddress(const class QByteArray &)
extern "C"
void*
C_ZNK14QOpenGLContext14getProcAddressERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QOpenGLContext*)qthis)->getProcAddress(*((const QByteArray*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 165, column 10>
//   // proto:  void QOpenGLContext::swapBuffers(QSurface * surface);
// _ZN14QOpenGLContext11swapBuffersEP8QSurface swapBuffers(class QSurface *)
extern "C"
void
C_ZN14QOpenGLContext11swapBuffersEP8QSurface(void *qthis,
QSurface * arg1) {
  ((QOpenGLContext*)qthis)->swapBuffers(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 117, column 5>
//   // proto:  const QMetaObject * QOpenGLContextGroup::metaObject();
// _ZNK19QOpenGLContextGroup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QOpenGLContextGroup10metaObjectEv(void *qthis) {
  auto ret =
  ((QOpenGLContextGroup*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 124, column 33>
//   // proto: static QOpenGLContextGroup * QOpenGLContextGroup::currentContextGroup();
// _ZN19QOpenGLContextGroup19currentContextGroupEv currentContextGroup()
extern "C"
void*
C_ZN19QOpenGLContextGroup19currentContextGroupEv() {
  auto ret =
  QOpenGLContextGroup::currentContextGroup();
  return (void*)ret;
}
//   // proto:  void QOpenGLContextGroup::~QOpenGLContextGroup();
extern "C"
void C_ZN19QOpenGLContextGroupD2Ev(void *qthis) {
  delete (QOpenGLContextGroup*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglcontext.h', line 122, column 29>
//   // proto:  QList<QOpenGLContext *> QOpenGLContextGroup::shares();
// _ZNK19QOpenGLContextGroup6sharesEv shares()
extern "C"
QList<QOpenGLContext *>*
C_ZNK19QOpenGLContextGroup6sharesEv(void *qthis) {
  auto ret =
  ((QOpenGLContextGroup*)qthis)->shares();
  return new QList<QOpenGLContext *>(ret); // 5
}
// <= ext block end

// body block begin =>
// QOpenGLContext_SlotProxy here
class QOpenGLContext_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLContext_SlotProxy():QObject(){}

public slots:
  // aboutToBeDestroyed()
  void slot_proxy_func__ZN14QOpenGLContext18aboutToBeDestroyedEv();
public:
  void (*slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QOpenGLContext_SlotProxy* QOpenGLContext_SlotProxy_new()
  {
    return new QOpenGLContext_SlotProxy();
  }
};

void QOpenGLContext_SlotProxy::slot_proxy_func__ZN14QOpenGLContext18aboutToBeDestroyedEv() {
  if (this->slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv(this->rsfptr);
  }
}
extern "C"
void* QOpenGLContext_SlotProxy_connect__ZN14QOpenGLContext18aboutToBeDestroyedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLContext_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv = (decltype(that->slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv))ffifptr;
  QObject::connect((QOpenGLContext*)sender, SIGNAL(aboutToBeDestroyed()), that, SLOT(slot_proxy_func__ZN14QOpenGLContext18aboutToBeDestroyedEv()));
  return that;
}
extern "C"
void QOpenGLContext_SlotProxy_disconnect__ZN14QOpenGLContext18aboutToBeDestroyedEv(QOpenGLContext_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QOpenGLContextGroup_SlotProxy here
class QOpenGLContextGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLContextGroup_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qopenglcontext.moc"

extern "C" {
  QOpenGLContextGroup_SlotProxy* QOpenGLContextGroup_SlotProxy_new()
  {
    return new QOpenGLContextGroup_SlotProxy();
  }
};

// <= body block end

