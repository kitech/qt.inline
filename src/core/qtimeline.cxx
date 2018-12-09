//  header block begin

// since 0x040200
// /usr/include/qt/QtCore/qtimeline.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtimeline.h>
#include <QtCore>
#include "callback_inherit.h"

// QTimeLine is pure virtual: false
// QTimeLine has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTimeLine_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTimeLine_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTimeLine_t qt_meta_stringdata_MyQTimeLine = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTimeLine"
  },
  "MyQTimeLine"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTimeLine[] = {
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
class Q_DECL_EXPORT MyQTimeLine : public QTimeLine {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTimeLine::staticMetaObject,
  qt_meta_stringdata_MyQTimeLine.data,
  qt_meta_data_MyQTimeLine,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTimeLine.stringdata0))
      return static_cast<void*>(this);
  return QTimeLine::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTimeLine::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTimeLine() {}
// void QTimeLine(int, QObject *)
MyQTimeLine(int duration, QObject * parent) : QTimeLine(duration, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTimeLine::timerEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTimeLine_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTimeLine* qo = (MyQTimeLine*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:130
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QTimeLine*)this_)->QTimeLine::timerEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeLine10metaObjectEv(void *this_) {
  return (void*)((QTimeLine*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeLine11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTimeLine*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QTimeLine11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTimeLine*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeLine2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTimeLine::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeLine6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTimeLine::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:79
// [-2] void QTimeLine(int, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QTimeLineC2EiP7QObject(int duration, QObject * parent) {
  auto _nilp = (MyQTimeLine*)(0);
  return  new MyQTimeLine(duration, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:80
// [-2] void ~QTimeLine()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLineD2Ev(void *this_) {
  delete (QTimeLine*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:82
// [4] QTimeLine::State state()
extern "C" Q_DECL_EXPORT
QTimeLine::State C_ZNK9QTimeLine5stateEv(void *this_) {
  return (QTimeLine::State)((QTimeLine*)this_)->state();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:84
// [4] int loopCount()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine9loopCountEv(void *this_) {
  return (int)((QTimeLine*)this_)->loopCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:85
// [-2] void setLoopCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine12setLoopCountEi(void *this_, int count) {
  ((QTimeLine*)this_)->setLoopCount(count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:87
// [4] QTimeLine::Direction direction()
extern "C" Q_DECL_EXPORT
QTimeLine::Direction C_ZNK9QTimeLine9directionEv(void *this_) {
  return (QTimeLine::Direction)((QTimeLine*)this_)->direction();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:88
// [-2] void setDirection(QTimeLine::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine12setDirectionENS_9DirectionE(void *this_, QTimeLine::Direction direction) {
  ((QTimeLine*)this_)->setDirection(direction);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:90
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine8durationEv(void *this_) {
  return (int)((QTimeLine*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:91
// [-2] void setDuration(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine11setDurationEi(void *this_, int duration) {
  ((QTimeLine*)this_)->setDuration(duration);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:93
// [4] int startFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine10startFrameEv(void *this_) {
  return (int)((QTimeLine*)this_)->startFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:94
// [-2] void setStartFrame(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine13setStartFrameEi(void *this_, int frame) {
  ((QTimeLine*)this_)->setStartFrame(frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:95
// [4] int endFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine8endFrameEv(void *this_) {
  return (int)((QTimeLine*)this_)->endFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:96
// [-2] void setEndFrame(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine11setEndFrameEi(void *this_, int frame) {
  ((QTimeLine*)this_)->setEndFrame(frame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:97
// [-2] void setFrameRange(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine13setFrameRangeEii(void *this_, int startFrame, int endFrame) {
  ((QTimeLine*)this_)->setFrameRange(startFrame, endFrame);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:99
// [4] int updateInterval()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine14updateIntervalEv(void *this_) {
  return (int)((QTimeLine*)this_)->updateInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:100
// [-2] void setUpdateInterval(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine17setUpdateIntervalEi(void *this_, int interval) {
  ((QTimeLine*)this_)->setUpdateInterval(interval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:102
// [4] QTimeLine::CurveShape curveShape()
extern "C" Q_DECL_EXPORT
QTimeLine::CurveShape C_ZNK9QTimeLine10curveShapeEv(void *this_) {
  return (QTimeLine::CurveShape)((QTimeLine*)this_)->curveShape();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:103
// [-2] void setCurveShape(QTimeLine::CurveShape)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine13setCurveShapeENS_10CurveShapeE(void *this_, QTimeLine::CurveShape shape) {
  ((QTimeLine*)this_)->setCurveShape(shape);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:105
// [8] QEasingCurve easingCurve()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTimeLine11easingCurveEv(void *this_) {
  auto rv = ((QTimeLine*)this_)->easingCurve();
return new QEasingCurve(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:106
// [-2] void setEasingCurve(const QEasingCurve &)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine14setEasingCurveERK12QEasingCurve(void *this_, QEasingCurve* curve) {
  ((QTimeLine*)this_)->setEasingCurve(*curve);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:108
// [4] int currentTime()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine11currentTimeEv(void *this_) {
  return (int)((QTimeLine*)this_)->currentTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:109
// [4] int currentFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine12currentFrameEv(void *this_) {
  return (int)((QTimeLine*)this_)->currentFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:110
// [8] qreal currentValue()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTimeLine12currentValueEv(void *this_) {
  return (qreal)((QTimeLine*)this_)->currentValue();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:112
// [4] int frameForTime(int)
extern "C" Q_DECL_EXPORT
int C_ZNK9QTimeLine12frameForTimeEi(void *this_, int msec) {
  return (int)((QTimeLine*)this_)->frameForTime(msec);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:113
// [8] qreal valueForTime(int)
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTimeLine12valueForTimeEi(void *this_, int msec) {
  return (qreal)((QTimeLine*)this_)->valueForTime(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:116
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine5startEv(void *this_) {
  ((QTimeLine*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:117
// [-2] void resume()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine6resumeEv(void *this_) {
  ((QTimeLine*)this_)->resume();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:118
// [-2] void stop()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine4stopEv(void *this_) {
  ((QTimeLine*)this_)->stop();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:119
// [-2] void setPaused(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine9setPausedEb(void *this_, bool paused) {
  ((QTimeLine*)this_)->setPaused(paused);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:120
// [-2] void setCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine14setCurrentTimeEi(void *this_, int msec) {
  ((QTimeLine*)this_)->setCurrentTime(msec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:121
// [-2] void toggleDirection()
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine15toggleDirectionEv(void *this_) {
  ((QTimeLine*)this_)->toggleDirection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:124
// [-2] void valueChanged(qreal, QTimeLine::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine12valueChangedEdNS_14QPrivateSignalE(void *this_, qreal x, QTimeLine::QPrivateSignal* arg1) {
  ((QTimeLine*)this_)->valueChanged(x, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:125
// [-2] void frameChanged(int, QTimeLine::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine12frameChangedEiNS_14QPrivateSignalE(void *this_, int arg0, QTimeLine::QPrivateSignal* arg1) {
  ((QTimeLine*)this_)->frameChanged(arg0, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:126
// [-2] void stateChanged(QTimeLine::State, QTimeLine::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine12stateChangedENS_5StateENS_14QPrivateSignalE(void *this_, QTimeLine::State newState, QTimeLine::QPrivateSignal* arg1) {
  ((QTimeLine*)this_)->stateChanged(newState, *arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimeline.h:127
// [-2] void finished(QTimeLine::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN9QTimeLine8finishedENS_14QPrivateSignalE(void *this_, QTimeLine::QPrivateSignal* arg0) {
  ((QTimeLine*)this_)->finished(*arg0);
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
