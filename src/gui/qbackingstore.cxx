//  header block begin

// since 0x050000
// /usr/include/qt/QtGui/qbackingstore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbackingstore.h>
#include <QtGui>
#include "callback_inherit.h"

// QBackingStore is pure virtual: false
// QBackingStore has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQBackingStore_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBackingStore_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBackingStore_t qt_meta_stringdata_MyQBackingStore = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQBackingStore"
  },
  "MyQBackingStore"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBackingStore[] = {
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
class Q_DECL_EXPORT MyQBackingStore : public QBackingStore {
public:
  virtual ~MyQBackingStore() {}
// void QBackingStore(QWindow *)
MyQBackingStore(QWindow * window) : QBackingStore(window) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:62
// [-2] void QBackingStore(QWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QBackingStoreC2EP7QWindow(QWindow * window) {
  return  new QBackingStore(window);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:63
// [-2] void ~QBackingStore()
extern "C" Q_DECL_EXPORT
void C_ZN13QBackingStoreD2Ev(void *this_) {
  delete (QBackingStore*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:65
// [8] QWindow * window()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QBackingStore6windowEv(void *this_) {
  return (void*)((QBackingStore*)this_)->window();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:67
// [8] QPaintDevice * paintDevice()
extern "C" Q_DECL_EXPORT
void* C_ZN13QBackingStore11paintDeviceEv(void *this_) {
  return (void*)((QBackingStore*)this_)->paintDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:69
// [-2] void flush(const QRegion &, QWindow *, const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN13QBackingStore5flushERK7QRegionP7QWindowRK6QPoint(void *this_, QRegion* region, QWindow * window, QPoint* offset) {
  ((QBackingStore*)this_)->flush(*region, window, *offset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:71
// [-2] void resize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN13QBackingStore6resizeERK5QSize(void *this_, QSize* size) {
  ((QBackingStore*)this_)->resize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:72
// [8] QSize size()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QBackingStore4sizeEv(void *this_) {
  auto rv = ((QBackingStore*)this_)->size();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:74
// [1] bool scroll(const QRegion &, int, int)
extern "C" Q_DECL_EXPORT
bool C_ZN13QBackingStore6scrollERK7QRegionii(void *this_, QRegion* area, int dx, int dy) {
  return (bool)((QBackingStore*)this_)->scroll(*area, dx, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:76
// [-2] void beginPaint(const QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN13QBackingStore10beginPaintERK7QRegion(void *this_, QRegion* arg0) {
  ((QBackingStore*)this_)->beginPaint(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:77
// [-2] void endPaint()
extern "C" Q_DECL_EXPORT
void C_ZN13QBackingStore8endPaintEv(void *this_) {
  ((QBackingStore*)this_)->endPaint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:79
// [-2] void setStaticContents(const QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN13QBackingStore17setStaticContentsERK7QRegion(void *this_, QRegion* region) {
  ((QBackingStore*)this_)->setStaticContents(*region);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:80
// [8] QRegion staticContents()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QBackingStore14staticContentsEv(void *this_) {
  auto rv = ((QBackingStore*)this_)->staticContents();
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:81
// [1] bool hasStaticContents()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QBackingStore17hasStaticContentsEv(void *this_) {
  return (bool)((QBackingStore*)this_)->hasStaticContents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbackingstore.h:83
// [8] QPlatformBackingStore * handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QBackingStore6handleEv(void *this_) {
  return (void*)((QBackingStore*)this_)->handle();
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
