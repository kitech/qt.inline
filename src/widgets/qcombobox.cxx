//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(combobox)
// /usr/include/qt/QtWidgets/qcombobox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcombobox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QComboBox is pure virtual: false false
// QComboBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQComboBox_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQComboBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQComboBox_t qt_meta_stringdata_MyQComboBox = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQComboBox"
  },
  "MyQComboBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQComboBox[] = {
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
class Q_DECL_EXPORT MyQComboBox : public QComboBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QComboBox::staticMetaObject,
  qt_meta_stringdata_MyQComboBox.data,
  qt_meta_data_MyQComboBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQComboBox.stringdata0))
      return static_cast<void*>(this);
  return QComboBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QComboBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQComboBox() {}
// void QComboBox(QWidget *)
MyQComboBox(QWidget * parent) : QComboBox(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::focusInEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::focusOutEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::changeEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::resizeEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::paintEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::showEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void hideEvent(QHideEvent *)
  virtual void hideEvent(QHideEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hideEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::hideEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::mousePressEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::mouseReleaseEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::keyPressEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::keyReleaseEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::wheelEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::contextMenuEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QComboBox::inputMethodEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QComboBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQComboBox* qo = (MyQComboBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcombobox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm3886667730 (24)_ZN9QComboBox2trEPKcS1_i
//static
/*void qm3886667730(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QComboBox::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QComboBox::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:88
// [-2] void QComboBox(QWidget *) 
// (11)qm400444357 (25)_ZN9QComboBoxC2EP7QWidget
/*void* qm400444357(QWidget * parent)*/{
  auto _nilp = (MyQComboBox*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QComboBox(parent);
  this_ =  new MyQComboBox(parent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:117
// [4] int findText(const QString &, Qt::MatchFlags) const
// (11)qm773052779 (58)_ZNK9QComboBox8findTextERK7QString6QFlagsIN2Qt9MatchFlagEE
//static
/*void qm773052779(const QString & text, QFlags<Qt::MatchFlag> flags)*/ {
  const QString & text = *(const QString *)this_; QFlags<Qt::MatchFlag> flags = *(QFlags<Qt::MatchFlag>*)this_;
  (void) ((QComboBox*)this_)->findText(text, flags);
   auto xptr = (int (QComboBox::*)(QString const&, QFlags<Qt::MatchFlag>) const ) &QComboBox::findText;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:192
// [-2] void addItem(const QString &, const QVariant &) 
// (11)qm931319215 (43)_ZN9QComboBox7addItemERK7QStringRK8QVariant
//static
/*void qm931319215(const QString & text, const QVariant & userData)*/ {
  const QString & text = *(const QString *)this_; const QVariant & userData = *(const QVariant *)this_;
  (void) ((QComboBox*)this_)->addItem(text, userData);
   auto xptr = (void (QComboBox::*)(QString const&, QVariant const&) ) &QComboBox::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:193
// [-2] void addItem(const QIcon &, const QString &, const QVariant &) 
// (12)qm2134659944 (51)_ZN9QComboBox7addItemERK5QIconRK7QStringRK8QVariant
//static
/*void qm2134659944(const QIcon & icon, const QString & text, const QVariant & userData)*/ {
  const QIcon & icon = *(const QIcon *)this_; const QString & text = *(const QString *)this_; const QVariant & userData = *(const QVariant *)this_;
  (void) ((QComboBox*)this_)->addItem(icon, text, userData);
   auto xptr = (void (QComboBox::*)(QIcon const&, QString const&, QVariant const&) ) &QComboBox::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:195
// [-2] void addItems(const QStringList &) 
// (12)qm3409109814 (38)_ZN9QComboBox8addItemsERK11QStringList
//static
/*void qm3409109814(const QStringList & texts)*/ {
  const QStringList & texts = *(const QStringList *)this_;
  (void) ((QComboBox*)this_)->addItems(texts);
   auto xptr = (void (QComboBox::*)(QStringList const&) ) &QComboBox::addItems;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcombobox.h:198
// [-2] void insertItem(int, const QString &, const QVariant &) 
// (12)qm3465040126 (48)_ZN9QComboBox10insertItemEiRK7QStringRK8QVariant
//static
/*void qm3465040126(int index, const QString & text, const QVariant & userData)*/ {
  int index = *(int*)this_; const QString & text = *(const QString *)this_; const QVariant & userData = *(const QVariant *)this_;
  (void) ((QComboBox*)this_)->insertItem(index, text, userData);
   auto xptr = (void (QComboBox::*)(int, QString const&, QVariant const&) ) &QComboBox::insertItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QComboBoxD2Ev(void *this_)*/ {
  delete (QComboBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcombobox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(combobox)
#endif // #ifndef QT_MINIMAL
//  footer block end
