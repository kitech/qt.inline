//  header block begin

// /usr/include/qt/QtMultimedia/qmediaresource.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaresource.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaResource is pure virtual: false false
// QMediaResource has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaResource_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaResource_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaResource_t qt_meta_stringdata_MyQMediaResource = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQMediaResource"
  },
  "MyQMediaResource"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaResource[] = {
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
class Q_DECL_EXPORT MyQMediaResource : public QMediaResource {
public:
  virtual ~MyQMediaResource() {}
// void QMediaResource()
MyQMediaResource() : QMediaResource() {}
// void QMediaResource(const QUrl &, const QString &)
MyQMediaResource(const QUrl & url, const QString & mimeType) : QMediaResource(url, mimeType) {}
// void QMediaResource(const QNetworkRequest &, const QString &)
MyQMediaResource(const QNetworkRequest & request, const QString & mimeType) : QMediaResource(request, mimeType) {}
// void QMediaResource(const QMediaResource &)
MyQMediaResource(const QMediaResource & other) : QMediaResource(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaresource(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:56
// [-2] void QMediaResource() 
// (12)qm1810597091 (23)_ZN14QMediaResourceC2Ev
/*void* qm1810597091()*/{
  ;
  this_ =  new QMediaResource();
  this_ =  new MyQMediaResource();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:57
// [-2] void QMediaResource(const QUrl &, const QString &) 
// (12)qm1561323774 (39)_ZN14QMediaResourceC2ERK4QUrlRK7QString
/*void* qm1561323774(const QUrl & url, const QString & mimeType)*/{
  const QUrl & url = *(const QUrl *)this_; const QString & mimeType = *(const QString *)this_;
  this_ =  new QMediaResource(url, mimeType);
  this_ =  new MyQMediaResource(url, mimeType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:58
// [-2] void QMediaResource(const QNetworkRequest &, const QString &) 
// (12)qm1003722228 (51)_ZN14QMediaResourceC2ERK15QNetworkRequestRK7QString
/*void* qm1003722228(const QNetworkRequest & request, const QString & mimeType)*/{
  const QNetworkRequest & request = *(const QNetworkRequest *)this_; const QString & mimeType = *(const QString *)this_;
  this_ =  new QMediaResource(request, mimeType);
  this_ =  new MyQMediaResource(request, mimeType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaresource.h:59
// [-2] void QMediaResource(const QMediaResource &) 
// (10)qm84920709 (26)_ZN14QMediaResourceC2ERKS_
/*void* qm84920709(const QMediaResource & other)*/{
  const QMediaResource & other = *(const QMediaResource *)this_;
  this_ =  new QMediaResource(other);
  this_ =  new MyQMediaResource(other);
}


/*void C_ZN14QMediaResourceD2Ev(void *this_)*/ {
  delete (QMediaResource*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaresource
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
