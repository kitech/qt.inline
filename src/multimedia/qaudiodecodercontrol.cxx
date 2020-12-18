//  header block begin

// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiodecodercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDecoderControl is pure virtual: true true
// QAudioDecoderControl has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAudioDecoderControl_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioDecoderControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioDecoderControl_t qt_meta_stringdata_MyQAudioDecoderControl = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQAudioDecoderControl"
  },
  "MyQAudioDecoderControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioDecoderControl[] = {
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
class Q_DECL_EXPORT MyQAudioDecoderControl : public QAudioDecoderControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAudioDecoderControl::staticMetaObject,
  qt_meta_stringdata_MyQAudioDecoderControl.data,
  qt_meta_data_MyQAudioDecoderControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAudioDecoderControl.stringdata0))
      return static_cast<void*>(this);
  return QAudioDecoderControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAudioDecoderControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAudioDecoderControl() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QAudioDecoder::State state()
  virtual QAudioDecoder::State state() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"state", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAudioDecoder::State)(int)(irv);
      // Elaborated Enum QAudioDecoder::State
    } else {
    return (QAudioDecoder::State){};
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QString sourceFilename()
  virtual QString sourceFilename() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceFilename", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setSourceFilename(const QString &)
  virtual void setSourceFilename(const QString & fileName)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSourceFilename", &handled, 1, (uint64_t)&fileName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::setSourceFilename(fileName);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QIODevice * sourceDevice()
  virtual QIODevice * sourceDevice() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceDevice", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QIODevice *)(irv);
      // Pointer Pointer QIODevice *
    } else {
    return (QIODevice *){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setSourceDevice(QIODevice *)
  virtual void setSourceDevice(QIODevice * device)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSourceDevice", &handled, 1, (uint64_t)device, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::setSourceDevice(device);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void start()
  virtual void start()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"start", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::start();
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
    // QAudioDecoderControl::stop();
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QAudioFormat audioFormat()
  virtual QAudioFormat audioFormat() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"audioFormat", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QAudioFormat){};}
    auto prv = (QAudioFormat*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QAudioFormat
    } else {
    return (QAudioFormat){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setAudioFormat(const QAudioFormat &)
  virtual void setAudioFormat(const QAudioFormat & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setAudioFormat", &handled, 1, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAudioDecoderControl::setAudioFormat(format);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [8] QAudioBuffer read()
  virtual QAudioBuffer read()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"read", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QAudioBuffer){};}
    auto prv = (QAudioBuffer*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QAudioBuffer
    } else {
    return (QAudioBuffer){};
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool bufferAvailable()
  virtual bool bufferAvailable() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bufferAvailable", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] qint64 position()
  virtual qint64 position() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"position", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] qint64 duration()
  virtual qint64 duration() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"duration", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return (qint64){};
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAudioDecoderControl_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAudioDecoderControl* qo = (MyQAudioDecoderControl*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiodecodercontrol(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecodercontrol.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm3436786532 (36)_ZN20QAudioDecoderControl2trEPKcS1_i
//static
/*void qm3436786532(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAudioDecoderControl::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAudioDecoderControl::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QAudioDecoderControlD2Ev(void *this_)*/ {
  delete (QAudioDecoderControl*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiodecodercontrol
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
