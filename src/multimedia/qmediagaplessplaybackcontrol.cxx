//  header block begin

// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediagaplessplaybackcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaGaplessPlaybackControl is pure virtual: true
// QMediaGaplessPlaybackControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaGaplessPlaybackControl_t {
  QByteArrayData data[1];
  char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaGaplessPlaybackControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaGaplessPlaybackControl_t qt_meta_stringdata_MyQMediaGaplessPlaybackControl = {
   {
  QT_MOC_LITERAL(0, 0, 30), // "MyQMediaGaplessPlaybackControl"
  },
  "MyQMediaGaplessPlaybackControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaGaplessPlaybackControl[] = {
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
class Q_DECL_EXPORT MyQMediaGaplessPlaybackControl : public QMediaGaplessPlaybackControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaGaplessPlaybackControl::staticMetaObject,
  qt_meta_stringdata_MyQMediaGaplessPlaybackControl.data,
  qt_meta_data_MyQMediaGaplessPlaybackControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaGaplessPlaybackControl.stringdata0))
      return static_cast<void*>(this);
  return QMediaGaplessPlaybackControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaGaplessPlaybackControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaGaplessPlaybackControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QMediaContent nextMedia()
  virtual QMediaContent nextMedia() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nextMedia", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QMediaContent){};}
    auto prv = (QMediaContent*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QMediaContent
    } else {
    return (QMediaContent){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setNextMedia(const QMediaContent &)
  virtual void setNextMedia(const QMediaContent & media)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setNextMedia", &handled, 1, (uint64_t)&media, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaGaplessPlaybackControl::setNextMedia(media);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool isCrossfadeSupported()
  virtual bool isCrossfadeSupported() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isCrossfadeSupported", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] qreal crossfadeTime()
  virtual qreal crossfadeTime() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"crossfadeTime", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qreal)(irv);
      // Typedef Double double
    } else {
    return (qreal){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setCrossfadeTime(qreal)
  virtual void setCrossfadeTime(qreal crossfadeTime)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setCrossfadeTime", &handled, 1, (uint64_t)&crossfadeTime, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QMediaGaplessPlaybackControl::setCrossfadeTime(crossfadeTime);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMediaGaplessPlaybackControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaGaplessPlaybackControl* qo = (MyQMediaGaplessPlaybackControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:56
// [8] QMediaContent nextMedia()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:57
// [-2] void setNextMedia(const QMediaContent &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:59
// [1] bool isCrossfadeSupported()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:60
// [8] qreal crossfadeTime()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:61
// [-2] void setCrossfadeTime(qreal)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QMediaGaplessPlaybackControl10metaObjectEv(void *this_) {
  return (void*)((QMediaGaplessPlaybackControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN28QMediaGaplessPlaybackControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaGaplessPlaybackControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN28QMediaGaplessPlaybackControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaGaplessPlaybackControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QMediaGaplessPlaybackControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaGaplessPlaybackControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN28QMediaGaplessPlaybackControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaGaplessPlaybackControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:54
// [-2] void ~QMediaGaplessPlaybackControl()
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControlD2Ev(void *this_) {
  delete (QMediaGaplessPlaybackControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:56
// [8] QMediaContent nextMedia()
extern "C" Q_DECL_EXPORT
void* C_ZNK28QMediaGaplessPlaybackControl9nextMediaEv(void *this_) {
  auto rv = ((QMediaGaplessPlaybackControl*)this_)->nextMedia();
return new QMediaContent(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:57
// [-2] void setNextMedia(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl12setNextMediaERK13QMediaContent(void *this_, QMediaContent* media) {
  ((QMediaGaplessPlaybackControl*)this_)->setNextMedia(*media);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:59
// [1] bool isCrossfadeSupported()
extern "C" Q_DECL_EXPORT
bool C_ZNK28QMediaGaplessPlaybackControl20isCrossfadeSupportedEv(void *this_) {
  return (bool)((QMediaGaplessPlaybackControl*)this_)->isCrossfadeSupported();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:60
// [8] qreal crossfadeTime()
extern "C" Q_DECL_EXPORT
qreal C_ZNK28QMediaGaplessPlaybackControl13crossfadeTimeEv(void *this_) {
  return (qreal)((QMediaGaplessPlaybackControl*)this_)->crossfadeTime();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:61
// [-2] void setCrossfadeTime(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl16setCrossfadeTimeEd(void *this_, qreal crossfadeTime) {
  ((QMediaGaplessPlaybackControl*)this_)->setCrossfadeTime(crossfadeTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:64
// [-2] void crossfadeTimeChanged(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl20crossfadeTimeChangedEd(void *this_, qreal crossfadeTime) {
  ((QMediaGaplessPlaybackControl*)this_)->crossfadeTimeChanged(crossfadeTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:65
// [-2] void nextMediaChanged(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl16nextMediaChangedERK13QMediaContent(void *this_, QMediaContent* media) {
  ((QMediaGaplessPlaybackControl*)this_)->nextMediaChanged(*media);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediagaplessplaybackcontrol.h:66
// [-2] void advancedToNextMedia()
extern "C" Q_DECL_EXPORT
void C_ZN28QMediaGaplessPlaybackControl19advancedToNextMediaEv(void *this_) {
  ((QMediaGaplessPlaybackControl*)this_)->advancedToNextMedia();
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
