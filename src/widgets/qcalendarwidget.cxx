//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(calendarwidget)
// /usr/include/qt/QtWidgets/qcalendarwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcalendarwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCalendarWidget is pure virtual: false false
// QCalendarWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCalendarWidget_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCalendarWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCalendarWidget_t qt_meta_stringdata_MyQCalendarWidget = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQCalendarWidget"
  },
  "MyQCalendarWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCalendarWidget[] = {
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
class Q_DECL_EXPORT MyQCalendarWidget : public QCalendarWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCalendarWidget::staticMetaObject,
  qt_meta_stringdata_MyQCalendarWidget.data,
  qt_meta_data_MyQCalendarWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCalendarWidget.stringdata0))
      return static_cast<void*>(this);
  return QCalendarWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCalendarWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCalendarWidget() {}
// void QCalendarWidget(QWidget *)
MyQCalendarWidget(QWidget * parent) : QCalendarWidget(parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCalendarWidget::event(event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * watched, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCalendarWidget::eventFilter(watched, event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCalendarWidget::mousePressEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCalendarWidget::resizeEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCalendarWidget::keyPressEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintCell(QPainter *, const QRect &, const QDate &)
  virtual void paintCell(QPainter * painter, const QRect & rect, const QDate & date) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintCell", &handled, 3, (uint64_t)painter, (uint64_t)&rect, (uint64_t)&date, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCalendarWidget::paintCell(painter, rect, date);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCalendarWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCalendarWidget* qo = (MyQCalendarWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcalendarwidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm1077186304 (31)_ZN15QCalendarWidget2trEPKcS1_i
//static
/*void qm1077186304(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCalendarWidget::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCalendarWidget::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:92
// [-2] void QCalendarWidget(QWidget *) 
// (12)qm2141480293 (32)_ZN15QCalendarWidgetC2EP7QWidget
/*void* qm2141480293(QWidget * parent)*/{
  auto _nilp = (MyQCalendarWidget*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QCalendarWidget(parent);
  this_ =  new MyQCalendarWidget(parent);
}


/*void C_ZN15QCalendarWidgetD2Ev(void *this_)*/ {
  delete (QCalendarWidget*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcalendarwidget
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(calendarwidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
