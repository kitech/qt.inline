//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(messagebox)
// /usr/include/qt/QtWidgets/qmessagebox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmessagebox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QMessageBox is pure virtual: false false
// QMessageBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMessageBox_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMessageBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMessageBox_t qt_meta_stringdata_MyQMessageBox = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQMessageBox"
  },
  "MyQMessageBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMessageBox[] = {
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
class Q_DECL_EXPORT MyQMessageBox : public QMessageBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMessageBox::staticMetaObject,
  qt_meta_stringdata_MyQMessageBox.data,
  qt_meta_data_MyQMessageBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMessageBox.stringdata0))
      return static_cast<void*>(this);
  return QMessageBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMessageBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMessageBox() {}
// void QMessageBox(QWidget *)
MyQMessageBox(QWidget * parent) : QMessageBox(parent) {}
// void QMessageBox(QMessageBox::Icon, const QString &, const QString &, QMessageBox::StandardButtons, QWidget *, Qt::WindowFlags)
MyQMessageBox(QMessageBox::Icon icon, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QWidget * parent, QFlags<Qt::WindowType> flags) : QMessageBox(icon, title, text, buttons, parent, flags) {}
// void QMessageBox(const QString &, const QString &, QMessageBox::Icon, int, int, int, QWidget *, Qt::WindowFlags)
MyQMessageBox(const QString & title, const QString & text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, QFlags<Qt::WindowType> f) : QMessageBox(title, text, icon, button0, button1, button2, parent, f) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMessageBox::event(e);
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
    QMessageBox::resizeEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMessageBox::showEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void closeEvent(QCloseEvent *)
  virtual void closeEvent(QCloseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"closeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QMessageBox::closeEvent(event);
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
    QMessageBox::keyPressEvent(event);
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
    QMessageBox::changeEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMessageBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMessageBox* qo = (MyQMessageBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmessagebox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm3750852778 (27)_ZN11QMessageBox2trEPKcS1_i
//static
/*void qm3750852778(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMessageBox::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMessageBox::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:217
// [4] QMessageBox::StandardButton information(QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton) 
// (12)qm1253014805 (75)_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_
//static
/*void qm1253014805(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)*/ {
  QWidget * parent = *(QWidget **)this_; const QString & title = *(const QString *)this_; const QString & text = *(const QString *)this_; QMessageBox::StandardButton button0 = *(QMessageBox::StandardButton*)this_; QMessageBox::StandardButton button1 = *(QMessageBox::StandardButton*)this_;
  (void) QMessageBox::information(parent, title, text, button0, button1);
   auto xptr = (QMessageBox::StandardButton (*)(QWidget*, QString const&, QString const&, QMessageBox::StandardButton, QMessageBox::StandardButton) ) &QMessageBox::information;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:232
// [4] int question(QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton) 
// (12)qm2244031201 (71)_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_
//static
/*void qm2244031201(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)*/ {
  QWidget * parent = *(QWidget **)this_; const QString & title = *(const QString *)this_; const QString & text = *(const QString *)this_; QMessageBox::StandardButton button0 = *(QMessageBox::StandardButton*)this_; QMessageBox::StandardButton button1 = *(QMessageBox::StandardButton*)this_;
  (void) QMessageBox::question(parent, title, text, button0, button1);
   auto xptr = (int (*)(QWidget*, QString const&, QString const&, QMessageBox::StandardButton, QMessageBox::StandardButton) ) &QMessageBox::question;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:247
// [4] int warning(QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton) 
// (11)qm648591063 (70)_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_
//static
/*void qm648591063(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)*/ {
  QWidget * parent = *(QWidget **)this_; const QString & title = *(const QString *)this_; const QString & text = *(const QString *)this_; QMessageBox::StandardButton button0 = *(QMessageBox::StandardButton*)this_; QMessageBox::StandardButton button1 = *(QMessageBox::StandardButton*)this_;
  (void) QMessageBox::warning(parent, title, text, button0, button1);
   auto xptr = (int (*)(QWidget*, QString const&, QString const&, QMessageBox::StandardButton, QMessageBox::StandardButton) ) &QMessageBox::warning;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:262
// [4] int critical(QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton) 
// (12)qm2150372017 (71)_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_
//static
/*void qm2150372017(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)*/ {
  QWidget * parent = *(QWidget **)this_; const QString & title = *(const QString *)this_; const QString & text = *(const QString *)this_; QMessageBox::StandardButton button0 = *(QMessageBox::StandardButton*)this_; QMessageBox::StandardButton button1 = *(QMessageBox::StandardButton*)this_;
  (void) QMessageBox::critical(parent, title, text, button0, button1);
   auto xptr = (int (*)(QWidget*, QString const&, QString const&, QMessageBox::StandardButton, QMessageBox::StandardButton) ) &QMessageBox::critical;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QMessageBoxD2Ev(void *this_)*/ {
  delete (QMessageBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmessagebox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(messagebox)
#endif // #ifndef QT_MINIMAL
//  footer block end
