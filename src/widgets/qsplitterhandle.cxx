//  header block begin
// /usr/include/qt/QtWidgets/qsplitter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsplitter.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSplitterHandle is pure virtual: false
// QSplitterHandle has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSplitterHandle_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSplitterHandle_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSplitterHandle_t qt_meta_stringdata_MyQSplitterHandle = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQSplitterHandle"
  },
  "MyQSplitterHandle"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSplitterHandle[] = {
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
class Q_DECL_EXPORT MyQSplitterHandle : public QSplitterHandle {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSplitterHandle::staticMetaObject,
  qt_meta_stringdata_MyQSplitterHandle.data,
  qt_meta_data_MyQSplitterHandle,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSplitterHandle.stringdata0))
      return static_cast<void*>(this);
  return QSplitterHandle::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSplitterHandle::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSplitterHandle() {}
// void QSplitterHandle(Qt::Orientation, QSplitter *)
MyQSplitterHandle(Qt::Orientation o, QSplitter * parent) : QSplitterHandle(o, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitterHandle::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitterHandle::mouseMoveEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitterHandle::mousePressEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitterHandle::mouseReleaseEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSplitterHandle::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSplitterHandle::event(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSplitterHandle_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSplitterHandle* qo = (MyQSplitterHandle*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:151
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:152
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::mouseMoveEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:153
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::mousePressEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:154
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::mouseReleaseEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:155
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QSplitterHandle*)this_)->QSplitterHandle::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:156
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QSplitterHandle5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QSplitterHandle*)this_)->QSplitterHandle::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:138
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSplitterHandle10metaObjectEv(void *this_) {
  return (void*)((QSplitterHandle*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:138
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSplitterHandle11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSplitterHandle*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:138
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QSplitterHandle11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSplitterHandle*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:138
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSplitterHandle2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSplitterHandle::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:138
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSplitterHandle6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSplitterHandle::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:140
// [-2] void QSplitterHandle(Qt::Orientation, QSplitter *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSplitterHandleC2EN2Qt11OrientationEP9QSplitter(Qt::Orientation o, QSplitter * parent) {
  auto _nilp = (MyQSplitterHandle*)(0);
  return  new MyQSplitterHandle(o, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:141
// [-2] void ~QSplitterHandle()
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandleD2Ev(void *this_) {
  delete (QSplitterHandle*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:143
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN15QSplitterHandle14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation o) {
  ((QSplitterHandle*)this_)->setOrientation(o);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:144
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK15QSplitterHandle11orientationEv(void *this_) {
  return (Qt::Orientation)((QSplitterHandle*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:145
// [1] bool opaqueResize()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSplitterHandle12opaqueResizeEv(void *this_) {
  return (bool)((QSplitterHandle*)this_)->opaqueResize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:146
// [8] QSplitter * splitter()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSplitterHandle8splitterEv(void *this_) {
  return (void*)((QSplitterHandle*)this_)->splitter();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplitter.h:148
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSplitterHandle8sizeHintEv(void *this_) {
  auto rv = ((QSplitterHandle*)this_)->sizeHint();
return new QSize(rv);
}

//  main block end
