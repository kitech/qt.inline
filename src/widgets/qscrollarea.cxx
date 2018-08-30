//  header block begin
// /usr/include/qt/QtWidgets/qscrollarea.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscrollarea.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QScrollArea is pure virtual: false
// QScrollArea has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQScrollArea_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScrollArea_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScrollArea_t qt_meta_stringdata_MyQScrollArea = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQScrollArea"
  },
  "MyQScrollArea"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScrollArea[] = {
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
class Q_DECL_EXPORT MyQScrollArea : public QScrollArea {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QScrollArea::staticMetaObject,
  qt_meta_stringdata_MyQScrollArea.data,
  qt_meta_data_MyQScrollArea,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQScrollArea.stringdata0))
      return static_cast<void*>(this);
  return QScrollArea::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QScrollArea::qt_metacall(_c, _id, _a);
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
  virtual ~MyQScrollArea() {}
// void QScrollArea(QWidget *)
MyQScrollArea(QWidget * parent) : QScrollArea(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QScrollArea::event(arg0);
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
    return QScrollArea::eventFilter(arg0, arg1);
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
    QScrollArea::resizeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QScrollArea::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSize viewportSizeHint()
  virtual QSize viewportSizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QScrollArea::viewportSizeHint();
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QScrollArea_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQScrollArea* qo = (MyQScrollArea*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:81
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QScrollArea5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QScrollArea*)this_)->QScrollArea::event(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:82
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN11QScrollArea11eventFilterEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QScrollArea*)this_)->QScrollArea::eventFilter(arg0, arg1);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:83
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * arg0) {
  ((QScrollArea*)this_)->QScrollArea::resizeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:84
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QScrollArea*)this_)->QScrollArea::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:86
// [8] QSize viewportSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QScrollArea16viewportSizeHintEv(void *this_) {
  auto rv = ((QScrollArea*)this_)->QScrollArea::viewportSizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QScrollArea10metaObjectEv(void *this_) {
  return (void*)((QScrollArea*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QScrollArea11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QScrollArea*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QScrollArea11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QScrollArea*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QScrollArea2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QScrollArea::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QScrollArea6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QScrollArea::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:59
// [-2] void QScrollArea(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QScrollAreaC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQScrollArea*)(0);
  return  new MyQScrollArea(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:60
// [-2] void ~QScrollArea()
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollAreaD2Ev(void *this_) {
  delete (QScrollArea*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:62
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QScrollArea6widgetEv(void *this_) {
  return (void*)((QScrollArea*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:63
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QScrollArea*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:64
// [8] QWidget * takeWidget()
extern "C" Q_DECL_EXPORT
void* C_ZN11QScrollArea10takeWidgetEv(void *this_) {
  return (void*)((QScrollArea*)this_)->takeWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:66
// [1] bool widgetResizable()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QScrollArea15widgetResizableEv(void *this_) {
  return (bool)((QScrollArea*)this_)->widgetResizable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:67
// [-2] void setWidgetResizable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea18setWidgetResizableEb(void *this_, bool resizable) {
  ((QScrollArea*)this_)->setWidgetResizable(resizable);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:69
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QScrollArea8sizeHintEv(void *this_) {
  auto rv = ((QScrollArea*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:71
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN11QScrollArea18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QScrollArea*)this_)->focusNextPrevChild(next);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:73
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK11QScrollArea9alignmentEv(void *this_) {
  return (Qt::Alignment)((QScrollArea*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:74
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> arg0) {
  ((QScrollArea*)this_)->setAlignment(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qscrollarea.h:76
// [-2] void ensureVisible(int, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea13ensureVisibleEiiii(void *this_, int x, int y, int xmargin, int ymargin) {
  ((QScrollArea*)this_)->ensureVisible(x, y, xmargin, ymargin);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qscrollarea.h:77
// [-2] void ensureWidgetVisible(QWidget *, int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN11QScrollArea19ensureWidgetVisibleEP7QWidgetii(void *this_, QWidget * childWidget, int xmargin, int ymargin) {
  ((QScrollArea*)this_)->ensureWidgetVisible(childWidget, xmargin, ymargin);
}
#endif // QT_VERSION >= 0x040200

//  main block end
