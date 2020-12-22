//  header block begin

// /usr/include/qt/QtGui/qpixmap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpixmap.h>
#include <QtGui>
#include "callback_inherit.h"

// QPixmap is pure virtual: false false
// QPixmap has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPixmap_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPixmap_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPixmap_t qt_meta_stringdata_MyQPixmap = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQPixmap"
  },
  "MyQPixmap"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPixmap[] = {
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
class Q_DECL_EXPORT MyQPixmap : public QPixmap {
public:
  virtual ~MyQPixmap() {}
// void QPixmap()
MyQPixmap() : QPixmap() {}
// void QPixmap(QPlatformPixmap *)
MyQPixmap(QPlatformPixmap * data) : QPixmap(data) {}
// void QPixmap(int, int)
MyQPixmap(int w, int h) : QPixmap(w, h) {}
// void QPixmap(const QSize &)
MyQPixmap(const QSize & arg0) : QPixmap(arg0) {}
// void QPixmap(const QString &, const char *, Qt::ImageConversionFlags)
MyQPixmap(const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags) : QPixmap(fileName, format, flags) {}
// void QPixmap(const char *const *)
MyQPixmap(char** xpm) : QPixmap(xpm) {}
// void QPixmap(const QPixmap &)
MyQPixmap(const QPixmap & arg0) : QPixmap(arg0) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QPixmap::metric(arg0);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpixmap(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:64
// [-2] void QPixmap() 
// (11)qm440989401 (15)_ZN7QPixmapC2Ev
/*void* qm440989401()*/{
  auto _nilp = (MyQPixmap*)(0);
  ;
  this_ =  new QPixmap();
  this_ =  new MyQPixmap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:65
// [-2] void QPixmap(QPlatformPixmap *) 
// (11)qm666905070 (32)_ZN7QPixmapC2EP15QPlatformPixmap
/*void* qm666905070(QPlatformPixmap * data)*/{
  auto _nilp = (MyQPixmap*)(0);
  QPlatformPixmap * data = *(QPlatformPixmap **)this_;
  this_ =  new QPixmap(data);
  this_ =  new MyQPixmap(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:66
// [-2] void QPixmap(int, int) 
// (12)qm3559070313 (16)_ZN7QPixmapC2Eii
/*void* qm3559070313(int w, int h)*/{
  auto _nilp = (MyQPixmap*)(0);
  int w = *(int*)this_; int h = *(int*)this_;
  this_ =  new QPixmap(w, h);
  this_ =  new MyQPixmap(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:67
// [-2] void QPixmap(const QSize &) 
// (11)qm731491997 (22)_ZN7QPixmapC2ERK5QSize
/*void* qm731491997(const QSize & arg0)*/{
  auto _nilp = (MyQPixmap*)(0);
  const QSize & arg0 = *(const QSize *)this_;
  this_ =  new QPixmap(arg0);
  this_ =  new MyQPixmap(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:68
// [-2] void QPixmap(const QString &, const char *, Qt::ImageConversionFlags) 
// (12)qm2547731876 (62)_ZN7QPixmapC2ERK7QStringPKc6QFlagsIN2Qt19ImageConversionFlagEE
/*void* qm2547731876(const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags)*/{
  auto _nilp = (MyQPixmap*)(0);
  const QString & fileName = *(const QString *)this_; const char * format = *(const char **)this_; QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  this_ =  new QPixmap(fileName, format, flags);
  this_ =  new MyQPixmap(fileName, format, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:70
// [-2] void QPixmap(const char *const *) 
// (12)qm2811074334 (19)_ZN7QPixmapC2EPKPKc
/*void* qm2811074334(const char *const[] xpm)*/{
  auto _nilp = (MyQPixmap*)(0);
    char * * xpm;
  this_ =  new QPixmap(xpm);
  this_ =  new MyQPixmap(xpm);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:72
// [-2] void QPixmap(const QPixmap &) 
// (12)qm2116370580 (18)_ZN7QPixmapC2ERKS_
/*void* qm2116370580(const QPixmap & arg0)*/{
  auto _nilp = (MyQPixmap*)(0);
  const QPixmap & arg0 = *(const QPixmap *)this_;
  this_ =  new QPixmap(arg0);
  this_ =  new MyQPixmap(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:76
// [32] QPixmap & operator=(QPixmap &&) 
// (12)qm3929229285 (17)_ZN7QPixmapaSEOS_
//static
/*void qm3929229285(QPixmap && other)*/ {
  QPixmap && other =  static_cast<QPixmap &&>(*(QPixmap *)this_);
  (void) ((QPixmap*)this_)->operator=(other);
  // auto xptr = (QPixmap & (QPixmap::*)(QPixmap&&) ) &QPixmap::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:78
// [-2] void swap(QPixmap &) 
// (11)qm802594614 (20)_ZN7QPixmap4swapERS_
//static
/*void qm802594614(QPixmap & other)*/ {
  QPixmap & other = *(QPixmap *)this_;
  (void) ((QPixmap*)this_)->swap(other);
   auto xptr = (void (QPixmap::*)(QPixmap&) ) &QPixmap::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:125
// [32] QPixmap scaled(int, int, Qt::AspectRatioMode, Qt::TransformationMode) const
// (12)qm3407161119 (69)_ZNK7QPixmap6scaledEiiN2Qt15AspectRatioModeENS0_18TransformationModeE
//static
/*void qm3407161119(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode)*/ {
  int w = *(int*)this_; int h = *(int*)this_; Qt::AspectRatioMode aspectMode = *(Qt::AspectRatioMode*)this_; Qt::TransformationMode mode = *(Qt::TransformationMode*)this_;
  (void) ((QPixmap*)this_)->scaled(w, h, aspectMode, mode);
   auto xptr = (QPixmap (QPixmap::*)(int, int, Qt::AspectRatioMode, Qt::TransformationMode) const ) &QPixmap::scaled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:144
// [32] QPixmap fromImage(QImage &&, Qt::ImageConversionFlags) 
// (10)qm27658448 (65)_ZN7QPixmap9fromImageEO6QImage6QFlagsIN2Qt19ImageConversionFlagEE
//static
/*void qm27658448(QImage && image, QFlags<Qt::ImageConversionFlag> flags)*/ {
  QImage && image =  static_cast<QImage &&>(*(QImage *)this_); QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) QPixmap::fromImage(image, flags);
   auto xptr = (QPixmap (*)(QImage&&, QFlags<Qt::ImageConversionFlag>) ) &QPixmap::fromImage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:151
// [1] bool loadFromData(const QByteArray &, const char *, Qt::ImageConversionFlags) 
// (12)qm3197632884 (78)_ZN7QPixmap12loadFromDataERK10QByteArrayPKc6QFlagsIN2Qt19ImageConversionFlagEE
//static
/*void qm3197632884(const QByteArray & data, const char * format, QFlags<Qt::ImageConversionFlag> flags)*/ {
  const QByteArray & data = *(const QByteArray *)this_; const char * format = *(const char **)this_; QFlags<Qt::ImageConversionFlag> flags = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) ((QPixmap*)this_)->loadFromData(data, format, flags);
   auto xptr = (bool (QPixmap::*)(QByteArray const&, char const*, QFlags<Qt::ImageConversionFlag>) ) &QPixmap::loadFromData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:157
// [32] QPixmap copy(int, int, int, int) const
// (9)qm8854263 (22)_ZNK7QPixmap4copyEiiii
//static
/*void qm8854263(int x, int y, int width, int height)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QPixmap*)this_)->copy(x, y, width, height);
   auto xptr = (QPixmap (QPixmap::*)(int, int, int, int) const ) &QPixmap::copy;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:160
// [-2] void scroll(int, int, int, int, int, int, QRegion *) 
// (12)qm3818867091 (34)_ZN7QPixmap6scrollEiiiiiiP7QRegion
//static
/*void qm3818867091(int dx, int dy, int x, int y, int width, int height, QRegion * exposed)*/ {
  int dx = *(int*)this_; int dy = *(int*)this_; int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; QRegion * exposed = *(QRegion **)this_;
  (void) ((QPixmap*)this_)->scroll(dx, dy, x, y, width, height, exposed);
   auto xptr = (void (QPixmap::*)(int, int, int, int, int, int, QRegion*) ) &QPixmap::scroll;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:175
// [1] bool operator!() const
// (11)qm275392843 (16)_ZNK7QPixmapntEv
//static
/*void qm275392843()*/ {
  ;
  (void) ((QPixmap*)this_)->operator!();
  // auto xptr = (bool (QPixmap::*)() const ) &QPixmap::operator!;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:210
// [8] QPixmap::DataPtr & data_ptr() 
// (12)qm1835125237 (22)_ZN7QPixmap8data_ptrEv
//static
/*void qm1835125237()*/ {
  ;
  (void) ((QPixmap*)this_)->data_ptr();
   auto xptr = (QExplicitlySharedDataPointer<QPlatformPixmap> & (QPixmap::*)() ) &QPixmap::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QPixmapD2Ev(void *this_)*/ {
  delete (QPixmap*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpixmap
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
