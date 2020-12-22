//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(toolbox)
// /usr/include/qt/QtWidgets/qtoolbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtoolbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolBox is pure virtual: false false
// QToolBox has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQToolBox_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQToolBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQToolBox_t qt_meta_stringdata_MyQToolBox = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQToolBox"
  },
  "MyQToolBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQToolBox[] = {
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
class Q_DECL_EXPORT MyQToolBox : public QToolBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QToolBox::staticMetaObject,
  qt_meta_stringdata_MyQToolBox.data,
  qt_meta_data_MyQToolBox,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQToolBox.stringdata0))
      return static_cast<void*>(this);
  return QToolBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QToolBox::qt_metacall(_c, _id, _a);
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
  virtual ~MyQToolBox() {}
// void QToolBox(QWidget *, Qt::WindowFlags)
MyQToolBox(QWidget * parent, QFlags<Qt::WindowType> f) : QToolBox(parent, f) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QToolBox::event(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void itemInserted(int)
  virtual void itemInserted(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"itemInserted", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBox::itemInserted(index);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void itemRemoved(int)
  virtual void itemRemoved(int index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"itemRemoved", &handled, 1, (uint64_t)index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBox::itemRemoved(index);
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
    QToolBox::showEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QToolBox::changeEvent(arg0);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QToolBox_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQToolBox* qo = (MyQToolBox*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtoolbox(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:55
// [8] QString tr(const char *, const char *, int) 
// (12)qm1364121311 (23)_ZN8QToolBox2trEPKcS1_i
//static
/*void qm1364121311(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QToolBox::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QToolBox::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:60
// [-2] void QToolBox(QWidget *, Qt::WindowFlags) 
// (12)qm3720643475 (50)_ZN8QToolBoxC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE
/*void* qm3720643475(QWidget * parent, QFlags<Qt::WindowType> f)*/{
  auto _nilp = (MyQToolBox*)(0);
  QWidget * parent = *(QWidget **)this_; QFlags<Qt::WindowType> f = *(QFlags<Qt::WindowType>*)this_;
  this_ =  new QToolBox(parent, f);
  this_ =  new MyQToolBox(parent, f);
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:63
// [4] int addItem(QWidget *, const QString &) 
// (11)qm254976737 (40)_ZN8QToolBox7addItemEP7QWidgetRK7QString
//static
/*void qm254976737(QWidget * widget, const QString & text)*/ {
  QWidget * widget = *(QWidget **)this_; const QString & text = *(const QString *)this_;
  (void) ((QToolBox*)this_)->addItem(widget, text);
   auto xptr = (int (QToolBox::*)(QWidget*, QString const&) ) &QToolBox::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:64
// [4] int addItem(QWidget *, const QIcon &, const QString &) 
// (12)qm1143156347 (48)_ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString
//static
/*void qm1143156347(QWidget * widget, const QIcon & icon, const QString & text)*/ {
  QWidget * widget = *(QWidget **)this_; const QIcon & icon = *(const QIcon *)this_; const QString & text = *(const QString *)this_;
  (void) ((QToolBox*)this_)->addItem(widget, icon, text);
   auto xptr = (int (QToolBox::*)(QWidget*, QIcon const&, QString const&) ) &QToolBox::addItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:65
// [4] int insertItem(int, QWidget *, const QString &) 
// (11)qm718643865 (45)_ZN8QToolBox10insertItemEiP7QWidgetRK7QString
//static
/*void qm718643865(int index, QWidget * widget, const QString & text)*/ {
  int index = *(int*)this_; QWidget * widget = *(QWidget **)this_; const QString & text = *(const QString *)this_;
  (void) ((QToolBox*)this_)->insertItem(index, widget, text);
   auto xptr = (int (QToolBox::*)(int, QWidget*, QString const&) ) &QToolBox::insertItem;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QToolBoxD2Ev(void *this_)*/ {
  delete (QToolBox*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtoolbox
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(toolbox)
#endif // #ifndef QT_MINIMAL
//  footer block end
