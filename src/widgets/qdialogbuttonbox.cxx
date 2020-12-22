//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(dialogbuttonbox)
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdialogbuttonbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDialogButtonBox is pure virtual: false false
// QDialogButtonBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDialogButtonBox_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDialogButtonBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDialogButtonBox_t qt_meta_stringdata_MyQDialogButtonBox = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQDialogButtonBox"
  },
  "MyQDialogButtonBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDialogButtonBox[] = {
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
class Q_DECL_EXPORT MyQDialogButtonBox : public QDialogButtonBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDialogButtonBox::staticMetaObject,
  qt_meta_stringdata_MyQDialogButtonBox.data,
  qt_meta_data_MyQDialogButtonBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDialogButtonBox.stringdata0))
      return static_cast<void*>(this);
  return QDialogButtonBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDialogButtonBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDialogButtonBox() {}
// void QDialogButtonBox(QWidget *)
MyQDialogButtonBox(QWidget * parent) : QDialogButtonBox(parent) {}
// void QDialogButtonBox(Qt::Orientation, QWidget *)
MyQDialogButtonBox(Qt::Orientation orientation, QWidget * parent) : QDialogButtonBox(orientation, parent) {}
// void QDialogButtonBox(QDialogButtonBox::StandardButtons, QWidget *)
MyQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, QWidget * parent) : QDialogButtonBox(buttons, parent) {}
// void QDialogButtonBox(QDialogButtonBox::StandardButtons, Qt::Orientation, QWidget *)
MyQDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget * parent) : QDialogButtonBox(buttons, orientation, parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDialogButtonBox::changeEvent(event);
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
    return QDialogButtonBox::event(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QDialogButtonBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDialogButtonBox* qo = (MyQDialogButtonBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdialogbuttonbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:57
// [8] QString tr(const char *, const char *, int) 
// (12)qm2778958411 (32)_ZN16QDialogButtonBox2trEPKcS1_i
//static
/*void qm2778958411(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDialogButtonBox::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDialogButtonBox::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:120
// [-2] void QDialogButtonBox(QWidget *) 
// (12)qm2656004728 (33)_ZN16QDialogButtonBoxC2EP7QWidget
/*void* qm2656004728(QWidget * parent)*/{
  auto _nilp = (MyQDialogButtonBox*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QDialogButtonBox(parent);
  this_ =  new MyQDialogButtonBox(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:121
// [-2] void QDialogButtonBox(Qt::Orientation, QWidget *) 
// (12)qm2679660168 (51)_ZN16QDialogButtonBoxC2EN2Qt11OrientationEP7QWidget
/*void* qm2679660168(Qt::Orientation orientation, QWidget * parent)*/{
  auto _nilp = (MyQDialogButtonBox*)(0);
  Qt::Orientation orientation = *(Qt::Orientation*)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QDialogButtonBox(orientation, parent);
  this_ =  new MyQDialogButtonBox(orientation, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:122
// [-2] void QDialogButtonBox(QDialogButtonBox::StandardButtons, QWidget *) 
// (12)qm1798518328 (62)_ZN16QDialogButtonBoxC2E6QFlagsINS_14StandardButtonEEP7QWidget
/*void* qm1798518328(QFlags<QDialogButtonBox::StandardButton> buttons, QWidget * parent)*/{
  auto _nilp = (MyQDialogButtonBox*)(0);
  QFlags<QDialogButtonBox::StandardButton> buttons = *(QFlags<QDialogButtonBox::StandardButton>*)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QDialogButtonBox(buttons, parent);
  this_ =  new MyQDialogButtonBox(buttons, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:123
// [-2] void QDialogButtonBox(QDialogButtonBox::StandardButtons, Qt::Orientation, QWidget *) 
// (12)qm4179775101 (80)_ZN16QDialogButtonBoxC2E6QFlagsINS_14StandardButtonEEN2Qt11OrientationEP7QWidget
/*void* qm4179775101(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget * parent)*/{
  auto _nilp = (MyQDialogButtonBox*)(0);
  QFlags<QDialogButtonBox::StandardButton> buttons = *(QFlags<QDialogButtonBox::StandardButton>*)this_; Qt::Orientation orientation = *(Qt::Orientation*)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QDialogButtonBox(buttons, orientation, parent);
  this_ =  new MyQDialogButtonBox(buttons, orientation, parent);
}


/*void C_ZN16QDialogButtonBoxD2Ev(void *this_)*/ {
  delete (QDialogButtonBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdialogbuttonbox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dialogbuttonbox)
#endif // #ifndef QT_MINIMAL
//  footer block end
