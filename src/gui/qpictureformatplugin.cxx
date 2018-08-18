//  header block begin
// /usr/include/qt/QtGui/qpictureformatplugin.h
#ifndef protected
#define protected public
#endif
#include <qpictureformatplugin.h>
#include <QtGui>
#include "callback_inherit.h"

// QPictureFormatPlugin is pure virtual: true
// QPictureFormatPlugin has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPictureFormatPlugin : public QPictureFormatPlugin {
public:
  virtual ~MyQPictureFormatPlugin() {}
// void QPictureFormatPlugin(QObject *)
MyQPictureFormatPlugin(QObject * parent) : QPictureFormatPlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QPictureFormatPlugin10metaObjectEv(void *this_) {
  return (void*)((QPictureFormatPlugin*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QPictureFormatPlugin11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPictureFormatPlugin*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QPictureFormatPlugin11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPictureFormatPlugin*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QPictureFormatPlugin2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPictureFormatPlugin::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QPictureFormatPlugin6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPictureFormatPlugin::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:63
// [-2] void QPictureFormatPlugin(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QPictureFormatPluginC2EP7QObject(QObject * parent) {
  return 0; // new QPictureFormatPlugin(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:64
// [-2] void ~QPictureFormatPlugin()
extern "C" Q_DECL_EXPORT
void C_ZN20QPictureFormatPluginD2Ev(void *this_) {
  delete (QPictureFormatPlugin*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:66
// [1] bool loadPicture(const QString &, const QString &, QPicture *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QPictureFormatPlugin11loadPictureERK7QStringS2_P8QPicture(void *this_, QString* format, QString* filename, QPicture * pic) {
  return (bool)((QPictureFormatPlugin*)this_)->loadPicture(*format, *filename, pic);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:67
// [1] bool savePicture(const QString &, const QString &, const QPicture &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QPictureFormatPlugin11savePictureERK7QStringS2_RK8QPicture(void *this_, QString* format, QString* filename, QPicture* pic) {
  return (bool)((QPictureFormatPlugin*)this_)->savePicture(*format, *filename, *pic);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:68
// [1] bool installIOHandler(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QPictureFormatPlugin16installIOHandlerERK7QString(void *this_, QString* format) {
  return (bool)((QPictureFormatPlugin*)this_)->installIOHandler(*format);
}

//  main block end
