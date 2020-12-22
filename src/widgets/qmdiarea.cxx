//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(mdiarea)
// /usr/include/qt/QtWidgets/qmdiarea.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmdiarea.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMdiArea is pure virtual: false false
// QMdiArea has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMdiArea_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMdiArea_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMdiArea_t qt_meta_stringdata_MyQMdiArea = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQMdiArea"
  },
  "MyQMdiArea"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMdiArea[] = {
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
class Q_DECL_EXPORT MyQMdiArea : public QMdiArea {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMdiArea::staticMetaObject,
  qt_meta_stringdata_MyQMdiArea.data,
  qt_meta_data_MyQMdiArea,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMdiArea.stringdata0))
      return static_cast<void*>(this);
  return QMdiArea::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMdiArea::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMdiArea() {}
// void QMdiArea(QWidget *)
MyQMdiArea(QWidget * parent) : QMdiArea(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void setupViewport(QWidget *)
  virtual void setupViewport(QWidget * viewport)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setupViewport", &handled, 1, (uint64_t)viewport, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::setupViewport(viewport);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMdiArea::event(event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMdiArea::eventFilter(object, event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * paintEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)paintEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::paintEvent(paintEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * childEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)childEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::childEvent(childEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * resizeEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)resizeEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::resizeEvent(resizeEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * timerEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)timerEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::timerEvent(timerEvent);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * showEvent)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)showEvent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::showEvent(showEvent);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool viewportEvent(QEvent *)
  virtual bool viewportEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMdiArea::viewportEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMdiArea::scrollContentsBy(dx, dy);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMdiArea_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMdiArea* qo = (MyQMdiArea*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmdiarea(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:58
// [8] QString tr(const char *, const char *, int) 
// (11)qm352736953 (23)_ZN8QMdiArea2trEPKcS1_i
//static
/*void qm352736953(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMdiArea::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMdiArea::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:90
// [-2] void QMdiArea(QWidget *) 
// (12)qm3444333716 (24)_ZN8QMdiAreaC2EP7QWidget
/*void* qm3444333716(QWidget * parent)*/{
  auto _nilp = (MyQMdiArea*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QMdiArea(parent);
  this_ =  new MyQMdiArea(parent);
}


/*void C_ZN8QMdiAreaD2Ev(void *this_)*/ {
  delete (QMdiArea*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmdiarea
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(mdiarea)
#endif // #ifndef QT_MINIMAL
//  footer block end
