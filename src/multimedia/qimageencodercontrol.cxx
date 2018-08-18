//  header block begin
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h
#ifndef protected
#define protected public
#endif
#include <qimageencodercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QImageEncoderControl is pure virtual: true
// QImageEncoderControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQImageEncoderControl : public QImageEncoderControl {
public:
  virtual ~MyQImageEncoderControl() {}
// void QImageEncoderControl(QObject *)
MyQImageEncoderControl(QObject * parent) : QImageEncoderControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QImageEncoderControl10metaObjectEv(void *this_) {
  return (void*)((QImageEncoderControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QImageEncoderControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QImageEncoderControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QImageEncoderControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QImageEncoderControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QImageEncoderControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QImageEncoderControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QImageEncoderControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QImageEncoderControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:65
// [-2] void ~QImageEncoderControl()
extern "C" Q_DECL_EXPORT
void C_ZN20QImageEncoderControlD2Ev(void *this_) {
  delete (QImageEncoderControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:67
// [8] QStringList supportedImageCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QImageEncoderControl20supportedImageCodecsEv(void *this_) {
  auto rv = ((QImageEncoderControl*)this_)->supportedImageCodecs();
return new QStringList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:68
// [8] QString imageCodecDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QImageEncoderControl21imageCodecDescriptionERK7QString(void *this_, QString* codecName) {
  auto rv = ((QImageEncoderControl*)this_)->imageCodecDescription(*codecName);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:70
// [8] QList<QSize> supportedResolutions(const QImageEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK20QImageEncoderControl20supportedResolutionsERK21QImageEncoderSettingsPb(void *this_, QImageEncoderSettings* settings, bool * continuous) {
  auto rv = ((QImageEncoderControl*)this_)->supportedResolutions(*settings, continuous);
return new QList<QSize>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:73
// [8] QImageEncoderSettings imageSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QImageEncoderControl13imageSettingsEv(void *this_) {
  auto rv = ((QImageEncoderControl*)this_)->imageSettings();
return new QImageEncoderSettings(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:74
// [-2] void setImageSettings(const QImageEncoderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN20QImageEncoderControl16setImageSettingsERK21QImageEncoderSettings(void *this_, QImageEncoderSettings* settings) {
  ((QImageEncoderControl*)this_)->setImageSettings(*settings);
}

//  main block end
