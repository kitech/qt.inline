//  header block begin

// /usr/include/qt/QtQuick/qsgabstractrenderer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgabstractrenderer.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGAbstractRenderer is pure virtual: true true
// QSGAbstractRenderer has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGAbstractRenderer_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGAbstractRenderer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGAbstractRenderer_t qt_meta_stringdata_MyQSGAbstractRenderer = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQSGAbstractRenderer"
  },
  "MyQSGAbstractRenderer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGAbstractRenderer[] = {
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
class Q_DECL_EXPORT MyQSGAbstractRenderer : public QSGAbstractRenderer {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSGAbstractRenderer::staticMetaObject,
  qt_meta_stringdata_MyQSGAbstractRenderer.data,
  qt_meta_data_MyQSGAbstractRenderer,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSGAbstractRenderer.stringdata0))
      return static_cast<void*>(this);
  return QSGAbstractRenderer::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSGAbstractRenderer::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSGAbstractRenderer() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void renderScene(uint)
  virtual void renderScene(uint fboId)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"renderScene", &handled, 1, (uint64_t)fboId, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGAbstractRenderer::renderScene(fboId);
  }
  }

// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void nodeChanged(QSGNode *, QSGNode::DirtyState)
  virtual void nodeChanged(QSGNode * node, QFlags<QSGNode::DirtyStateBit> state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nodeChanged", &handled, 2, (uint64_t)node, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGAbstractRenderer::nodeChanged(node, state);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSGAbstractRenderer_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSGAbstractRenderer* qo = (MyQSGAbstractRenderer*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgabstractrenderer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1551319099 (35)_ZN19QSGAbstractRenderer2trEPKcS1_i
//static
/*void qm1551319099(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSGAbstractRenderer::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSGAbstractRenderer::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:84
// [-2] void setDeviceRect(const QSize &) 
// (12)qm3603075358 (48)_ZN19QSGAbstractRenderer13setDeviceRectERK5QSize
//static
/*void qm3603075358(const QSize & size)*/ {
  const QSize & size = *(const QSize *)this_;
  (void) ((QSGAbstractRenderer*)this_)->setDeviceRect(size);
   auto xptr = (void (QSGAbstractRenderer::*)(QSize const&) ) &QSGAbstractRenderer::setDeviceRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:88
// [-2] void setViewportRect(const QSize &) 
// (12)qm2187944574 (50)_ZN19QSGAbstractRenderer15setViewportRectERK5QSize
//static
/*void qm2187944574(const QSize & size)*/ {
  const QSize & size = *(const QSize *)this_;
  (void) ((QSGAbstractRenderer*)this_)->setViewportRect(size);
   auto xptr = (void (QSGAbstractRenderer::*)(QSize const&) ) &QSGAbstractRenderer::setViewportRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QSGAbstractRendererD2Ev(void *this_)*/ {
  delete (QSGAbstractRenderer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgabstractrenderer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
