//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(datetimeedit)
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetimeedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDateTimeEdit is pure virtual: false false
// QDateTimeEdit has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDateTimeEdit_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDateTimeEdit_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDateTimeEdit_t qt_meta_stringdata_MyQDateTimeEdit = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQDateTimeEdit"
  },
  "MyQDateTimeEdit"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDateTimeEdit[] = {
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
class Q_DECL_EXPORT MyQDateTimeEdit : public QDateTimeEdit {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDateTimeEdit::staticMetaObject,
  qt_meta_stringdata_MyQDateTimeEdit.data,
  qt_meta_data_MyQDateTimeEdit,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDateTimeEdit.stringdata0))
      return static_cast<void*>(this);
  return QDateTimeEdit::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDateTimeEdit::qt_metacall(_c, _id, _a);
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
  virtual ~MyQDateTimeEdit() {}
// void QDateTimeEdit(QWidget *)
MyQDateTimeEdit(QWidget * parent) : QDateTimeEdit(parent) {}
// void QDateTimeEdit(const QDateTime &, QWidget *)
MyQDateTimeEdit(const QDateTime & dt, QWidget * parent) : QDateTimeEdit(dt, parent) {}
// void QDateTimeEdit(const QDate &, QWidget *)
MyQDateTimeEdit(const QDate & d, QWidget * parent) : QDateTimeEdit(d, parent) {}
// void QDateTimeEdit(const QTime &, QWidget *)
MyQDateTimeEdit(const QTime & t, QWidget * parent) : QDateTimeEdit(t, parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::keyPressEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::wheelEvent(event);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::focusInEvent(event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QDateTimeEdit::focusNextPrevChild(next);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] QValidator::State validate(QString &, int &)
  virtual QValidator::State validate(QString & input, int & pos) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"validate", &handled, 2, (uint64_t)&input, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QValidator::State)(int)(irv);
      // Elaborated Enum QValidator::State
    } else {
    return QDateTimeEdit::validate(input, pos);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void fixup(QString &)
  virtual void fixup(QString & input) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"fixup", &handled, 1, (uint64_t)&input, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::fixup(input);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QDateTime dateTimeFromText(const QString &)
  virtual QDateTime dateTimeFromText(const QString & text) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dateTimeFromText", &handled, 1, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QDateTime){};}
    auto prv = (QDateTime*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QDateTime
    } else {
    return QDateTimeEdit::dateTimeFromText(text);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QString textFromDateTime(const QDateTime &)
  virtual QString textFromDateTime(const QDateTime & dt) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textFromDateTime", &handled, 1, (uint64_t)&dt, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return QDateTimeEdit::textFromDateTime(dt);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] QAbstractSpinBox::StepEnabled stepEnabled()
  virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stepEnabled", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractSpinBox::StepEnabled)(int)(irv);
      // Typedef Record QFlags<QAbstractSpinBox::StepEnabledFlag>
    } else {
    return QDateTimeEdit::stepEnabled();
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
    QDateTimeEdit::mousePressEvent(event);
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
    QDateTimeEdit::paintEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QDateTimeEdit_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDateTimeEdit* qo = (MyQDateTimeEdit*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdatetimeedit(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:59
// [8] QString tr(const char *, const char *, int) 
// (12)qm3213100831 (29)_ZN13QDateTimeEdit2trEPKcS1_i
//static
/*void qm3213100831(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDateTimeEdit::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDateTimeEdit::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:96
// [-2] void QDateTimeEdit(QWidget *) 
// (12)qm4065581080 (30)_ZN13QDateTimeEditC2EP7QWidget
/*void* qm4065581080(QWidget * parent)*/{
  auto _nilp = (MyQDateTimeEdit*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QDateTimeEdit(parent);
  this_ =  new MyQDateTimeEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:97
// [-2] void QDateTimeEdit(const QDateTime &, QWidget *) 
// (12)qm1210068397 (42)_ZN13QDateTimeEditC2ERK9QDateTimeP7QWidget
/*void* qm1210068397(const QDateTime & dt, QWidget * parent)*/{
  auto _nilp = (MyQDateTimeEdit*)(0);
  const QDateTime & dt = *(const QDateTime *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QDateTimeEdit(dt, parent);
  this_ =  new MyQDateTimeEdit(dt, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:98
// [-2] void QDateTimeEdit(const QDate &, QWidget *) 
// (12)qm3414390093 (38)_ZN13QDateTimeEditC2ERK5QDateP7QWidget
/*void* qm3414390093(const QDate & d, QWidget * parent)*/{
  auto _nilp = (MyQDateTimeEdit*)(0);
  const QDate & d = *(const QDate *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QDateTimeEdit(d, parent);
  this_ =  new MyQDateTimeEdit(d, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:99
// [-2] void QDateTimeEdit(const QTime &, QWidget *) 
// (12)qm2889047847 (38)_ZN13QDateTimeEditC2ERK5QTimeP7QWidget
/*void* qm2889047847(const QTime & t, QWidget * parent)*/{
  auto _nilp = (MyQDateTimeEdit*)(0);
  const QTime & t = *(const QTime *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QDateTimeEdit(t, parent);
  this_ =  new MyQDateTimeEdit(t, parent);
}


/*void C_ZN13QDateTimeEditD2Ev(void *this_)*/ {
  delete (QDateTimeEdit*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdatetimeedit
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(datetimeedit)
#endif // #ifndef QT_MINIMAL
//  footer block end
