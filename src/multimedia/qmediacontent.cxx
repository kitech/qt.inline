//  header block begin

// /usr/include/qt/QtMultimedia/qmediacontent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediacontent.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaContent is pure virtual: false false
// QMediaContent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaContent_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaContent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaContent_t qt_meta_stringdata_MyQMediaContent = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQMediaContent"
  },
  "MyQMediaContent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaContent[] = {
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
class Q_DECL_EXPORT MyQMediaContent : public QMediaContent {
public:
  virtual ~MyQMediaContent() {}
// void QMediaContent()
MyQMediaContent() : QMediaContent() {}
// void QMediaContent(const QUrl &)
MyQMediaContent(const QUrl & contentUrl) : QMediaContent(contentUrl) {}
// void QMediaContent(const QNetworkRequest &)
MyQMediaContent(const QNetworkRequest & contentRequest) : QMediaContent(contentRequest) {}
// void QMediaContent(const QMediaResource &)
MyQMediaContent(const QMediaResource & contentResource) : QMediaContent(contentResource) {}
// void QMediaContent(const QMediaResourceList &)
MyQMediaContent(const QMediaResourceList & resources) : QMediaContent(resources) {}
// void QMediaContent(const QMediaContent &)
MyQMediaContent(const QMediaContent & other) : QMediaContent(other) {}
// void QMediaContent(QMediaPlaylist *, const QUrl &, bool)
MyQMediaContent(QMediaPlaylist * playlist, const QUrl & contentUrl, bool takeOwnership) : QMediaContent(playlist, contentUrl, takeOwnership) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediacontent(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN13QMediaContentD2Ev(void *this_)*/ {
  delete (QMediaContent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediacontent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
