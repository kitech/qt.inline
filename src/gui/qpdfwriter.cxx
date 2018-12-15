//  header block begin

// /usr/include/qt/QtGui/qpdfwriter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpdfwriter.h>
#include <QtGui>
#include "callback_inherit.h"

// QPdfWriter is pure virtual: false
// QPdfWriter has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPdfWriter_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPdfWriter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPdfWriter_t qt_meta_stringdata_MyQPdfWriter = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQPdfWriter"
  },
  "MyQPdfWriter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPdfWriter[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQPdfWriter : public QPdfWriter {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QPdfWriter::staticMetaObject,
  qt_meta_stringdata_MyQPdfWriter.data,
  qt_meta_data_MyQPdfWriter,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQPdfWriter.stringdata0))
      return static_cast<void*>(this);
  return QPdfWriter::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QPdfWriter::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQPdfWriter() {}
// void QPdfWriter(const QString &)
MyQPdfWriter(const QString & filename) : QPdfWriter(filename) {}
// void QPdfWriter(QIODevice *)
MyQPdfWriter(QIODevice * device) : QPdfWriter(device) {}
// Protected virtual Visibility=Default Availability=Available
// [8] QPaintEngine * paintEngine()
  virtual QPaintEngine * paintEngine() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEngine", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintEngine *)(irv);
      // Pointer Pointer QPaintEngine *
    } else {
    return QPdfWriter::paintEngine();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric id) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)id, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QPdfWriter::metric(id);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QPdfWriter_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQPdfWriter* qo = (MyQPdfWriter*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:95
// [8] QPaintEngine * paintEngine()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QPdfWriter11paintEngineEv(void *this_) {
  return (void*)((QPdfWriter*)this_)->QPdfWriter::paintEngine();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:96
// [4] int metric(QPaintDevice::PaintDeviceMetric)
extern "C" Q_DECL_EXPORT
int C_ZNK10QPdfWriter6metricEN12QPaintDevice17PaintDeviceMetricE(void *this_, QPaintDevice::PaintDeviceMetric id) {
  return (int)((QPdfWriter*)this_)->QPdfWriter::metric(id);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QPdfWriter10metaObjectEv(void *this_) {
  return (void*)((QPdfWriter*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QPdfWriter11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPdfWriter*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QPdfWriter11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPdfWriter*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QPdfWriter2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPdfWriter::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QPdfWriter6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPdfWriter::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:60
// [-2] void QPdfWriter(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QPdfWriterC2ERK7QString(QString* filename) {
  auto _nilp = (MyQPdfWriter*)(0);
  return  new MyQPdfWriter(*filename);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:61
// [-2] void QPdfWriter(QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QPdfWriterC2EP9QIODevice(QIODevice * device) {
  auto _nilp = (MyQPdfWriter*)(0);
  return  new MyQPdfWriter(device);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:62
// [-2] void ~QPdfWriter()
extern "C" Q_DECL_EXPORT
void C_ZN10QPdfWriterD2Ev(void *this_) {
  delete (QPdfWriter*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qpdfwriter.h:64
// [-2] void setPdfVersion(QPagedPaintDevice::PdfVersion)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void C_ZN10QPdfWriter13setPdfVersionEN17QPagedPaintDevice10PdfVersionE(void *this_, QPagedPaintDevice::PdfVersion version) {
  ((QPdfWriter*)this_)->setPdfVersion(version);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qpdfwriter.h:65
// [4] QPagedPaintDevice::PdfVersion pdfVersion()
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
QPagedPaintDevice::PdfVersion C_ZNK10QPdfWriter10pdfVersionEv(void *this_) {
  return (QPagedPaintDevice::PdfVersion)((QPdfWriter*)this_)->pdfVersion();
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:67
// [8] QString title()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QPdfWriter5titleEv(void *this_) {
  auto rv = ((QPdfWriter*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:68
// [-2] void setTitle(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QPdfWriter8setTitleERK7QString(void *this_, QString* title) {
  ((QPdfWriter*)this_)->setTitle(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:70
// [8] QString creator()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QPdfWriter7creatorEv(void *this_) {
  auto rv = ((QPdfWriter*)this_)->creator();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:71
// [-2] void setCreator(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QPdfWriter10setCreatorERK7QString(void *this_, QString* creator) {
  ((QPdfWriter*)this_)->setCreator(*creator);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:73
// [1] bool newPage()
extern "C" Q_DECL_EXPORT
bool C_ZN10QPdfWriter7newPageEv(void *this_) {
  return (bool)((QPdfWriter*)this_)->newPage();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpdfwriter.h:75
// [-2] void setResolution(int)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN10QPdfWriter13setResolutionEi(void *this_, int resolution) {
  ((QPdfWriter*)this_)->setResolution(resolution);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpdfwriter.h:76
// [4] int resolution()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
int C_ZNK10QPdfWriter10resolutionEv(void *this_) {
  return (int)((QPdfWriter*)this_)->resolution();
}
#endif // QT_VERSION >= 0x050300

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:89
// [-2] void setPageSize(QPagedPaintDevice::PageSize)
extern "C" Q_DECL_EXPORT
void C_ZN10QPdfWriter11setPageSizeEN17QPagedPaintDevice8PageSizeE(void *this_, QPagedPaintDevice::PageSize size) {
  ((QPdfWriter*)this_)->setPageSize(size);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:90
// [-2] void setPageSizeMM(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN10QPdfWriter13setPageSizeMMERK6QSizeF(void *this_, QSizeF* size) {
  ((QPdfWriter*)this_)->setPageSizeMM(*size);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpdfwriter.h:92
// [-2] void setMargins(const QPagedPaintDevice::Margins &)
extern "C" Q_DECL_EXPORT
void C_ZN10QPdfWriter10setMarginsERKN17QPagedPaintDevice7MarginsE(void *this_, QPagedPaintDevice::Margins* m) {
  ((QPdfWriter*)this_)->setMargins(*m);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
