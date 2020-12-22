//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(commandlinkbutton)
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcommandlinkbutton.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCommandLinkButton is pure virtual: false false
// QCommandLinkButton has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCommandLinkButton_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCommandLinkButton_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCommandLinkButton_t qt_meta_stringdata_MyQCommandLinkButton = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQCommandLinkButton"
  },
  "MyQCommandLinkButton"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCommandLinkButton[] = {
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
class Q_DECL_EXPORT MyQCommandLinkButton : public QCommandLinkButton {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCommandLinkButton::staticMetaObject,
  qt_meta_stringdata_MyQCommandLinkButton.data,
  qt_meta_data_MyQCommandLinkButton,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQCommandLinkButton.stringdata0))
      return static_cast<void*>(this);
  return QCommandLinkButton::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCommandLinkButton::qt_metacall(_c, _id, _a);
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
  virtual ~MyQCommandLinkButton() {}
// void QCommandLinkButton(QWidget *)
MyQCommandLinkButton(QWidget * parent) : QCommandLinkButton(parent) {}
// void QCommandLinkButton(const QString &, QWidget *)
MyQCommandLinkButton(const QString & text, QWidget * parent) : QCommandLinkButton(text, parent) {}
// void QCommandLinkButton(const QString &, const QString &, QWidget *)
MyQCommandLinkButton(const QString & text, const QString & description, QWidget * parent) : QCommandLinkButton(text, description, parent) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [8] QSize sizeHint()
  virtual QSize sizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QCommandLinkButton::sizeHint();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int heightForWidth(int)
  virtual int heightForWidth(int arg0) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"heightForWidth", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QCommandLinkButton::heightForWidth(arg0);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] QSize minimumSizeHint()
  virtual QSize minimumSizeHint() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"minimumSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return QCommandLinkButton::minimumSizeHint();
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCommandLinkButton::event(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCommandLinkButton::paintEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCommandLinkButton_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCommandLinkButton* qo = (MyQCommandLinkButton*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcommandlinkbutton(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm2285821086 (34)_ZN18QCommandLinkButton2trEPKcS1_i
//static
/*void qm2285821086(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QCommandLinkButton::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QCommandLinkButton::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:61
// [-2] void QCommandLinkButton(QWidget *) 
// (12)qm1759236469 (35)_ZN18QCommandLinkButtonC2EP7QWidget
/*void* qm1759236469(QWidget * parent)*/{
  auto _nilp = (MyQCommandLinkButton*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QCommandLinkButton(parent);
  this_ =  new MyQCommandLinkButton(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:62
// [-2] void QCommandLinkButton(const QString &, QWidget *) 
// (12)qm1625817528 (45)_ZN18QCommandLinkButtonC2ERK7QStringP7QWidget
/*void* qm1625817528(const QString & text, QWidget * parent)*/{
  auto _nilp = (MyQCommandLinkButton*)(0);
  const QString & text = *(const QString *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QCommandLinkButton(text, parent);
  this_ =  new MyQCommandLinkButton(text, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcommandlinkbutton.h:63
// [-2] void QCommandLinkButton(const QString &, const QString &, QWidget *) 
// (12)qm3602460489 (48)_ZN18QCommandLinkButtonC2ERK7QStringS2_P7QWidget
/*void* qm3602460489(const QString & text, const QString & description, QWidget * parent)*/{
  auto _nilp = (MyQCommandLinkButton*)(0);
  const QString & text = *(const QString *)this_; const QString & description = *(const QString *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QCommandLinkButton(text, description, parent);
  this_ =  new MyQCommandLinkButton(text, description, parent);
}


/*void C_ZN18QCommandLinkButtonD2Ev(void *this_)*/ {
  delete (QCommandLinkButton*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcommandlinkbutton
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(commandlinkbutton)
#endif // #ifndef QT_MINIMAL
//  footer block end
