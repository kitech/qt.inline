//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(treewidget)
// /usr/include/qt/QtWidgets/qtreewidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtreewidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeWidget is pure virtual: false false
// QTreeWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTreeWidget_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTreeWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTreeWidget_t qt_meta_stringdata_MyQTreeWidget = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTreeWidget"
  },
  "MyQTreeWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTreeWidget[] = {
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
class Q_DECL_EXPORT MyQTreeWidget : public QTreeWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTreeWidget::staticMetaObject,
  qt_meta_stringdata_MyQTreeWidget.data,
  qt_meta_data_MyQTreeWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTreeWidget.stringdata0))
      return static_cast<void*>(this);
  return QTreeWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTreeWidget() {}
// void QTreeWidget(QWidget *)
MyQTreeWidget(QWidget * parent) : QTreeWidget(parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTreeWidget::event(e);
  }
  }

// Protected virtual Indirect Visibility=Default Availability=Available
// [8] QStringList mimeTypes()
  virtual QStringList mimeTypes() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeTypes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return QTreeWidget::mimeTypes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QMimeData * mimeData(const QList<QTreeWidgetItem *>)
  virtual QMimeData * mimeData(const QList<QTreeWidgetItem *> items) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mimeData", &handled, 1, (uint64_t)&items, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMimeData *)(irv);
      // Pointer Pointer QMimeData *
    } else {
    return QTreeWidget::mimeData(items);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool dropMimeData(QTreeWidgetItem *, int, const QMimeData *, Qt::DropAction)
  virtual bool dropMimeData(QTreeWidgetItem * parent, int index, const QMimeData * data, Qt::DropAction action)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropMimeData", &handled, 4, (uint64_t)parent, (uint64_t)index, (uint64_t)data, (uint64_t)action, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTreeWidget::dropMimeData(parent, index, data, action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] Qt::DropActions supportedDropActions()
  virtual Qt::DropActions supportedDropActions() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedDropActions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (Qt::DropActions)(int)(irv);
      // Elaborated Record QFlags<Qt::DropAction>
    } else {
    return QTreeWidget::supportedDropActions();
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTreeWidget::dropEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTreeWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTreeWidget* qo = (MyQTreeWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtreewidget(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:266
// [8] QString tr(const char *, const char *, int) 
// (12)qm4038275394 (27)_ZN11QTreeWidget2trEPKcS1_i
//static
/*void qm4038275394(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTreeWidget::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTreeWidget::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:293
// [-2] void setHeaderLabel(const QString &) 
// (12)qm1240336168 (43)_ZN11QTreeWidget14setHeaderLabelERK7QString
//static
/*void qm1240336168(const QString & label)*/ {
  const QString & label = *(const QString *)this_;
  (void) ((QTreeWidget*)this_)->setHeaderLabel(label);
   auto xptr = (void (QTreeWidget::*)(QString const&) ) &QTreeWidget::setHeaderLabel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:302
// [8] QTreeWidgetItem * itemAt(int, int) const
// (12)qm2877384450 (27)_ZNK11QTreeWidget6itemAtEii
//static
/*void qm2877384450(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QTreeWidget*)this_)->itemAt(x, y);
   auto xptr = (QTreeWidgetItem * (QTreeWidget::*)(int, int) const ) &QTreeWidget::itemAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidget.h:316
// [-2] void removeItemWidget(QTreeWidgetItem *, int) 
// (12)qm4251952273 (54)_ZN11QTreeWidget16removeItemWidgetEP15QTreeWidgetItemi
//static
/*void qm4251952273(QTreeWidgetItem * item, int column)*/ {
  QTreeWidgetItem * item = *(QTreeWidgetItem **)this_; int column = *(int*)this_;
  (void) ((QTreeWidget*)this_)->removeItemWidget(item, column);
   auto xptr = (void (QTreeWidget::*)(QTreeWidgetItem*, int) ) &QTreeWidget::removeItemWidget;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTreeWidgetD2Ev(void *this_)*/ {
  delete (QTreeWidget*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtreewidget
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(treewidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
