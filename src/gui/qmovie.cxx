//  header block begin

#ifndef QT_MINIMAL
#include <QtGui/qtguiglobal.h>
#if QT_CONFIG(movie)
// /usr/include/qt/QtGui/qmovie.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmovie.h>
#include <QtGui>
#include "callback_inherit.h"

// QMovie is pure virtual: false false
// QMovie has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMovie_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMovie_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMovie_t qt_meta_stringdata_MyQMovie = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQMovie"
  },
  "MyQMovie"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMovie[] = {
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
class Q_DECL_EXPORT MyQMovie : public QMovie {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMovie::staticMetaObject,
  qt_meta_stringdata_MyQMovie.data,
  qt_meta_data_MyQMovie,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMovie.stringdata0))
      return static_cast<void*>(this);
  return QMovie::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMovie::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMovie() {}
// void QMovie(QObject *)
MyQMovie(QObject * parent) : QMovie(parent) {}
// void QMovie(QIODevice *, const QByteArray &, QObject *)
MyQMovie(QIODevice * device, const QByteArray & format, QObject * parent) : QMovie(device, format, parent) {}
// void QMovie(const QString &, const QByteArray &, QObject *)
MyQMovie(const QString & fileName, const QByteArray & format, QObject * parent) : QMovie(fileName, format, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QMovie_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMovie* qo = (MyQMovie*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmovie(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:65
// [8] QString tr(const char *, const char *, int) 
// (11)qm517108480 (21)_ZN6QMovie2trEPKcS1_i
//static
/*void qm517108480(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMovie::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMovie::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:82
// [-2] void QMovie(QObject *) 
// (12)qm1387148965 (22)_ZN6QMovieC2EP7QObject
/*void* qm1387148965(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QMovie(parent);
  this_ =  new MyQMovie(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:83
// [-2] void QMovie(QIODevice *, const QByteArray &, QObject *) 
// (12)qm1044922179 (47)_ZN6QMovieC2EP9QIODeviceRK10QByteArrayP7QObject
/*void* qm1044922179(QIODevice * device, const QByteArray & format, QObject * parent)*/{
  QIODevice * device = *(QIODevice **)this_; const QByteArray & format = *(const QByteArray *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QMovie(device, format, parent);
  this_ =  new MyQMovie(device, format, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmovie.h:84
// [-2] void QMovie(const QString &, const QByteArray &, QObject *) 
// (12)qm2183735277 (46)_ZN6QMovieC2ERK7QStringRK10QByteArrayP7QObject
/*void* qm2183735277(const QString & fileName, const QByteArray & format, QObject * parent)*/{
  const QString & fileName = *(const QString *)this_; const QByteArray & format = *(const QByteArray *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QMovie(fileName, format, parent);
  this_ =  new MyQMovie(fileName, format, parent);
}


/*void C_ZN6QMovieD2Ev(void *this_)*/ {
  delete (QMovie*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmovie
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(movie)
#endif // #ifndef QT_MINIMAL
//  footer block end
