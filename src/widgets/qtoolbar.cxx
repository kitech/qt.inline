//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(toolbar)
// /usr/include/qt/QtWidgets/qtoolbar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtoolbar.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolBar is pure virtual: false false
// QToolBar has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQToolBar_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQToolBar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQToolBar_t qt_meta_stringdata_MyQToolBar = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQToolBar"
  },
  "MyQToolBar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQToolBar[] = {
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
class Q_DECL_EXPORT MyQToolBar : public QToolBar {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QToolBar::staticMetaObject,
  qt_meta_stringdata_MyQToolBar.data,
  qt_meta_data_MyQToolBar,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQToolBar.stringdata0))
      return static_cast<void*>(this);
  return QToolBar::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QToolBar::qt_metacall(_c, _id, _a);
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
  virtual ~MyQToolBar() {}
// void QToolBar(const QString &, QWidget *)
MyQToolBar(const QString & title, QWidget * parent) : QToolBar(title, parent) {}
// void QToolBar(QWidget *)
MyQToolBar(QWidget * parent) : QToolBar(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void actionEvent(QActionEvent *)
  virtual void actionEvent(QActionEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"actionEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBar::actionEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBar::changeEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBar::paintEvent(event);
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
    return QToolBar::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QToolBar_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQToolBar* qo = (MyQToolBar*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtoolbar(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm1100952078 (23)_ZN8QToolBar2trEPKcS1_i
//static
/*void qm1100952078(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QToolBar::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QToolBar::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:72
// [-2] void QToolBar(const QString &, QWidget *) 
// (11)qm115476381 (34)_ZN8QToolBarC2ERK7QStringP7QWidget
/*void* qm115476381(const QString & title, QWidget * parent)*/{
  auto _nilp = (MyQToolBar*)(0);
  const QString & title = *(const QString *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QToolBar(title, parent);
  this_ =  new MyQToolBar(title, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:73
// [-2] void QToolBar(QWidget *) 
// (12)qm2552095711 (24)_ZN8QToolBarC2EP7QWidget
/*void* qm2552095711(QWidget * parent)*/{
  auto _nilp = (MyQToolBar*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QToolBar(parent);
  this_ =  new MyQToolBar(parent);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:82
// [1] bool isAreaAllowed(Qt::ToolBarArea) const
// (12)qm3420958752 (47)_ZNK8QToolBar13isAreaAllowedEN2Qt11ToolBarAreaE
//static
/*void qm3420958752(Qt::ToolBarArea area)*/ {
  Qt::ToolBarArea area = *(Qt::ToolBarArea*)this_;
  (void) ((QToolBar*)this_)->isAreaAllowed(area);
   auto xptr = (bool (QToolBar::*)(Qt::ToolBarArea) const ) &QToolBar::isAreaAllowed;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbar.h:152
// [8] QAction * actionAt(int, int) const
// (12)qm2524646119 (25)_ZNK8QToolBar8actionAtEii
//static
/*void qm2524646119(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QToolBar*)this_)->actionAt(x, y);
   auto xptr = (QAction * (QToolBar::*)(int, int) const ) &QToolBar::actionAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QToolBarD2Ev(void *this_)*/ {
  delete (QToolBar*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtoolbar
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(toolbar)
#endif // #ifndef QT_MINIMAL
//  footer block end
