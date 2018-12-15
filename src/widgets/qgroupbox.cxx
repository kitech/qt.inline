//  header block begin

// /usr/include/qt/QtWidgets/qgroupbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgroupbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGroupBox is pure virtual: false
// QGroupBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGroupBox_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGroupBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGroupBox_t qt_meta_stringdata_MyQGroupBox = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQGroupBox"
  },
  "MyQGroupBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGroupBox[] = {
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
class Q_DECL_EXPORT MyQGroupBox : public QGroupBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGroupBox::staticMetaObject,
  qt_meta_stringdata_MyQGroupBox.data,
  qt_meta_data_MyQGroupBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQGroupBox.stringdata0))
      return static_cast<void*>(this);
  return QGroupBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGroupBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQGroupBox() {}
// void QGroupBox(QWidget *)
MyQGroupBox(QWidget * parent) : QGroupBox(parent) {}
// void QGroupBox(const QString &, QWidget *)
MyQGroupBox(const QString & title, QWidget * parent) : QGroupBox(title, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QGroupBox::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void childEvent(QChildEvent *)
  virtual void childEvent(QChildEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"childEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGroupBox::childEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGroupBox::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGroupBox::paintEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGroupBox::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGroupBox::changeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGroupBox::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGroupBox::mouseMoveEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QGroupBox::mouseReleaseEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QGroupBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGroupBox* qo = (MyQGroupBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:89
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN9QGroupBox5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QGroupBox*)this_)->QGroupBox::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:90
// [-2] void childEvent(QChildEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox10childEventEP11QChildEvent(void *this_, QChildEvent * event) {
  ((QGroupBox*)this_)->QGroupBox::childEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:91
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QGroupBox*)this_)->QGroupBox::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:92
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QGroupBox*)this_)->QGroupBox::paintEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:93
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QGroupBox*)this_)->QGroupBox::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:94
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox11changeEventEP6QEvent(void *this_, QEvent * event) {
  ((QGroupBox*)this_)->QGroupBox::changeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:95
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QGroupBox*)this_)->QGroupBox::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:96
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QGroupBox*)this_)->QGroupBox::mouseMoveEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:97
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QGroupBox*)this_)->QGroupBox::mouseReleaseEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QGroupBox10metaObjectEv(void *this_) {
  return (void*)((QGroupBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QGroupBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGroupBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QGroupBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGroupBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QGroupBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGroupBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QGroupBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGroupBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:63
// [-2] void QGroupBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QGroupBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQGroupBox*)(0);
  return  new MyQGroupBox(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:64
// [-2] void QGroupBox(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QGroupBoxC2ERK7QStringP7QWidget(QString* title, QWidget * parent) {
  auto _nilp = (MyQGroupBox*)(0);
  return  new MyQGroupBox(*title, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:65
// [-2] void ~QGroupBox()
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBoxD2Ev(void *this_) {
  delete (QGroupBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:67
// [8] QString title()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QGroupBox5titleEv(void *this_) {
  auto rv = ((QGroupBox*)this_)->title();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:68
// [-2] void setTitle(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox8setTitleERK7QString(void *this_, QString* title) {
  ((QGroupBox*)this_)->setTitle(*title);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:70
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK9QGroupBox9alignmentEv(void *this_) {
  return (Qt::Alignment)((QGroupBox*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:71
// [-2] void setAlignment(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox12setAlignmentEi(void *this_, int alignment) {
  ((QGroupBox*)this_)->setAlignment(alignment);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:73
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QGroupBox15minimumSizeHintEv(void *this_) {
  auto rv = ((QGroupBox*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:75
// [1] bool isFlat()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGroupBox6isFlatEv(void *this_) {
  return (bool)((QGroupBox*)this_)->isFlat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:76
// [-2] void setFlat(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox7setFlatEb(void *this_, bool flat) {
  ((QGroupBox*)this_)->setFlat(flat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:77
// [1] bool isCheckable()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGroupBox11isCheckableEv(void *this_) {
  return (bool)((QGroupBox*)this_)->isCheckable();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:78
// [-2] void setCheckable(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox12setCheckableEb(void *this_, bool checkable) {
  ((QGroupBox*)this_)->setCheckable(checkable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:79
// [1] bool isChecked()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGroupBox9isCheckedEv(void *this_) {
  return (bool)((QGroupBox*)this_)->isChecked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:82
// [-2] void setChecked(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox10setCheckedEb(void *this_, bool checked) {
  ((QGroupBox*)this_)->setChecked(checked);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qgroupbox.h:85
// [-2] void clicked(bool)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox7clickedEb(void *this_, bool checked) {
  ((QGroupBox*)this_)->clicked(checked);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgroupbox.h:86
// [-2] void toggled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QGroupBox7toggledEb(void *this_, bool arg0) {
  ((QGroupBox*)this_)->toggled(arg0);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
