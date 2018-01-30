//  header block begin
// /usr/include/qt/QtGui/qpaintengine.h
#include <qpaintengine.h>
#include <QtGui>

// QPaintEngineState is pure virtual: false
// QPaintEngineState has virtual projected: false
//  header block end

//  main block begin

class MyQPaintEngineState : public QPaintEngineState {
public:
  virtual ~MyQPaintEngineState() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:268
// [4] QPaintEngine::DirtyFlags state()
extern "C"
QPaintEngine::DirtyFlags C_ZNK17QPaintEngineState5stateEv(void *this_) {
  return (QPaintEngine::DirtyFlags)((QPaintEngineState*)this_)->state();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:270
// [8] QPen pen()
extern "C"
void* C_ZNK17QPaintEngineState3penEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->pen();
return new QPen(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:271
// [8] QBrush brush()
extern "C"
void* C_ZNK17QPaintEngineState5brushEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->brush();
return new QBrush(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:272
// [16] QPointF brushOrigin()
extern "C"
void* C_ZNK17QPaintEngineState11brushOriginEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->brushOrigin();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:273
// [8] QBrush backgroundBrush()
extern "C"
void* C_ZNK17QPaintEngineState15backgroundBrushEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->backgroundBrush();
return new QBrush(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:274
// [4] Qt::BGMode backgroundMode()
extern "C"
Qt::BGMode C_ZNK17QPaintEngineState14backgroundModeEv(void *this_) {
  return (Qt::BGMode)((QPaintEngineState*)this_)->backgroundMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:275
// [16] QFont font()
extern "C"
void* C_ZNK17QPaintEngineState4fontEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->font();
return new QFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:276
// [48] QMatrix matrix()
extern "C"
void* C_ZNK17QPaintEngineState6matrixEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->matrix();
return new QMatrix(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:277
// [88] QTransform transform()
extern "C"
void* C_ZNK17QPaintEngineState9transformEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->transform();
return new QTransform(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:279
// [4] Qt::ClipOperation clipOperation()
extern "C"
Qt::ClipOperation C_ZNK17QPaintEngineState13clipOperationEv(void *this_) {
  return (Qt::ClipOperation)((QPaintEngineState*)this_)->clipOperation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:280
// [8] QRegion clipRegion()
extern "C"
void* C_ZNK17QPaintEngineState10clipRegionEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->clipRegion();
return new QRegion(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:281
// [8] QPainterPath clipPath()
extern "C"
void* C_ZNK17QPaintEngineState8clipPathEv(void *this_) {
  auto rv = ((QPaintEngineState*)this_)->clipPath();
return new QPainterPath(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:282
// [1] bool isClipEnabled()
extern "C"
bool C_ZNK17QPaintEngineState13isClipEnabledEv(void *this_) {
  return (bool)((QPaintEngineState*)this_)->isClipEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:284
// [4] QPainter::RenderHints renderHints()
extern "C"
QPainter::RenderHints C_ZNK17QPaintEngineState11renderHintsEv(void *this_) {
  return (QPainter::RenderHints)((QPaintEngineState*)this_)->renderHints();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:285
// [4] QPainter::CompositionMode compositionMode()
extern "C"
QPainter::CompositionMode C_ZNK17QPaintEngineState15compositionModeEv(void *this_) {
  return (QPainter::CompositionMode)((QPaintEngineState*)this_)->compositionMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:286
// [8] qreal opacity()
extern "C"
qreal C_ZNK17QPaintEngineState7opacityEv(void *this_) {
  return (qreal)((QPaintEngineState*)this_)->opacity();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:288
// [8] QPainter * painter()
extern "C"
void* C_ZNK17QPaintEngineState7painterEv(void *this_) {
  return (void*)((QPaintEngineState*)this_)->painter();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:290
// [1] bool brushNeedsResolving()
extern "C"
bool C_ZNK17QPaintEngineState19brushNeedsResolvingEv(void *this_) {
  return (bool)((QPaintEngineState*)this_)->brushNeedsResolving();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:291
// [1] bool penNeedsResolving()
extern "C"
bool C_ZNK17QPaintEngineState17penNeedsResolvingEv(void *this_) {
  return (bool)((QPaintEngineState*)this_)->penNeedsResolving();
}
//  main block end
