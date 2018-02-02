//  header block begin
// /usr/include/qt/QtGui/qpdfwriter.h
#include <qpdfwriter.h>
#include <QtGui>
#include "callback_inherit.h"

// QPdfWriter is pure virtual: false
// QPdfWriter has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZNK10QPdfWriter11paintEngineEv_fnptr = 0;
// extern "C" void set_callback_ZNK10QPdfWriter11paintEngineEv(void*cbfn)
// { callback_ZNK10QPdfWriter11paintEngineEv_fnptr = cbfn; }
// void* callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE_fnptr = 0;
// extern "C" void set_callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE(void*cbfn)
// { callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE_fnptr = cbfn; }

class MyQPdfWriter : public QPdfWriter {
public:
  virtual ~MyQPdfWriter() {}
// void QPdfWriter(const class QString &)
MyQPdfWriter(const QString & filename) : QPdfWriter(filename) {}
// void QPdfWriter(class QIODevice *)
MyQPdfWriter(QIODevice * device) : QPdfWriter(device) {}
// QPaintEngine * paintEngine()
  virtual QPaintEngine * paintEngine() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEngine", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintEngine *)(irv);
      // PointerPointerQPaintEngine *
    } else {
    // auto fnptr = ((QPaintEngine * (*)(void* ))(callback_ZNK10QPdfWriter11paintEngineEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QPdfWriter::paintEngine();
  }
  }
// int metric(enum QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric id) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"metric", &handled, 1, (uint64_t)id, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    // auto fnptr = ((int (*)(void* , QPaintDevice::PaintDeviceMetric))(callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this , id);
    // }
    return QPdfWriter::metric(id);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QPdfWriter10metaObjectEv(void *this_) {
  return (void*)((QPdfWriter*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:60
// [-2] void QPdfWriter(const class QString &)
extern "C"
void* C_ZN10QPdfWriterC2ERK7QString(QString* filename) {
  auto _nilp = (MyQPdfWriter*)(0);
  return  new MyQPdfWriter(*filename);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:61
// [-2] void QPdfWriter(class QIODevice *)
extern "C"
void* C_ZN10QPdfWriterC2EP9QIODevice(QIODevice * device) {
  auto _nilp = (MyQPdfWriter*)(0);
  return  new MyQPdfWriter(device);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:62
// [-2] void ~QPdfWriter()
extern "C"
void C_ZN10QPdfWriterD2Ev(void *this_) {
  delete (QPdfWriter*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:64
// [-2] void setPdfVersion(enum QPagedPaintDevice::PdfVersion)
extern "C"
void C_ZN10QPdfWriter13setPdfVersionEN17QPagedPaintDevice10PdfVersionE(void *this_, QPagedPaintDevice::PdfVersion version) {
  ((QPdfWriter*)this_)->setPdfVersion(version);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:65
// [4] QPagedPaintDevice::PdfVersion pdfVersion()
extern "C"
QPagedPaintDevice::PdfVersion C_ZNK10QPdfWriter10pdfVersionEv(void *this_) {
  return (QPagedPaintDevice::PdfVersion)((QPdfWriter*)this_)->pdfVersion();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:67
// [8] QString title()
extern "C"
void* C_ZNK10QPdfWriter5titleEv(void *this_) {
  auto rv = ((QPdfWriter*)this_)->title();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:68
// [-2] void setTitle(const class QString &)
extern "C"
void C_ZN10QPdfWriter8setTitleERK7QString(void *this_, QString* title) {
  ((QPdfWriter*)this_)->setTitle(*title);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:70
// [8] QString creator()
extern "C"
void* C_ZNK10QPdfWriter7creatorEv(void *this_) {
  auto rv = ((QPdfWriter*)this_)->creator();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:71
// [-2] void setCreator(const class QString &)
extern "C"
void C_ZN10QPdfWriter10setCreatorERK7QString(void *this_, QString* creator) {
  ((QPdfWriter*)this_)->setCreator(*creator);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:73
// [1] bool newPage()
extern "C"
bool C_ZN10QPdfWriter7newPageEv(void *this_) {
  return (bool)((QPdfWriter*)this_)->newPage();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:75
// [-2] void setResolution(int)
extern "C"
void C_ZN10QPdfWriter13setResolutionEi(void *this_, int resolution) {
  ((QPdfWriter*)this_)->setResolution(resolution);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:76
// [4] int resolution()
extern "C"
int C_ZNK10QPdfWriter10resolutionEv(void *this_) {
  return (int)((QPdfWriter*)this_)->resolution();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:89
// [-2] void setPageSize(enum QPagedPaintDevice::PageSize)
extern "C"
void C_ZN10QPdfWriter11setPageSizeEN17QPagedPaintDevice8PageSizeE(void *this_, QPagedPaintDevice::PageSize size) {
  ((QPdfWriter*)this_)->setPageSize(size);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:90
// [-2] void setPageSizeMM(const class QSizeF &)
extern "C"
void C_ZN10QPdfWriter13setPageSizeMMERK6QSizeF(void *this_, QSizeF* size) {
  ((QPdfWriter*)this_)->setPageSizeMM(*size);
}
//  main block end
