//  header block begin

// /usr/include/qt/QtMultimedia/qvideoframe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvideoframe.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoFrame is pure virtual: false false
// QVideoFrame has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVideoFrame_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoFrame_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoFrame_t qt_meta_stringdata_MyQVideoFrame = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQVideoFrame"
  },
  "MyQVideoFrame"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoFrame[] = {
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
class Q_DECL_EXPORT MyQVideoFrame : public QVideoFrame {
public:
  virtual ~MyQVideoFrame() {}
// void QVideoFrame()
MyQVideoFrame() : QVideoFrame() {}
// void QVideoFrame(QAbstractVideoBuffer *, const QSize &, QVideoFrame::PixelFormat)
MyQVideoFrame(QAbstractVideoBuffer * buffer, const QSize & size, QVideoFrame::PixelFormat format) : QVideoFrame(buffer, size, format) {}
// void QVideoFrame(int, const QSize &, int, QVideoFrame::PixelFormat)
MyQVideoFrame(int bytes, const QSize & size, int bytesPerLine, QVideoFrame::PixelFormat format) : QVideoFrame(bytes, size, bytesPerLine, format) {}
// void QVideoFrame(const QImage &)
MyQVideoFrame(const QImage & image) : QVideoFrame(image) {}
// void QVideoFrame(const QVideoFrame &)
MyQVideoFrame(const QVideoFrame & other) : QVideoFrame(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideoframe(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN11QVideoFrameD2Ev(void *this_)*/ {
  delete (QVideoFrame*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideoframe
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
