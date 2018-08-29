//  header block begin
// /usr/include/qt/QtWidgets/qtoolbox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtoolbox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QToolBox is pure virtual: false
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
  virtual ~MyQToolBox() {}
// void QToolBox(QWidget *, Qt::WindowFlags)
MyQToolBox(QWidget * parent, QFlags<Qt::WindowType> f) : QToolBox(parent, f) {}
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:98
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN8QToolBox5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QToolBox*)this_)->QToolBox::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:99
// [-2] void itemInserted(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox12itemInsertedEi(void *this_, int index) {
  ((QToolBox*)this_)->QToolBox::itemInserted(index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:100
// [-2] void itemRemoved(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox11itemRemovedEi(void *this_, int index) {
  ((QToolBox*)this_)->QToolBox::itemRemoved(index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:101
// [-2] void showEvent(QShowEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox9showEventEP10QShowEvent(void *this_, QShowEvent * e) {
  ((QToolBox*)this_)->QToolBox::showEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:102
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QToolBox*)this_)->QToolBox::changeEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBox10metaObjectEv(void *this_) {
  return (void*)((QToolBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QToolBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN8QToolBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QToolBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QToolBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QToolBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:60
// [-2] void QToolBox(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN8QToolBoxC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQToolBox*)(0);
  return  new MyQToolBox(parent, f);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:61
// [-2] void ~QToolBox()
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBoxD2Ev(void *this_) {
  delete (QToolBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:63
// [4] int addItem(QWidget *, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN8QToolBox7addItemEP7QWidgetRK7QString(void *this_, QWidget * widget, QString* text) {
  return (int)((QToolBox*)this_)->addItem(widget, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:64
// [4] int addItem(QWidget *, const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN8QToolBox7addItemEP7QWidgetRK5QIconRK7QString(void *this_, QWidget * widget, QIcon* icon, QString* text) {
  return (int)((QToolBox*)this_)->addItem(widget, *icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:65
// [4] int insertItem(int, QWidget *, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN8QToolBox10insertItemEiP7QWidgetRK7QString(void *this_, int index, QWidget * widget, QString* text) {
  return (int)((QToolBox*)this_)->insertItem(index, widget, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:66
// [4] int insertItem(int, QWidget *, const QIcon &, const QString &)
extern "C" Q_DECL_EXPORT
int C_ZN8QToolBox10insertItemEiP7QWidgetRK5QIconRK7QString(void *this_, int index, QWidget * widget, QIcon* icon, QString* text) {
  return (int)((QToolBox*)this_)->insertItem(index, widget, *icon, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:68
// [-2] void removeItem(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox10removeItemEi(void *this_, int index) {
  ((QToolBox*)this_)->removeItem(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:70
// [-2] void setItemEnabled(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox14setItemEnabledEib(void *this_, int index, bool enabled) {
  ((QToolBox*)this_)->setItemEnabled(index, enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:71
// [1] bool isItemEnabled(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK8QToolBox13isItemEnabledEi(void *this_, int index) {
  return (bool)((QToolBox*)this_)->isItemEnabled(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:73
// [-2] void setItemText(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox11setItemTextEiRK7QString(void *this_, int index, QString* text) {
  ((QToolBox*)this_)->setItemText(index, *text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:74
// [8] QString itemText(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBox8itemTextEi(void *this_, int index) {
  auto rv = ((QToolBox*)this_)->itemText(index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:76
// [-2] void setItemIcon(int, const QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox11setItemIconEiRK5QIcon(void *this_, int index, QIcon* icon) {
  ((QToolBox*)this_)->setItemIcon(index, *icon);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:77
// [8] QIcon itemIcon(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBox8itemIconEi(void *this_, int index) {
  auto rv = ((QToolBox*)this_)->itemIcon(index);
return new QIcon(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:80
// [-2] void setItemToolTip(int, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox14setItemToolTipEiRK7QString(void *this_, int index, QString* toolTip) {
  ((QToolBox*)this_)->setItemToolTip(index, *toolTip);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:81
// [8] QString itemToolTip(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBox11itemToolTipEi(void *this_, int index) {
  auto rv = ((QToolBox*)this_)->itemToolTip(index);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:84
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK8QToolBox12currentIndexEv(void *this_) {
  return (int)((QToolBox*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:85
// [8] QWidget * currentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBox13currentWidgetEv(void *this_) {
  return (void*)((QToolBox*)this_)->currentWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:86
// [8] QWidget * widget(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QToolBox6widgetEi(void *this_, int index) {
  return (void*)((QToolBox*)this_)->widget(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:87
// [4] int indexOf(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK8QToolBox7indexOfEP7QWidget(void *this_, QWidget * widget) {
  return (int)((QToolBox*)this_)->indexOf(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:88
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK8QToolBox5countEv(void *this_) {
  return (int)((QToolBox*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:91
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox15setCurrentIndexEi(void *this_, int index) {
  ((QToolBox*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:92
// [-2] void setCurrentWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox16setCurrentWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QToolBox*)this_)->setCurrentWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtoolbox.h:95
// [-2] void currentChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN8QToolBox14currentChangedEi(void *this_, int index) {
  ((QToolBox*)this_)->currentChanged(index);
}

//  main block end
