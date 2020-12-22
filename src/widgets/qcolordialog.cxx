//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(colordialog)
// /usr/include/qt/QtWidgets/qcolordialog.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolordialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColorDialog is pure virtual: false false
// QColorDialog has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQColorDialog_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQColorDialog_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQColorDialog_t qt_meta_stringdata_MyQColorDialog = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQColorDialog"
  },
  "MyQColorDialog"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQColorDialog[] = {
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
class Q_DECL_EXPORT MyQColorDialog : public QColorDialog {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QColorDialog::staticMetaObject,
  qt_meta_stringdata_MyQColorDialog.data,
  qt_meta_data_MyQColorDialog,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQColorDialog.stringdata0))
      return static_cast<void*>(this);
  return QColorDialog::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QColorDialog::qt_metacall(_c, _id, _a);
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
  virtual ~MyQColorDialog() {}
// void QColorDialog(QWidget *)
MyQColorDialog(QWidget * parent) : QColorDialog(parent) {}
// void QColorDialog(const QColor &, QWidget *)
MyQColorDialog(const QColor & initial, QWidget * parent) : QColorDialog(initial, parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QColorDialog::changeEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void done(int)
  virtual void done(int result)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"done", &handled, 1, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QColorDialog::done(result);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QColorDialog_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQColorDialog* qo = (MyQColorDialog*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcolordialog(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1126599130 (28)_ZN12QColorDialog2trEPKcS1_i
//static
/*void qm1126599130(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QColorDialog::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QColorDialog::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:71
// [-2] void QColorDialog(QWidget *) 
// (11)qm430001321 (29)_ZN12QColorDialogC2EP7QWidget
/*void* qm430001321(QWidget * parent)*/{
  auto _nilp = (MyQColorDialog*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QColorDialog(parent);
  this_ =  new MyQColorDialog(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:72
// [-2] void QColorDialog(const QColor &, QWidget *) 
// (11)qm718652138 (38)_ZN12QColorDialogC2ERK6QColorP7QWidget
/*void* qm718652138(const QColor & initial, QWidget * parent)*/{
  auto _nilp = (MyQColorDialog*)(0);
  const QColor & initial = *(const QColor *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QColorDialog(initial, parent);
  this_ =  new MyQColorDialog(initial, parent);
}


/*void C_ZN12QColorDialogD2Ev(void *this_)*/ {
  delete (QColorDialog*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcolordialog
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(colordialog)
#endif // #ifndef QT_MINIMAL
//  footer block end
