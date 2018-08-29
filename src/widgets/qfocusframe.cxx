//  header block begin
// /usr/include/qt/QtWidgets/qfocusframe.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfocusframe.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFocusFrame is pure virtual: false
// QFocusFrame has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFocusFrame_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFocusFrame_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFocusFrame_t qt_meta_stringdata_MyQFocusFrame = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQFocusFrame"
  },
  "MyQFocusFrame"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFocusFrame[] = {
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
class Q_DECL_EXPORT MyQFocusFrame : public QFocusFrame {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFocusFrame::staticMetaObject,
  qt_meta_stringdata_MyQFocusFrame.data,
  qt_meta_data_MyQFocusFrame,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFocusFrame.stringdata0))
      return static_cast<void*>(this);
  return QFocusFrame::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFocusFrame::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFocusFrame() {}
// void QFocusFrame(QWidget *)
MyQFocusFrame(QWidget * parent) : QFocusFrame(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QFocusFrame::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * arg0, QEvent * arg1)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)arg0, (uint64_t)arg1, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QFocusFrame::eventFilter(arg0, arg1);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QFocusFrame::paintEvent(arg0);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:63
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFocusFrame5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QFocusFrame*)this_)->QFocusFrame::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:65
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QFocusFrame11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QFocusFrame*)this_)->QFocusFrame::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:66
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFocusFrame10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QFocusFrame*)this_)->QFocusFrame::paintEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFocusFrame10metaObjectEv(void *this_) {
  return (void*)((QFocusFrame*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusFrame11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFocusFrame*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QFocusFrame11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFocusFrame*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusFrame2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFocusFrame::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusFrame6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFocusFrame::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:56
// [-2] void QFocusFrame(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFocusFrameC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQFocusFrame*)(0);
  return  new MyQFocusFrame(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:57
// [-2] void ~QFocusFrame()
extern "C" Q_DECL_EXPORT
void C_ZN11QFocusFrameD2Ev(void *this_) {
  delete (QFocusFrame*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:59
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFocusFrame9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QFocusFrame*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfocusframe.h:60
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFocusFrame6widgetEv(void *this_) {
  return (void*)((QFocusFrame*)this_)->widget();
}

//  main block end
