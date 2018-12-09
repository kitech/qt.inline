//  header block begin

// /usr/include/qt/QtGui/qpaintengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpaintengine.h>
#include <QtGui>
#include "callback_inherit.h"

// QPaintEngine is pure virtual: true
// QPaintEngine has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPaintEngine_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPaintEngine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPaintEngine_t qt_meta_stringdata_MyQPaintEngine = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQPaintEngine"
  },
  "MyQPaintEngine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPaintEngine[] = {
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
class Q_DECL_EXPORT MyQPaintEngine : public QPaintEngine {
public:
  virtual ~MyQPaintEngine() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool begin(QPaintDevice *)
  virtual bool begin(QPaintDevice * pdev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"begin", &handled, 1, (uint64_t)pdev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool end()
  virtual bool end()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"end", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void updateState(const QPaintEngineState &)
  virtual void updateState(const QPaintEngineState & state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateState", &handled, 1, (uint64_t)&state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QPaintEngine::updateState(state);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void drawPixmap(const QRectF &, const QPixmap &, const QRectF &)
  virtual void drawPixmap(const QRectF & r, const QPixmap & pm, const QRectF & sr)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawPixmap", &handled, 3, (uint64_t)&r, (uint64_t)&pm, (uint64_t)&sr, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QPaintEngine::drawPixmap(r, pm, sr);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QPaintEngine::Type type()
  virtual QPaintEngine::Type type() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"type", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintEngine::Type)(int)(irv);
      // Enum Enum QPaintEngine::Type
    } else {
    return (QPaintEngine::Type){};
  }
  }

// void QPaintEngine(QPaintEngine::PaintEngineFeatures)
MyQPaintEngine(QFlags<QPaintEngine::PaintEngineFeature> features) : QPaintEngine(features) {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:153
// [1] bool begin(QPaintDevice *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:154
// [1] bool end()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:156
// [-2] void updateState(const QPaintEngineState &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:175
// [-2] void drawPixmap(const QRectF &, const QPixmap &, const QRectF &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:214
// [4] QPaintEngine::Type type()
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:147
// [-2] void QPaintEngine(QPaintEngine::PaintEngineFeatures)
extern "C" Q_DECL_EXPORT
void* C_ZN12QPaintEngineC2E6QFlagsINS_18PaintEngineFeatureEE(QFlags<QPaintEngine::PaintEngineFeature> features) {
  return 0; // new QPaintEngine(features);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:148
// [-2] void ~QPaintEngine()
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngineD2Ev(void *this_) {
  delete (QPaintEngine*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:150
// [1] bool isActive()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPaintEngine8isActiveEv(void *this_) {
  return (bool)((QPaintEngine*)this_)->isActive();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:151
// [-2] void setActive(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine9setActiveEb(void *this_, bool newState) {
  ((QPaintEngine*)this_)->setActive(newState);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:153
// [1] bool begin(QPaintDevice *)
extern "C" Q_DECL_EXPORT
bool C_ZN12QPaintEngine5beginEP12QPaintDevice(void *this_, QPaintDevice * pdev) {
  return (bool)((QPaintEngine*)this_)->begin(pdev);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:154
// [1] bool end()
extern "C" Q_DECL_EXPORT
bool C_ZN12QPaintEngine3endEv(void *this_) {
  return (bool)((QPaintEngine*)this_)->end();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:156
// [-2] void updateState(const QPaintEngineState &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine11updateStateERK17QPaintEngineState(void *this_, QPaintEngineState* state) {
  ((QPaintEngine*)this_)->updateState(*state);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:158
// [-2] void drawRects(const QRect *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine9drawRectsEPK5QRecti(void *this_, const QRect * rects, int rectCount) {
  ((QPaintEngine*)this_)->drawRects(rects, rectCount);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:159
// [-2] void drawRects(const QRectF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine9drawRectsEPK6QRectFi(void *this_, const QRectF * rects, int rectCount) {
  ((QPaintEngine*)this_)->drawRects(rects, rectCount);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:161
// [-2] void drawLines(const QLine *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine9drawLinesEPK5QLinei(void *this_, const QLine * lines, int lineCount) {
  ((QPaintEngine*)this_)->drawLines(lines, lineCount);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:162
// [-2] void drawLines(const QLineF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine9drawLinesEPK6QLineFi(void *this_, const QLineF * lines, int lineCount) {
  ((QPaintEngine*)this_)->drawLines(lines, lineCount);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:164
// [-2] void drawEllipse(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine11drawEllipseERK6QRectF(void *this_, QRectF* r) {
  ((QPaintEngine*)this_)->drawEllipse(*r);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:165
// [-2] void drawEllipse(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine11drawEllipseERK5QRect(void *this_, QRect* r) {
  ((QPaintEngine*)this_)->drawEllipse(*r);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:167
// [-2] void drawPath(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine8drawPathERK12QPainterPath(void *this_, QPainterPath* path) {
  ((QPaintEngine*)this_)->drawPath(*path);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:169
// [-2] void drawPoints(const QPointF *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine10drawPointsEPK7QPointFi(void *this_, const QPointF * points, int pointCount) {
  ((QPaintEngine*)this_)->drawPoints(points, pointCount);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:170
// [-2] void drawPoints(const QPoint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine10drawPointsEPK6QPointi(void *this_, const QPoint * points, int pointCount) {
  ((QPaintEngine*)this_)->drawPoints(points, pointCount);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:172
// [-2] void drawPolygon(const QPointF *, int, QPaintEngine::PolygonDrawMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine11drawPolygonEPK7QPointFiNS_15PolygonDrawModeE(void *this_, const QPointF * points, int pointCount, QPaintEngine::PolygonDrawMode mode) {
  ((QPaintEngine*)this_)->drawPolygon(points, pointCount, mode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:173
// [-2] void drawPolygon(const QPoint *, int, QPaintEngine::PolygonDrawMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine11drawPolygonEPK6QPointiNS_15PolygonDrawModeE(void *this_, const QPoint * points, int pointCount, QPaintEngine::PolygonDrawMode mode) {
  ((QPaintEngine*)this_)->drawPolygon(points, pointCount, mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:175
// [-2] void drawPixmap(const QRectF &, const QPixmap &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine10drawPixmapERK6QRectFRK7QPixmapS2_(void *this_, QRectF* r, QPixmap* pm, QRectF* sr) {
  ((QPaintEngine*)this_)->drawPixmap(*r, *pm, *sr);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:176
// [-2] void drawTextItem(const QPointF &, const QTextItem &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine12drawTextItemERK7QPointFRK9QTextItem(void *this_, QPointF* p, QTextItem* textItem) {
  ((QPaintEngine*)this_)->drawTextItem(*p, *textItem);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:177
// [-2] void drawTiledPixmap(const QRectF &, const QPixmap &, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine15drawTiledPixmapERK6QRectFRK7QPixmapRK7QPointF(void *this_, QRectF* r, QPixmap* pixmap, QPointF* s) {
  ((QPaintEngine*)this_)->drawTiledPixmap(*r, *pixmap, *s);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:178
// [-2] void drawImage(const QRectF &, const QImage &, const QRectF &, Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine9drawImageERK6QRectFRK6QImageS2_6QFlagsIN2Qt19ImageConversionFlagEE(void *this_, QRectF* r, QImage* pm, QRectF* sr, QFlags<Qt::ImageConversionFlag> flags) {
  ((QPaintEngine*)this_)->drawImage(*r, *pm, *sr, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:181
// [-2] void setPaintDevice(QPaintDevice *)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine14setPaintDeviceEP12QPaintDevice(void *this_, QPaintDevice * device) {
  ((QPaintEngine*)this_)->setPaintDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:182
// [8] QPaintDevice * paintDevice()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPaintEngine11paintDeviceEv(void *this_) {
  return (void*)((QPaintEngine*)this_)->paintDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:184
// [-2] void setSystemClip(const QRegion &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine13setSystemClipERK7QRegion(void *this_, QRegion* baseClip) {
  ((QPaintEngine*)this_)->setSystemClip(*baseClip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:185
// [8] QRegion systemClip()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPaintEngine10systemClipEv(void *this_) {
  auto rv = ((QPaintEngine*)this_)->systemClip();
return new QRegion(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:187
// [-2] void setSystemRect(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine13setSystemRectERK5QRect(void *this_, QRect* rect) {
  ((QPaintEngine*)this_)->setSystemRect(*rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:188
// [16] QRect systemRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPaintEngine10systemRectEv(void *this_) {
  auto rv = ((QPaintEngine*)this_)->systemRect();
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:191
// [8] QPoint coordinateOffset()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPaintEngine16coordinateOffsetEv(void *this_) {
  auto rv = ((QPaintEngine*)this_)->coordinateOffset();
return new QPoint(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:214
// [4] QPaintEngine::Type type()
extern "C" Q_DECL_EXPORT
QPaintEngine::Type C_ZNK12QPaintEngine4typeEv(void *this_) {
  return (QPaintEngine::Type)((QPaintEngine*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:216
// [-2] void fix_neg_rect(int *, int *, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine12fix_neg_rectEPiS0_S0_S0_(void *this_, int * x, int * y, int * w, int * h) {
  ((QPaintEngine*)this_)->fix_neg_rect(x, y, w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:218
// [1] bool testDirty(QPaintEngine::DirtyFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN12QPaintEngine9testDirtyE6QFlagsINS_9DirtyFlagEE(void *this_, QFlags<QPaintEngine::DirtyFlag> df) {
  return (bool)((QPaintEngine*)this_)->testDirty(df);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:219
// [-2] void setDirty(QPaintEngine::DirtyFlags)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine8setDirtyE6QFlagsINS_9DirtyFlagEE(void *this_, QFlags<QPaintEngine::DirtyFlag> df) {
  ((QPaintEngine*)this_)->setDirty(df);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:220
// [-2] void clearDirty(QPaintEngine::DirtyFlags)
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine10clearDirtyE6QFlagsINS_9DirtyFlagEE(void *this_, QFlags<QPaintEngine::DirtyFlag> df) {
  ((QPaintEngine*)this_)->clearDirty(df);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:222
// [1] bool hasFeature(QPaintEngine::PaintEngineFeatures)
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPaintEngine10hasFeatureE6QFlagsINS_18PaintEngineFeatureEE(void *this_, QFlags<QPaintEngine::PaintEngineFeature> feature) {
  return (bool)((QPaintEngine*)this_)->hasFeature(feature);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:224
// [8] QPainter * painter()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QPaintEngine7painterEv(void *this_) {
  return (void*)((QPaintEngine*)this_)->painter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:226
// [-2] void syncState()
extern "C" Q_DECL_EXPORT
void C_ZN12QPaintEngine9syncStateEv(void *this_) {
  ((QPaintEngine*)this_)->syncState();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:227
// [1] bool isExtended()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QPaintEngine10isExtendedEv(void *this_) {
  return (bool)((QPaintEngine*)this_)->isExtended();
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
