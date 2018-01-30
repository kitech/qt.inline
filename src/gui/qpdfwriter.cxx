//  header block begin
// /usr/include/qt/QtGui/qpdfwriter.h
#include <qpdfwriter.h>
#include <QtGui>

// QPdfWriter is pure virtual: false
// QPdfWriter has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:95
// [8] QPaintEngine * paintEngine()
extern "C"
void* callback_ZNK10QPdfWriter11paintEngineEv = 0;
extern "C" void set_callback_ZNK10QPdfWriter11paintEngineEv(void*cbfn)
{ callback_ZNK10QPdfWriter11paintEngineEv = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:96
// [4] int metric(enum QPaintDevice::PaintDeviceMetric)
extern "C"
void* callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE = 0;
extern "C" void set_callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE(void*cbfn)
{ callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE = cbfn; }

class MyQPdfWriter : public QPdfWriter {
public:
  virtual ~MyQPdfWriter() {}
// void QPdfWriter(const class QString &)
MyQPdfWriter(const QString & filename) : QPdfWriter(filename) {}
// void QPdfWriter(class QIODevice *)
MyQPdfWriter(QIODevice * device) : QPdfWriter(device) {}
// QPaintEngine * paintEngine()
  virtual QPaintEngine * paintEngine() {
    if (callback_ZNK10QPdfWriter11paintEngineEv != 0) {
      // callback_ZNK10QPdfWriter11paintEngineEv();
    }
    return QPdfWriter::paintEngine();
  }
// int metric(enum QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric id) {
    if (callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE != 0) {
      // callback_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE(id);
    }
    return QPdfWriter::metric(id);
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
void* C_ZN10QPdfWriterC2ERK7QString(const QString & filename) {
  auto _nilp = (MyQPdfWriter*)(0);
  return  new MyQPdfWriter(filename);
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
void C_ZN10QPdfWriter8setTitleERK7QString(void *this_, const QString & title) {
  ((QPdfWriter*)this_)->setTitle(title);
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
void C_ZN10QPdfWriter10setCreatorERK7QString(void *this_, const QString & creator) {
  ((QPdfWriter*)this_)->setCreator(creator);
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
void C_ZN10QPdfWriter13setPageSizeMMERK6QSizeF(void *this_, const QSizeF & size) {
  ((QPdfWriter*)this_)->setPageSizeMM(size);
}
//  main block end
