//  header block begin
// /usr/include/qt/QtGui/qpictureformatplugin.h
#include <qpictureformatplugin.h>
#include <QtGui>

// QPictureFormatPlugin is pure virtual: true
// QPictureFormatPlugin has virtual projected: false
//  header block end

//  main block begin

class MyQPictureFormatPlugin : public QPictureFormatPlugin {
public:
  virtual ~MyQPictureFormatPlugin() {}
// void QPictureFormatPlugin(class QObject *)
MyQPictureFormatPlugin(QObject * parent) : QPictureFormatPlugin(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:61
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK20QPictureFormatPlugin10metaObjectEv(void *this_) {
  return (void*)((QPictureFormatPlugin*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:63
// [-2] void QPictureFormatPlugin(class QObject *)
extern "C"
void* C_ZN20QPictureFormatPluginC1EP7QObject(QObject * parent) {
  return 0; // new QPictureFormatPlugin(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:64
// [-2] void ~QPictureFormatPlugin()
extern "C"
void C_ZN20QPictureFormatPluginD2Ev(void *this_) {
  delete (QPictureFormatPlugin*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:66
// [1] bool loadPicture(const class QString &, const class QString &, class QPicture *)
extern "C"
bool C_ZN20QPictureFormatPlugin11loadPictureERK7QStringS2_P8QPicture(void *this_, QString* format, QString* filename, QPicture * pic) {
  return (bool)((QPictureFormatPlugin*)this_)->loadPicture(*format, *filename, pic);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:67
// [1] bool savePicture(const class QString &, const class QString &, const class QPicture &)
extern "C"
bool C_ZN20QPictureFormatPlugin11savePictureERK7QStringS2_RK8QPicture(void *this_, QString* format, QString* filename, QPicture* pic) {
  return (bool)((QPictureFormatPlugin*)this_)->savePicture(*format, *filename, *pic);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpictureformatplugin.h:68
// [1] bool installIOHandler(const class QString &)
extern "C"
bool C_ZN20QPictureFormatPlugin16installIOHandlerERK7QString(void *this_, QString* format) {
  return (bool)((QPictureFormatPlugin*)this_)->installIOHandler(*format);
}
//  main block end
