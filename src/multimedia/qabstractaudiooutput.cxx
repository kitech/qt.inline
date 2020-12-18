//  header block begin

// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioOutput is pure virtual: true true
// QAbstractAudioOutput has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractAudioOutput_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractAudioOutput_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractAudioOutput_t qt_meta_stringdata_MyQAbstractAudioOutput = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQAbstractAudioOutput"
  },
  "MyQAbstractAudioOutput"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractAudioOutput[] = {
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
class Q_DECL_EXPORT MyQAbstractAudioOutput : public QAbstractAudioOutput {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractAudioOutput::staticMetaObject,
  qt_meta_stringdata_MyQAbstractAudioOutput.data,
  qt_meta_data_MyQAbstractAudioOutput,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractAudioOutput.stringdata0))
      return static_cast<void*>(this);
  return QAbstractAudioOutput::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractAudioOutput::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractAudioOutput() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void start(QIODevice *)
  virtual void start(QIODevice * device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 1, (uint64_t)device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::start(device);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QIODevice * start()
  virtual QIODevice * start()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QIODevice *)(irv);
      // Pointer Pointer QIODevice *
    } else {
    return (QIODevice *){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void stop()
  virtual void stop()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stop", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::stop();
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void reset()
  virtual void reset()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"reset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::reset();
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void suspend()
  virtual void suspend()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"suspend", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::suspend();
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void resume()
  virtual void resume()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resume", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::resume();
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int bytesFree()
  virtual int bytesFree() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bytesFree", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int periodSize()
  virtual int periodSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"periodSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setBufferSize(int)
  virtual void setBufferSize(int value)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setBufferSize", &handled, 1, (uint64_t)value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::setBufferSize(value);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int bufferSize()
  virtual int bufferSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bufferSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setNotifyInterval(int)
  virtual void setNotifyInterval(int milliSeconds)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setNotifyInterval", &handled, 1, (uint64_t)milliSeconds, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::setNotifyInterval(milliSeconds);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int notifyInterval()
  virtual int notifyInterval() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"notifyInterval", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] qint64 processedUSecs()
  virtual qint64 processedUSecs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"processedUSecs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] qint64 elapsedUSecs()
  virtual qint64 elapsedUSecs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"elapsedUSecs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QAudio::Error error()
  virtual QAudio::Error error() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"error", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAudio::Error)(int)(irv);
      // Elaborated Enum QAudio::Error
    } else {
    return (QAudio::Error){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QAudio::State state()
  virtual QAudio::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAudio::State)(int)(irv);
      // Elaborated Enum QAudio::State
    } else {
    return (QAudio::State){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setFormat(const QAudioFormat &)
  virtual void setFormat(const QAudioFormat & fmt_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFormat", &handled, 1, (uint64_t)&fmt_, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractAudioOutput::setFormat(fmt_);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QAudioFormat format()
  virtual QAudioFormat format() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"format", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QAudioFormat){};}
    auto prv = (QAudioFormat*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QAudioFormat
    } else {
    return (QAudioFormat){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAbstractAudioOutput_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractAudioOutput* qo = (MyQAbstractAudioOutput*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractaudiooutput(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:72
// [8] QString tr(const char *, const char *, int) 
// (12)qm3523582835 (36)_ZN20QAbstractAudioOutput2trEPKcS1_i
//static
/*void qm3523582835(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractAudioOutput::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractAudioOutput::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:93
// [-2] void setVolume(qreal) 
// (11)qm651057111 (37)_ZN20QAbstractAudioOutput9setVolumeEd
//static
/*void qm651057111(double arg0)*/ {
  double arg0 = *(double*)this_;
  (void) ((QAbstractAudioOutput*)this_)->setVolume(arg0);
   auto xptr = (void (QAbstractAudioOutput::*)(double) ) &QAbstractAudioOutput::setVolume;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Direct Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:94
// [8] qreal volume() const
// (12)qm1306221737 (35)_ZNK20QAbstractAudioOutput6volumeEv
//static
/*void qm1306221737()*/ {
  ;
  (void) ((QAbstractAudioOutput*)this_)->volume();
   auto xptr = (double (QAbstractAudioOutput::*)() const ) &QAbstractAudioOutput::volume;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:95
// [8] QString category() const
// (12)qm1989253784 (37)_ZNK20QAbstractAudioOutput8categoryEv
//static
/*void qm1989253784()*/ {
  ;
  (void) ((QAbstractAudioOutput*)this_)->category();
   auto xptr = (QString (QAbstractAudioOutput::*)() const ) &QAbstractAudioOutput::category;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:96
// [-2] void setCategory(const QString &) 
// (12)qm3480664766 (49)_ZN20QAbstractAudioOutput11setCategoryERK7QString
//static
/*void qm3480664766(const QString & arg0)*/ {
  const QString & arg0 = *(const QString *)this_;
  (void) ((QAbstractAudioOutput*)this_)->setCategory(arg0);
   auto xptr = (void (QAbstractAudioOutput::*)(QString const&) ) &QAbstractAudioOutput::setCategory;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QAbstractAudioOutputD2Ev(void *this_)*/ {
  delete (QAbstractAudioOutput*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractaudiooutput
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
