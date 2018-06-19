//  header block begin
// since 0x040300
// /usr/include/qt/QtSvg/qsvggenerator.h
#ifndef protected
#define protected public
#endif
#include <qsvggenerator.h>
#include <QtSvg>
#include "callback_inherit.h"

// QSvgGenerator is pure virtual: false
// QSvgGenerator has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSvgGenerator : public QSvgGenerator {
public:
  virtual ~MyQSvgGenerator() {}
// void QSvgGenerator()
MyQSvgGenerator() : QSvgGenerator() {}
// Protected virtual Visibility=Default Availability=Available
// QPaintEngine * paintEngine()
  virtual QPaintEngine * paintEngine() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEngine", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintEngine *)(irv);
      // PointerPointerQPaintEngine *
    } else {
    return QSvgGenerator::paintEngine();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QSvgGenerator::metric(metric);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:96
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSvgGenerator11paintEngineEv(void *this_) {
  return (void*)((QSvgGenerator*)this_)->QSvgGenerator::paintEngine();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:97
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK13QSvgGenerator6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric metric) {
  return (int)((QSvgGenerator*)this_)->QSvgGenerator::metric(metric);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:70
// [-2] void QSvgGenerator()
extern "C" Q_DECL_EXPORT
void* C_ZN13QSvgGeneratorC2Ev() {
  auto _nilp = (MyQSvgGenerator*)(0);
  return  new MyQSvgGenerator();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:71
// [-2] void ~QSvgGenerator()
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGeneratorD2Ev(void *this_) {
  delete (QSvgGenerator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:73
// [8] QString title()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSvgGenerator5titleEv(void *this_) {
  auto rv = ((QSvgGenerator*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:74
// [-2] void setTitle(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGenerator8setTitleERK7QString(void *this_, QString* title) {
  ((QSvgGenerator*)this_)->setTitle(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:76
// [8] QString description()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSvgGenerator11descriptionEv(void *this_) {
  auto rv = ((QSvgGenerator*)this_)->description();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:77
// [-2] void setDescription(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGenerator14setDescriptionERK7QString(void *this_, QString* description) {
  ((QSvgGenerator*)this_)->setDescription(*description);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:79
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSvgGenerator4sizeEv(void *this_) {
  auto rv = ((QSvgGenerator*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:80
// [-2] void setSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGenerator7setSizeERK5QSize(void *this_, QSize* size) {
  ((QSvgGenerator*)this_)->setSize(*size);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtSvg/qsvggenerator.h:82
// [16] QRect viewBox()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSvgGenerator7viewBoxEv(void *this_) {
  auto rv = ((QSvgGenerator*)this_)->viewBox();
return new QRect(rv);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:83
// [32] QRectF viewBoxF()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSvgGenerator8viewBoxFEv(void *this_) {
  auto rv = ((QSvgGenerator*)this_)->viewBoxF();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:84
// [-2] void setViewBox(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGenerator10setViewBoxERK5QRect(void *this_, QRect* viewBox) {
  ((QSvgGenerator*)this_)->setViewBox(*viewBox);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:85
// [-2] void setViewBox(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGenerator10setViewBoxERK6QRectF(void *this_, QRectF* viewBox) {
  ((QSvgGenerator*)this_)->setViewBox(*viewBox);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:87
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSvgGenerator8fileNameEv(void *this_) {
  auto rv = ((QSvgGenerator*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:88
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGenerator11setFileNameERK7QString(void *this_, QString* fileName) {
  ((QSvgGenerator*)this_)->setFileName(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:90
// [8] QIODevice * outputDevice()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSvgGenerator12outputDeviceEv(void *this_) {
  return (void*)((QSvgGenerator*)this_)->outputDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:91
// [-2] void setOutputDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGenerator15setOutputDeviceEP9QIODevice(void *this_, QIODevice * outputDevice) {
  ((QSvgGenerator*)this_)->setOutputDevice(outputDevice);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:93
// [-2] void setResolution(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QSvgGenerator13setResolutionEi(void *this_, int dpi) {
  ((QSvgGenerator*)this_)->setResolution(dpi);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvggenerator.h:94
// [4] int resolution()
extern "C" Q_DECL_EXPORT
int C_ZNK13QSvgGenerator10resolutionEv(void *this_) {
  return (int)((QSvgGenerator*)this_)->resolution();
}

//  main block end
