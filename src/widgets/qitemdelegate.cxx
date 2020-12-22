//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(itemviews)
// /usr/include/qt/QtWidgets/qitemdelegate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemDelegate is pure virtual: false false
// QItemDelegate has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQItemDelegate_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQItemDelegate_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQItemDelegate_t qt_meta_stringdata_MyQItemDelegate = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQItemDelegate"
  },
  "MyQItemDelegate"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQItemDelegate[] = {
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
class Q_DECL_EXPORT MyQItemDelegate : public QItemDelegate {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QItemDelegate::staticMetaObject,
  qt_meta_stringdata_MyQItemDelegate.data,
  qt_meta_data_MyQItemDelegate,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQItemDelegate.stringdata0))
      return static_cast<void*>(this);
  return QItemDelegate::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
  virtual ~MyQItemDelegate() {}
// void QItemDelegate(QObject *)
MyQItemDelegate(QObject * parent) : QItemDelegate(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void drawDisplay(QPainter *, const QStyleOptionViewItem &, const QRect &, const QString &)
  virtual void drawDisplay(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QString & text) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawDisplay", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)&text, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemDelegate::drawDisplay(painter, option, rect, text);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void drawDecoration(QPainter *, const QStyleOptionViewItem &, const QRect &, const QPixmap &)
  virtual void drawDecoration(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QPixmap & pixmap) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawDecoration", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)&pixmap, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemDelegate::drawDecoration(painter, option, rect, pixmap);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void drawFocus(QPainter *, const QStyleOptionViewItem &, const QRect &)
  virtual void drawFocus(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawFocus", &handled, 3, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemDelegate::drawFocus(painter, option, rect);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void drawCheck(QPainter *, const QStyleOptionViewItem &, const QRect &, Qt::CheckState)
  virtual void drawCheck(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, Qt::CheckState state) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawCheck", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)state, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemDelegate::drawCheck(painter, option, rect, state);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QItemDelegate::eventFilter(object, event);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool editorEvent(QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &)
  virtual bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"editorEvent", &handled, 4, (uint64_t)event, (uint64_t)model, (uint64_t)&option, (uint64_t)&index, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QItemDelegate::editorEvent(event, model, option, index);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QItemDelegate_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQItemDelegate* qo = (MyQItemDelegate*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qitemdelegate(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm3353541161 (29)_ZN13QItemDelegate2trEPKcS1_i
//static
/*void qm3353541161(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QItemDelegate::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QItemDelegate::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:62
// [-2] void QItemDelegate(QObject *) 
// (11)qm281386560 (30)_ZN13QItemDelegateC2EP7QObject
/*void* qm281386560(QObject * parent)*/{
  auto _nilp = (MyQItemDelegate*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QItemDelegate(parent);
  this_ =  new MyQItemDelegate(parent);
}


/*void C_ZN13QItemDelegateD2Ev(void *this_)*/ {
  delete (QItemDelegate*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qitemdelegate
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemviews)
#endif // #ifndef QT_MINIMAL
//  footer block end
